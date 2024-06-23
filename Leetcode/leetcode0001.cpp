#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> existedNumbers{};
        for(int i = 0; i < nums.size(); i++){
            int remainedValue = target - nums[i];
            if(existedNumbers.count(remainedValue)){
                return {existedNumbers[remainedValue], i};
            }
            existedNumbers[nums[i]] = i;
        }
        return {};
    }
};