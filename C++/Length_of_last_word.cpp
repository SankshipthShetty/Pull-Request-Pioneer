class Solution {
public:
    int lengthOfLastWord(string s) {
        std::string ans = "";
        bool wasSpace = false;
        for(char c : s){
            if(wasSpace && c != ' '){
                ans = "";
            }
            if(c == ' '){
                wasSpace = true;
                continue;
            }
            std::cout<< c;
            ans += c;
            wasSpace = false;
        }
        return ans.length();
    }
};