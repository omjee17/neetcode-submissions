class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int,int> numberToFreqMap;
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(int i=0;i<nums.size();i++){
            numberToFreqMap[nums[i]]++;
        }
        for(auto i:numberToFreqMap){
            pq.push({i.second,i.first}); // alternate of make_pair -> {}
            if(pq.size()>k) pq.pop();
        }
        vector<int>ans;
        while(!pq.empty()){
            auto i = pq.top();
            ans.push_back(i.second);
            pq.pop();
        }
        return ans;
    }
};
