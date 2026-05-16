class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> groupedAnagrams;
        map<vector<int>,vector<string>> m;
        for(int i=0;i<strs.size();i++){
            vector<int> freqArr(26,0);
            string str=strs[i];
            for(int j=0;j<str.size();j++){
                freqArr[str[j]-'a']++;
            }
            m[freqArr].push_back(str);
        }
        for(auto &i:m){
            // vector<int> a=i.first;
            // for(int j=0;j<26;j++){
            //     cout<<a[j]<<" ";
            // }
            // cout<<endl;
            groupedAnagrams.push_back(i.second);
        }
        return groupedAnagrams;
    }
};
