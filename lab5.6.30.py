m1 = [[3,1,5],[5,4,9],[2,2,4]]
s = [0,0,-1]
n = len(m1)
res = [0,0,0]
for i in range(0,n):
    res[i]= s[i]/m1[i][i]
eps = 0.01
xn = [0,0,0]
m = 0
t = 0
for i in range(0,n):
    aq = 0
    aw = 0
    c = 0
    for j in range(0,n):
        if i == j:
            aq = m1[i][i]
        else:
            aw += m1[i][j]
    if aw >= aq:
        c +=1
    if c > 0:
        print("условие сходимости не выполнено")
        t = 1
if t == 0:
    while m !=2:
        c+=1
        for i in range(0,n):
             xn[i]=res[i]
             for j in range(0,n):
                 if i != j:
                     xn[i] -= m1[i][j]/m1[i][i]*res[j]
        for i in range(0,n):
            if abs(xn[i]-res[i]) < eps:
                m = 1
        for i in range(0,n):
            res[i] = xn[i]
    print(res)
print(c)
