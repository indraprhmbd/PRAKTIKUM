# arr="hai namaku arsya"
# brr=1247
# def myname(a,b):
#     chara = a[1]
#     buru = b
#     return chara,buru
# print(myname(arr,brr))
# for i in range (len(arr)):
#     print(brr)
#     brr+=1
# print(brr)
# print("end?")
# print(arr[2])
# a=[1,4,6,4,7,5]

# def average(a):
#     jumlah=0
#     for i in a:
#         jumlah+=i
#     return jumlah/len(a)



# for i in range(len(a)):
#     print("Hello")
# print(average(a))
# class Solution:
#     def __init__(self, word1, word2):
#         """
#         :type word1: str
#         :type word2: str
#         :rtype: str
#         """
#         self.word1 = str(word1)
#         self.word2 = str(word2)

#     def mergeAlternately(self):
#         mergeString = ""
#         panjangkata = len(self.word1+self.word2)
#         a = 0
#         while a <= panjangkata:
#             mergeString += self.word1[a]
#             mergeString += self.word2[a]
#             a+=1
#             if a == len(self.word1):
#                 while a < len(self.word2):
#                     a += 1  
#                     mergeString += self.word2[a-1]
#                 break
#             elif a == len(self.word2):
#                 while a < len(self.word1):
#                     a += 1  
#                     mergeString += self.word1[a-1]
#                 break
#         return mergeString

# coba = Solution("aceg","bdfh")

# print(coba.mergeAlternately())
        