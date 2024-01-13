#include <iostream>
#include <unordered_map>

class Solution {
public:
    int minSteps(std::string s, std::string t) {
        std::unordered_map<char, int> a;
        std::unordered_map<char, int> b;
        int count = 0;
        for (char c : s) {
            a[c]++;
        }
        for (char c : t) {
            b[c]++;
        }
        for (const auto& pair : a) {
            char c = pair.first;
            if (b.find(c) == b.end()) {
                count += a[c];
            } else {
                count += std::max(0, a[c] - b[c]);
            }
        }
        return count;
    }
};
