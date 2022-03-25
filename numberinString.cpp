#include <bits/stdc++.h>
using namespace std;

int strstr(string &s1){
	int N = 0, S= 0;

	for(int i = 0; i < s1.length(); i++){
		if(s1[i] >= '0' && s1[i] <= '9'){
			N = N*10 + (s1[i]-48);
			continue;
		}
		
		S += N;
		N = 0;
	}

	S += N;

	return S;
}

int main(){

	freopen("input.txt","r",stdin);

	string s1;
	cin >> s1;

	cout << strstr(s1);


	return 0;
}
