# take input string
x = input("Enter something: ")

# count words
words = x.split()
word_count = len(words)

# count characters
character_count = len(x)

# count sentences
sentences = x.split('. ')
sentence_count = len(sentences)

# print the result
print("Word Count: ", word_count)
print("Character Count: ", character_count)
print("Sentence Count: ", sentence_count)
