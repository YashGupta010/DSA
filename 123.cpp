class Solution {
    public:
        int rev = 0;
    
        bool isPalindrome(int x) {
            int original = x;
            while (x > 0) {
    
                int ld = 0;
                ld = x % 10;
                rev = rev * 10 + ld;
                x = x / 10;
    
                
            }
            if (rev == original) {
                return true;
            } else {
                return false;
            }
        }
    };


    