a = int(input("Enter first term (a): "))
d = int(input("Enter common difference (d): "))
n = int(input("Enter term number (n): "))

term = 1 / (a + (n - 1) * d)

print("The", n, "th term of HP is:", term)
