#include<bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------- Solution 1

// vector<int> findErrorNums(vector<int>& nums) {
// 	vector<int> arr(nums.size() + 1, 0);
// 	vector<int> res(2,0);
	
// 	for(auto it: nums) {
// 		arr[it]++;
// 	}
	
// 	for(auto it = arr.begin() + 1; it != arr.end(); it++) {
// 		if(*it == 2) {
// 			res[0] = it - arr.begin();
// 		}
// 		if(*it == 0) {
// 			res[1] = it - arr.begin();
// 		}
// 	}
	
// 	return res; 
// }

//-------------------------------------------------------------- Solution 2
vector<int> findErrorNums(vector<int>& nums) {
	int len = nums.size();
	int sum = ((len) * (len + 1)) / 2,
	sum_sq = (len * (len + 1) * (2*len + 1) ) / 6;
	vector<int> res(2,0);

	for(auto it: nums) {
		sum -= it;
		sum_sq -= it*it;
	}

	res[1] = (sum_sq/sum + sum) / 2;
	res[0] = res[1] - sum;

	return res;
}

int main() {
	vector<int> nums;
	int x;

	while(cin>>x){
		nums.push_back(x);
	}
	
	vector<int> res;

	res = findErrorNums(nums);

	for(auto it: res) {
		cout<<it<<",";
	}

	return 0;
}