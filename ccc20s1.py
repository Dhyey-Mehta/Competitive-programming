import sys
import math

num = int(sys.stdin.readline())
times = []
time_to_dist = {}

for i in range(num):
    he = sys.stdin.readline().split()
    times.append(int(he[0]))
    time_to_dist[int(he[0])] = int(he[1])

times.sort()

fastest = 0
for e in range(1,num):
    we = abs((time_to_dist[times[e]]-time_to_dist[times[e-1]])/(times[e]-times[e-1]))
    if we>fastest:
        fastest = we

print(fastest)
