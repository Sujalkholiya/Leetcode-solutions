class Solution {
public:
    int minPartitions(string n) {
       int max=0;
       for(int i=0;i<n.size();i++){
          int val=n[i]-'0';
          if(val>max){
            max=val;
          }
       } 
       return max;
    }
};