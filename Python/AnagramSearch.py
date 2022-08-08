import collections


def removeWSpace(str):
    return "".join(str.split())


"""
    Checks if two strings are anagrams of each other, ignoring any whitespace.
    
    First remove any whitespace and lower all characters of both strings.
    Then create dictionaries of the counts of every character in each string.
    As well as keep a set of all characters used in both strings.
    Check to ensure every unique character are used in both strings the
        same number of times.
"""


def isAnagram(s1, s2):
    charCount1 = collections.Counter(removeWSpace(s1))
    charCount2 = collections.Counter(removeWSpace(s2))

    allChars = set(charCount1.keys())
    allChars = allChars.union(charCount2.keys())

    for c in allChars:
        if charCount1[c] != charCount2[c]:
            return False

    return True


assert isAnagram("anagram", "not a gram") == False
assert isAnagram("anagram", "na a marg") == True
assert isAnagram("William Shakespeare", "I am \t a weakish speller") == True # actually it is false
assert isAnagram("Madam Curie", "Radium came") == True
assert isAnagram("notagram", "notaflam") == False
