word = input()
alphabet = [ 0 for i in range(26) ]
for i in word :
    alphabet[ord(i) - 97] += 1
for i in range(26) :
    print(alphabet[i], end=" ")