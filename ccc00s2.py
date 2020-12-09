import sys

num = int(sys.stdin.readline())

flows = ["null"]

for i in range(num):
    flows.append(int(input()))

while True:
    thing = int(input())
    if thing == 77:
        break
    elif thing == 99:
        number_to_split = int(input())
        percent = int(input())

        left_fork = flows[number_to_split]*(percent/100)
        right_fork = flows[number_to_split] - left_fork
        flows.insert(number_to_split,left_fork)
        flows[number_to_split+1] = right_fork
    elif thing==88:
        to_join = int(input())
        new_stream = flows[to_join]+flows[to_join+1]
        flows[to_join] = new_stream
        flows.pop(to_join+1)

to_print =""
for i in range(1,len(flows)):
    to_print += (str(flows[i]) + " ")

print(to_print)
