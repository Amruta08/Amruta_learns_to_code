# COREY SCHAFER NOTES #

courses = ['history','maths','physics','compsci']
#print(courses)

# no. of elements in list :- len(list_name)
#print(len(courses)) # 4

# Access elements in list :- list_name[index]
#print(courses[0])   #history
#print(courses[-1])  # compsci
#print(courses[4])   # index error

# slicing :- list_name[index_1:index_2]
#print(courses[0:2]) #['history', 'maths']
#print(courses[:2])  #['history', 'maths']
#print(courses[2:])  #['physics', 'compsci']

#getting index :- list_name.index(Value)
#print(courses.index('compsci'))
#print(courses.index('art')) # value error

# checking elements :- value in list_name
#print('art' in courses)
#print('art' not in courses)
#print('maths' in courses)


# list methods :-

#add elements :- list_name.append()
#courses.append('art')
#print(courses)

# add elements to a specific location:-
# list_name.insert(index, value) 
#courses.insert(0,'art')
#courses_2 = ['Art','Education']
#courses.insert(0, courses_2)
#print(courses[0])
#list_name.extend(value) 
#courses.extend(courses_2)
#print(courses[0])
#courses.append(courses_2)
#print(courses)

#remove elements :- list_name.remove(value)
#courses.remove('maths')
#remove last element :- list_name.pop()
#print(courses.pop())
#print(courses)

# list sort 
#reverse items :- list_name.reverse()
#courses.reverse()
# sort elements :- list_name.sort()
#courses.sort() # alphabetical order
#courses.sort(reverse = True) # descending
#print(courses)
#sorted_courses = sorted(courses)
#print(sorted_courses)

# sorting nums:-
#nums = [1,5,2,4,3] # ascending order
#nums.sort()
#nums.sort(reverse= True) # descending
#print(min(nums)) #minimum value
#print(max(nums)) #maximum value
#print(sum(nums))
#print(nums)

# list looping :-
#for subject in courses:
    #print(subject)
    
#for index ,subject in enumerate(courses):
    #print(index,subject)

#for index ,subject in enumerate(courses,start =1):
    #print(index,subject)
    
# list to string 
#courses_str = ', '.join(courses)
#new_list = courses_str.split(', ')
#print(courses_str)
#print(new_list)
#print(', '.join(courses))
#print('-'.join(courses))

#Mutable
list_1 = ['History', 'Math', 'Physics', 'CompSci']
#list_2 = list_1
#print(list_1)
#print(list_2)

#list_1[0] = 'Art'

#print(list_1)
#print(list_2)

#Immutable
#Tuples:- immutable , can't be modified

#tuple_1 = ('History', 'Math', 'Physics', 'CompSci')
#tuple_2 = tuple_1
#print(tuple_1) 
#print(tuple_2)

#tuple_1[0] = 'Art'
#print(tuple_1) #error
#print(tuple_2) #error


#Sets :- {} , order doesn't matter

#cs_courses = {'history','math','physics','compsci'}
#used to remove duplicates
#cs_courses = {'history','math','physics','compsci','math'}
#print(cs_courses)
#print('math' in cs_courses)

art_courses ={'history','math','art','design'}
#intersection :- tuple_1.intersection(tuple_2) 
#print(cs_courses.intersection(art_courses))
#print(cs_courses.union(art_courses))
#print(cs_courses.difference(art_courses))



#Empty Lists
#empty_list = []
#empty_list = list()

# Empty Tuples
#empty_tuple = ()
#empty_tuple = tuple()

# Empty Sets
#empty_set = {} # This isn't right! It's a dict
#empty_set = set()