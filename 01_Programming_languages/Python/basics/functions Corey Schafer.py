#def hello_function ():
    # pass

#print(hello_function)
#print(hello_function())


#def hello_function ():
     #print("hello")

#hello_function()   

 # dry : don't repeat yourself
#def hello_function ():
    # print("hello")
    #2 return "hello"

#hello_function()   
#hello_function()
#hello_function() 

#2print(hello_function())
#2print(hello_function().upper())



#def hello_function(greeting):
     #return'{} Function.'.format(greeting)

#print(hello_function('hi'))    

def hello_function(greeting, name='you'):
     return'{}, {}' .format(greeting, name)

#1print(hello_function('hi'))    
#2print(hello_function('hi' ,name='corey'))    

def student_info(*args,  **kwargs):
     print(args)
     print(kwargs)

student_info('math', 'art', name='john', age=22)


def student_info(*args,  **kwargs):
     print(args)
     print(kwargs)

courses =  ['math', 'art']   
info = {'name':'john', 'age':22 } 

student_info(*courses, **info)


#number of days per month. first value of placeholder for indexing purposes.
month_days = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

def is_leap(year):
     """return True for leap years, False for non leap years."""

     return year % 4 == 0 and (year % 100 != 0 or year % 400 == 0)

def days_in_months(year, month):
     """return number of days in that month in that year"""

     if not 1 <= month <= 12:
          return 'invalid month'  

     if month == 2 and is_leap(year):
          return 29

     return month_days[month] 

print(is_leap(2016))      
print(days_in_months(2024, 12))