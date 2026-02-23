N=int(input("Entrez le nombre de termes de la suite de Fibonacci: "))
somme=0
a=0
b=1
while N<=0:
 
    print("Erreur: le nombre de termes doit être supérieur à zéro.")
    N=int(input("Entrez le nombre de termes de la suite de Fibonacci: "))

if N==1:
    print(a)
elif N==2:
    print(a)
    print(b)
else :
    print(a)
    print(b)
    for i in range (N-2):
        somme=a+b
        print(somme)
        a=b
        b=somme