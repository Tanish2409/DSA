#include<bits/stdc++.h>
using namespace std;
// --------------------------------------------- Solution 1 - Time - O(N^3)
// int maxSubArray(vector<int>& nums) {
// 	int n = nums.size(), sum, maxi = INT_MIN;
	
// 	for(int i = 0; i < n-1; i++) {
// 		for(int j = i; j < n-1; j++) {
// 			sum = 0;
// 			for(int k = i; k <= j; k++) {
// 				sum += nums[k];
// 			}
// 			maxi = max(sum, maxi);
// 		}
// 	}

// 	return maxi;
// }

// --------------------------------------------- Solution 2 - Time - O(N^2)
// int maxSubArray(vector<int>& nums) {
// 	int n = nums.size(), sum, maxi = INT_MIN;
	
// 	for(int i = 0; i < n-1; i++) {
// 		sum = 0;
// 		for(int j = i; j < n-1; j++) {
// 			sum += nums[j];
// 			maxi = max(sum, maxi);
// 		}
// 	}
	
// 	return maxi;
// }

// --------------------------------------------- Optimal Solution 3 - Time - O(N) | Kadane's Algorithm
int maxSubArray(vector<int>& nums) {
	int sum = 0, maxi = INT_MIN;
	
	for(auto it: nums) {
		sum += it;
		maxi = max(sum, maxi);
		if(sum < 0) sum = 0;
	}
	
	return maxi;
}

int main() {
	int n;
	cin>>n;
	vector<int> arr;
	for(int i = 0; i < n; i++){
		int x;
		cin>>x;
		arr.emplace_back(x);
	}

	cout<<maxSubArray(arr);
}