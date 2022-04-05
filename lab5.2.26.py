import math
def det(m):
    return m[0][0]*m[1][1]*m[2][2]+m[0][1]*m[1][2]*m[2][0]+m[1][0]*m[2][1]*m[0][2]-m[2][0]*m[1][1]*m[0][2]-m[1][0]*m[0][1]*m[2][2]-m[2][1]*m[1][2]*m[0][0]
m1 = [[5,-2,4],[2,-3,7],[8,-5,11]]
s = [-3,1,1]
m2 = [[0 for k in range(len(m1))] for n in range(len(m1))]
x =[0 for n in range(len(m1))]
a = det(m1)
n = len(m1)
print (n)
for l in range(n):
    for i in range(n):
        for j in range(n):
            m2[i][j] = m1[i][j]
    for z in range(n):
        m2[z][l] = s[z]
    x[l] = det(m2)/a
print(x)
        
