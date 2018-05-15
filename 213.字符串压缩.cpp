class Solution {
public:
    /**
     * @param str: a string
     * @return: a compressed string
     */
    string compress(string &str) {
        // write your code here
        vector<char> tmp;
        stack<int> stacks;
        string s="";
        if(str.size()==0) return str;
        tmp.push_back(str[0]);
        if(str.size()==1) 
        {
            s.push_back(tmp[0]);
            return s;
        }
        for(int i=1;i<str.size();i++)
        {
            if(str[i]==tmp[0])
            {
                tmp.push_back(str[i]);
            }
            else
            {
                s.push_back(tmp[0]);
                int t=tmp.size();
                while(t)
                {
                    stacks.push(t%10);
                    t/=10;
                }
                if(t!=0) stacks.push(t);
                while(stacks.size())
                {
                    s.push_back(stacks.top()+'0');
                    stacks.pop();
                }
                tmp.clear();
                tmp.push_back(str[i]);
            }
        }
        s.push_back(tmp[0]);
        int t=tmp.size();
                while(t)
                {
                    stacks.push(t%10);
                    t/=10;
                }
                if(t!=0) stacks.push(t);
                while(stacks.size())
                {
                    s.push_back(stacks.top()+'0');
                    stacks.pop();
                }
        if(s.size()>=str.size()) return str;
        return s;
    }
};