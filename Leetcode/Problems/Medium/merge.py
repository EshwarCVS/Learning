class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:\
        # Sort and traverse through the list. 
        # Add to new list and return it
        intervals.sort()
        merge = []
        for i in range(0, len(intervals)):
            if not merge or merge[-1][1] < intervals[i][0]:
                merge.append(intervals[i])
            else:
                merge[-1][1] = max(merge[-1][1], intervals[i][1])
        return merge