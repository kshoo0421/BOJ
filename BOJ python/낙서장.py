len = 0

def insert(idx, num, arr) :   
    global len
    for i in range(len, idx, -1) :
        arr[i] = arr[i-1]
    arr[idx] = num
    len += 1
    return

def erase(idx, arr) :
    global len
    for i in range(idx, len) :
        arr[i] = arr[i+1]
    len -= 1
    pass

def printArr(arr) :
    for i in range(len) :
        print(arr[i], end=" ")
    print(end="\n\n")
    return

def insert_test() :
    print("***** insert_test *****")
    arr = [ 10, 20, 30, 0, 0, 0, 0, 0, 0, 0 ]
    global len
    len = 3
    insert(3, 40, arr) # 10 20 30 40
    printArr(arr)
    insert(1, 50, arr) # 10 50 20 30 40
    printArr(arr)
    insert(0, 15, arr) # 15 10 50 20 30 40
    printArr(arr)
    return

def erase_test() :
    print("***** erase_test *****")
    arr = [10, 50, 40, 30, 70, 20, 0, 0, 0, 0]
    len = 6
    erase(4, arr)  # 10 50 40 30 20
    printArr(arr)
    erase(1, arr)  # 10 40 30 20
    printArr(arr)
    erase(3, arr)  # 10 40 30
    printArr(arr)
    return

insert_test()
erase_test()


