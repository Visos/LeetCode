class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double totWaitingTime  = customers[0][1]*1.0;
        double endOrder=customers[0][0]*1.0 + customers[0][1];


        for(int i = 1; i<customers.size(); i++){
            if(endOrder<=customers[i][0]){
                endOrder =customers[i][0] + customers[i][1];
                totWaitingTime += customers[i][1];
            }else{
                totWaitingTime += customers[i][1] + endOrder - customers[i][0];
                endOrder += customers[i][1];

            }
        }
        return totWaitingTime*1.0/customers.size();
    }
};