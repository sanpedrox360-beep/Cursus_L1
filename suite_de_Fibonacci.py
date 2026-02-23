N=int(input("Entrez le nombre de termes de la suite de Fibonacci: "))
sub=0
a=0
b=1
if N<=0:
    print("Erreur: le nombre de termes doit être supérieur à zéro.")
elif N==1:
    print(a)
else:
    print(a)
    print(b)
    for i in range (N-2):
        sub=a+b
        print(sub)
        a=b
        b=sub