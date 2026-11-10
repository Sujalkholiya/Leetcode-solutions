class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        int m=0;
        while(m<=j){
            if(nums[m]==2){
                swap(nums[m],nums[j]);
                j--;
            }
            else if(nums[m]==1){
                m++;
            }
            else{
                swap(nums[m],nums[i]);
                i++;
                m++;
            }
        }
    }
};