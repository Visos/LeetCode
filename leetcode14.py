from typing import List

#my solution
def longestCommonPrefix( strs: List[str]) -> str:
    common = strs[0]
    for current in strs:
        i=0
        while i<len(common) and i<len(current):
            print("common: "+ common[i] + "-----current: " + current[i])
            if current[i] != common[i]:
                common = common[:i]
                print("common afetr cut: " + common)
            i+=1
        else:
            common = common[:i]
    return common

#best solution: sorting the list of words is the key
def longestCommonPrefix2( strs: List[str]) -> str:
    common = ""
    l = sorted(strs)
    first = l[0]
    last = l[len(l)-1]
    for i in range(min(len(first), len(last))):
        if first[i] == last[i]:
            common += first[i]
        else:
            return common
    return common
    

a = ["ab","abaa"]
print("longets common prefix: "+ longestCommonPrefix2(a))