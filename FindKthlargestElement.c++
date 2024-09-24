#include <iostream>
#include <vector>
#include <queue>  // Include the necessary header for priority_queue
using namespace std;

// class Solution {
// public:
//     int findKthLargest(vector<int> & nums, int k) {
//         priority_queue<int, vector<int>, greater<int>> minHeap;
//         for (int i = 0; i < nums.size(); i++) {
//             if (minHeap.size() < k) {
//                 minHeap.push(nums[i]);
//             } else {
//                 if (nums[i] > minHeap.top()) {
//                     minHeap.pop();
//                     minHeap.push(nums[i]);
//                 }
//             }
//         }
//         return minHeap.top();
//     }
// };

class Solution{
    public:
    int findKthLargest(vector<int> & nums, int k){
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for (int i = 0; i < nums.size(); i++){
            if (minHeap.size() < k ) {
                minHeap.push(nums[i]);
            }
            else {
                if (nums[i] > minHeap.top()) {
                    minHeap.pop();
                    minHeap.push(nums[i]);
                }
            }
        }
        return minHeap.top()
    }
};


int main() {
    Solution sol;                                    // Create an instance of the Solution class
    vector<int> input =  {3, 1, 4, 1, 5, 9, 2, 6};   // Example input vector
    int k = 3;                                       // Example value of k
    int result = sol.findKthLargest(input, k);       // Call the findKthLargest function
    cout << "Result: " << result << endl;            // Output the result
    return 0;
}