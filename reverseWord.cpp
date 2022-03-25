   string reverseWords(string S) 
    { 
        int len = S.length();
	char *p = new char[len+1];

	strcpy(p,S.c_str());

	vector<string> s;

	char * t = strtok(p,".");
	while(t != NULL){

		s.push_back(t);

		t = strtok(NULL,".");

	}
    
    string si = "";
	for(auto it = s.rbegin(); it != s.rend(); it++)
	    si += (*it) + ".";
	si.pop_back();
	return si;
	
    }

-------------------------------------vesrion 2---------------------------------------------------------
	
	#include <bits/stdc++.h>
using namespace std;

void strstr(string str){
	 
	int len = str.length();
	char *p = new char[len+1];

	strcpy(p,str.c_str());

	for(int i = len-1; i >= 0 ; i--){
		if(p[i] == ' '){
			p[i] = '\0';
			printf("%s ",p+i+1);
		}

		if(i == 0){
			printf("%s",p+i);
		}
	}
}

int main(){

	freopen("input.txt","r",stdin);

	string s1;
	getline(cin,s1);
	strstr(s1);
	return 0;
}
