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
