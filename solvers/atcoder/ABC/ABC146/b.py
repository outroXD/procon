class Cycle:
    def __init__(self, list, n):
        self.i = 0
        self.list = list
        self.n = n

    def next(self):
        self.i = (self.i + 1) % len(self.list)
        return self.list[self.i]

    def previous(self):
        self.i = (self.i - 1 + len(self.list)) % len(self.list)
        return self.list[self.i]

    def present(self):
        return self.list[self.i]

    def reset(self):
        self.i = 0
        return

    def get_ans(self, c):
        self.reset()
        while True:
            if c == self.list[self.i]:
                break
            else:
                self.next()
        cnt = self.n
        while cnt != 0:
            self.next()
            cnt -= 1
        return self.list[self.i]


N = int(input())
S = input()

cycle = Cycle(['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'], N)

for c in S:
    print(cycle.get_ans(c), end="")
