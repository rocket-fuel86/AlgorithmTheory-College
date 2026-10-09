arr = [4, 7, 9, 12, 21, 25, 30, 56]

indexLeft = 0
indexRight = len(arr) - 1

is_success = False

search = int(input("N: "))

while indexLeft <= indexRight:
    indexMiddle = (indexLeft + indexRight) // 2
    if search < arr[indexMiddle]:
        indexRight = indexMiddle - 1
    elif search > arr[indexMiddle]:
        indexLeft = indexMiddle + 1
    else:
        print(f"Value {search} found at index {indexMiddle}")
        is_success = True
        break

if not is_success:
    print(f"Value {search} not found")