vector<string> findMatchedWords(vector<string> dict,string pattern)
{
     vector<string> str;
    int plen = pattern.length();
	int flag;

	for (int j = 0; j < dict.size(); j++) {

		flag = 1;

		if (dict[j].length() == plen) {
			for (int i = 0; i < dict[j].length() - 1; i++) {

				if (flag == 1) {

					if (pattern[i] > pattern[i + 1] && dict[j][i] > dict[j][i + 1]) {

						continue;
					}
					else if (pattern[i] < pattern[i + 1] && dict[j][i] < dict[j][i + 1]) {
						continue;

					}
					else if (pattern[i] == pattern[i + 1] && dict[j][i] == dict[j][i + 1]) {

						

						continue;

					}
					else{
						flag = 0;
						break;
					}

				}

			}

			if (flag == 1) {
				str.push_back(dict[j]);
			}

		}
		

	}
	
	return str;
}
