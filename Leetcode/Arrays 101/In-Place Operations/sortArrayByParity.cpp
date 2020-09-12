class Solution {
public:
    bool isEven(int num){
        if(num % 2 ==0){
            return true;
        }
        return false;
    }
    vector<int> sortArrayByParity(vector<int>& A) {
        if(A.size() < 2){return A;}
        auto head=A.begin();
        auto it=A.begin();
         while(it<A.end()){
            if(head==it){
                it++;
            }
            else if(isEven(*it)){
                if(!isEven(*head)){
                    swap(*head,*it);
                }
                *head++;
            }
             else{
                 it++;
             }
        }
        return A;
    }
};
