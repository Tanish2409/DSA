#include<iostream>
#include<string>

using namespace std;

int main() {
	int n, len;
	string s[100];

	cin>>n;

	for (int i = 0; i < n; i++) {
		cin>>s[i];
	}

	for (int i = 0; i < n; i++) {
		len = s[i].length();
		if(len > 10 ) cout<<s[i][0]<<len - 2<<s[i][len - 1]<<"\n";
		else cout<<s[i]<<"\n";
	}

	return 0;
}