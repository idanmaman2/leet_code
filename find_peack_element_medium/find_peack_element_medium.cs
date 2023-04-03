public class Solution {
    public int FindPeakElement(int[] nums) {
        if (nums.Length == 1)
            return 0;
        for(int i=1 ; i < nums.Length-1 ; i ++){ 
            if(nums[i] > nums[i-1] && nums[i] > nums[i+1])
                return i ; 
        }
        if (nums[0]> nums[1])
            return 0 ;
        else 
            return nums.Length -1 ;
    }
}