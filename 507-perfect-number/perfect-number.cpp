class Solution {
public:
    bool checkPerfectNumber(int num) {

        if (num <= 1){
            return false;
        }
        int i = 2;
        int sum = 1;
        while (i <= sqrt(num)){
            if (num % i == 0){

                if (i == sqrt(num)){
                    sum += i;
                }
                else {
                    sum = sum + i + num/i;
                }
            }

            i++;
        }

        return sum == num;
    }
};