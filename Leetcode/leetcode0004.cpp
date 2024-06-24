#include <iostream>
#include <vector>
#include <algorithm>

#include <gtest/gtest.h>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

    }
};

class Solution1 {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mergedVector;
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(mergedVector));
        int vecSize = mergedVector.size();
        if(vecSize & 1)
            return mergedVector[vecSize / 2];
        else
            return (mergedVector[vecSize / 2 - 1] + mergedVector[vecSize / 2]) / 2.0;
    }
};

TEST(leetcode0004Solution1, normalCase) {
    Solution1 solution1{};
    vector<int> nums1{1, 3};
    vector<int> nums2{2};
    EXPECT_EQ(solution1.findMedianSortedArrays(nums1, nums2), 2.0);
}

TEST(leetcode0004Solution1, oddNumber) {
    Solution1 solution1{};
    vector<int> nums1{1, 2};
    vector<int> nums2{3, 4};
    EXPECT_EQ(solution1.findMedianSortedArrays(nums1, nums2), 2.5);
}

class Solution2 {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        const int totalSize{static_cast<int>(nums1.size() + nums2.size())};
        if(totalSize & 1)
            return findk(nums1, nums2, totalSize / 2);
        else
            return (findk(nums1, nums2, totalSize / 2 - 1) + findk(nums1, nums2, totalSize / 2)) / 2.0;
    }

private:
    int findk(const vector<int>& v1, const vector<int>& v2, int k) {
        if(v1.empty())
            return v2[k];
        if(v2.empty())
            return v1[k];

        auto it1{v1.cbegin()};
        auto it2{v2.cbegin()};

        while(k--) {
            if(it1 == v1.cend())
                it2++;
            else if (it2 == v2.cend())
                it1++;
            else if (*it1 < *it2)
                it1++;
            else
                it2++;
        }

        if(it1 == v1.cend()) {
            return *it2;
        } else if(it2 == v2.cend()) {
            return *it1;
        } else {
            return min(*it1, *it2);
        }
    }
};



TEST(leetcode0004Solution2, normalCase) {
    Solution2 solution2{};
    vector<int> nums1{1, 3};
    vector<int> nums2{2};
    EXPECT_EQ(solution2.findMedianSortedArrays(nums1, nums2), 2.0);
}

TEST(leetcode0004Solution2, oddNumber) {
    Solution2 solution2{};
    vector<int> nums1{1, 2};
    vector<int> nums2{3, 4};
    EXPECT_EQ(solution2.findMedianSortedArrays(nums1, nums2), 2.5);
}

TEST(leetcode0004Solution2, doubleTwoZeroVec) {
    Solution2 solution2{};
    vector<int> nums1{0, 0};
    vector<int> nums2{0, 0};
    EXPECT_EQ(solution2.findMedianSortedArrays(nums1, nums2), 0.0);
}


class Solution3 {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int totalSize = nums1.size() + nums2.size();
        if(totalSize & 1)
            return findMiniK(nums1.cbegin(), nums1.cend(), nums2.cbegin(), nums2.cend(), totalSize / 2);
        else {
            auto first = findMiniK(nums1.cbegin(), nums1.cend(), nums2.cbegin(), nums2.cend(), totalSize / 2 - 1);
            auto second = findMiniK(nums1.cbegin(), nums1.cend(), nums2.cbegin(), nums2.cend(), totalSize / 2);

            cout << first << " : " << second << endl;

            return (first + second) / 2.0;
        }
    }

private:
    using CIterator = vector<int>::const_iterator;
    int findMiniK(CIterator b1, CIterator e1, CIterator b2, CIterator e2, int k) {
        if(b1 == e1)
            return b2[k];
        else if(b2 == e2)
            return b1[k];
        else if(k == 0) 
            return min(b1[0], b2[0]);

        int distance = (k - 1) / 2;
        auto p1 = (b1 + distance >= e1) ? (e1 - 1) : (b1 + distance);
        auto p2 = (b2 + distance >= e2) ? (e2 - 1) : (b2 + distance);
        if(*p1 < *p2) {
            return findMiniK(p1 + 1, e1, b2, e2, k - (p1 - b1 + 1));
        } else {
            return findMiniK(b1, e1, p2 + 1, e2, k - (p2 - b2 + 1));
        }
    }
};

TEST(leetcode0004Solution3, normalCase) {
    Solution3 solution3{};
    vector<int> nums1{1, 3};
    vector<int> nums2{2};
    EXPECT_EQ(solution3.findMedianSortedArrays(nums1, nums2), 2.0);
}

TEST(leetcode0004Solution3, oddNumber) {
    Solution3 solution3{};
    vector<int> nums1{1, 2};
    vector<int> nums2{3, 4};
    EXPECT_EQ(solution3.findMedianSortedArrays(nums1, nums2), 2.5);
}

TEST(leetcode0004Solution3, crossNumber) {
    Solution3 solution3{};
    vector<int> nums1{1, 3};
    vector<int> nums2{2, 7};
    EXPECT_EQ(solution3.findMedianSortedArrays(nums1, nums2), 2.5);
}
