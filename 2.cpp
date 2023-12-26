class Solution {
public:
    string countAndSay(int n) {
        if (n == 1)
            return "1";

        string result = "1";
        for (int i = 2; i <= n; ++i) {
            string current;
            char say = result[0];
            int count = 1;

            for (int j = 1; j < result.size(); ++j) {
                if (result[j] == say) {
                    count++;
                } else {
                    current += to_string(count) + say;
                    say = result[j];
                    count = 1;
                }
            }
            current += to_string(count) + say;
            result = current;
        }

        return result;
    }
};
class Solution {
public:
    string countAndSay(int n) {
        if (n == 1)
            return "1";

        string result = "1";
        for (int i = 2; i <= n; ++i) {
            string current;
            char say = result[0];
            int count = 1;

            for (int j = 1; j < result.size(); ++j) {
                if (result[j] == say) {
                    count++;
                } else {
                    current += to_string(count) + say;
                    say = result[j];
                    count = 1;
                }
            }
            current += to_string(count) + say;
            result = current;
        }

        return result;
    }
};
