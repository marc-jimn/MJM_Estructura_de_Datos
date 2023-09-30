

# Declara una lista de cadenas 

aves = [" Loro gris", " Paloma de diamante", " Coctel"]
print()  
print(" - Los valores de la lista antes de insertar: ") 

# Itera sobre el vector para imprimir los valores
for ave in aves:
    print(ave, end = " ")
    print()  
 
print("\n")    


# Agrega tres valores al final del vector utilizando push_back()
aves.append(" Mayna")
aves.append(" Periquitos")
aves.append(" Cacatua")
print(" - Los valores del vector despues de insertar: ")

# Iterar sobre el vector para impimir los valores
for ave in aves:
    print(ave, end = " ")
    print()  
 
print("\n")   