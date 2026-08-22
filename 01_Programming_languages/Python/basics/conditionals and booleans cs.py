#if True :
if False:
   print('conditional was True')
   
   
#Comparisons:
# Equal:            ==
# Not Equal:        !=
# Greater Than:     >
# Less Than:        <
# Greater or Equal: >=
# Less or Equal:    <=
# Object Identity:  is  # tests whether 2 
                        # objects have same id

language = 'Java'

if language == 'Python': 
   print('Language is Python') 
elif language == 'Java':
   print('Language is Java') 
else:
   print('No match')
   
# and
# or
# not

user = 'admin'
#logged_in = True
logged_in = False

#if  user == 'admin' and logged_in:
#if  user == 'admin' or logged_in:    
    #print('admin page')
#else:   
    #print('Bad creds')
   

#if not logged_in:
   # print('please log in') 
#else:
    #print('welcome')   
    
a = [1,2,3] 
b = [1,2,3] 
#a = b 
print(a == b)
print(a is b) # checks id(a) == id(b)
print(id(a))
print(id(b))
print(id(a) == id(b))

# False values :-
  # False
  # None
  # zero of any numeric type
  # Any empty sequence. For example, '', (), [].
  # for empty mapping. for example , {}.
  

condition = 0
if condition :
    print('evalutated to True')
else:
    print('evalutated to False')

   