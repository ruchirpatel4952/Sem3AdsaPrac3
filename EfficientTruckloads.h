#ifndef EFFICIENT_TRUCKLOADS_H
#define EFFICIENT_TRUCKLOADS_H

#include <unordered_map>

class EfficientTruckloads : public Truckloads {
private:
    std::unordered_map<std::pair<int, int>, int> memo; // Memoization to store calculated values
    
public:
    int numTrucks(int numCrates, int loadSize) override;
};

#endif