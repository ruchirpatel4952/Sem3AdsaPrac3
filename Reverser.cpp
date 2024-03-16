#include "Reverser.h"
#include <string>

int Reverser::reverseDigit(int value) {
    if (value < 0) return -1; // Error indicator for invalid input
    
    if (value < 10) return value; // Base case, single digit number
    
    int lastDigit = value % 10;
    int remainingDigits = value / 10;
    
    int reversed = reverseDigit(remainingDigits); // Recursively reverse remaining digits
    return lastDigit * pow(10, std::to_string(reversed).length()) + reversed;
}

std::string Reverser::reverseString(std::string characters) {
    if (characters.empty()) return ""; // Base case, empty string
    
    char lastChar = characters.back();
    characters.pop_back();
    
    return lastChar + reverseString(characters); // Recursively reverse remaining characters
}
