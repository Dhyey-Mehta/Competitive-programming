import sys
import math

num =int(sys.stdin.readline())

things = []

for i in range(num):
    nums = int(sys.stdin.readline())
    things.append(nums)

things.sort()

shortest=100000000000000000000
for i in range(1,len(things)-1):
    dist =abs(things[i]-things[i-1])/2+abs(things[i+1]-things[i])/2
    if dist<shortest:
        shortest = dist
print(shortest)
