class Solution{
public:
    int minLength(string s, int n) {
        // code here
        vector<string> v = {"12", "21", "34", "43", "56", "65", "78", "87", "09", "90"};
        unordered_set<string> st;
        
        for(auto it:v) st.insert(it);
        
        stack<char> stack;
        
        for(int i=0;i<n;i++){
            stack.push(s[i]);
            
            while(stack.size()>1){
                char a = stack.top();
                stack.pop();
                char b = stack.top();
                stack.pop();
                
                string str = "";
                str += a;
                str += b;
                
                if(!st.count(str)){
                    stack.push(b);
                    stack.push(a);
                    break;
                }
            }
        }
        return stack.size();
        
    } 
};
