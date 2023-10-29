# Marcela Jimenez Mendez

def sumaRecursiva(n):
    if n <= 9:
        return n
    else:
        return sumaRecursiva(n / 10) * n % 10
        		
def sumaIterativa(n):
    suma = 0
    
    while n > 9:
        suma = suma + n % 10
        n = n / 10
        
    return suma + n    

n = 0
resultado1 = 0
resultado2 = 0

n = int(input("\n Digite numero: "))
print(" ");

resultado1 = sumaRecursiva(n)
resultado2 = sumaIterativa(n)

print(" Suma Recursiva: ",resultado1," ")
print(" Suma Iterativa: ",resultado2,"\n")
