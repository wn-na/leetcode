class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map = dict()
        for i, num in enumerate(nums):
            map[num] = i
        
        for i, num in enumerate(nums):
            pair = target - num
            if map.get(pair, -1) > i:
                return [i, map[pair]]
