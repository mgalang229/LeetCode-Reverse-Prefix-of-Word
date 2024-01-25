class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i = 0, n = word.size();
        string ans = "";
        while (i < n) {
            ans += word[i];
            i++;
            if (word[i-1] == ch) {
                ch = '?';
                break;
            }
        }
        if (ch == '?')
            reverse(ans.begin(), ans.end());
        while (i < n)
            ans += word[i++];
        return ans;
    }
};
