
class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        min_heap = []

        
        for x, y in points:
            distance = (x**2 + y**2)  # Negate for max heap
            min_heap.append([distance, x, y])
       
        heapq.heapify(min_heap)

        
        res = []
        for _ in range(k):
            _, x, y = heapq.heappop(min_heap)
            res.append([x, y])
        
        return res
