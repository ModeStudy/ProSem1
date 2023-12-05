def suma():
    a = int(input("Ingresa un numero: "))
    b = int(input("Ingresa otro numero: "))
    print(f"La suma de {a} y {b} es {a+b}")

def cubo():
    a = int(input("Ingresa un numero: "))
    print(f"El cubo de {a} es {a**3}")

def primos():
    esPrimo = True
    for i in range(10, 21):
        esPrimo = True
        for j in range(2, i):
            if i % j == 0:
                esPrimo = False
                break
        if esPrimo:
            print(i)

def tablaMultiplicar():
    a = int(input("Ingresa un numero: "))
    for i in range(1, 11):
        print(f"{a}x{i}={a*i}")

def arbolNavidad():
    altura = int(input("Ingresa la altura del arbol: "))
    for i in range(1, altura+1):
        print(" "*(altura-i) + "#"*(2*i-1))
    print(" "*(altura-2) + "##")
    print(" "*(altura-2) + "##")

suma()
cubo()
primos()
tablaMultiplicar()
arbolNavidad()
