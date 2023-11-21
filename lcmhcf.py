def lcm(a,b):
    return(a*b)//hcf(a,b)

def hcf(a,b):
    while b:
        a,b=b,a%b
    return a
    
t= int(input())
for _ in range(t):
    a,b=map(int,input().split())
    r1=lcm(a,b)
    r2=hcf(a,b)
    print(r1,r2)
    t-=1