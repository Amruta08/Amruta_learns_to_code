# iu = input()
# fruits =[]
# fruits.append(iu)
# newlist = [x for x in fruits if "over" in x]
# print(newlist)

# su = 0
# for item in newlist:
#     su = item
#     print(su)
    
# if(su == "over" ):
#     print("take a break")

def format_name(f_name, l_name):
    # Docstrings 
    '''Returns title case of name'''
    if ( f_name == "" or l_name == "" ):
        return "please provide valid inputs"
    return f"{f_name.title()} {l_name.title()} "

print(format_name(input("What is your first name? "), input("What is your last name? ")) )

format_name