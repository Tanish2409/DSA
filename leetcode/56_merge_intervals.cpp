#include<bits/stdc++.h>
using namespace std;

// ----------------------------------------- Optimal Solution | Time - N log N + N
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
      sort(intervals.begin(), intervals.end());
      
      vector<int> temp_interval;
      vector<vector<int>> res;
      
      temp_interval = intervals[0];
      
      for(auto it: intervals) {
        
        if(it[0] <= temp_interval[1]) {
          
          temp_interval[1] = max(it[1], temp_interval[1]);
          
        }else {
          
          res.emplace_back(temp_interval);
          temp_interval = it;
          
        }
      }
      res.emplace_back(temp_interval);
      return res;
    }
};