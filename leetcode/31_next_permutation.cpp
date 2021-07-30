#include<bits/stdc++.h>
using namespace std;

void nextPermutaion(vector<int>& nums) {

	if (nums.size() == 1) return;

	int i = nums.size() - 2;

	while ( i >= 0 && ( nums[i] >= nums[i+1] ) ) i--;

	if(i >= 0) {
		int j = nums.size() - 1;
		while(nums[j] <= nums[i]) j--;
		swap(nums[i], nums[j]);
	}

	auto it = nums.begin();
	reverse(it + i + 1, nums.end());
}

int main() {
	int n;
	cin>>n;

	vector<int> arr;

	for(int i = 0; i < n; i++) {
		int x;
		cin>>x;

		arr.emplace_back(x);
	}

	nextPermutaion(arr);

	for(auto it: arr) {
		cout<<it<<" ";
	}
	cout<<endl;

	return 0;
}