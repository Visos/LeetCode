class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result(n);
        bool flag = false;
        result[0] = std::to_string(1);
        for(int i = 1; i<n; i++){
            flag = false;
            if((i+1)%3 == 0){
                if((i+1)%5 ==0){
                    result[i] = "FizzBuzz";
                }else{
                    result[i] = "Fizz";
                }
            }else if((i+1)%5 == 0){
                    result[i] = "Buzz";
            }else {
                result[i] = std::to_string(i+1);

            }


        }
        return result;
    }
};