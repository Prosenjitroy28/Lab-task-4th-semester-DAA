t = int(input())  
for _ in range(t):
    n = int(input())   
    value=-1
    index=-1
    for i in range(n):
        a, b = map(int, input().split())
        if a/b>value:
            value=a/b
            index=i+1
    print(index)        
