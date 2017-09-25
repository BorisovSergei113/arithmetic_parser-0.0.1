#include <iostream>


int main() {
    int a = 0 ;
    int b = 0 ;
    int c = 0 ;
    char operation  ;
    std::cin >> a >> operation >> b ;





    switch(operation) {
        case '+':
            c = a + b;
            std::cout << " a + b = " << c << '\n';
            break;

        case '-':
            c = a - b;
            std::cout << " a - b = " << c << '\n';
            break;

        case '*' :
            c = a * b;
            std::cout << " a * b = " << c << '\n';
            break;

        case '/' :
            std::cout << " a / b = " << (double)a/b << '\n';
            break;

        case '%' :
            c = a % b;
            std::cout << " a % b = " << c << '\n';
            break;

        case '&' :
            c = a & b;
            std::cout << " a & b = " << c << '\n';
            break;

        case '|' :
            c = a | b;
            std::cout << " a | b = " << c << '\n';
            break;

        case '^':
            c = a ^ b;
            std::cout << " a^b = " << c << '\n';
            break;

        case '<' :
            c = a << b;
            std::cout << " a << b = " << c << '\n';
            break;

        case '>' :
            c = a >> b;
            std::cout << " a >> b = " << c << '\n';
            break;

    }


    return 0;
}