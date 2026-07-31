/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generateMatrix(int n, int* returnSize, int** returnColumnSizes) {
    int **result= (int**)malloc(n*sizeof(int*));
    *returnSize=n;
    *returnColumnSizes = (int*)malloc(n*sizeof(int));
for(int i=0;i<n;i++)
{
    result[i] = (int*)malloc(n*sizeof(int));
    (*returnColumnSizes)[i]=n;
}    
int row = 0,m=n;
    int col = 0,index=1;
    while (row <m && col < n)
    {   // loop for col and first row printed
        for (int i = col; i < n; i++)
        {
            result[row][i]=index++;
        }
        row++;
    
        // loop row and last col will be printed
        for (int i = row; i < m; i++)
        {
          result[i][n - 1]=index++;;
        }
        n--;
        if(row<m){
        // loop col and last row will be printed
        for (int i = n - 1; i >= col; i--)
        {
            result[m - 1][i]=index++;
        }
        m--;
        }
    if(col<n){
        // loop for row and first col will be printed
        for (int i = m - 1; i >=row; i--)
        {
            result[i][col]=index++;
        }
        col++;
    }
    }

return result;
}