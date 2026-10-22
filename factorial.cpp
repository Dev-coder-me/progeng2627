#include <iostream>

int main(){

    int x;

    std::cin >> x;
    int fac = x;

    if (x == 0){
        return 1;
    }
    for(int counter = x-1; counter > 0; counter--){
        fac = fac * counter;
    }

    std::cout << x << "! = " << fac << std::endl;

}