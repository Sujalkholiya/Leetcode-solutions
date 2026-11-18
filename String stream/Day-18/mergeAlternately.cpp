class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        stringstream ss;
        int i=0,j=0;
        int n=word1.size();
        int m=word2.size();
        while(i<n||j<m){
            if(i<n){
                ss<<word1[i];
                i++;
            }
            if(j<m){
                ss<<word2[j];
                j++;
            }
        }
        return ss.str();
    }

};