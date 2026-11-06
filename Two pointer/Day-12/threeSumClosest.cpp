class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=nums[0]+nums[1]+nums[2];
        int n=nums.size();
        for(int i=0;i<n;i++){
            int left=i+1;
            int right=n-1;
            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];
                if(abs(target-sum)<abs(target-ans)){
                    ans=sum;
                }
                if(sum<target){
                    left++;
                }
                else if(sum>target){
                    right--;
                }
                else{
                    return sum;
                }
            }
        }
        return ans;
    }
};