#include <bits/stdc++.h>
using namespace std;

string strstr(string &s1){
	 string s2="";

	for(auto it = s1.rbegin(); it != s1.rend(); it++){
		s2 += (*it);
	}

	return s2;
}

int main(){

	freopen("input.txt","r",stdin);

	string s1;
	cin >> s1;

	cout << strstr(s1);


	return 0;
}
