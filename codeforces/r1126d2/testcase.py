import random

print(1, 2*10**5, random.randint(1, 2*10**5 + 1), 2, *(random.randint(0, 2*10**5 + 1) for _ in range(0, 2*10**5)))
