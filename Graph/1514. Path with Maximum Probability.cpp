lass Solution {
public:
    double maxProbability(int n, vector<vector<int>>& e, vector<double>& succ, int start, int end) {
        vector<vector<pair<int,double>>> adj(n);
        for(int i=0;i<e.size();i++)
        {
            adj[e[i][0]].push_back({e[i][1],succ[i]});
            adj[e[i][1]].push_back({e[i][0],succ[i]});
        }
        vector<double> res(n,0.0);
        res[start]=1.0;
        priority_queue<pair<double,int>> pq;
        pq.push({1.0,start});
        while(!pq.empty())
        {
            auto [prob,node]= pq.top();
            pq.pop();
            for(auto [i,p]:adj[node])
            {
                if(res[i]< prob*p)
                {
                    res[i]=prob*p;
                    pq.push({res[i],i});
                }
            }
        }
        return res[end];        
    }
};