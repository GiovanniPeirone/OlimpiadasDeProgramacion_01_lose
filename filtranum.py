
numeros = [13, 101, 28883, 13, 345673, 55 ,9, 110, 101]
resultado = []

def filtranum(numeros , resultado):

    count = 0

    for i in numeros:

        numeros_i_str = str(i)

        if numeros_i_str[0] == numeros_i_str[-1]:
            resultado.append(i)
            
            count += 1

    return count


if __name__ == '__main__':
    
    print(filtranum(numeros, resultado))




