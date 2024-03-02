import heapq

class Solution:
    def findKthlargest(self, arr, k):
        minHeap = arr[:k]
        heapq.heapify(minHeap)
        for i in arr[k:]:
            if i > minHeap[0]:
                heapq.heappop(minHeap)
                heapq.heappush(minHeap, i)
        return minHeap[0]


        

    
sol = Solution()
arr = [5,8,3,4,7,9]
k = 5

print(sorted(arr))
result = sol.findKthlargest(arr,k)
print('result: ',result)

