#include <iostream>

int main(){
    int n, curmax, curmin;
    std::cout << "please enter number:" << std::endl;
    std::cin >> n;

    curmax = n;
    curmin = n;

    std::cout << "maximum so far: " << curmax << std::endl;
    std::cout << "minimum so far: " << curmin << std::endl;

    while(n != 0){

        std::cout << "please enter number:" << std::endl;
        std::cin >> n;

        if(n > curmax){
            curmax = n;
            // ...we update the current max
        }

        if(n < curmin){
            curmin = n;
            // ...we update the current min
        }

        std::cout << "maximum so far: " << curmax << std::endl;
        std::cout << "minimum so far: " << curmin << std::endl;
    }

}