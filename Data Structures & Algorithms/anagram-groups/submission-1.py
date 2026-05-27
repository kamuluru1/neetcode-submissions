class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        result = defaultdict(list)

        for s in strs:
            count = [0] * 26 #Dictonary key holding the count of values from a to z. 

            for c in s:
                count[ord(c) - ord('a')] += 1 #Scaling the values to 1-26 
            
            result[tuple(count)].append(s) #Turning the list into a tuple and appending the string to the value
        
        return result.values() #Returning the values st each index in the form of a list.