#include<bits/stdc++.h>
using namespace std;

int main() {

	string str, str1 = "";

	cin>>str;

	multiset<char> vowels = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U', 'y', 'Y'};

	for(auto it = str.begin(); it != str.end(); it++) {

		if(vowels.find(*it) != vowels.end()){
			continue;
		}else {
			if(*it >= 65 && *it < 91) {
				*it += 32;
			}
			str1 = str1 + "." + *it;
		}
	}
	cout<<str1;

	// Solution 2
	// char c;

	// while(cin>>c) {
	// 	if(!strchr("aeiouyAEIOUY", c)) cout<<"."<<(char)tolower(c);
	// }

	return 0;
}