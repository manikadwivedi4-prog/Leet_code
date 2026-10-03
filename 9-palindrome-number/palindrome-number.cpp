class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        long rev = 0;

        while (x>0){
            int digit = x % 10;
            rev = rev*10 + digit;
            x = x/10;
        }

        if (rev == num){
            return 1;
        }

        else{
            return 0;
        }

    }
};