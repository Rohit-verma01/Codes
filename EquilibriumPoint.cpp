//Problem
/*
Given an array A of n positive numbers. The task is to find the first Equilibium Point in the array. 
Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.
*/

//This problem is an application of prefix sum .


int equilibriumPoint(long long a[], int n) {
    
        // Prefix sum array
        long long p[n];
        p[0]=a[0];
        
        //Calculate prefix sum array
        for(int i=1;i<n;i++){
            p[i]=p[i-1]+a[i];
        }
         
        //if only 1 element present then return 1st index
        if(n==1)
            return 1;
            
        for(int i=0;i<n;i++){
            
            //for 1st index assume previous sum will be zero.
            if(i==0){
                if(0==p[n-1])
                    return i+1;
            }
            else{
                if(p[i-1]==(p[n-1]-p[i]))
                    return i+1;
            }
        }
        //if no equilibrium point found then return -1.
        return -1;
    }
