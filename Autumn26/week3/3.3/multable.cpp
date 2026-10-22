#include <iostream>

int main(){
    int n;
    int c = 0;
    int c2 = 0;
    int c3 = 0;


    std::cin >> n;

    while(c2 < n){
        c2 = c2 + 1;
       
        while( c < n){
            c=c+1;
            c3 = c2 * c;
            std::cout << c3; 
            std::cout << "\t";
        }
        c = 0;

        std::cout << std::endl;
    }

}
