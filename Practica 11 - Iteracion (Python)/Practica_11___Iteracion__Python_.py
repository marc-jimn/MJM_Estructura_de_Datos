# Marcela Jimenez Mendez

num = 0
i = 1
t = 1
resul = 0

linea = int(input("\n Cuantas Tablas: "))
num = linea

print(" ")
while t <= num:
    i = 10
    while i > 1:
        resul = t * i
        print(" ", t , " * ", i, " = ", resul)
        i = i - 1
    print(" ")    
    t = t + 1    
    
print("\n")
