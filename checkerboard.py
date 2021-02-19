lol = input()
lol =int(lol)
x = "x"
o = "o"
outputline = ""
for i in range(lol):
    outputline = outputline + '\n'
    if i % 2 == 0:
        for j in range(lol):
            if j % 2 == 0:
                outputline = outputline + o
            else:
                outputline = outputline + x
    else:
        for j in range(lol):
            if j % 2 == 0:
                outputline = outputline + x
            else:
                outputline = outputline + o


print(outputline)
