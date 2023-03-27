# Heap Sort in python


def heapify(arr, n, i):
      # Find largest among root and children
      largest = i
      l = 2 * i + 1
      r = 2 * i + 2
  
      if l < n and arr[i] < arr[l]:
          largest = l
  
      if r < n and arr[largest] < arr[r]:
          largest = r
  
      # If root is not largest, swap with largest and continue heapifying
      if largest != i:
          arr[i], arr[largest] = arr[largest], arr[i]
          heapify(arr, n, largest)
  
  
def heapSort(arr):
      n = len(arr)
  
      # Build max heap
      for i in range(n//2, -1, -1):
          heapify(arr, n, i)
  
      for i in range(n-1, 0, -1):
          # Swap
          arr[i], arr[0] = arr[0], arr[i]
  
          # Heapify root element
          heapify(arr, i, 0)
  
  
if __name__=='__main__':
    arr = []
    n=int(input("Enter how many elements you want to add in the array: "))
    element_count=0
    for i in range(n):
        element=int(input(f"Enter element no. {element_count}: "))
        arr.append(element)
        element_count+=1

    print(f"Entered array is {arr}")
    heapSort(arr)
    print(f"Sorted array is {arr}")
    
  