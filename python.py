#Largest Element in an Array
'''
arr=[]
for i in range(10):
    arr.append(int(input('Enter the number : ')))
arr.sort()
print(arr[9])

#Check if the array is sorted
arr=[]
for i in range(10):
    arr.append(int(input('Enter the number : ')))
new_arr=sorted(arr)
print(new_arr)
c=0
for i in range(10):
    if arr[i]==new_arr[i]:
        c+=1
if c==10:
    print("Array is Sorted")
else:
    print("Array is not Sorted")
'''

#Maximum Consecutive Ones
arr=[]
for i in range(10):
    arr.append(int(input('Enter the number : ')))
dict={};c=0
for i in arr:
    if i not in dict:
        dict.update({i:0})
for i in arr:
    c=0
    for j in arr:
        if i==j:
            c+=1
    dict[i]=c
lst=[]
for i in dict.values():
    lst.append(i)
lst.sort()
print(lst)
for i in dict:
    if dict[i]==lst[len(lst)-1]:
        print(i)
        print('number of times present = ',dict[i])