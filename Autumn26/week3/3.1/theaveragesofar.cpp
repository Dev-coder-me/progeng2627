#include <iostream>

int main(){
    int n;
    int sum = 0;
    int count = 0;

    std::cout << "enter a number:" << std::endl;
    std::cin >> n;

    while(n != 0){
        sum = sum + n;
        count = count + 1;

        double average = static_cast<double>(sum) / count;

        std::cout << "the average so far is:" << std::endl;
        std::cout << average << std::endl;

        std::cout << "enter a number:" << std::endl;
        std::cin >> n;
    }
}