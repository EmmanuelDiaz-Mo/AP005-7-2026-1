
b = True
while b==True:
    a = input("Por favor ingrese un valor")
    aInt = int(a)
    mod = aInt%2
    if(mod == 0):
         print("a Es un numero Par")
    else:
         print("a no es PAR, es IMPAR")
    c = input("¿Quiere continuar? Digite(S/N)")
    if(c == 'S'or c== 's'):
        b = True
    else:
        b = False