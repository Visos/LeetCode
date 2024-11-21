from typing import List

#brute force solution
def twoSum( nums: List[int], target: int) -> List[int]:
    for i in range(len(nums)):
        for j in range( i +1 , len(nums)):
            if nums[i]+ nums[j] == target:
                return [i, j]
    


#best solution
def twoSum2( nums: List[int], target: int) -> List[int]:
    table = {}
    for i in range(len(nums)):
        table[nums[i]] = i
        
    for i in range(len(nums)):
        complement = target - nums[i]
        if complement in table and table[complement] != i:
            return [table[complement], i]



# Test the function

nums = [2,7,11,15]
target = 9
print(twoSum2(nums, target))  # Output: [0, 1]
