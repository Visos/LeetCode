#Given an integer x, return true if x is a palindrome, and false otherwise.

#solution using string
def isPalindromeS( x: int) -> bool:
    number = str(x)
    l = len(number)-1
    i = 0
    while i<l:
        if (number[i] == number[l]):
            i = i+1
            l = l-1
        else:
            return False    
    return True

#solution1
def isPalindrome1( x: int) -> bool:
    if x<0:
        return False
    temp = x
    while temp !=0:
        reversed = reversed * 10 + temp%10
        temp//=10
    return (reversed == x)


#solution2  reversing only half of the string
def isPalindrome2( x: int) -> bool:
    if x<0 or(x!= 0 and x%10==0 ):
        return False
    
    reversed =  0
    temp = x

    while reversed<x : 
        reversed  = reversed*10 + temp%10
        temp//=10
    return (reversed == x)
    




a = 2222
print("is number " + str(a) +" palindrome? " + str(isPalindrome2(a)))

