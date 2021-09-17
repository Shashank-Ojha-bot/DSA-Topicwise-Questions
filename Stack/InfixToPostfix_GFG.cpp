class Solution
{
    public:
    //Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s)
    {
        // Your code here
        //s=s.toLowercase();
        //transform(s.begin(), s.end(), s.begin(), ::tolower);
        string res;
        stack<char> st;
        unordered_map<char,int> m;
        m['^']=1;
        m['*']=2;
        m['/']=2;
        m['+']=3;
        m['-']=3;
        for(int i=0;i<s.length();i++)
        {
            if((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z'))
                res+=s[i];
            else
            {
                if(s[i]==')')
                {
                    if(st.empty()==false)
                    {
                    while(st.top()!='(')
                    {
                        res+=st.top();
                        st.pop();
                    }
                    st.pop();
                }}
                else if(s[i]=='(')
                    st.push('(');
                else
                {
                    if(st.empty()==false)
                    {
                    while(st.empty()==false and st.top()!='(' and m.find(st.top())->second <= m.find(s[i])->second)
                    {
                        res+=st.top();
                        st.pop();
                        
                    }
                    }
                        st.push(s[i]);
                    
                }
                
            }
        }
        while(st.empty()==false)
        {
            res+=st.top();
            st.pop();
        }
        return res;
    }
};
