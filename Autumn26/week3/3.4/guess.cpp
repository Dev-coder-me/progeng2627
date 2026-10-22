#include <iostream>
        
int main() {
    
    int low, high;
    int attempts = 0;
    int feedback = 0;

    std::cout << "please enter lower bound:" << std::endl;
    std::cin >> low;
    std::cout << "please enter upper bound:" << std::endl;
    std::cin >> high;
    std::cout << "Think of an integer within this range, and I'll find it!";

    while (feedback != 3) {
     int guess = low + (high - low) / 2;
     attempts++;

     std::cout << "Attempt " << attempts << ": My guess is " << guess << "." << std::endl;
     std::cout << "Is the number (1) lower, (2) higher, or (3) equal to my guess? ";
     std::cin >> feedback;

     if (feedback == 1) {
        high = guess - 1;
     } 
     else {
        low = guess + 1;
    }
    if (feedback == 3) {
        std::cout << "I found it! Your number is " << guess
          << ". It took me " << attempts << " attempts.";

     } 
}

}