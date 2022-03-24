#include <bits/stdc++.h>
using namespace std;

int strstr(string &s1, string &s2){
	int j = 0, i, flow = 0;

	for(i = 0; i < s1.length(); i++){
		if(s1[i] == s2[j]){
			j++;
			flow = 1;
		}
		else{
			flow = 0;
			j = 0;
		}

		if(flow == 1 && j == s2.length())
			return i-(s2.length()-1);


	}

	return -1;
}

int main(){

	string s1 = "GeeksForGeeks";

	string s2 = "Fr";

	cout << strstr(s1, s2);


	return 0;
}
