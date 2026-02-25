N=int(input())
somme=0
for i in range (N):
    if i%3==0 or i%5==0:
        somme += i
print(somme)