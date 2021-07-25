#include<bits/stdc++.h>
using namespace std;

// ------------------------------------------------------ Solution 1 - Time O( (m+n)log n ) | Space - O(1)
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

		auto it1 = nums1.begin();
		auto it2 = nums2.begin();

		while(nums2.size()) {
			if ( it1 != nums1.end() - nums2.size() && *it1 < *it2 ) {
				it1++;
				continue;
			} else if ( it1 != nums1.end() - nums2.size() && *it1 >= *it2) {
				nums1.insert(it1, *it2);
				nums2.erase(it2);
				nums1.pop_back();

			} else if ( it1 == nums1.end() - nums2.size()) {
				*it1 = *it2;
				nums2.erase(it2);
			} 
			it1 = nums1.begin();
			it2 = nums2.begin();
		}
}

// ------------------------------------------------------ Solution 2 - Time O( m + n ) | Space - O( m + n )
// vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
// 	vector<int> res(m + n, 0);
// 	int i = 0, j = 0, c = 0;

// 	while(c<m+n){
// 		if( i < m && j < n && nums1[i] < nums2[j] ) {
// 			res[c++] = nums1[i++];
// 		}else if ( i < m && j < n && nums1[i] > nums2[j] ) {
// 			res[c++] = nums2[j++];
// 		}else if ( i < m && j < n && nums1[i] == nums2[j] ) {
// 			res[c++] = nums1[i++];
// 			res[c++] = nums2[j++];
// 		}else if ( i == m && j < n) {
// 			res[c++] = nums2[j++];
// 		}else if ( i < m && j == n) {
// 			res[c++] = nums1[i++];
// 		}
// 	}

// 	return res;
// }


int main() {
	int m,n;
	vector<int> arr1, arr2;
	cin>>m;

	for(int i=0; i < m; i++) {
		int x;
		cin>>x;
		arr1.emplace_back(x);
	}
	cin>>n;

	for(int i=0; i < n; i++) {
		int x;
		cin>>x;
		arr2.emplace_back(x);
		arr1.emplace_back(0);
	}
	
	merge(arr1, m, arr2, n);

	for(auto it: arr1) {
		cout<<it<< " ";
	}

	return 0;
}