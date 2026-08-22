num = 3
#num = 3.14
print(type(num))

#Arithmetic Operators:
#Addition:        3 + 2
#Subtraction:     3 - 2
#Multiplication:  3 * 2
#Division:        3 / 2
#Floor Division:  3 // 2 (drops decimal)
#Exponent:        3 ** 2
#Modulus:         3 % 2  (gives remainder)


print(3 / 2)
print(3 // 2)
print(3 % 2)
print(4 % 2)
#(any number) % 2 
# -> gives remainder 1 , odd no.
# -> gives remainder 0 , even no.

print(3 * 2 + 1)
print(3 * (2 + 1))

num = 2
#num = num + 1
#num += 1
num *= 10
print(num)

# Some built in functions 
print(dir(num))

print(abs(-3)) 
print(round(3.3))
print(round(3.5))
print(round(3.8))
print(round(3.75,1))


#Comparisons:
#Equal:            3 == 2
#Not Equal:        3 != 2
#Greater Than:     3 > 2
#Less Than:        3 < 2
#Greater or Equal: 3 >= 2
#Less or Equal:    3 <= 2

num_1 = 3
num_2 = 2
print(num_1 == num_2)
print(num_1 != num_2)
print(num_1 > num_2)
print(num_1 < num_2)
print(num_1 >= num_2)
print(num_1 <= num_2)
        
num_1 = '100'
num_2 = '200'
print(num_1 + num_2) 
#casting to avoid concatenation
num_1 = int(num_1)
num_2 = int(num_2)
print(num_1 + num_2) 












