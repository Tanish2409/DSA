#include<bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>>& matrix) {
	int rows = matrix.size(), cols = matrix[0].size();
	bool flag = false;

	for(int i = 0; i < rows; i++ ) {
		if(matrix[i][0] == 0) flag = true;
		for(int j = 1; j < cols; j++) {
			if (matrix[i][j] == 0) {matrix[0][j] = matrix[i][0] = 0;}
		}
	}

	for(int i = rows - 1; i >= 0; i--) {
		for(int j = cols - 1; j >= 1; j--) {
			if(matrix[0][j] == 0 || matrix[i][0] == 0 ) {
				matrix[i][j] = 0;
			}
		}
		if ( flag ) matrix[i][0] = 0;
	}
}

int main() {
	int rows, cols;
	cin>>rows;
	cin>>cols;

	vector<vector<int>> matrix(rows, (vector<int> (cols, 0)));
	vector<int> row;

	for(int i = 0; i < rows; i++) {
		for ( int j = 0; j < cols; j++) {
			// cin>>matrix[i][j];
			int x;
			cin>>x;
			matrix[i][j] = x;
		}
	}

	setZeroes(matrix);

	cout<<endl<<endl;

	for(int i = 0; i < rows; i++) {
		for ( int j = 0; j < cols; j++) {
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}