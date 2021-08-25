number = int(input("Enter a number : "))
num_range = int(input("Enter the range of table : "))
for count in range(1, num_range + 1 ):
    product = count * number
    print(number,"x",count, "=", product)