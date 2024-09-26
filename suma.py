
numeros = [5,5,5,5,5,5,5,5,5,5]

def suma(numeros):

    numero = 0
    
    for i in numeros:

        numero = numero + i


    return numero 
if __name__ == "__main__":
    print(suma(numeros))