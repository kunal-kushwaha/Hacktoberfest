def compute_lps(s,p):
    lps=[0 for c in p]
    i,j=1,0
    while(i<len(p)):
        if p[i]==p[j]:
            lps[i]=j+1
            j+=1
            i+=1
        else:
            if(j>0):
                j=lps[j-1]
            else:
                lps[i]=0  
                i+=1  
    return lps

def kmp(s,p):
    ls=len(s)
    lp=len(p)
    lps=compute_lps(s,p)
    i,j=0,0
    while(i<ls):
        if(j<lp and s[i]==p[j]):
            i+=1
            j+=1
        if(j==lp):
            print("Pattern found at index:",str(i-j))
            j=lps[j-1]
        elif(i<ls and p[j]!=s[i]):
            if(j>0):
                j=lps[j-1]
            else:
                i+=1

if __name__=="__main__":
    s=input()
    p=input()
    kmp(s,p)