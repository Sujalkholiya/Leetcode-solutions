class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int i,j;
        int n=nums.size();
        for(i=1;i<n;i++){
            int temp =nums[i];
            for(j=i-1;j>=0;j--){
                if(temp<nums[j]){
                    nums[j+1]=nums[j];
                }
                else{
                    break;
                }
            }
            nums[j+1]=temp;
        }
        return nums;
    }
};