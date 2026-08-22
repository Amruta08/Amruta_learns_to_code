#example=set()
#print(dir(example))
#help(example.add)

#(example.add(42))
#(example.add(False))
#(example.add(3.14159))
#(example.add("Thorium"))
#print(example)

#example.add(42)
#print(len(example))
#help(example.remove)

#example.remove(42)
#example.remove(50)
#print(len(example))
#print(example)

#help(example.discard)
#print(example.discard(42))
#print(example.discard(50))
#print(example)

#example2 = set ([28, True, 2.71828, "Helium"]) 
#print(len(example2))

#example2.clear() 
#print(len(example2))

# Integers 1 - 10
odds = set([1, 3, 5, 7, 9]) 
evens = set ([2, 4, 6, 8, 10]) 
primes = set([2, 3, 5, 7]) 
composites = set([4, 6, 8, 9, 10])

print(odds.union (evens))
print(evens.union (odds))
print(odds.intersection (primes))
print(primes.intersection(evens))
print(evens.intersection (odds))
primes.union(composites)
print(2 in primes)
print(6 in odds)
print(9 not in evens)
print(dir(primes))
help(primes.symmetric_difference)
print(primes.symmetric_difference(evens))


#b = ['1', '2', '3', '3', '2', '1']
#print(set (b))
#print(frozenset (b))

#b = frozenset({'3', '2', '1'})
#print(b.add('4'))

b = {'3', '2', '1'}
print(b.add('5'))
