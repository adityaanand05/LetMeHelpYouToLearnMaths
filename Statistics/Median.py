x = int(input("Enter total numbers of elements : "))
y = []
sum = 0

for i in range(x):
    value = int(input(f"Enter the value {i+1}: "))
    y.append(value)

y.sort()
    
if x % 2 == 0:
    mid1 = x // 2 - 1
    mid2 = x // 2
    median = (y[mid1] + y[mid2]) / 2
else:
    median = y[x // 2]

print("Median:", median)
