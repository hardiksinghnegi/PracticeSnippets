static int __ = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int singleNum = 0;
        
        for(int i=0;i<nums.size();++i){
            singleNum ^= nums[i];  //bitwise XOR as n^n == 0 so singleNum will have no with single occurence
        }
        return singleNum;
    }
};
