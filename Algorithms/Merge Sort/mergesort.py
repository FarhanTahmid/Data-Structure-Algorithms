def merge(list,lowerBound,midPoint,upperBound):
    i=lowerBound
    j=midPoint+1
    k=lowerBound
    list2=[None]*(lowerBound+upperBound)
    while(i<=midPoint and j<=upperBound):
        if(list[i]<=list[j]):
            list2[k]=list[i]
            i+=1
        else:
            list2[k]=list[j]
            j+=1
        k+=1
    if(i>midPoint):
        while(j<=upperBound):
            list2[k]=list[j]
            j+=1
            k+=1
    else:
        while(i<=midPoint):
            list2[k]=list[i]
            i+=1
            k+=1
    for i in range(0,len(list2)):
        list[k]=list2[k]
    return list
        
def mergeSort(list,lowerBound,upperBound):
    if(lowerBound<upperBound):
        midPoint=int((lowerBound+upperBound)/2)
        mergeSort(list=list,lowerBound=lowerBound,upperBound=midPoint)
        mergeSort(list=list,lowerBound=midPoint+1,upperBound=upperBound)
        merge(list=list,lowerBound=lowerBound,midPoint=midPoint,upperBound=upperBound)

if __name__=='__main__':
    #Driver Function
    
    print("Enter List of Numbers you want to sort with Merge Sort:")
    number_list = list(map(int,input().split())) 
    print(f"Entered List: {number_list} ")
    lowerBound=0;
    upperBound=len(number_list)-1;
    number_list=mergeSort(list=number_list,lowerBound=lowerBound,upperBound=upperBound)
    print(f"The List after Sorting: {number_list}")