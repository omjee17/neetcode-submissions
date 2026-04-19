class Solution {
public:
    void printArray(vector<int> s){
        cout<<"Arr:";
        for(int i=0;i<s.size();i++){
            cout<<s[i]<<" ";
        }
        cout<<endl;
    }
    bool isAnagram(string s, string t) {
       vector<int> charsToOccurrenceMap(26, 0);
        for(int i=0;i<s.size();i++){
            charsToOccurrenceMap[s[i]-'a']++;
        }
        // printArray(charsToOccurrenceMap);
        for(int i=0;i<t.size();i++){
            charsToOccurrenceMap[t[i]-'a']--;
        }
        // printArray(charsToOccurrenceMap);
        for(int i=0;i<26;i++){
            if(charsToOccurrenceMap[i]!=0){
                return false;
            }
        }
        // printArray(charsToOccurrenceMap);
        return true;
    }
};
