# heap_sort_sample

* Sorting technique based on Binary Heap data structure.  
* Similar to selection sort where we first find the maximum element and place maximum element at the end.  

1. Build a max heap from the input data.  
2. At this point, the largest item is stored at the root of the heap.  
3. Replace it with the last item of the heap followed by reducing the size of heap by 1.  
4. Finally, heapify the root of the tree.  
5. Repeat step 2 ~ 4 while size of heap is greater than 1.  

