#include<bits/stdc++.h>
using namespace std;

string converString(string str) {
	unordered_map<string, string> months = {
		{"01", "January"},
		{"02", "February"},
		{"03", "March"},
		{"04", "April"},
		{"05", "May"},
		{"06", "June"},
		{"07", "July"},
		{"08", "August"},
		{"09", "September"},
		{"10", "October"},
		{"11", "November"},
		{"12", "Decemper"}
	};

	string newString;
	int flag = 0;

	string day = str.substr(str.size() - 2, 2);
	string month = months[str.substr(str.size() - 5, 2)];
	string year = str.substr(0, 4);

	return day + "-" + month + "-" + year;
}

int main() {

	string str;
	cin>>str;

	cout<<converString(str);

	return 0;
}