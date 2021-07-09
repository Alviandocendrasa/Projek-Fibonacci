a = int(input("Masukkan angka: "))

n1,n2 = 0,1

if(a == 1):
    print(n2)
    
elif (a > 1):
    for i in range(a):
        print(n2)
        temp = n1+n2
        n1 = n2
        n2 = temp