tc = int(input())
while tc:
    tc -= 1
    string = input()
    i = 0
    ctr = 0
    while i < len(string)-1:
        if string[i] != string[i+1]:
            ctr += 1
            i += 2
        else:
            i += 1
    print(ctr)