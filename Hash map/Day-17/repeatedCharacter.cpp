class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>freq;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
            if( freq[s[i]]==2){
                return s[i];
            }
        }
        return ' ';
    }
};