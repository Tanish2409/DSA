#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int l, int mid, int r){
	int l1 = mid - l + 1;
	int l2 = r - mid;
	vector<int> a1;
	vector<int> a2;

	for(int i = 0; i < l1; i++) {
		a1.emplace_back(arr[l + i]);
	}
	for(int i = 0; i < l2; i++) {
		a2.emplace_back(arr[mid + 1 + i]);
	}

	int i = 0, j = 0, k = l;

	while(i < l1 && j < l2) {
		if(a1[i] < a2[j]) {
			arr[k++] = a1[i++];
		}else {
			arr[k++] = a2[j++];
		}
	}

	while(i < l1) {
		arr[k++] = a1[i++];
	}
	while(j < l2) {
		arr[k++] = a2[j++];
	}
}

void mergeSort(vector<int>& arr, int l, int r) {

	if(l < r) {
		int mid = (l + r) / 2;
		mergeSort(arr, l, mid);
		mergeSort(arr, mid + 1, r);

		merge(arr, l, mid, r);
	}


}

int main() {
	int n;
	cin>>n;
	int count = 0;

	vector<int> arr;

	for(int i = 0; i < n; i++) {
		int x;
		cin>>x;

		arr.emplace_back(x);
	}

	mergeSort(arr, 0, n-1);

	for(auto it: arr) {
		cout<<it<<" ";
	}
	cout<<endl;
	cout<<count<<endl;
}