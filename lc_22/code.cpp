 class Solution {
 public:
     vector<string> generateParenthesis(int n) {
         vector<string> res;
         bkt(0, 0, "", n, res);
         return res;
     }
     void bkt(int openP, int closeP, string s, int n, vector<string>& res)
     {
         if (openP == closeP && openP == n)
         {
             res.push_back(s);
             return;
         }

         if (openP < n)
         {
             s += '(';
             bkt(openP + 1, closeP, s, n, res);
             s.pop_back();
         }

         if (closeP < openP)
         {
             s += ')';
             bkt(openP, closeP + 1, s, n, res);
             s.pop_back();
         }
     }
 };