import random

print("hi guys welcome to password generator")

characters="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*().,:;{}[]\/?|~`"

number = int(input("Amount of passwords need to generate:"))

length=int(input("input password length"))

print("your passwords:")

for pswrd in range(number):

  password=" "
  for c in range(length):
     password += random.choice(characters)

  print(password)
