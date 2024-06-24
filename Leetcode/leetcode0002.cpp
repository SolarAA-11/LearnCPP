#include <iostream>
#include <stack>

#include <gtest/gtest.h>

#include "lc_helper.h"

using namespace lc;
using namespace std;

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = l1->val + l2->val;
        bool isCarry = sum >= 10;
        ListNode *pResultNode = new ListNode(sum % 10);
        ListNode *pReturnNode = pResultNode;
        while(l1->next != nullptr || l2->next != nullptr) {
            sum = isCarry ? 1 : 0;
            if(l1->next != nullptr) {
                sum += l1->next->val;
                l1 = l1->next;
            }
            if(l2->next != nullptr) {
                sum += l2->next->val;
                l2 = l2->next;
            }

            isCarry = sum >= 10;
            pResultNode->next = new ListNode(sum % 10);
            pResultNode = pResultNode->next;
        }
        if(isCarry) {
            pResultNode->next = new ListNode(1);
        }
        return pReturnNode;
    }
};

TEST(Solution, addTwoZero) {
    Solution solution;
    ListNode *l1 = new ListNode(0);
    ListNode *l2 = new ListNode(0);
    ListNode *pResult = solution.addTwoNumbers(l1, l2);
    EXPECT_EQ(pResult->val, 0);
}

TEST(Solution, addTwoOne) {
    Solution solution;
    ListNode *l1 = new ListNode(1);
    ListNode *l2 = new ListNode(1);
    ListNode *pResult = solution.addTwoNumbers(l1, l2);
    EXPECT_EQ(pResult->val, 2);
}

TEST(Solution, addTwoOneAndNine) {
    Solution solution;
    ListNode *l1 = new ListNode(1);
    ListNode *l2 = new ListNode(9);
    ListNode *pResult = solution.addTwoNumbers(l1, l2);
    EXPECT_EQ(pResult->val, 0);
    EXPECT_EQ(pResult->next->val, 1);
}