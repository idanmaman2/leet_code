
class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        mp = dict()
        for index,i in enumerate(nums) : 
            num = mp.get(i)
            if  num != None: 
                return [num , index ]
            mp[target-i] = index

print(Solution().twoSum(nums = [2,7,11,15], target = 9) )