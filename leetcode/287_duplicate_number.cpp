#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/find-the-duplicate-number/

// ----------------------------------------- Optimal Solution (Linked List Cycle Method) | Time - O ( N ) , Space = O (1)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      int slow = nums[0];
      int fast = nums[0];
      
      do{
        slow = nums[slow];
        fast = nums[nums[fast]];
      }while(slow != fast);
      
      fast = nums[0];
      
      while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
      }
      
      return slow;
        
    }
};