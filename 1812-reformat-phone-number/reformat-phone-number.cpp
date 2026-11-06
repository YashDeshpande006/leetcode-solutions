class Solution {
public:
    string reformatNumber(string number) {
        string s = "";

        // Remove spaces and dashes
        for (int i = 0; i < number.length(); i++) {
            if (number[i] >= '0' && number[i] <= '9') {
                s += number[i];
            }
        }

        string ans = "";
        int i = 0;
        int n = s.length();

        while (n - i > 4) {
            ans += s.substr(i, 3);
            ans += "-";
            i += 3;
        }

        int remaining = n - i;

        if (remaining == 4) {
            ans += s.substr(i, 2);
            ans += "-";
            ans += s.substr(i + 2, 2);
        }
        else {
            ans += s.substr(i, remaining);
        }

        return ans;
    }
};