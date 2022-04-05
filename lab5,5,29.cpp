#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float A[3][3] = {{-3,2,5},{-5,3,8},{-2,-1,3}};
    float U[3][3];
    float b[3]= {2,-1,-1};
	float x[3], y[3];
    int n, k,z;
    int i, j;
    float temp;
    n = 3;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (A[i][j] != A[j][i]){
            	if (z == 1) break;
                cout << "matrix not symmetrical" << endl;
                z = 1;
        }
	if(z!=1){
        temp = 0;
        for (int k = 0; k < i; k++)
            temp = temp + U[k][i] * U[k][i];
        U[i][i] = sqrt(A[i][i] - temp);
        for (j = i; j < n; j++)
        {
            temp = 0;
            for (k = 0; k < i; k++)
                temp = temp + U[k][i] * U[k][j];
            U[i][j] = (A[i][j] - temp) / U[i][i];
        }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << U[i][j]<<" ";
        }
        cout << endl;
    }
    for (i = 0; i < n; i++)
    {
        temp = 0;
        for (int k = 0; k < i; k++)
            temp = temp + U[k][i] * y[k];
        y[i] = (b[i] - temp) / U[i][i];
    }
    for (i = n - 1; i >= 0; i--)
    {
        temp = 0;
        for (int k = i + 1; k < n; k++)
            temp = temp + U[i][k] * x[k];
        x[i] = (y[i] - temp) / U[i][i];
    }
    for (i = 0; i < n; i++)
        cout << x ;
	}
    return 0;
}