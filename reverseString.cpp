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

---------------------above code takes O(|S|) Auxilary Space-------------------------------
	
#include <bits/stdc++.h>
using namespace std;

string strstr(string str){
	 
	char temp;
	int len = str.length();
	for(int i = 0; i < (len/2); i++){
		 temp = str[i];
		 str[i] = str[len-1-i];
		 str[len-1-i] = temp;
	}

	return str;
}

int main(){

	freopen("input.txt","r",stdin);

	string s1;
	cin >> s1;

	cout << strstr(s1);


	return 0;
}

---------------------above code takes O(1) Auxilary Space-------------------------------
