#include <iostream>
using namespace std;
 
int main(){
    int n = 3;
    float m[n][n] = {{2,2,0},{-1,2,-2},{2,-2,3}};
    float eps = 0.01;
    float x0[n]={2,3,0};
	float x[n]={1,1,1};   
    while (true){       
        float x1[n] = {0,0,0};
 
        for (int i = 0; i < n; i++){
            x1[i] = x0[i];
            for (int j = 0; j < n; j++){
			
                if (j < i){
                    x1[i] -= m[i][j] * x1[j];
                }
                if (j > i){
                    x1[i] -= m[i][j] * x[j];
                }
            }
 
            x1[i] /= m[i][i];
		}
 
        float eps1 = 0;
        
        for (int i = 0; i < n; i++)
        {
            eps1 = abs (x1[i] - x[i]);
        }

        if (eps1 < eps)
        {
            break;
        }
        for(int i;i < n;i++)
        	x[i]= x1[i];
    }
 	for (int i=0;i<n;i++)
    cout << x[i] << endl;
 
    return 0;   
}