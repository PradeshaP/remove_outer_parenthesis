class Solution {
public:
    string removeOuterParentheses(string s) {
        int len=s.length();
        string result;
         int depth=0;
        for(int i=0;i<len;i++)
        {
           if(s[i]=='(')
           {
             if(depth>0)
             {
                result+=s[i];
             }
             depth++;
           }
          else if(s[i]==')')
           {
            depth--;
            if(depth>0)
            {
             result+=s[i];
            }
           }
        }
        
        return result;
    }
};