class Solution {
public:

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> sumup ;
    for(int i=0 ; i< nums.size() ; i++ ){
        for(int j=i+1 ; j < nums.size() ; j++){
            if(nums[i]+nums[j] ==target){
                sumup.push_back(i);
                sumup.push_back(j);
                break;
            }
        }
    }
    return sumup ;





}



};