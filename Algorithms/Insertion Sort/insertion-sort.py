def insertion_sort(list):
    #outer loop to control the loop. Determines which item we are going to have in our hand
    for i in range(1,len(list)):
        key=list[i]
        j=i-1
        # Compare key with each element on the left of it until an element smaller than it is found
        while j>=0 and key<list[j]:
            list[j+1]=list[j]
            j=j-1
        # Place key at after the element just smaller than it.
        list[j + 1] = key
   
        


print("Enter List of Numbers you want to sort with Insertion Sort:")
number_list = list(map(int,input().split())) 
print(f"Entered List: {number_list} ")
insertion_sort(number_list)
print(f"After sorting with insertion sort the list is: {number_list}")


