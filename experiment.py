# aab

# a => aab
# a => 


def combination(word):
  length = len(word)

def permutation(word):
  result = []
  word = list(word)

  if len(word) == 1:
    return [word[:]]
  
  for i in range(len(word)):
    n = word.pop(0)

    print(f"sent: {word}")

    perms = permutation(word)

    print(f"{i} :  {perms}")
    perms = list(set(perms))
    for perm in perms:
      perm.append(n)
    
    result.extend(perms)
    word.append(n)
  
  return result

print(permutation("aca"))
