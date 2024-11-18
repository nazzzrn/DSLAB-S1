#Quadratic Equations
import math
a=int(input("ax^2+bx+c\nEnter a : "))
b=int(input("Enter b : "))
c=int(input("Enter c : "))
d=(b*b-4*a*c)
if d>0:
    print(f"The Quadratic equation has real and distinct roots which are : {(-b-math.sqrt(d))/(2*a)} and {(-b+math.sqrt(d))/(2*a)}")
elif d==0:
    print(f"The Quadratic equation has real equal roots which is : {-b/(2*a)}")
else:
    print(f"The Quadratic equation has distinct and imaginary roots whih are : \nroot1={-b/(2*a)}-{math.sqrt(-d)/(2*a)}i \nroot2={-b/(2*a)}+{math.sqrt(-d)/(2*a)}i")