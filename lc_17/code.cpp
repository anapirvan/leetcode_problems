class Solution {
public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> res;
        if (digits.empty())
            return res;
        unordered_map<char, string> m = { {'2',"abc"},{'3',"def"}, {'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"} };
        backtracking(0, "", digits, m, res);
        return res;
    }
    void backtracking(int pos, string sol, string digits,unordered_map<char, string> m, vector<string>& res)
    {
        if (pos == digits.length())
        {
            res.push_back(sol);
            return;
        }
        char l = digits[pos];
        for (char c : m[l])
        {
            sol += c;
            backtracking(pos + 1, sol, digits, m, res);
            sol.pop_back();
        }
    }
};