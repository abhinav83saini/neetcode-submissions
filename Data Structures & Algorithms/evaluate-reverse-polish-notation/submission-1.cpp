class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int n=tokens.size();
        for(int i=0;i<n;i++){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                if(tokens[i]=="+"){
                    int c=a+b;
                    st.push(c);
                }
                else if(tokens[i]=="-"){
                    int c=b-a;
                    st.push(c);
                }
                else if(tokens[i]=="/"){
                    int c=b/a;
                    st.push(c);
                }
                else{
                    int c=a*b;
                    st.push(c);
                }
            }
            else{
                int k=stoi(tokens[i]);
                st.push(k);
            }
        }
        return st.top();
    }
};
