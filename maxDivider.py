number1 = int(input("Enter first number: "))
number2 = int(input("Enter second number: "))

## To get minimum value
if number1 > number2:
    min = number2
elif number1 < number2:
    min = number1
else:
    min = number1

## To get common dividers
dividers = []
is_common = False
a = 0
for i in range(1, min+1):
    if number1 % i == 0 and number2 % i == 0:
        is_common = True
    else:
        is_common = False 
    if is_common == True:
          dividers.append(i)
          a = a + 1

## To get maximum value
max_divider = dividers[0]
for i in range(1, len(dividers)):
    if dividers[i] > max_divider:
        max_divider = dividers[i]

print (max_divider)
