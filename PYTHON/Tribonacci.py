n=int(input("Enter the number of terms in your Tribonacci Series: "))
print("Printing the Tribonacci Series...")
def printseries(n):
    if n in (0,1,2):return 0
    elif n==3:return 1
    else:
        return printseries(n-1)+printseries(n-2)+printseries(n-3)
for i in range(1,n+1):
    print(printseries(i),end=',')
