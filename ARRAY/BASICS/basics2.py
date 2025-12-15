# count = 0 #idhar ek var alag se use hoga , direct nhi print krwa sakti kitne number hai total   
# for i in range(0,100,2):
#     count += 1
# print(count)

# insert  
# arr1 = [1,2,3,4]
# arr1.insert(0,12)
# print(arr1)
# insert se khin pr bhi chize add ho jayengi
# append mei error  
# append
# arr1.append(18)
# print(arr1)
# arr1.pop(2)
# print(arr1)

# slicing mei ek sequence uthate hai hm array se
# arr0 = arr1[0:2]
# print(arr0)
# negative indexing :- yeh aage se aur last se 
# arr2 = arr1[3:-1]
# print(arr2)
# rreversing an array
# arr3 = arr1[::-1]
# for i in range(0, len(arr3)):
#     print(arr3[i],end = ' ') #agr bina coma ke sath reverse krana hai tab aise nhi toh direct print bhi krwa sakte hai

# searching
# import array as myarray #myarray idhar alias 
# x = list(range(0,1000,2))
# search_array = myarray.array('i',x)

# for i in range(0,len(search_array[0:10])):
#     print(search_array[i],end=" ")
# print("\n")

# index = search_array.index(120)
# res = search_array[index]
# print(index,res)

# sorting
sort_array =[1,6,2,3,8]
# sorted_array = sort_array.tolist()

sort_array.sort() #ascending 
print(sort_array)

sort_array.sort(reverse = True)  #descending
print(sort_array)

# jo array module se hm array import kr rhe hai uspr sort , insert  etc wali operations nhi chal sakti hai