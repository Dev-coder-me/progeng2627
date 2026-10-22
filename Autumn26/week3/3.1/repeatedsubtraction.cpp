#include <iostream>

int main(){
    int a;
    int b;
    int quotient = 0;

    std::cout << "enter two numbers: a and b" << std::endl;
    std::cin >> a;
    std::cin >> b;
    
    while(a>=b){
        a = a - b;
        quotient = quotient + 1;
    }
    std::cout << "the quotient is:" << std::endl;
    std::cout << quotient << std::endl;
    std::cout << "the remainder is:" << std::endl;
    std::cout << a << std::endl;
}
