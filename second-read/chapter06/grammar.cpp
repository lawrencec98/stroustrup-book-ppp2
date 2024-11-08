#include "../../std_lib_facilities.h"

double expression();
double term();
double primary();

class Token {
public:
    char kind;
    double value;
    Token(char ch)
        :kind(ch), value(0) {}    
    Token(char ch, double val)
        :kind(ch), value(val) {}
};

Token get_token() {
    char ch;
    cin >> ch;

    switch (ch) {
    case '(': case ')': case '+': case '-': case '*': case '/': 
        return Token(ch);        // let each character represent itself
    case '.':
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
        {    
            cin.putback(ch);
            double val;
            cin >> val;
            return Token('8',val);
        }
    default:
        error("Bad token");
    }
}

double expression() {
    double left = term();
    Token t = get_token();
    while(true) {
        switch(t.kind) {
            case '+':
                left += term();
                t = get_token();
                break;
            case '-':
                left -= term();
                t = get_token();
                break;
            default:
                return left;
        }
    }
}

double term() {
    double left = primary();
    Token t = get_token();

    while(true) {
        switch (t.kind) {
        case '*':
            left *= primary();
            t = get_token();
            break;
        case '/':
        {
            double d = primary();
            if (d == 0) error("divide by zero.");
            left /= d;
            t = get_token();
            break;
        }
        default:
            return left;
        }
    }
}

double primary() {
    Token t = get_token();
    switch (t.kind) {
        case '(':
        {
            double exp = expression();
            t = get_token();
            if (t.kind != ')') error("')' expected");
            return exp;
        }
        case '8':
        {
            return t.value;
        }
        default:
            error("primary expected");
    }
}

int main() {
    try {
        while(cin) {
            cout << expression() << '\n';
            keep_window_open();
        }
    }
    catch (exception& e) {
        cerr << e.what() << endl;
        keep_window_open();
        return 1;
    }
    catch(...) {
        cerr << "exception \n";
        keep_window_open();
        return 2;
    }
}