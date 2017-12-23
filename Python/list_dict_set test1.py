people = {'873D09': {'first': 'Bob', 'last': 'Smith'},
          '725D09': {'first': 'Jim', 'last': 'Smith'},
          '817D09': {'first': 'Sarah', 'last': 'Smith'},
          '365D09': {'first': 'Carl', 'last': 'Smith'}}

serial_id = list()
first_names= set()
last_names = set()
for ids in people: #ids works as first key (or any container locates that position
    serial_id.append(ids)
    first_names.add(people[ids]['first'])
    last_names.add(people[ids]['last'])
    print(first_names)
    print(last_names)


##COMPARE CODE##
print("--*"*10)

serial_id = list()
first_names = set()
last_names = set()

for ids, details in people.items():
    #initially, ids works like first key as mentioned earlier, details works like first value
    serial_id.append(ids)
    first_names.add(details['first'])
    last_names.add(details['last'])
    print(first_names)
    print(last_names)


#Original Code from StackExchange, modified & annotated by whysofar72
