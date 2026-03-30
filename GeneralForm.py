a = int(input("Enter first term (a): "))
d = int(input("Enter common difference (d): "))
n = int(input("Enter number of terms (n): "))

print("Harmonic Progression:")

for i in range(n):
    term = a + i * d
    print(f"1/{term}", end=" ")
