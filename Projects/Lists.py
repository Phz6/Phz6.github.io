# Name the list first
goats = ["Kobe", "Shaq", "KD"]
#index     0        1      2
#index    -3       -2     -1
#index can be negative to access back of the list.
 
print(goats)
#print(goats[1]) = Shaq     print(goats[-3]) = Kobe
#print(goats[1:]) will print index 1 and those that follow
#print(goats[1:3]) will print index 1 and up to 3 but not including 3

#List functions

lucky_numbers = [4, 8, 15, 16, 23, 42]
friends = ["Kevin", "Karen", "Jim", "Oscar", "Tim"]

print(friends)

# .extend: will add more to current list
friends.extend(lucky_numbers)
print(friends)

# .append: will add onto list
friends.append("Creed")
print(friends)

# .insert: will insert at a certain inex point
friends.insert(1, "Kelly")
# puts Kelly at index 1 and pushes list up one index
print(friends)

# .clear: will clear entire list
friends.clear()

friends = ["Kevin", "Karen", "Jim", "Oscar", "Tim"]

# .pop: removes the last element on the list
friends.pop()
# the .pop removes Tim from list since it is the last element
print(friends)

# .index: allows to search through list
friends.index("Kevin")
# will state the index at which it exist, will error if DNE

# .count: counts how many times an element shows up in list
friends.append("Kevin")
print(friends.count("Kevin"))
print(friends)

# .sort: will sort by ascending order (1.. 2.. 3..) (A.. B.. C..)
friends.sort()
print(friends)

# .reverse: will reverse the order of the list
friends.reverse()
print(friends)

# .copy: will copy an entire list
friends2 = friends.copy()