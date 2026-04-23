case = int(input())

while (case := case - 1) >= 0:
    C = int(input())
    C -= (quarter := C // 25) * 25
    C -= (dime := C // 10) * 10
    C -= (nickel := C // 5) * 5
    penny = C
    
    print(quarter, dime, nickel, penny)