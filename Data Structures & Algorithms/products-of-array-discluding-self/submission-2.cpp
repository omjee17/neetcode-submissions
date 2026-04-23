class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int containsZero=0;
        int prod=1;
        int n=nums.size();
        int index=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                index=i;
                containsZero++;
            } else{
                prod*=nums[i];
            }
        }
        cout<<index<<" "<<containsZero<<prod;
        if(containsZero==1){
            vector<int> ans(n-1,0);
            ans.insert(ans.begin()+index,prod);
            return ans;     
        } else if(containsZero>=2){
            vector<int> ans(n,0);
            return ans;
        } else{
            vector<int> ans;
            for(int i=0;i<n;i++){
                cout<<i<<endl;
                ans.insert(ans.begin()+i,prod/nums[i]);
            }
            return ans;
        }
        return nums;

    }
};
