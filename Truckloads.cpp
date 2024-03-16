#include "Truckloads.h"
#include <iostream>
using namespace std;

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) return 1; // Base case, only one truck needed
    
    int firstHalf = numCrates / 2;
    int secondHalf = numCrates - firstHalf;
    
    return numTrucks(firstHalf, loadSize) + numTrucks(secondHalf, loadSize); // Recursively calculate for two halves
}

int main() {
    Truckloads truckloads;
    std::cout << truckloads.numTrucks(14, 3) << std::endl; // Output: 6
    std::cout << truckloads.numTrucks(15, 1) << std::endl; // Output: 15
    std::cout << truckloads.numTrucks(1024, 5) << std::endl; // Output: 256
    return 0;
}