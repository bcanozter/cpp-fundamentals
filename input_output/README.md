
## Reading lines from text file

Either drag&drop onto .exe or read from myfile.txt

### Input

```
#Input from text file
10 20 30 #First Comment
50 60 #This is the second comment
80
10
abcdef qwerty
```

Read until '#' and ignore the rest of the line.

### Output

```
10 20 30
50 60
80
10
abcdef qwerty
```