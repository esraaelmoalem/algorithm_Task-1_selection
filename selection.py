def selection_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        min_index = i  # نفترض أن العنصر الحالي هو الأصغر
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j  # تحديث موقع الأصغر
        # عملية التبديل
        arr[i], arr[min_index] = arr[min_index], arr[i]


def print_array(arr):
    for i in arr:
        print(i, end=" ")
    print()


# الكود الرئيسي
arr = [64, 25, 12, 22, 11]
print("Before sorting:", end=" ")
print_array(arr)

selection_sort(arr)

print("After sorting:", end=" ")
print_array(arr)
