a=input("Enter string : ").lower()

ab=set(a.lower())

for j in ab:
    count=0

    for i in a:
        if i==j:
            count+=1

    print(f"Frequency of \"{j}\" in \"{a}\" is {count}")
