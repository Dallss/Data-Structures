
# heapify

import math

sample_array = [98, 100, 1, 97, 53, 41, 27, 57, 17, 63, 50, 36, 85, 49, 16, 31, 13, 77, 42, 35, 
100, 72, 55, 27, 8, 89, 73, 2, 62, 14, 91, 6, 33, 92, 33, 80, 20, 68, 52, 86, 
1, 53, 76, 82, 92, 16, 40, 59, 86, 91]

#max_heap
def heapify(ara):
    for i in range(len(ara)//2 - 1, -1, -1):
        parent = i
        while True:
            left = 2 * parent + 1
            right = 2 * parent + 2
            largest = parent

            if left < len(ara) and ara[left] > ara[largest]:
                largest = left
            
            if right < len(ara) and ara[right] > ara[largest]:
                largest = right

            if largest != parent:
                ara[parent], ara[largest] = ara[largest], ara[parent]
                parent = largest  
            else:
                break  

print(sample_array)

heapify(sample_array)
print()
print(sample_array)