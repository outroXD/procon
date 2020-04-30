N = int(input())
words = [input() for _ in range(N)]
s = set()
for i, word in enumerate(words):
    if word in s:
        print('No')
        exit()
    if i != 0:
        if words[i-1][-1] == word[0]:
            s.add(word)
        else:
            print('No')
            exit()
    else:
        s.add(word)
print('Yes')
