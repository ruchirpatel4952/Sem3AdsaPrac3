#include "Truckloads.h"
#include <iostream>
using namespace std;

int main() {
    Truckloads truckloads;
    std::cout << truckloads.numTrucks(14, 3) << std::endl; 
    std::cout << truckloads.numTrucks(15, 1) << std::endl; 
    std::cout << truckloads.numTrucks(1024, 5) << std::endl; 
    return 0;
}