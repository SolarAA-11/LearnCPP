#include <string>
#include <unordered_set>
#include <gtest/gtest.h>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()) return 0;

        auto it1{s.cbegin()};
        auto it2{s.cbegin()};
        unordered_set<char> charSet{};

        int maxLength{1};
        while(true) {
            if(it1 == s.cend()) {
                break;
            }

            if(charSet.find(*it1) == charSet.end()) {
                charSet.insert(*it1);
                it1++;
                maxLength = max(maxLength, static_cast<int>(it1 - it2));
            }
            else {
                charSet.erase(*it2);
                it2++;
            }
        }

        return maxLength;
    }
};

TEST(leetcode0003, zeroString) {
    Solution solution{};
    EXPECT_EQ(solution.lengthOfLongestSubstring(""), 0);
}


TEST(leetcode0003, normalString) {
    Solution solution{};
    EXPECT_EQ(solution.lengthOfLongestSubstring("abcabcbb"), 3);
}

TEST(leetcode0003, allSameChar) {
    Solution solution{};
    EXPECT_EQ(solution.lengthOfLongestSubstring("bbbbbb"), 1);
}

TEST(leetcode0003, allDifferentChar) {
    Solution solution{};
    EXPECT_EQ(solution.lengthOfLongestSubstring("abcdefg"), 7);
}
