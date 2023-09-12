n = int(input())

numeros = []

for i in range(n):
    numeros.append(int(input()))
x = sorted(set(numeros))
for l in range(len(x)):
    print("{} aparece {} vez(es)".format(x[l],numeros.count(x[l]))) 

