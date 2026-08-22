#SOCRATICA NOTES :-

example = list()
example = [] #lists are created by 
             #square brackets

primes = [2, 3, 5, 7, 11, 13]
print(primes.append(17))
primes.append (19)
print(primes)

primes = [2, 3, 5, 7, 11, 13, 17, 19]
print(primes[0])
print(primes[+3])
print(primes[-1])
# print(primes[-9])  # index out of range
print(primes[2:5])
print(primes[-1:-3])

print(len(primes))
print(primes.remove(3))
print(primes)
print(min(primes))
print(max(primes))
print(primes.pop())
print(primes)

example = [128, True, "Alpha", 1.732, [64, False]]
rolls = [4, 7, 2, 7, 12, 4, 7] 
print(rolls)

numbers = [1, 2, 3]
letters = ['a', 'b', 'c']
# Concatenation
print(numbers + letters)
print(letters + numbers) #order important
                         #in sets
print(numbers)
print(letters)
print(dir(numbers))
help(numbers.reverse)
help(numbers.extend)

numbers.reverse()
print(numbers)
letters.reverse()
print(letters)
numbers.extend('a')
print(numbers)