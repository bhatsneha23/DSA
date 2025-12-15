# pythom mei list ka kaam array se hota hai
# jab simple array chahiye
# arr = [1,2,3,4]
# print(arr[2])

# value ko change krne ke liye
# arr[2] = 5 
# print(arr)

# jab proper ek hi type ka data chahiye ho jaise cpp aur c mei hota hai
# import array
# arr1 = array.array('i',[1,2,3])
# print(arr1[2])

# agr bde dataset pr yaan math se realted something pr kaam kr rhe ho toh numpy
import numpy as np
arr4 = np.array((1,2,3))

for i in range(0,2):  #KITNI BAAR print krana hai
    print(arr4)

for i in range(0,2): #sirf 0,1 index wale hi dikhenge aur 2nd method slicing hai
    print(arr4[i])

print(arr4[0:2]) #slicing

