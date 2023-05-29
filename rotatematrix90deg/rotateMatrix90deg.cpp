#include <iostream>

using namespace std;

#define N 4

void rotate90Clockwise(int a[N][N])
{
 
    // Traverse each cycle
    for (int i = 0; i < N / 2; i++) {
        for (int j = i; j < N - i - 1; j++) {
 
            int temp = a[i][i];
            a[i][j] = a[N - i -1][i];
            

        }
    }
}

void printMatrix(int arr[N][N])
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << arr[i][j] << " ";
        cout << '\n';
    }
}
 


int main()
{
int arr[N][N] = 
{   
    { 1, 2, 3, 4 },
    { 5, 6, 7, 8 },
    { 9, 10, 11, 12 },
    { 13, 14, 15, 16 } 
};

    rotate90Clockwise(arr);
    printMatrix(arr);

}