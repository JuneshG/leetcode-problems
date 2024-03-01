import heapq

class Solution:
    def findKthLargest(self, nums, k):
        minHeap=[]
        for i in nums:
            if len(minHeap) < k:
                heapq.heappush(minHeap, i)
            else:
                heapq.heappop(minHeap)
                heapq.heappush(minHeap, i)
        return minHeap[0];

sol = Solution()
input_nums = [4,5,8,2,3,5,10,9,4]
k = 3
result = sol.findKthLargest(input_nums, k)
print("Result: ",result)

