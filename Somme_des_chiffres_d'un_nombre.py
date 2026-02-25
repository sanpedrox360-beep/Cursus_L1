n=int(input())
somme =0
for i in str(n):
    somme+=int(i)
print(somme)


#2e méthode

a = int(input("Entrez un nombre"))
som=0

while a!= 0:
    chiff = a % 10
    som= som +chiff
    a = a//10

print("La somme des chiffres est:", som)