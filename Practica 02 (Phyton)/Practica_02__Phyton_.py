NUM = 8
nums = [0] * NUM 
total = 0

for i in range(NUM):
    nums[i] = int(input("Digite un numero: "))
    total += nums[i]

print("\nEl total de numero es: ", total, "\n")    