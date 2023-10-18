# Marcela Jimenez Mendez

capacidad = 10
elementos = [0] * capacidad
tope = -1

print(" Teclea elemento de pila: (termina con -1)")

x = 0
CLAVE = -1

while x != CLAVE:
    entrada = input()
    if entrada.isdigit():
        x = int(entrada)
        if tope < capacidad - 1:
            tope += 1
            elementos[tope] = x
        else:
            print(" Excepcion: Pila llena")
            break
    else: 
        print(" Excepcion: Entrada no valida")
        
if tope >= 0:
    print (" Elementos de la pila: ", end=" ")
    while tope >= 0:
        x = elementos[tope]    
        tope -= 1
        print(" ", x , end = " ")
else:
    print(" Pila Vacia")
    
print("\n\n")
