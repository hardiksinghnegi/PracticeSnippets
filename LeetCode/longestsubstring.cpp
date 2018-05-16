class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        map<char,int> dictMap;
        int strLen = s.length();
        int ansLength = 0;
        
        for(int i=0,j=0;j<strLen;j++){
            if(dictMap.find(s[j])!=dictMap.end()){
                i = max(dictMap[s[j]],i);
            }
            
            ansLength = max(ansLength,j-i+1);
            dictMap[s[j]] = j+1;
        }
        
        return ansLength;
    }
};
