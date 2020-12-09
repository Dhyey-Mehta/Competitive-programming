import sys

num = int(sys.stdin.readline())
things = sys.stdin.readline().split()

for i in range(num):
    things[i] = int(things[i])

things.sort()

final = []

if num%2==0:
    for i in range(num//2,num):
        final.append(things[(num-1)-i])
        final.append(things[i])

else:
    final.append(things[num//2])
    for i in range(num//2+1,num):
        final.append(things[i])
        final.append(things[(num-1)-i])


toSend = ""

for i in final:
    toSend+=str(i)+" "

sys.stdout.write(toSend
