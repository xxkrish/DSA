#include<iostream>
using namespace std;


void printMat(int mat[][3], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int maxRowSum(int mat[][3], int row, int col){
    int maxSumRow = INT_MIN;

        for(int i=0; i<row; i++){
            int curr=0;
            for(int j=0; j<col; j++){
                curr+= mat[i][j];
            }

            maxSumRow = max(maxSumRow, curr);
        }
        
        return maxSumRow;
}

int maxColSum(int mat[][3], int row, int col){
    int maxSumCol = INT_MIN;

        for(int i=0; i<row; i++){
            int curr=0;
            for(int j=0; j<col; j++){
                curr+= mat[j][i];
            }

            maxSumCol = max(maxSumCol, curr);
        }
        
        return maxSumCol;
}

int main() {

    int mat[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};

    int row=4, col = 3;

    printMat(mat, row, col);
    cout<<endl;

    cout<<maxRowSum(mat, row, col)<<endl;

    cout<<endl;

    cout<<maxColSum(mat, row, col)<<endl;

    return 0;
}