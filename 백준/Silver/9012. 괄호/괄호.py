test = int(input())

class Stack:
    l = []
    point = 0

    def open(self):
        self.l.append(True)
        self.point += 1

    def close(self): # 0: success, 1: error occuring
        if self.point > 0:
            self.l.pop()
            self.point -= 1
            return 0
        else:
            return 1

    def get_point(self):
        return self.point

    def clear(self):
        self.l = []
        self.point = 0

stack = Stack()

while test > 0:
    s = input()
    stack.clear()
    result = True
    for c in s:
        #print(stack.l)
        if c == '(':
            stack.open()
        elif c == ')':
            r = stack.close()
            if r == 1:
                result = False
                break
    if stack.point != 0:
        result = False
    print('YES' if result else 'NO')

    test -= 1