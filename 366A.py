n = input()
a=""
b=""

for i in range(1,n):
    if i>1:
        a+="that "
    if i%2==1:
        a+="I hate "
    else:
        a+="I love "

a+="it"
print(a)

