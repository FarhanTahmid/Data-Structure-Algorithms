def binary_search(lists,target):

    high_index=len(lists)-1
    low_index=0
    
    while low_index<=high_index:
        mid_index=low_index+(high_index-low_index)//2
        
        if(lists[mid_index]==target):
            return mid_index
        elif(lists[mid_index]<target):
            low_index=mid_index+1
        else:
            high_index=mid_index-1
    
    return -1


size=int(input("Enter the size of the list: "))
list1=[int(input("Enter the element: ")) for i in range(size)]
target=int(input("Enter the target element: "))
# caution! The list is sorted after you enter and will always print the index of the sorted array!
print(binary_search(list1.sort(),target))