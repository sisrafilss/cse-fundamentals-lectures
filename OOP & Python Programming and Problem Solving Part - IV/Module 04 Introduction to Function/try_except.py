try:
   # First try to execute the statement in this block
   result = 20 / 2
   print(result)
except:
    # Execute this block of code if try block failed to run
    print('somethign went wrong')
finally:
    # this block always run, it is an indication of the completion of try-except-finally statement
    print('operation completed')