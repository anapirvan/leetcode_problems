 class Solution {
 public:
     string simplifyPath(string path)
     {
         stringstream ss(path);
         string cuv;
         vector<string> st;

         while (getline(ss, cuv, '/'))
         {
             if (cuv == "" || cuv == ".")
                 continue;
             else
                 if (cuv == "..")
                 {
                     if (!st.empty())
                         st.pop_back();
                 }
                 else
                     st.push_back(cuv);
         }

         string simplifiedPath;
         for (auto& s : st)
         {
             simplifiedPath += '/';
             simplifiedPath += s;
         }
         if (simplifiedPath.empty())
             simplifiedPath += '/';
         return simplifiedPath;

     }
 };