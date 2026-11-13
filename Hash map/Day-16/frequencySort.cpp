class Solution {
public:
    string frequencySort(string s) {
        map<char,int>freq;
        for(int i=0;i<s.length();i++){
            freq[s[i]]++;
        }
        string ans="";
        while(!freq.empty()){
            auto max=freq.begin();
            for(auto j=freq.begin();j!=freq.end();j++){
                if(j->second>max->second){
                    max=j;
                }
            }
            ans.append(max->second,max->first);
            freq.erase(max);
        }
        return ans;
    }
};