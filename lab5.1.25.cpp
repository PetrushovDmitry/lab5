#include<iostream>
#include <math.h>
using namespace std;
int main(){
	int n = 3;
	int k = 4;
	float m[n][k]={{4,-3,7,-1},{0,13,-2,-1},{2,2,3,0}};
    float tmp, x[n];
    for (int i=0; i<n; i++){
		tmp=m[i][i];
        for (int j=n;j>=i;j--)
    		m[i][j]/=tmp;
        	for (int j=i+1;j<n;j++){
            	tmp=m[j][i];
            	for (int y=n;y>=i;y--)
           			m[j][y]-=tmp*m[i][y];
        }
    }
  x[n-1] = m[n-1][n];
   for (int i=n-2; i>=0; i--)
     {
         x[i] = m[i][n];
         for (int j=i+1;j<n;j++) x[i]-=m[i][j]*x[j];
     }
  for (int i=0; i<n; i++)
    cout<<x[i]<<endl;
 
 return 0;
}