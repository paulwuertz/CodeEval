n=12
for i in range(1,n+1):
    zLine=""
    for j in range(1,n+1):
        z=i*j
        z=str(z)
        if(len(z)==1):
            z="   "+z
        if(len(z)==2):
            z="  "+z
        if(len(z)==3):
            z=" "+z
        zLine+=z
    print(zLine)
