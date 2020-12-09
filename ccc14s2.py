num = int(input())

first = input().split()
second = input().split()

check = {}
good = True

for i in range(num):
    if first[i] == second[i]:
        print("bad")
        good = False
        break
    elif first[i] not in check:
        check[first[i]] = second[i]
        check[second[i]] = first[i]
    else:
        if check[first[i]]==second[i]:
            continue
        else:
            print("bad")
            good = False
            break

if good:
    print("good")
