#include <iostream>
using namespace std;

int det(int m[3][3]){
	return m[0][0] * m[1][1] * m[2][2] + m[0][1] * m[1][2] * m[2][0] + m[0][2] * m[1][0] * m[2][1] - m[0][2] * m[1][1] * m[2][0] - m[0][0] * m[1][2] * m[2][1] - m[0][1] * m[1][0] * m[2][2];
}
int det1(int m[3][3], int t[3]){
		return t[0] * m[1][1] * m[2][2] + m[0][1] * m[1][2] * t[2] + m[0][2] * t[1] * m[2][1] - m[0][2] * m[1][1] * t[2] - t[0] * m[1][2] * m[2][1] - m[0][1] * t[1] * m[2][2];
}
int det2(int m[3][3], int t[3]){
	return m[0][0]*t[1]*m[2][2]+t[0]*m[1][2]*m[2][0]+m[0][2]*m[1][0]*t[2]-m[0][2]*t[1]*m[2][0]-m[0][0]*m[1][2]*t[2]-t[0]*m[1][0]*m[2][2];
}
int det3(int m[3][3], int t[3]){
	return m[0][0] * m[1][1] * t[2] + m[0][1] * t[1] * m[2][0] + t[0] * m[1][0] * m[2][1] - t[0] * m[1][1] * m[2][0] - m[0][0] * t[1] * m[2][1] - m[0][1] * m[1][0] * t[2];
}

int main(){
	int m1[3][3] = {{7,4,3},{3,2,1},{5,2,2}};
	int m2[3] = {1,-2,0};


	float a = det(m1);
	float a1 = det1(m1,m2);
	float a2 = det2(m1,m2);
	float a3 = det3(m1,m2);
	if (a != 0){
		cout << a1/a<<endl;
		cout << a2/a<<endl;
		cout << a3/a<<endl;

	}
	else
		cout << "error " << endl;

	return 0;
}
