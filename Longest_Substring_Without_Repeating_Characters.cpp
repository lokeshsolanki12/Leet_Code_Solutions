#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int length(string s){
        unordered_set<char> st;
        int left = 0, maxLen = 0;

        for (int right = 0; right < s.size(); right++) {
            while (st.count(s[right])) {
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};

int main() {
    Solution sol;
    cout << sol.length("abcabcbb") << endl; 
    cout << sol.length("bbbbb") << endl;    
    cout << sol.length("pwwkew") << endl;   
}
