 class Solution {
 public:
     bool isValid(string s)
     {
         unordered_map<char, char> m = { {')','('},{']','['},{'}','{'} };
         stack<char> st;
         for (char c : s)
         {
             if (m.find(c) == m.end())
                 st.push(c);
             else
                 if (!st.empty() && st.top() == m[c])
                     st.pop();
                 else
                     return false;
         }
         return st.empty();
     }
 };