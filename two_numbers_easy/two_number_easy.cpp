class Solution {
public:

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> sumup(2,0) ;
    size_t s1 = nums.size() ; 
    for(size_t i=0  ; i< s1 ; i++ ){
        int x = nums[i];
        for(size_t j=i+1 ; j <s1  ; j++){
            if(x+nums[j] ==target){
                sumup[0] = i;
                sumup[1]= j ;
                break;
            }
        }
    }
    return sumup ;





}

};