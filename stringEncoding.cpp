#include <bits/stdc++.h>
using namespace std;

string strstr(string str){
	 
	int count,i,j;
	string s;
	for( i = 0 ; i < str.length();){
		count = 1;
		char key = str[i];
		 j = i+1;
		while(key == str[j]){
			count++;
			j++;
		}
		s.push_back(str[i]);
		s.push_back(count+48);

		i  = j;
	}

	return s;
}

int main(){

	freopen("input.txt","r",stdin);

	string s1;
	cin >> s1;
	cout << strstr(s1);

	return 0;
}
