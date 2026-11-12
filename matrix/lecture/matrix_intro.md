# Matrix / 2-D Array

* A matrix or two-dimensional (2D) array is a data structure that organizes elements in a grid format consisting of rows and columns.

code
```
// Syntax: data_type array_name[rows][columns];
int matrix[2][3] = {
    {1, 2, 3},  // Row 0
    {4, 5, 6}   // Row 1
};
```

### How to Traverse a 2D Array

- To look at or process every item inside a matrix, you use nested loops. The outer loop moves through the rows, while the inner loop moves through the columns of that specific row.

code
```
for(int i=0; i<n; i++){
     for(int j=0; j<n; j++){
          cout << arr[i][j];
     }
}
```