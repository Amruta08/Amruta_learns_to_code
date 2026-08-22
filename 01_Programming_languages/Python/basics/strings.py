app_name = 'Programming Hero'
#print(app_name)
#2 or more names are separated by _

#message = 'bBobby's world' # error
#message = "bBobby's world"
#message = 'bBobby\'s world'
message = """bBobby's World Was A Good 
Cartoon In The 1990's """
#print(message)
#print(len(message))
#print(message[5])
#print(message[:7])
#print(message[8:])
#print(message.lower())
#print(message.upper())
#print(message.swapcase())
#print(message.count("World"))
#print(message.count("o"))
#print(message.find("W"))
#print(message.find("U")) 
#returns -1 for not existing.
#print(message.replace("World", "Universe"))

Greeting = "Hello"
name = "Ani"
message = Greeting + name
message = Greeting + " " + name
message = Greeting + ", " + name
message = Greeting + ", " + name + '. Welcome !'
message = "{} , {}. Welcome !" . format(Greeting, name)
message = f'{Greeting}, {name}. Welcome !' 
#f string formatting method
message = f'{Greeting}, {name.upper()}. Welcome !' 
#print(message)

#print(dir(message))
#print(help(str))
#help(message.lower)

print ('welcome back to my channel', end=" # ")
print ('hello how r u?')

#sep is used for removing space.
a=2
b=4
print ("a=",a, sep=":")
print ("b=",b)

print ("welcome back to my channel","hello how r u?" , sep=":")

