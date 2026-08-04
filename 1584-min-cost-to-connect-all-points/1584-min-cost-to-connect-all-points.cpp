class Solution {
public:
typedef pair<int,int> ip;
int prims(int n,vector<vector<ip>> &edges){
    vector<int>vis(n,0);
    int sum=0;
    priority_queue<ip,vector<ip>,greater<ip>>pq;
    pq.push({0,0});
    while(!pq.empty()){
        auto node=pq.top();
        pq.pop();
        int w=node.first;
        int dis=node.second;
        if(vis[dis])continue;
        vis[dis]=1;
        sum+=w;
        for(auto it:edges[dis]){
            if(!vis[it.second])
                pq.push(it);
        }
    }
    return sum;
    }
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size();
        vector<vector<ip>> edges(n);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int dis = abs(points[i][0]-points[j][0]) +
                            abs(points[i][1]-points[j][1]);
                            edges[i].push_back({dis,j});
                            edges[j].push_back({dis,j});
            }
        
        } 
        return prims(n,edges);
    }
};