b# Strivers-Sheet-Challenge

Hello connections, Striver (Raj Vikramaditya) announced SDE Sheet Challenge and I am participating in this challenge.🔥
Let's push our boundaries, embrace the learning process, and strive for excellence together. 🌟🚀🤝
Here's to the beginning of an amazing adventure! Wish me luck! 🍀
This is the GitHub repo where I will be adding my codes
And Do try the [SDE Sheet](https://lnkd.in/gcHXDXkw)
#StriversSheetChallenge #DSA #SdeSheetChallenge


# Table Of Content
- [Table Of Content](#table-of-content)
- [Array](#array)
  - [1 Set Matrix Zero](#1-set-matrix-zero)
  - [2 Pascal's Triangle](#2-pascals-triangle)
  - [3 Next Permutation](#3-next-permutation)
  - [4 Maximum Subarray Sum](#4-maximum-subarray-sum)
  - [5 Sort 0 1 2](#5-sort-0-1-2)
  - [6 Best Time to Buy and Sell Stock](#6-best-time-to-buy-and-sell-stock)
  - [7 Rotate Matrix](#7-rotate-matrix)
  - [8 Merge Intervals](#8-merge-intervals)
  - [9 Merger 2 Sorted arrays](#9-merger-2-sorted-arrays)
  - [10 Find Duplicate in N+1 Array](#10-find-duplicate-in-n1-array)
  - [10 Missing Duplicate ](#10-missing-duplicate-)



# Array 
## [1 Set Matrix Zero](https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_8230862?challengeSlug=striver-sde-challenge)

<h4>Logic :</h4>


> - mark starting of row and column to be zero for current i,j for example if
> - matrix[i][j] == 0 mark matrix[i][0] = 0 and matrix[0][j] = 0 now traverse
> - for specific row and column for mark the entire for and entire colum zero.
> - special case first element [0][0]; </br></br>
>   Time  -> O(N*N) + O(N) + O(N)   </br>
>   Space -> O(1)





[Code Link](./Arrays/01-set-matrix-zero.cpp)
<details>
<summary>Code</summary>

```cpp
#include <bits/stdc++.h>
void setZeros(vector<vector<int>> &matrix)
{
	int row = 0;
	int col = 0;
	int n = matrix.size();
	int m = matrix[0].size();
	for(int i = 0; i < n ;i++){
		for(int j= 0; j < m;j++){
			if(i == 0 || j == 0 ){
				if(matrix[i][j] == 0 and i == 0  )row = 1;
				if(matrix[i][j] == 0 and j == 0)col = 1;
			}
			else{
				if (matrix[i][j] == 0) {
					matrix[i][0] = 0;
					matrix[0][j] = 0;
				}
            }
        }
	}
	//marking all row
	for(int i = 1; i < n ; i++){
		if(matrix[i][0] == 0){
            for (int j = 0; j < m; j++) {
				matrix[i][j] = 0;
            }
        }
    }
	// marking all col
	for(int j = 1; j < m ; j++){
		if(matrix[0][j] == 0 ){
			for(int  i = 0; i < n ;i++){
				matrix[i][j] = 0;
			}
		}
	}
	if(col){
		for(int i = 0; i < n ; i++)matrix[i][0] = 0;
	}

	if(row){
		for(int j = 0; j < m ; j++) matrix[0][j] = 0;
	}
}
```

</details>
</br>

## [2 Pascal's Triangle]([link](https://www.codingninjas.com/codestudio/problems/pascal-s-triangle_8230805?challengeSlug=striver-sde-challenge))


> - Approach 1 : Nth element is n-1Cr-1
> - Approach 2 : Get Nth Row by just using ith element is Prev * (n-i)/i
> - Approach 3 : for Complete do use NthRow fun for each Row  </br> </br>
>  Time   -> O(N*N)  </br>
>  Space  -> O(N*N) 



[Code Link](./Arrays/02-pascals-triangle.cpp)
<details>
<summary>Code</summary>

```cpp

#include <bits/stdc++.h>
#define ll long long int
vector<ll> getRow(int n ){
  //  ll ans = 1;
   vector<ll> ans ;
   ans.push_back(1); 
   for(int i = 1; i < n ; i++){
        ll x = (ans.back() * (n - i))/i;
        ans.push_back(x);
   }
   return ans;
}


vector<vector<long long int>> printPascal(int n) 
{
     vector<vector<ll>>ans;
     for(int i = 1 ; i <= n ; i++){
         ans.push_back(getRow(i));
     }
     return ans;
}

```

</details>
</br>

## [3 Next Permutation](https://www.codingninjas.com/codestudio/problems/next-permutation_8230741?challengeSlug=striver-sde-challenge)
<h4>Logic :</h4>


> - Find first pivot i  from Back is arr[i+1]> arr[i]
> - if no Pivot array is in reverse so just make reverse
> - swap first index where arr[pivot] <br arr[i] from back
> - reverse from pivot +1 to end;  </br> </br>
> Time   -> O(N) + O(N) + O(N)  </br>
> Space  -> O(1) 


[Code Link](./Arrays/03-next-permutation.cpp)
<details>
<summary>Code</summary>

```cpp
#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &arr, int n)
{
     int pivot = -1;
     //break point 
     for(int i = n - 2 ;i >= 0 ; i--){
         if(arr[i+1] > arr[i]){
             pivot = i;
             break;
         }
     }
     // fully dreacresing order so reversing complete array
     if (pivot == -1) {
         reverse(arr.begin() , arr.end());
         return arr;
     }

     //find next greater element
     for(int i = n - 1 ; i >= 0 ;i--){
         if(arr[i] > arr[pivot]){
             swap(arr[i] , arr[pivot]);
             break;
         }
     }
     reverse(arr.begin() + pivot + 1 , arr.end());
     return arr;
}
```
</details> 
</br>

 ## [4 Maximum Subarray Sum]([link](https://www.codingninjas.com/codestudio/problems/maximum-subarray-sum_8230694?challengeSlug=striver-sde-challenge))
<h4>Logic :</h4>



> - Kaldane's Algo
> - keep sum if any point sum is negative we know that in we have max sum is 0 so update sum to 0
> - keep track of max sum  </br> </br>
> Time   -> O(N)   </br>
> Space  -> O(1)


[Code Link](./Arrays/04-maximum-subarray-sum.cpp)
<details>
<summary>Code</summary>

```cpp

#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long int sum = 0 , ans = 0;
    for(int i = 0; i < n ;i++){
        sum+= arr[i];
        if(sum < 0){
            sum = 0;
        }
        ans = max(ans , sum);
    }
    return ans;
}

```
</details> 
</br>


## [5 Sort 0 1 2]((https://www.codingninjas.com/codestudio/problems/sort-0-1-2_8230695?challengeSlug=striver-sde-challenge))
<h4>Logic :</h4>



> - use Low ,Mid , High pointer
> - keep all zero in [0 , low]
> - keep all 1 in [low+1 , mid-1]
> - keep all 2 in [high+1 , n]
> - unsorted element in [mid , high]  </br> </br>
>  Time   -> O(N)   </br>
>  Space  -> O(1) 

[Code Link](./Arrays/05-sort-012.cpp)
<details>
<summary>Code</summary>

```cpp

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int low = 0 , mid = 0 , high = n- 1 ;
   while(mid <= high){
      if(arr[mid] == 0){
         swap(arr[low] , arr[mid]);
         low++ , mid++;
      }else if(arr[mid] == 1 ){
         mid++;
      }else{
         swap(arr[mid] , arr[high]);
         high--;
      }
   }
}

```
</details> 


## [6 Best Time to Buy and Sell Stock](https://www.codingninjas.com/codestudio/problems/best-time-to-buy-and-sell-stock_8230746?challengeSlug=striver-sde-challenge)
<h4>Logic :</h4>


> - Keep Trak of last min price
> - Update maxxprice on each idx  </br> </br>
>  Time   -> O(N)   </br>
>  Space  -> O(1)

[Code Link](./Arrays/06-best-time-to-buy-sell-stock.cpp)
<details>
<summary>Code</summary>

```cpp

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int mini = INT_MAX , maxprofit = 0;
    for(int  i = 0; i < prices.size() ; i++){
        mini = min(mini , prices[i]);
        maxprofit = max(maxprofit , prices[i] - mini);
    }
    return maxprofit;
}

```
</details> 


## [7 Rotate Matrix]((https://www.codingninjas.com/codestudio/problems/rotate-matrix_8230774?challengeSlug=striver-sde-challenge))
<h4>Logic :</h4>


> - Approach 1: Use 4 pointers top , down, left , right
> - Approach 2: First Transprose Matrix then Reverse Each Row  </br> </br>
>  Time   -> O(N*N)   </br>
>  Space  -> O(1)
    

[Code Link](./Arrays/07-rotate-matrix.cpp)
<details>
<summary>Code</summary>

```cpp

#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    if(n==1 || m==1) return;
    //pinter approach 
    int top = 0, bot = n-1, left = 0, right = m-1;
    while(top<bot && left < right){
        int temp = mat[left][top];
        //moving from top to bottom last column
        for(int i = top;i<bot;i++)
            mat[i][left] = mat[i+1][left];

        //moving from left to right first row 
        for(int i=left;i<right;i++)
            mat[bot][i] = mat[bot][i+1];
        //moving to bottom to up first column
        for(int i=bot;i>top;i--)
            mat[i][right] = mat[i-1][right];
        //moving from right to left last row 
        for(int i=right;i>left+1;i--)
            mat[top][i] = mat[top][i-1];

        //fixing value of first element
        mat[top][left+1] = temp;
        top++, bot--,left++,right--;
    }
}


```
</details> 



## [8 Merge Intervals](https://www.codingninjas.com/codestudio/problems/merge-intervals_8230700?challengeSlug=striver-sde-challenge)
<h4>Logic :</h4>


> - Sort by Start Time 
> - push first index in answer
> - if check is ans.back().endTime > current.startTime
>   - then simply update endTime of ans to max of endTime of curr and ans
> - else 
>   - add curent item to ans 
> 
> </br> </br>
> Time  Compelixity -> O(NlogN) + O(N)  </br>
> Space Compelixity -> O(N) for Answer 



[Code Link](./Arrays/08-merge-intervals.cpp)
<details>
<summary>Code</summary>

```cpp

#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/
static bool comp(vector<int> &a ,vector<int>&b ){
    if(a[0] < b[0])return true;
    else if(a[0] > b[0])return false;
    else return a[1] < b[1]; 
}

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
   sort(intervals.begin() , intervals.end() , comp);
   vector<vector<int>>ans;
   ans.push_back(intervals[0]);

   for(int i = 1 ; i < intervals.size() ; i++){
       if(ans.back()[1] < intervals[i][0]){
           //new
           ans.push_back(intervals[i]);
       }else{
        //    update
           ans.back()[1] =max( intervals[i][1] , ans.back()[1]);
       }
   }
   cout<<endl;
   return ans;
}


```

</details> 





## [9 Merger 2 Sorted arrays]([link](https://www.codingninjas.com/codestudio/problems/merge-two-sorted-arrays_8230835?challengeSlug=striver-sde-challenge))

<h4>Logic :</h4>

> - Approach 1 : 
>   - first pointer at end of arr1
>   - second at start of arr2 compare and move 
>   - Sort both array and return;
> - Approach 2 :
>   - Gap Method   
>   - Reduce Gap by so ans swap if Grater </br> 
> 
>
> Time  Compelixity -> O(NLogN)  </br>
> Space Compelixity -> O(1) 



[Code Link](./Arrays/09-merge-sorted-array.cpp)
<details>
<summary>Code</summary>

```cpp

#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	 int i = arr1.size()-1 , j = arr2.size()-1;
	 while(i>=0 and j>=0){
		 arr1[i--] =arr2[j--];
	 }
	 int len = arr1.size();
	 int gap = (len/2 + len%2);
	 while(gap > 0){
		 int l = 0 ,r = gap;
		 while(r < arr1.size()){
			 if(arr1[l] > arr1[r] )swap(arr1[l] , arr1[r]);
			 l++ , r++;
		 }
		 if(gap == 1)break;
		 gap = gap/2 + gap%2;
		 
	 }
	 return arr1;
}


```

</details> 








## [10 Find Duplicate in N+1 Array]([link](https://www.codingninjas.com/codestudio/problems/find-duplicate-in-array_8230816?challengeSlug=striver-sde-challenge&leftPanelTab=0))

<h4>Logic :</h4>



> - Cycle Detection Logic same as Linked It
>    </br> </br>
> Time   -> O(N)  </br>
> Space  -> O(1) 



[Code Link](./Arrays/10-find-duplicate-in-N%2B1.cpp)
<details>
<summary>Code</summary>

```cpp

#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// cycle detection
	
	int slow = arr[0] , fast = arr[0];
	do{
		fast =arr[arr[fast]];
		slow = arr[slow];
		
	}while(fast != slow);
	fast = arr[0];
	while(fast != slow){
		fast = arr[fast];
		slow = arr[slow];
	}
	return slow;
	
}


```

</details> 

## [10 Missing Duplicate ](https://www.codingninjas.com/codestudio/problems/missing-and-repeating-numbers_8230733?challengeSlug=striver-sde-challenge)
<h4>Logic :</h4>



> - Mark Index Visited by marking them negative is we find negative index so current element is our duplicate elmenet
> - and after marking which index is postive value is our missing elemnt  </br> </br>
> Time  Compelixity -> O(N)  </br>
> Space Compelixity -> O(1) 



[Code Link](./Arrays/11-missing-rrepeting-number.cpp)

<details>
<summary>Code</summary>

```cpp

#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	int d , m;

	for(int i = 0; i < n ; i++){
		int idx = abs(arr[i]);
		idx--;
		if(arr[idx] < 0){
			d = abs(arr[i]);
		}else{
			arr[idx] = -arr[idx];
		}
	}

	for(int i = 0 ; i < n ;i++ )if(arr[i] > 0 )m = i+1;
	return {m ,d};
	
}


```

</details> 




<!--


## [8 ](link)
<h4>Logic :</h4>



> - Statement  </br> </br>
> Time   -> O()  </br>
> Space  -> O() 



[Code Link](./Arrays)
<details>
<summary>Code</summary>

```cpp

Code

```

</details> 




## [8 ](link)
<h4>Logic :</h4>



> - Statement  </br> </br>
> Time  Compelixity -> O()  </br>
> Space Compelixity -> O() 



[Code Link](./Arrays)
<details>
<summary>Code</summary>

```cpp

Code

```

</details> 



## [8 ](link)
<h4>Logic :</h4>



> - Statement  </br> </br>
> Time  Compelixity -> O()  </br>
> Space Compelixity -> O() 



[Code Link](./Arrays)
<details>
<summary>Code</summary>

```cpp

Code

```

</details> 




## [8 ](link)
<h4>Logic :</h4>



> - Statement  </br> </br>
> Time  Compelixity -> O()  </br>
> Space Compelixity -> O() 



[Code Link](./Arrays)
<details>
<summary>Code</summary>

```cpp

Code

```

</details> 




## [8 ](link)
<h4>Logic :</h4>



> - Statement  </br> </br>
> Time  Compelixity -> O()  </br>
> Space Compelixity -> O() 



[Code Link](./Arrays)
<details>
<summary>Code</summary>

```cpp

Code

```

</details> 




## [8 ](link)
<h4>Logic :</h4>



> - Statement  </br> </br>
> Time  Compelixity -> O()  </br>
> Space Compelixity -> O() 



[Code Link](./Arrays)
<details>
<summary>Code</summary>

```cpp

Code

```

</details> 




## [8 ](link)
<h4>Logic :</h4>



> - Statement  </br> </br>
> Time  Compelixity -> O()  </br>
> Space Compelixity -> O() 



[Code Link](./Arrays)
<details>
<summary>Code</summary>

```cpp

Code

```

</details> 




## [8 ](link)
<h4>Logic :</h4>



> - Statement  </br> </br>
> Time  Compelixity -> O()  </br>
> Space Compelixity -> O() 



[Code Link](./Arrays)
<details>
<summary>Code</summary>

```cpp

Code

```

</details> 




## [8 ](link)
<h4>Logic :</h4>



> - Statement  </br> </br>
> Time  Compelixity -> O()  </br>
> Space Compelixity -> O() 



[Code Link](./Arrays)
<details>
<summary>Code</summary>

```cpp

Code

```

</details> 




## [8 ](link)
<h4>Logic :</h4>



> - Statement  </br> </br>
> Time  Compelixity -> O()  </br>
> Space Compelixity -> O() 



[Code Link](./Arrays)
<details>
<summary>Code</summary>

```cpp

Code

```

</details>  -->



