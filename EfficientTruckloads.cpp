#include "EfficientTruckloads.h"
int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) return 1; // Base case, only one truck needed
    
    std::pair<int, int> key = {numCrates, loadSize};
    if (memo.find(key) != memo.end()) return memo[key]; // If already calculated, return memoized value
    
    int firstHalf = numCrates / 2;
    int secondHalf = numCrates - firstHalf;
    
    int result = numTrucks(firstHalf, loadSize) + numTrucks(secondHalf, loadSize); // Recursively calculate for two halves
    
    memo[key] = result; // Store calculated value in memo
    return result;
}