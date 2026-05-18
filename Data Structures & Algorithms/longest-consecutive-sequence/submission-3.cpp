class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;

        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }

        int ans=0;

        for(auto i:s){
            if (s.find(i - 1) == s.end()) {   
                int count = 1;
                int current = i;
                while(s.find(current+1)!=s.end()){
                    current++;
                    count++;
                } 
                ans=max(ans,count);
            }
        }

        return ans;
    }
};
