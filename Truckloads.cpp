#include "Truckloads.h"
#include <iostream>
using namespace std;

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) return 1; 
    
    int firstHalf = numCrates / 2;
    int secondHalf = numCrates - firstHalf;
    
    return numTrucks(firstHalf, loadSize) + numTrucks(secondHalf, loadSize); 
}

int main() {
    Truckloads truckloads;
    std::cout << truckloads.numTrucks(14, 3) << std::endl; 
    std::cout << truckloads.numTrucks(15, 1) << std::endl; 
    std::cout << truckloads.numTrucks(1024, 5) << std::endl; 
    return 0;
}