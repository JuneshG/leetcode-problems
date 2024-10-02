#LeetCode Problem 1047: "Remove All Adjacent Duplicates In String"

# Input: s = "abcabcbb"
# Output: 3
# Explanation: The answer is "abc", with the length of 3.

# Input: s = "bbbbb"
# Output: 1
# Explanation: The answer is "b", with the length of 1.

# Input: s = "pwwkew"
# Output: 3
# Explanation: The answer is "wke", with the length of 3.
# Note that the answer must be a substring, "pwke" is a subsequence and not a substring.

def func(s) -> str:
    box = []
    
    for i in range(len(s)):
        # If the box is not empty and the last character in box is the same as current
        if box and box[-1] == s[i]:
            box.pop()
        else:
            box.append(s[i])

    # Join the characters in the box to form the final string
    return ''.join(box)

# Get input from the user
characters = input("Enter characters: ")

# Call the function and print the result
print(func(characters))
