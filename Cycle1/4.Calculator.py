#Arithmetic Caluculator
while 1:
    c=input("Choose your Operation : \n Add\n Substract \n Multiply\n Division\t")
    n=int(input("Enter Operand 1 : "))
    m=int(input("Enter Operand 2 : "))
    if(c=='+'):
        print("The sum is : ",n+m)
    elif(c=='-'):
        print("The Differance is : ",n-m)
    elif(c=='/'):
        print("The Quatient is : ",n/m)
    elif(c=='x'):
        print("The Product is : ",n*m)
    else:
        print("Unidentified Operaion!")
        break

