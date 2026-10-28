import random

t = 1
n = 100

print(t, n)
print(*(random.randint(0, 1) for _ in range(0, n)))
