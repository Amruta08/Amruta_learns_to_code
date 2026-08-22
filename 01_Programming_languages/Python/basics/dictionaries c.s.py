#Dictionarires 
# values in dictionary can also be a number
student = {'name': 'John', 'age': 25, 'courses': ['Math', 'CompSci']}
print(student)
print(student['name'])
#print(student['phone']) #keyerror
print(student.get('name'))

print(student.get('phone')) # returns none
print(student.get('phone','not found')) # not found
student['phone'] = "555-5555"

print(student.get('phone','not found'))

student['name'] = 'jane'
print(student)

student.update({'name': 'jane', 'age':26, 'phone': '555-5555'})
print(student)

del student['age']
print(student)

print(student.pop('name'))
print(student)
print(len(student))
print(student.keys())
print(student.values())
print(student.items())

#for loop

for key in student:
    print(key)
    
for key , value in student.items():
    print(key, value)