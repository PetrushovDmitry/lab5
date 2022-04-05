
n = 3
m = [[5,-2,-1],[2,-1,-1],[2,-1,-8]]
b = [0,-1,1]
U = [[0,0,0],[0,0,0],[0,0,0]] 
L = [[0,0,0],[0,0,0],[0,0,0]]
y = [0,0,0]
x = [0,0,0]
for i in range(n):
    for j in range(n):
        U[0][i] = m[0][i]
        L[i][0] = m[i][0] / U[0][0]
        sum = float(0)
        for k in range(i):
            sum += L[i][k] * U[k][j]
        U[i][j] = m[i][j] - sum
        if i > j:
            L[j][i] = 0
        else:
            sum = 0
            for k in range(i):
                sum += L[j][k] * U[k][j]
            L[j][i] = (m[j][i] - sum) / U[i][i]
for i in range(0,n):
    y[i] = b[i]
    for k in range(0,i-1):
        y[i] -= L[i][k]*y[k]
for i in range(0,n):
    x[i] = y[i]/U[i][i]
    for k in range(0,i-1):
        x[i] -= U[i][k]*x[k]/U[i][i]
print(x)
