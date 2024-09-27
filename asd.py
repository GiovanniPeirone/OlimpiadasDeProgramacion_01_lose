#numeros = "345892304534543"
listNumeros = [3,4,5,8,9,2,3,0,4,5,3,4,5,4,3]
"""

for i in range(len(numeros)):
    listNumeros.append(i)
"""
def calcular(numeros):
    import math

    numPrimos = []

    for i in numeros:
        if i < 2:
            pass
        # Verificar si es divisible por algún número entre 2 y la raíz cuadrada de n
        for y in range(2, int(math.sqrt(i)) + 1):
            if i % y == 0:
                numPrimos.append(i)
        # Si no se encontró ningún divisor, el número es primo
        else:
            pass

    return numPrimos

if __name__ == '__main__':
    print(calcular(listNumeros))