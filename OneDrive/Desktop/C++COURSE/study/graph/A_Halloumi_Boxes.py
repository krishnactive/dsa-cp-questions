a = int(input())
for i in range(a):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
 
    if sorted(arr)==arr or (k > 1):
        print("YES")
    else:
        print("NO")