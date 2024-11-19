from typing import List

def longestCommonPrefix( strs: List[str]) -> str:
    common = strs[0]
    j=0
    for current in strs:
        i=0
        while i<len(common) and i<len(current):
            j+=1
            print("common: "+ common[i] + "-----current: " + current[i])
            if current[i] != common[i]:
                common = common[:i]
                print("common afetr cut: " + common)
            i+=1

    print(j)
    return common

a = ["cardog","carace", "cardiB", "car"]
print("longets common prefix: "+ longestCommonPrefix(a))