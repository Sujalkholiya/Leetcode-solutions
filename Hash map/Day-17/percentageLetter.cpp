class Solution {
public:
    int percentageLetter(string s, char letter) {
        map<char,int>freq;
        int per;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        for(auto j=freq.begin();j!=freq.end();j++){
            if(j->first==letter){
                int n=j->second;
                per=(n*100)/s.size();
                return per;
            }
        }
        return 0;

    }
};