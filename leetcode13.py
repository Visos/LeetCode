#my solution, good intuition but i have to learn to use map
def romanToInt( s: str) -> int:
    l = len(s)-1
    total = 0
    last = 0
    while l>=0 :
        if s[l] == "I":
            a=1
        elif s[l] == "V":
            a=5
        elif s[l] == "X":
            a=10
        elif s[l] == "L":
            a=50
        elif s[l] == "C":
            a=100
        elif s[l] == "D":
            a=500
        elif s[l] == "M":
            a=1000
        if a < last :
            total -= a
        else:
            total+=a
        l-=1
        last = a

    return total

#best solution using map
def romanToInt2(s: str) -> int:
    m = {
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000
    }
    
    ans = 0
    
    for i in range(len(s)):
        if i < len(s) - 1 and m[s[i]] < m[s[i+1]]:
            ans -= m[s[i]]
        else:
            ans += m[s[i]]
    
    return ans






a = "MCMXCIV"
print("the roman to integer: " + str(romanToInt(a)))

