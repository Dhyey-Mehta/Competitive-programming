tests=int(input())

num_of_t = 0
num_of_s = 0

for i in range(tests):
    asd = input()
    
    for i in asd:
        if i.lower() == "t":
            num_of_t +=1
        elif i.lower() == "s":
            num_of_s +=1
        
if num_of_t > num_of_s:
    print("English")
else:
    print("French")
