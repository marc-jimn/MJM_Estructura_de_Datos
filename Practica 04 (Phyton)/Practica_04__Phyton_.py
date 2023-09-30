# Marcela Jimenez Mendez
# Arreglo Bidimensional

maxf = 3
maxc = 5

a = [[0.0] * maxc for _ in range (maxf)]

# Leer el array
for f in range(maxf):
    for c in range(maxc):
        a[f][c] = int(input("Ingrese un numero: ".format(maxf+1, maxc+1)))
      
        
# Escribir el array
print()
for f in range(maxf):
    for c in range(maxc):
        print(a[f][c], end = " ")
    print()   
print()      
