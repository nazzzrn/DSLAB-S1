a,b,c=map(int,input("Enter three numbers : ").split())
def greatest(a,b,c):
    if((a)>(b) and (a)>(c)):
        return a
    elif((b)>(a) and (c)<(b)):
        return b
    else:
        return c
print("The Largest number is : ",greatest(a,b,c))
