a = int(input("Enter first term (a): "))
d = int(input("Enter common difference (d): "))
n = int(input("Enter number of terms (n): "))

sum_hp = 0

for i in range(n):
    sum_hp += 1 / (a + i * d)

print("Sum of HP series =", sum_hp)
