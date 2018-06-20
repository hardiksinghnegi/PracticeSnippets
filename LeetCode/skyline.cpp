class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        
       int lineSize = grid.size();
        
       vector<int> tbSkyline(lineSize, 0), lrSkyline(lineSize, 0);
        
        int tbMax = 0,lrMax=0,ansExtra=0;
        
        for(int i=0;i<lineSize;++i){
            for(int j=0;j<lineSize;++j){
                lrSkyline[i] = max(lrSkyline[i],grid[i][j]);
                tbSkyline[j] = max(tbSkyline[j],grid[i][j]);
            }
         
        }
        
        for(int i=0;i<lineSize;++i){
            for(int j=0;j<lineSize;++j){
                ansExtra += min(lrSkyline[i],tbSkyline[j])-grid[i][j];
            }
        }
        
        return ansExtra;
    }
};
