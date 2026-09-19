class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> str;
        string word;

        while (ss >> word) {
            str.push_back(word);
        }

        string temp = "";

        for (int i = str.size() - 1; i > 0; i--) {
            temp += str[i] + " ";
        }

        return temp + str[0];
    }
};