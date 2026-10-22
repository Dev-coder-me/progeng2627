#include <iostream>

int main(){
    int n, curmax, counter;
    std::cout << "please enter number:" << std::endl;
    std::cin >> n;
    curmax = n;
    counter = 0;

    while(n != 1){
        counter = counter + 1;
        if(n % 2 == 0){
            n = n / 2;
        }
        else{
            n = 3 * n + 1;
        }

        if(n > curmax){
            curmax = n;
        }
    }
 std::cout << "Required steps: " << counter << std::endl;
 std::cout << "maximum: " << curmax << std::endl;
}