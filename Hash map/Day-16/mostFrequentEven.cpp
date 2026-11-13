class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int max=0;
        int ans=-1;
        map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                freq[nums[i]]++;
            }
        }
        for(auto j=freq.begin();j!=freq.end();j++){
            if(j->second>max){
                max=j->second;
                ans= j->first;
            }
            
        }
        return ans;
    }
};