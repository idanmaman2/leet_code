
class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        mp = { } 
        for index,i in enumerate(nums) : 
            if mp.get(i) != None: 
                return [mp.get(i) , index ]
            mp[target-i] = index

print(Solution().twoSum(nums = [2,7,11,15], target = 9) )