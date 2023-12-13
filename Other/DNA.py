def R(dna):
    ans = ""
    replace = {
        "A" : "T",
        "T" : "A",
        "G" : "C",
        "C" : "G"
    }
    for i in dna.upper():
        # print(i)
        if i in ["A" , "T", "G" , "C"]:
            ans += replace[i]
        else :
            ans += i
    return ans[::-1]

def F(dna):
    return dna.upper().count("A") , dna.upper().count("T") , dna.upper().count("G") , dna.upper().count("C")

def D(dna , find):
    dna = dna.upper()
    temp = ""
    cnt = 0
    for i in range(len(dna) - len(find)):
        for j in range(len(find)):
            temp += dna[i+j]
        if temp in find :
            cnt += 1
        temp = ""
    return cnt
chk = True
dna = input()
# dna = "ATTTGCGGCATATCC"
cmd = input()
for i in dna.upper():
    if i not in ["A" , "T" , "G" , "C"]:
        chk = False
        break
if chk :
    print("Invalid DNA")
elif cmd == "R" :
    print(R(dna))
elif cmd == "F":
    A , T , G , C = F(dna)
    print("A={}, T={}, G={}, C={}".format(A,T,G,C))
elif cmd == "D":
    finding = input()
    print(D(dna , finding))