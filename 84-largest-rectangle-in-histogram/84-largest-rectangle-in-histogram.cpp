class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int n = heights.size();
        
        if(n==1){
            return heights[0];
        }else{
            vector<int>pre(heights.size(),-1);
            vector<int>nex(heights.size(),n);

            stack<int> s;
            s.push(n-1);
            for(int i=n-2;i>=0;i--){
                while(!s.empty() && heights[s.top()] >= heights[i]){
                    s.pop();
                }
                if(!s.empty())
                    nex[i] = s.top();
                s.push(i);
            }

            while(!s.empty()){
                s.pop();
            }

            s.push(0);
            for(int i=1;i<n;i++){
                while(!s.empty() && heights[i] <= heights[s.top()]){
                    s.pop();
                }
                if(!s.empty()){
                        pre[i] = s.top();
                } 
                s.push(i);
            }

            vector<int> res(n);
            int maxx = INT_MIN;
            for(int i=0;i<n;i++){
                res[i] = heights[i]*(((nex[i]-1)-pre[i]));
                maxx = max(maxx,res[i]);
            }

            for(auto i:res) cout<<i<<" ";

            return maxx;
        }
    }
};