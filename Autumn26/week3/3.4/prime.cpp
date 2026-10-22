#include <iostream>

int main(){
    int n;
    int found = 0;
    int factor = 2;

    std::cout << "please enter an integer greater than 1" << std::endl;
    std::cin >> n;

    while(factor * factor <= n && found != 1){

        if( (n % factor) == 0){ 
            found = 1;
        }

        factor++;
    }

    if(found==1){
        std::cout << "the number is not prime" << std::endl;
        std::cout << factor-1 << " is a factor" << std::endl;
    }
    else{
        std::cout << "the number is prime" << std::endl;
    }
}
