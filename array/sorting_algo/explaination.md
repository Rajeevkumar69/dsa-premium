## Bubble Sort

* Its basically the pick one largest element & swap it from the 
smallest element in the array.

* So for this you can pick the 1st element from array & 
check/compare with the next element & if found < then swap
& at the last return the array.

* So for this outer loop will run till `n-1` & inner loop 
will run `n-i-1` times. 

code
```
vector<int> bubbleSort(vector<int> &nums, int n){
     for(int i=0; i<n-1; i++){
          for(int j=0; j<n-i-1; j++){
               if(nums[j] < nums[j+1]){
                    swap(nums[j], nums[j+1]);
               }
          }
     }
     return nums;
}
```

## Selection Sort

* For this sorting algorithm pick one smallest element & swap it from the largest element.

* Its Just opposite of the bubble sort.
* So for this outer loop  starts from 0 to n-1 & take one minIdx = i (it means we're assiging all the ith value to the minIdx assume it's smallest) then run the 
inner loop starts from i+1/i to n.
* Now check is my jth value is smallest then my minIdx value means my jth value where my inner pointer is now is it the smallest from my minIdx value if yes then assign jth index not value to the minIdx.
* After this come out from the inner loop & now swap the arr[i] value to arr[minIdx]

code
```
for(int i=0; i<n; i++){
     int minIdx = i;
     for(int j=i+1; j<n-1; j++){
          if(nums[j] < nums[midIdx]){
               minIdx = j;
          }
     }
     swap(nums[i], nums[minIdx]);
}
```