#include <vector>

class Solution {
public:
    void dp(int numRows, vector<vector<int>>& ans) {
        if (numRows <= 1) {
            return;
        }
        vector<int> temp = ans.back();
        vector<int> n;
        for (int i = 0; i < temp.size(); i++) {
            if (i == 0 || i == temp.size() - 1) {
                n.push_back(temp[i]);
            } else {
                n.push_back(temp[i] + temp[i - 1]);
            }
        }
        ans.push_back(n);
        dp(numRows - 1, ans);
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if (numRows <= 0) {
            return ans;
        }
        if (numRows >= 1) {
            vector<int> a = {1};
            ans.push_back(a);
        }
        if (numRows >= 2) {
            vector<int> b = {1, 1};
            ans.push_back(b);
            dp(numRows - 2, ans);
        }
        return ans;
    }
};
