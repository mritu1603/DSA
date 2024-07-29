//bubble sort
#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // general complexity = O(n'2)
    for(int i = 0;i<n-1;i++)
    {
        bool swapped = false; //reduces time complexity to O(n) in case of sorted array
        for(int j = 0;j<n-i;j++) //search till 'n-i'
        {
            if(arr[j]>arr[j+1])
            {
                bool swapped = true;
                swap(arr[j], arr[j+1]);
            }
        }
        if(swapped == false)
        {
          break;
        }

    }
}
