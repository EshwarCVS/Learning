class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        def mergeSort(arr): 
            if len(arr) >1: 
                mid = len(arr)//2
                L = arr[:mid]
                R = arr[mid:]
                mergeSort(L)
                mergeSort(R) 
                i = j = k = 0
                while i < len(L) and j < len(R): 
                    if L[i] < R[j]: 
                        arr[k] = L[i] 
                        i+=1
                    else: 
                        arr[k] = R[j] 
                        j+=1
                    k+=1
                while i < len(L): 
                    arr[k] = L[i] 
                    i+=1
                    k+=1
                while j < len(R): 
                    arr[k] = R[j] 
                    j+=1
                    k+=1
        for i in range(m,len(nums1)):
            nums1[i]=nums2[i-m]
        nums1.sort()
