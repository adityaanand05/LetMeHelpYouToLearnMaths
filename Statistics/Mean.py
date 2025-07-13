x = int(input("Enter total numbers of elements : "))
y = []
sum = 0

for i in range(x):
    value = int(input(f"Enter the value {i+1}: "))
    y.append(value)
    y.sort()
    sum += value

print(y)
print(sum/x)

