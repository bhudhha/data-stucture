def res(string,word):
  s=string.replace(word,"")
  return s.strip()
this="       rahul      "
n=res(this,"r")
print(n)