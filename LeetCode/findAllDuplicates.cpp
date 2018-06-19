static int __ = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
     
        vector<int> dupVal;
        int inpSize = nums.size();
        if(nums.size()<2){
            return dupVal;
        }
        
        for(int i=0;i<nums.size();++i){
            if(nums[abs(nums[i])-1] <0){
                dupVal.push_back(abs(nums[i]));
            }
            else{
                nums[abs(nums[i])-1] *=-1;   
            }
        }
                
        return dupVal;
    }
};
