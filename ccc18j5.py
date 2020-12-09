import sys

num_pages = int(sys.stdin.readline())

graph = {}

for i in range(1,num_pages+1):
    paths = sys.stdin.readline().split()
    paths.pop(0)
    toApp = list(map(int,paths))
    graph[i] = toApp
visited = []
exploring = []

exploring.append(1)
depth = {1:1}
shortest = 10000000000000
visited.append(1)
while(len(exploring)>0):
    vertex = exploring[0]
    exploring.pop(0)
    if len(graph[vertex]) == 0 and depth[vertex]<shortest:
        shortest = depth[vertex]
    for i in graph[vertex]:
        if visited.count(i)==0: 
            visited.append(i)
            depth[i] = depth[vertex]+1
            exploring.append(i)


if len(visited) == num_pages:
    print("Y")
else:
    print("N")
print(shortest)
