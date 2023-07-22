# 20.5 LAB: Phone number string breakdown

Given a character array representing a 10-digit phone number, output the area code, prefix, and line number using the format (800) 555-1212.

Ex: If the input is:

```
8005551212
```

the output is:

```
(800) 555-1212
```

Hint: Use a string modification function that copies strings up to a certain number of characters. To copy the source string starting from an index, the reference operator (**&**) must be used.

For simplicity, assume all phone numbers are 10-digit. So 18005551212 is not allowed.