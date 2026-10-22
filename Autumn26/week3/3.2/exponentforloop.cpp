#include <iostream>

int main(){

    double x, acc = 1;
    int n, counter = 0;

    std::cin >> x >> n;
    if (n < 0){
        std::cout << "exponent must be >= 0." << std::endl;
        return 1;
    }
    for(counter = 0; counter < n; counter++){
        acc = acc * x;
    }

    std::cout << x << "^" << n <<  " = " << acc << std::endl;

}