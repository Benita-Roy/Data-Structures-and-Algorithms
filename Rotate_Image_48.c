//LEETCODE Question:48 Difficulty:Medium
/*You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.*/
void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int temp;
    
    //swap ith row and jth column element with jth row and ith column element 
    for(int i=0;i<matrixSize;i++)
    {
        for(int j=i+1;j<*matrixColSize;j++)
        {
            temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }

    //reverse the row elements 
    for (int i=0;i<matrixSize;i++)
    {
        for(int j=0;j<*matrixColSize/2;j++)
        {
            temp=matrix[i][j];
            matrix[i][j]=matrix[i][matrixSize-1-j];
            matrix[i][matrixSize-1-j]=temp;
        }
    }

}
