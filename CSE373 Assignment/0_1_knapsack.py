def zero_1knap_Sack(W, wt, val, n): 
 
    # Define the Base Case 
    if n == 0 or W == 0: 
        return 0
 
    # If weight of the nth item is more than Knapsack of capacity W, then that item cannot be included in the optimal solution 
    if (wt[n-1] > W): 
        return zero_1knap_Sack(W, wt, val, n-1) 
 
    # return the maximum of two cases, nth item included or not included 
    else: 
        return max( 
            val[n-1] + zero_1knap_Sack( 
                W-wt[n-1], wt, val, n-1), 
            zero_1knap_Sack(W, wt, val, n-1)) 
 

if __name__ == '__main__': 
    profit = [60, 100, 120] 
    weight = [10, 20, 30] 
    W = 50
    n = len(profit) 
    print (zero_1knap_Sack(W, weight, profit, n))