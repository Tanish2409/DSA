#include<iostream>
typedef unsigned long long ll;
using namespace std;

//--------------------------------------------------- using recursion
// ll factorial(ll n) {
// 	if (n < 2) {
// 		return 1;
// 	}

// 	return n * factorial(n - 1);
// }

// int main() {
// 	ll n;
// 	cin>>n;

// 	cout<<factorial(n);

// 	return 0;
// }

// -------------------------------------Normal Method
int main() {
	int n;
	cin>>n;

	ll fact = 1;
	for(int i = n; i > 1; i--){
		fact *= i;
	}
	cout<<fact;

	return 0;
}