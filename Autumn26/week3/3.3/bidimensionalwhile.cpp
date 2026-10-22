#include <iostream>

int main(){
    int n;
    int c = 0;
    int c2 = 0;
    std::cin >> n;

    while(c2 < n){
        c2 = c2 + 1;
       
        while( c < n){
            std::cout << "*"; 
            c=c+1;
        }
        c = 0;

        std::cout << std::endl;
    }

}
