class Solution {
public:
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        sort(points.begin(),points.end(),[](vector<int>a, vector<int>b){
            return sqrt(pow(a[0],2)+pow(a[1],2)) < sqrt(pow(b[0],2)+pow(b[1],2));
        });
        
        vector<vector<int>> ans;
        
        for(int i=0;i<k;i++){
            ans.push_back(points[i]);
        }
        return ans;
    }
};