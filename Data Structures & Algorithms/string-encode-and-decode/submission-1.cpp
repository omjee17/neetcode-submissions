class Solution {
public:

    
    string encode(vector<string>& strs) {
       string encodedStr;
       for(int i=0;i<strs.size();i++){
        encodedStr+=strs[i].size();
        encodedStr+=strs[i]+"~";
       }
       return encodedStr;
    }

    vector<string> decode(string s) {
        stringstream ss(s);
        string item;
        vector<string> decodedStrsArr;
        while (getline(ss, item, '~')) { 
            decodedStrsArr.push_back(item.erase(0,1));
        }
        return decodedStrsArr;
    }
};
