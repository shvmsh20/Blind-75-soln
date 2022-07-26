//M-1
bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s==t;
    }

//M-2
bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int> freq(26);
        for(int i=0; i<s.size(); i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }
        for(int i=0; i<26; i++){
            if(freq[i]!=0){
                return false;
            }
        }
        return true;
    }    