class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> indexArr;
        
        for(int i=0;i<nums.size();++i){
            int compliment = target - nums[i];
            if((indexArr.find(compliment)!=indexArr.end())&&(indexArr[compliment]!=i)){
                vector<int> twoIndices {i,indexArr[compliment]};
                return twoIndices;
            }
            
            indexArr.insert(pair<int,int>(nums[i],i));
        }
       
    }
};
