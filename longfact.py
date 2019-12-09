a = input();
def fact(x):
    if(x!=0):
        return (fact(x-1)*x)
    return 1

print fact(a)
