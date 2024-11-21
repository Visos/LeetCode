class Solution {
public:
    string reverseParentheses(string s) {
        string sub = "";
        int last = 0;
        int first = 0;
        int i = 0;
        int j =  0;



        while(true){
            first = s.find_last_of('(');
            last = s.find(')' , first);
 

            if(first ==  -1)
                break;
            sub = s.substr(first , last-first+1);
            sub.erase(0,1);
            sub.erase(sub.length()-1,1);

            i = 0; 
            j =  sub.length()-1;
            while(i<=j){
                swap(sub[i], sub[j]);
                i++;
                j--;
            }

            s.erase(first,1);
            s.erase(last-1, 1);
            s.replace(first, last-first-1, sub);
        }
        return s;
    }
};