
size = input()
word = input()
list_letter = []
word = word.lower()
for letter in word:
    if letter in list_letter:
        continue
    else:
        list_letter.append(letter)
if len(list_letter) == 26:
    print("YES")
else: 
    print("NO")


 