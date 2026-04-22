class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> numberToFreqMap;
        int n = nums.size();
        
        for(int num : nums){
            numberToFreqMap[num]++;
        }
        vector<vector<int>> bucket(n + 1);
        for(auto& [num, freq] : numberToFreqMap){
            bucket[freq].push_back(num);
        }

        vector<int> ans;

        for(int i = n; i >= 0; i--){
            for(int num : bucket[i]){
                ans.push_back(num);
                k--;
                if(k == 0){
                    return ans;
                }
            }
        }

        return ans;
    }
};
