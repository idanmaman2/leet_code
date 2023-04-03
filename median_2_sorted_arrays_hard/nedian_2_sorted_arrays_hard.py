class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        i=0 
        j=0 
        nums12= [] 
        while i<len(nums1) and j < len(nums2) :
            if nums1[i]<nums2[j]:
                nums12.append(nums1[i])
                i+=1
            else :
                nums12.append(nums2[j])   
                j+=1
        nums12.extend(nums1[i:])
        nums12.extend(nums2[j:])
        val2 = nums12[len(nums12)//2] + nums12[len(nums12)//2-1]
        return nums12[len(nums12)//2]  if len(nums12)%2  else val2/2.0;