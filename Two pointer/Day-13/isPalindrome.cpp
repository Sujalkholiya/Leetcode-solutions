class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
           if(isalnum(s[i])&&isalnum(s[j])){
             s[i]=tolower(s[i]);
             s[j]=tolower(s[j]);
             if(s[i]!=s[j]){
                return false;
             }
             i++;
             j--;
           }
           if(!isalnum(s[i])){
            i++;
            continue;
           }
           if(!isalnum(s[j])){
            j--;
            continue;
           }
        }
        return true;
    }
};