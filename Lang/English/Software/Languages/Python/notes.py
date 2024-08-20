# This is here just so I remember the alphabet
# A B C D E F G H I J K L M N O P Q R S T U V W X Y Z

# On my Italian keyboard Curly Brackets are (ALTGR + MAIUSC + è) or (ALTGR + MAIUSC + +)

# Repl.it is an Interpreted medium

# Python is very different from other languages

# This is a comment
'''
This is a multi-line comment
'''

# To set variables, you just type them in
# Variable names are restricted to ONLY letters and underscores ( _ ) or camelCase

# Integer (number with NO decimal)
a = 2

# Float (number WITH decimal)
b = 0.1

# String (Text, it uses "" or '')
c = "Hello"
d = ' World'

# Boolean (True or False statements)
e = True

# To run those variables, you also just type them in
# You can also run calculations with them (without ;)
# These are all just examples
a

a + b

c + d

# To get the remainder of a division, you use the % sign
# To get the quotient of a division, you use the // sign
# To get the power of a number, you use the ** sign
# To get the square root of a number, you use the sqrt() == ** 0.5 function, more on those later

# How to make a list (And run a certain Index)
# Indexes : Max is 0 | Amjad is 1 | Alex is 2

names = ["Max", "Amjad", "Alex"]

names[0] # Max
names[1] # Amjad
names[2] # Alex

# How to make a DICTIONARY (Better than wikipedia)
# Counting numbers of Chocolate Bars eaten by Otik and Sam
# chocolate_eaten is the VARIABLE NAME and the rest is the actual code

chocolate_eaten = {"Otik": 9999, "Sam": 1}

# How to retrieve dictionary data individually, all names, all values or everything as sets of tuples

chocolate_eaten["Otik"]
chocolate_eaten["Sam"]

chocolate_eaten.keys()
chocolate_eaten.values()
chocolate_eaten.items()

### FUNCTIONS
# The absolute value of -5 is 5

abs(-5)

# Gets the data type

type(2.0)

# The Highest number is outputted

max(1, 2)

## LIST OF FUNCTIONS

sum([4, 8, 6])
# Sum list of all numbers (Returns : 18)

all([True, False, False])
# Returns if all booleans in a list are true (Returns : False)

any([True, False, False])
# Returns if any boolean in a list is true (Returns : True)

### METHODS
# A method is a function that belongs to an object

"a,b,c".split(",")

# The object is the string, "a, b, c"
# The method is .split, as it "splits" or separates the string components
# The input argument is the , inserted like this (",")
# The input argument splits the string at each comma (in this case)

## LIST OF METHODS

"YES".lower()
# Lowercases

" yes".lstrip()
# Removes spaces

"youtube.com".endswith(".com")
# Checks if string ends with .com (in this case)

"youtube.com".startswith("you")
# Checks if string starts with you (in this case)

"youtube.com".find("tu")
# Locates and says where the letters "tu" are (in this case)

"Jon".replace("Jon", "Bob")
# Replaces whatever you want .replace("What you want replaced", "replaced by this")

# HOW TO DEFINE FUNCTIONS

# The square is the variable name, this means that when you want to run this
# You just need to type square() and then the number in console
# EXAMPLE : square(5)

def square(x):
  return x*x

# IF STATEMENTS

# If you run if statements into the console, you need to add 2 spaces after the
# 3 dots that will appear under the if x < 5: (in this case)
# You can also use "elif" which is basically an else if just that it checks for false outputs

x = 0

if x < 5:
  x = 10
elif x == 5:
  x = 4
else:
  x = 3

# While loops are an if condition, that if met, will run code over and over again

while x < 5:
  x = x + 1
  if x == 4:
    print(x)

# In this case, it stops counting once it is 5
# To make it automatically say the number just add print(x)

# Range is a function which returns a range

range(10)

# Returns the value of range(0, 10)

# You can use an iterator variable to return all the values of a range function - 1
# list is just a function to LIST the contents

iterator = range(0, 10)

list(iterator)

# for loops are used to repeat this value
# print is another function which prints the returning values (x10)

for i in range(10):
  print(i)

for x in names:
  print(x)