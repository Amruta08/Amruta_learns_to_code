# FriendFace post

# user_id = 209
# message = "D5 E5 C5 C4 G4"
# language = "English"
# datetime = "20230215T1242312" 
# location = (44.590533, -104.715556)
post = {"user_id": 209, "message": "D5 E5 CS C4 G4", "language": "English", "datetime":"20230215T1242312", "location":(44.590533, -104.715556)}
#print(post)
#print(type (post))

post2 = dict(message="SS Cotopaxi", language="English")
print(post2)

#post2["user_id"] = 209
#post2["datetime"] = "19771116T0930012"
#print(post2)

#print(post['message']) 
#print(post2['location'])

#if 'location' in post2:
  #print (post2['location']) 
#else:
  #print("The post does not contain a location value.")

#try:
  #print(post2[ 'location'])
#except KeyError: 
  #print ("The post does not have a location. ")
  
#print(dir(post2))
#help(post2.get)

#loc = post2.get('location', None)
#print(loc)

for key in post.keys(): 
  value = post[key]
  print(key, "-", value)
  
  
  
for key, value in post.items(): 
  print(key, "=", value)


#print(dir(post))
#help(post.popitem)