#include <vector>
#include <unordered_map>
#include <iostream>

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

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution solution;
    vector<int> result = solution.twoSum(nums, target);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}
