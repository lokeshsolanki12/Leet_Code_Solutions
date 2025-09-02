 #include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x){
        if (x < 0) return false;

        long long rev = 0, temp = x;
        while (temp >0){
            int digit = temp % 10;
            rev = rev * 10 + digit;
            temp /= 10;
        }
        return (rev == x);
    }
};

int main() {
    Solution s;
    int x;
    cout << "Enter a number: ";
    cin >> x;

    if (s.isPalindrome(x))
        cout << x << " is a Palindrome" <<endl;
    else
        cout << x << " is not a Palindrome" << endl;

}
