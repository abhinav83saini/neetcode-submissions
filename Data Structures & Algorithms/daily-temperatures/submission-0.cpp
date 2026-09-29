class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(),0);
        stack<pair<int,int>> st;
        if(temperatures.size()==1){
            return res;
        }
        st.push({temperatures[temperatures.size()-1],temperatures.size()-1});
        for(int i=temperatures.size()-2;i>=0;i--){
            while(!st.empty()){
                if(st.top().first>temperatures[i]){
                    res[i]=st.top().second-i;
                    break;
                }
                else{
                    st.pop();
                }
            }
            if(st.empty()){
                res[i]=0;
            }
            st.push({temperatures[i],i});
        }
        return res;
    }
};
