class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        map<int, double> m;
        for(int i=0; i<position.size(); i++)
        {
            double d = (double)(target-position[i])/speed[i];
            m[position[i]]=d;
        }
        int fleets = 0;
        double slowest = 0;
        for(auto it = m.rbegin(); it!=m.rend(); it++)
        {
            if(slowest<it->second)
            {
                slowest = it->second;
                fleets++;
            }
        }
        return fleets;
    }
};