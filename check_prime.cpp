#include<bits/stdc++.h>
using namespace std;

string checkPrime(int n) {
	int count = 0;
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			return "not prime";
		}
	}
	return "prime";

}

int main() {
	int n;
	cin>>n;

	cout<<n<<" is "<<checkPrime(n);

	return 0;
}