
arr[] = {10, 80, 30, 90, 40, 50, 70}
Indexes:  0   1   2   3   4   5   6 
 
pivot = 6, left = 0, right = 5
 
arr[left] = 10 < arr[pivot] = 70 và left <= right, left = 1
arr[left] = 80 > arr[pivot] = 70, tạm dừng
 
arr[right] = 50 < arr[pivot] = 70, tạm dừng
 
Do left < right, đổi chỗ arr[left], arr[right]
arr[] = {10, 50, 30, 90, 40, 80, 70}
left = 2, right = 4
 
arr[left] = 30 < arr[pivot] = 70 và left <= right, left = 3
arr[left] = 90 > arr[pivot] = 70, tạm dừng
 
arr[right] = 40 < arr[pivot] = 70, tạm dừng
 
Do left < right, đổi chỗ arr[left], arr[right]
arr[] = {10, 50, 30, 40, 90, 80, 70}
left = 4, right = 3
 
// Do left >= right
arr[] = {10, 50, 30, 40, 70, 80, 90}.  // Đổi chỗ arr[left] và arr[pivot]
 
Bây giờ, 70 đã nằm đúng vị trí, các phần từ <= 70 nằm phía trước và lớn hơn 70 nằm phía sau.
