s = input().strip()
k = len(set(s))
print("CHAT WITH HER!" if k % 2 == 0 else "IGNORE HIM!")