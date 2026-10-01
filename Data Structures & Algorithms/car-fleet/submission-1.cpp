class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> pospd;
        int n=position.size();
        for(int i=0;i<n;i++){
            pospd.push_back({position[i],speed[i]});
        }
        sort(pospd.begin(),pospd.end(),greater<pair<int,int>>());
        stack<double> st;
        for(int i=0;i<n;i++){
            double time=(1.0*(target-pospd[i].first))/(1.0*pospd[i].second);
            if(st.empty()){
                st.push(time);
            }
            else{
                if(time>st.top()){
                    st.push(time);
                }
            }
        }
        return st.size();
    }
};
