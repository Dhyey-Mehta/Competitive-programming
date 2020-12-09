days = int(input())

first= list(map(int,input().split()))
second = list(map(int,input().split()))

max = 0
first_sum = 0
second_sum = 0
for i in range(days):
    first_sum += first[i]
    second_sum += second[i]
    if first_sum == second_sum:
        max = i+1

print(max)
