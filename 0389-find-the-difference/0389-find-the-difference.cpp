class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<bool> visited(s.length(), false);
        for(int i = 0; i < t.length(); i++) {
            bool found_match = false;
            for(int j = 0; j < s.length(); j++) {
                if(t[i] == s[j] && visited[j] == false) {
                    visited[j] = true;                   
                    found_match = true;
                    break;
                }
            }
            if(found_match == false) {
                return t[i];
            }
        }
        return ' ';
    }
};