 class Solution {
 public:
     int lengthOfLastWord(string s)
     {
         int finish = s.find_last_not_of(' ');
         //cout << s[finish] << " ";
         int start = finish;
         while (start >= 0)
             if (s[start] != ' ')
                 start--;
             else
                 break;
         //cout << s[start] << endl;
         return finish - start;
     }
 };