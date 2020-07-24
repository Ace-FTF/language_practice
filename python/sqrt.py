#!/usr/bin/python

import math

x = 1;
while x > 0:
    x = x + 1
    m = int(math.sqrt(x + 100))
    n = int(math.sqrt(x + 100 + 168))

    if m * m == x + 100 and n * n == x + 100 + 168:
        print(x)
        break

print"-------"

a = math.sqrt(2)
print"a == ", a

b = int(math.sqrt(2))
print"b == ", b

