self._lst=[]
print("Enter the number of element")
num=int (input())

print("Enter element")
for i in range (num):
    var=int(input())
    self._lst.append(var)

def iterator(self):
    result=[]

    print("Enter the number of element")
    num=int (input())

    print("itarate by")
    e=int (input())
    e1=e
    a=0
    while(e<num):
        result.append(self._lst[e])
        e=e+1

    while(a<e1):
        result.append(self._lst[a])
        a=a+1
    print(result)

iterator()
