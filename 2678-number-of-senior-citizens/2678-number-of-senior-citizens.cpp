class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size();
        int count = 0;
        for(int i=0;i<n;i++){
            int number = (details[i][11]-'0')*10+details[i][12]-'0';
            if(number >60){
                count++;
            }
        }
        return count;
    }
};