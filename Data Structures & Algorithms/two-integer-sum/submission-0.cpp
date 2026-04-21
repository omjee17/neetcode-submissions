class Solution {
public:


    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> numbers;
        numbers[nums[0]]=0;
        vector<int> ans;
        for(int i=1;i<nums.size();i++){
            int t=target-nums[i];
            if(numbers.contains(t)){
                ans.push_back(numbers[t]);
                ans.push_back(i);
            }
            numbers[nums[i]]=i;
        }
        return ans;
    }
};
