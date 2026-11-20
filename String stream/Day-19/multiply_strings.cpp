class Solution {
public:
    string multiply(string num1, string num2) {
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int n=num1.size();
        int m=num2.size();
        vector<int>ans(n+m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int a=num1[i]-'0';
                int b=num2[j]-'0';
                ans[i+j]=ans[i+j]+(a*b);//add just lower number for the final sum
            }
        }
        for(int i=0;i<ans.size()-1;i++){
            ans[i+1]=ans[i+1]+ans[i]/10;
            ans[i]=ans[i]%10;
        }
        string result="";
        for(int i=0;i<ans.size();i++){
            result+=(ans[i]+'0');
        }
        reverse(result.begin(),result.end());
        while(result.size()>1&&result[0]=='0'){
            result.erase(0,1);
        }
        return result;
    }
};