
#include <vector>
using namespace std;

class Solution {
    
public:
    int findClosestNumber(vector<int>& input) {
        const int maxValue = pow(10, 5);
        int closest = maxValue + 1;
        for (const auto& n : input) {
            if (abs(n) < abs(closest) || n == abs(closest)) {
                closest = n;
            }
        }
        return closest;
    }
};
