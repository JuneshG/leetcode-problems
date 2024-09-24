# # 53. Maximum Subarray 
# Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
# Output: 6
# Explanation: The subarray [4,-1,2,1] has the largest sum 6.
# Example 2:

# Input: nums = [1]
# Output: 1
# Explanation: The subarray [1] has the largest sum 1.
# Example 3:

# Input: nums = [5,4,-1,7,8]
# Output: 23
# Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.

def maxSubArray(arr):
    maxSub = arr[0]
    currSum = 0
    for i in arr:
        if currSum < 0:
            currSum = 0
        currSum += i
        maxSub = max(maxSub, currSum)
    return maxSub



