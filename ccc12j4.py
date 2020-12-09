k = int(input())
letter = input()

alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ"
hi = ""

for i in range(1,len(letter)+1):
    s = 3 * i + k
    pos = alphabet.rfind(letter[i-1])
    hi += alphabet[pos-s]

print(hi)
