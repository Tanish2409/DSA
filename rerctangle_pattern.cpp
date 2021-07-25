#include<iostream>

using namespace std;

int main() {
	int row, cols;

	cin>>row>>cols;

	for(int i = 0; i < row; i++) {
		for(int j = 0; j < cols; j++){
			cout<<'*';
		}
		cout<<endl;
	}

	return 0;
}
