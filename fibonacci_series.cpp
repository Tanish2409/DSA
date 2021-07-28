#include<iostream>
using namespace std;

// -------------------------------------------- Normal Iterative method
int main() {
	int n;
	cin>>n;
	long long fib_first=0;
	long long fib_second=1;


	cout<<fib_first<<", "<<fib_second;

	for( int i = 2; i < n; i++ ){
		long long next = fib_first + fib_second;
		fib_first = fib_second;
		fib_second = next;

		cout<<", "<<next;
	}

	return 0;
}

// -------------------------------------------- Using Recursion
// int fib(int x) {
// 	if(x == 0 || x == 1) {
// 		return x;
// 	}
// 	return fib(x-1) + fib(x-2);
// }

// int main() {
// 	int n ;
// 	cin>>n;

// 	// int i = 0;
// 	// while (i <n ) {
// 	// 	cout<<fib(i)<<" ";
// 	// 	i++;
// 	// }
// 	cout<<fib(n);
	
// 	return 0;
// }