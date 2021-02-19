string = input()
counter = 0
for i in string:
    if i == "(":
        counter=counter+1
        
    if i == ")":
        counter=counter-1
        

if counter == 0:
    print(True)
else:
    print(False)