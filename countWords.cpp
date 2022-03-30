int countWords(string s)
{
    
	
	int count = 0, flag = 0,i;

	for( i = 0; i < s.size(); i++){
		if(s[i] == ' ' && flag == 0)
			continue; 
		
		else if(s[i] == ' ' && flag == 1){
			++count; flag = 0;
		}
		else if(s[i] == '\\' && s[i+1]=='n' && flag == 0){
			i++;
			continue;
		}
		else if(s[i] == '\\' && s[i+1]=='n' && flag == 1){
			++count; flag = 0; i++;
		}
		else if(s[i] == '\\' && s[i+1]=='t' && flag == 0){
		    i++;
			continue;
		}
		else if(s[i] == '\\' && s[i+1]=='t' && flag == 1){
			++count; flag = 0;i++;
		}
		else
			flag = 1;
	}
    
	if(flag == 1)
		return ++count;
	else
		return count;

	return count;
}
