listPalabras = ["pepe","juan","pedro","limonada","lopez"]

def dameLongitudes(listPalabras):
    listaNPalabras = []
    
    for i in listPalabras:
        listaNPalabras.append(len(i))

    return listaNPalabras

if __name__ == '__main__':
    print(dameLongitudes(listPalabras))