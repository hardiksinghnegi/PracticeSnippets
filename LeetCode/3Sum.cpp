static const auto ______ = [](){ 
    std::cout.sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        set<vector<int>> resSet;
        
        vector<vector<int>> resNull;
        
        if(nums.size()<3){
            return resNull;
        }
        
        
        
        sort(nums.begin(),nums.end());
        int beg,last;
        
        for(int i=0;i<(nums.size()-2);i++){
            beg = i+1;
            last = nums.size()-1;
            while(beg<last){
                if(nums[i]+nums[beg]+nums[last] == 0){
                    vector<int> tmp(3);
                    tmp[0] = nums[i];
                    tmp[1] = nums[beg];
                    tmp[2] = nums[last];
                    resSet.insert(tmp);
                
                    beg++;
                    last--;
                }
                else if(nums[i]+nums[beg]+nums[last] < 0){
                    beg++;
                }
                else{
                    last--;
                }
            }
        }
        
        vector<vector<int>> resVec(resSet.begin(),resSet.end());
        return resVec;
    }
};
