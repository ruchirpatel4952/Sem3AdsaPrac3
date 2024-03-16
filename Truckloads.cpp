#include "Truckloads.h"
#include <iostream>
using namespace std;

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) return 1; 
    
    int firstHalf = numCrates / 2;
    int secondHalf = numCrates - firstHalf;
    
    return numTrucks(firstHalf, loadSize) + numTrucks(secondHalf, loadSize); 
}

