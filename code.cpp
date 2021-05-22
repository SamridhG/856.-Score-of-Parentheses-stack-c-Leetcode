class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>A;
        int sum=0;
        for(auto p:s)
        {
            if(p=='(')
            {
                A.push(-1);
            }
            else
            {
                if(A.top()==-1)
                {
                    A.pop();
                        A.push(+1);
                }
                else
                {
                    while(A.top()!=-1)
                    {
                        sum+=A.top();
                        A.pop();
                    }
                    A.pop();
                    A.push(2*sum);
                    sum=0;
                }
            }
        }
        while(!A.empty())
        {
            sum+=A.top();
            A.pop();
        }
        return sum;
    }
};
