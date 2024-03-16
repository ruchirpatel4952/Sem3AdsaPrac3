#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) return 1; // Base case, only one truck needed
    
    int firstHalf = numCrates / 2;
    int secondHalf = numCrates - firstHalf;
    
    return numTrucks(firstHalf, loadSize) + numTrucks(secondHalf, loadSize); // Recursively calculate for two halves
}
