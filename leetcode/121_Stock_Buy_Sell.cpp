#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
	int minPrice = INT_MAX;
	int maxProfit = 0;

	for(auto it: prices) {
		minPrice = min(it, minPrice);
		maxProfit = max(maxProfit, it - minPrice);
	}

	return maxProfit;
}

int main() {
	vector<int> prices = {7,1,5,3,6,4};

	int res = maxProfit(prices);

	cout<<res<<endl;

	return 0;
}
