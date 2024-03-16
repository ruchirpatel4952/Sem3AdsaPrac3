#include "Reverser.h"
#include <string>
#include <cmath>

int Reverser::reverseDigit(int value) {
    if (value < 0) return -1; 
    
    if (value < 10) return value; 
    
    int lastDigit = value % 10;
    int remainingDigits = value / 10;
    
    int reversed = reverseDigit(remainingDigits);
    //return lastDigit * pow(10, std::to_string(reversed).length()) + reversed;
    return lastDigit * static_cast<int>(std::pow(10, std::to_string(reversed).length())) + reversed;
}

std::string Reverser::reverseString(std::string characters) {
    if (characters.empty()) return ""; 
    
    char lastChar = characters.back();
    characters.pop_back();
    
    return lastChar + reverseString(characters);
}
