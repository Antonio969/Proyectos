def sucecion(*args):
    contador = 0
    for n in args:
        if args[contador]==0 and args[contador+1]==0:
            return True
        else:
            contador+=1
    return False


print(sucecion(1,2,4,3,2,1,2,43,2,3,12,13,42,23,0,0))