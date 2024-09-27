
print((3 * 1 * 3 * 7 * 4 * 7 * 10 * 8 * 2) + (2 * 8 * 10 * 6 * 2 * 9 * 7 * 7 * 4 * 6 * 2 * 9))




"""
N = [2, 6]
Caja = [3, 1, 3, 
        7, 4, 7
]
Producto = [
    10, 8, 2,
    2, 8, 10,
    6, 2, 9,
    7, 7, 4,
    6, 2, 9
]

def supercajas2(N, Caja , Producto):

    Caj = 0
    Produ = 0

    for i in Caja:
        Caj = Caj * i

    for i in Producto:
        Produ = Produ * i

    resuFin = Caj -  Produ

    return resuFin

print(supercajas2(N , Caja, Producto))    
"""