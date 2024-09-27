def pegatina(N,K):

    numeroResultante = ""
    
    count = 1

    for i in range (K):
        pegatina = count * K

        if pegatina <= N:
            numeroResultante += str(pegatina)

        count + 1



    return str(numeroResultante)

print(pegatina(7, 7))

