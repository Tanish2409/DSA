#include<bits/stdc++.h>
using namespace std;

// Solution 1 - Sort Using merge sort - Time O(nlogn)
// Solution 2 - Using counting sort - Time O(2N) - i.e. requires 2 passes

// --------------------------------------------- Optimal Solution - Dutch National Flag Algo | Time O(n) | Space - O(1)
void sortColors(vector<int>& nums) {
	int low = 0, mid = 0, high = nums.size() - 1;

	while(mid <= high) {
		switch (nums[mid])
		{
		case 0:
			swap(nums[low++], nums[mid++]);
			break;
		case 1:
			mid++;
			break;
		case 2:
			swap(nums[mid], nums[high--]);
			break;
		}
	}
}

int main() {
	int n;
	vector<int> nums;
	cin>>n;


	for(int i = 0; i < n; i++){
		int x;
		cin>>x;
		nums.emplace_back(x);
	}

	sortColors(nums);

	for(auto it: nums){
		cout<<it<<" ";
	}
}
