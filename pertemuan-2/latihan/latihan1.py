n = int(input("Masukkan nilai : "))
arr = input("masukkan bilangan : ").split()

for i in range(n-2) :
    for j in range(i + 1, n) :
        if arr[i] == arr[j] :
            print("false")
        else :
            print("true")