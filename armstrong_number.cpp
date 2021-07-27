#include<iostream>
#include<math.h>

using namespace std;

int main() {
	int n, n_copy;
	int digits = 0;
	int sum = 0;

	cin>>n;
	
	n_copy = n;

	while (n_copy >= 1) {
		digits++;
		n_copy /= 10;
	}

	n_copy = n;

	while (n_copy >= 1 ) {
		sum += pow(n_copy%10, digits);
		n_copy /= 10;
	} 

	if(n == sum ){ 
		cout<<n<<" is an armstrong number.";
	}else {
		cout<<n<<" is not an armstrong number.";
	}

	return 0;
}