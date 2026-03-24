class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        const int MOD=12345;
        int total=n*m;
        vector<int>prefix(total,1),suffix(total,1);

        for(int i=1;i<total;i++){
            int r=(i-1)/m;
            int c=(i-1)%m;

            prefix[i]=(1LL *prefix[i-1]*grid[r][c]) % MOD;
        }

        for(int i=total-2;i>=0;i--){
            int r=(i+1)/m;
            int c=(i+1)%m;

            suffix[i]=(1LL *suffix[i+1]*grid[r][c]) % MOD;
        }

        vector<vector<int>>ans(n,vector<int>(m));
        for(int i=0;i<total;i++){
            int r=i/m;
            int c=i%m;
            ans[r][c]=(1LL *prefix[i]*suffix[i])%MOD;
        }

        return ans;
    }
};