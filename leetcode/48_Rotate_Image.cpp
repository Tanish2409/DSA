#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
	int rows = matrix.size();
	vector<vector<int>> res(rows, vector<int> (rows, 0));

	for(int i = 0; i < rows; i++ ){
		for(int j = 0; j < i; j++) {
			swap(matrix[i][j], matrix[j][i]);
			// res[i][j] = matrix[rows - j - 1][i]; // for copying into 2nd matrix
		}
	}

	for(int i = 0; i < rows; i++) {
		reverse(matrix[i].begin(), matrix[i].end());
	}
}

int main() {
	vector<vector<int>> m = { 
		{1,2,3,4},
		{5,6,7,8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};

	rotate(m);

	for(auto it1: m){
		for(auto it2: it1) {
			cout<<it2<<" ";
		}
		cout<<endl;
	}

	return 0;
}