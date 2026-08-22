# List example
# list can add  remove or change data
prime_numbers = [2, 3, 5, 7, 11, 13, 17]
#print(type(prime_numbers))
# Tuple example 
# Tuples cannot be changed , they are immutable
#can be made more quickly than lists.
perfect_squares = (1, 4, 9, 16, 25, 36)
#print(type(perfect_squares))
# Display lengths

#print(" Primes = ", len(prime_numbers)) 
#print("Squares = ", len(perfect_squares))

# Iterate over both sequences
#for p in prime_numbers:
  #print ("Prime: ", p)

#for n in perfect_squares:
  #print("Square: ", n)
   
#print("List methods")
#print(dir(prime_numbers))
#print(89*"-")
#print("Tuple methods ") 
#print(dir(perfect_squares))

import sys
#print(dir(sys))
#print(help(sys.getsizeof))

list_eg = [1, 2, 3, "a", "b", "c", True, 3.14159] 
tuple_eg = (1, 2, 3, "a", "b", "c", True, 3.14159)

print("List size = ", sys.getsizeof(list_eg))
print("Tuple size = ", sys.getsizeof (tuple_eg))

import timeit
list_test = timeit.timeit(stmt="[1,2,3,4,5]", number=1000000)

tuple_test = timeit.timeit(stmt="(1,2,3,4,5)", number=1000000)

print("list time: ", list_test) 
print("Tuple time: ", tuple_test)


empty_tuple = () 
test0 = ("a")
test1 = ("a",)
test2 = ("a", "b")
test3 = ("a", "b", "c")
print(empty_tuple)
print(test0)
print(test1) 
print(test2)
print(test3)

test1 = 1,
test2 = 1, 2
test3 = 1, 2, 3
print(test1)
print(test2)
print(test3)

print(type(test1)) 
print(type(test2))
print(type(test3))

# (age, country, knows python) 
survey = (27, "Vietnam", True)

age = survey[0]
country = survey[1] 
knows_python = survey[2]

print("Age =", age) 
print("Country =", country) 
print("Knows Python?", knows_python)

survey2 = (21, "Switzerland", False)
age, country, knows_python = survey2 
print("Age =", age) 
print("Country =", country) 
print("Knows Python?", knows_python)

a,b,c = (1,2,3)

country = ("Australia")
#country = ("Australia",)
print(country)