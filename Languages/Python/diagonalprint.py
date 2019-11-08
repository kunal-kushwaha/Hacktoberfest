if __name__ == "__main__":
    t=int(input())
    for testcases in range(t):
        R=int(input())
        C=int(input())
        a=[]
        for i in range(R):
            a.append([int(x) for x in input().split()])

        for line in range(1,R+C):
            start_row=max(0,line-C)
            row=start_row
            col=min(line-1,C-1)
            while row<R and col>=0:
                print(a[row][col],end=' ')
                row=row+1
                col=col-1  
        print()

