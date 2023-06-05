# Strivers-Sheet-Challenge

Hello connections, Striver (Raj Vikramaditya) announced SDE Sheet Challenge and I am participating in this challenge.🔥
Let's push our boundaries, embrace the learning process, and strive for excellence together. 🌟🚀🤝
Here's to the beginning of an amazing adventure! Wish me luck! 🍀
This is the GitHub repo where I will be adding my codes
And Do try the [SDE Sheet](https://lnkd.in/gcHXDXkw)
#StriversSheetChallenge #DSA #SdeSheetChallenge


# Table Of Content
- [Strivers-Sheet-Challenge](#strivers-sheet-challenge)
- [Table Of Content](#table-of-content)
- [Array](#array)
  - [1 Set Matrix Zero](#1-set-matrix-zero)
  - [2 Prob Name](#2-prob-name)



# Array 
## [1 Set Matrix Zero](https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_8230862?challengeSlug=striver-sde-challenge)

<h4>Logic :</h4>

```text
mark starting of row and column to be zero for current i,j for example if
matrix[i][j] == 0 mark matrix[i][0] = 0 and matrix[0][j] = 0 now traverse
for specific row and column for mark the entire for and entire colum zero.
special case first element [0][0];

Time Compelixity --> O(N*N) + O(N) + O(N)
space --> O(1)

```

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
<br>

## [2 Prob Name](link)

<h4>Logic :</h4>

```text
statement

Time  Compelixity --> O()
Space Compelixity --> O()

```

<details>
<summary>Code</summary>

```cpp
```
</details>

