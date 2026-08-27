# a Tuple is very similar to a list; store multiple sources of information
coordinates = (4,5)
print(coordinates[0])
# Tuple element CANNOT be changed or modified once created

# FUNCTIONS
# must define function
def greet():
    print("Hello User!")

greet()

#parameters are pieces of information we give to the function

def greet(name, age):
    print("Hello " + name + ", you are " + str(age) + "!")

greet("Mike", 49)
greet("Pam", 32)

# Return Statements: calling functions
# nothing can be written after the return statement; the line breaks 
def cube(num):
    return num * num * num

cube(24)

# IF statements: if, elif (else if), else

is_male = False
is_tall = True

if is_male or is_tall:
    print("You are either a male or tall")
else:
    print("You are not a male or tall")

#

if is_male and is_tall:
    print("You are a tall male")
elif is_male and not (is_tall):
    print("You are a short male")
elif not is_male and (is_tall):
    print("You are not a male but are tall")
else:
    print("You are either not a male or tall")