import sys
import pegatina2
allTokens = iter(sys.stdin.read().split())
def readToken():
    return next(allTokens)

def main():
    N = int(readToken())
    K = int(readToken())
    returnedValue = pegatina2.pegatina(N, K)
    print(returnedValue)


if __name__ == "__main__":
    main()

