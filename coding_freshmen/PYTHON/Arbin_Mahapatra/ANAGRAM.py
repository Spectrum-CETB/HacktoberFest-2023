def isAnagram(s: str, t: str) -> bool:
  table = {}
  table2 = {}
  for i in s:
    table[i] = table.get(i, 0) + 1
  for i in t:
    table2[i] = table2.get(i, 0) + 1

  return table == table2

if __name__== "__main__":
  s = input("Enter a String")
  t = input("Enter 2nd String")
  if isAnagram(s,t):
    print("Is Anagram")
  else:
    print("Is Not Anagram")
