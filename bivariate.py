import random
import os
counter = 0

def bivariate(x,y):
    global counter

    while y>1:
        counter = counter + 1
        y = y/2
        x = x+1

    while x>0:
        counter = counter + 1
        x = x-1
    return

if __name__ == '__main__':
    for i in range(100):
        x = random.randint(1,500)
        y = random.randint(1,500)
        path = "./bivariate"
        try:
            os.mkdir(path)
        except OSError as error:
            pass
        bivariate(x,y)
        with open("./bivariate/traces1", 'a') as f:
            print("{};{}".format(x, counter), file=f)
        with open("./bivariate/traces2", 'a') as f:
            print("{};{}".format(y, counter), file=f)
        counter = 0
