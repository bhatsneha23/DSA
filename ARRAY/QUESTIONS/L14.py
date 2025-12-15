class Solutions:
    def longest_common_Prefix(self,strs):
        if not strs:
            return""  #empty string
        
        strs.sort() #lexicographically
        first = strs[0] 
        last = strs[-1]

        i=0 #index variable
        while i < len(first) and i < len(last) and first[i]==last[i]:
            i +=1
        return first[:i] #slicing ka use karke first strin ke 0 se lekar i-1 tk display kr dega
        

user_input = input("ENTER STRING SEPARATED BY SPACE: ")
strs = user_input.strip().split()

obj = Solutions()
result = obj.longest_common_Prefix(strs)
print("Longest common prefix: ",result)