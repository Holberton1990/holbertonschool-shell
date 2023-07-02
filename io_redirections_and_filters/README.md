## Shell, I/O Redirections and filters
## head: 
The head command displays the first few lines (by default, the first 10) of a file or the output of a command.

## tail: 
The tail command displays the last few lines (by default, the last 10) of a file or the output of a command. It is often used to monitor log files in real-time.

## find: 
The find command is used to search for files and directories based on various criteria such as name, size, type, and more. It is a powerful tool for locating files within a directory hierarchy.

## wc: 
The wc command is used to count the number of lines, words, and characters in a file or the output of a command. It stands for "word count."

## sort: 
The sort command is used to sort the lines of a file or the output of a command in ascending or descending order. It can sort based on various criteria, such as numeric or alphabetic order.

## uniq: 
The uniq command filters out adjacent duplicate lines from a sorted file or the output of a command. It is often used in combination with the sort command.

## grep: 
The grep command searches for lines in a file or the output of a command that match a given pattern. It is a powerful tool for pattern matching and text filtering.

## tr: 
The tr command translates or deletes characters from the input. It can be used to transform or replace characters within a file or the output of a command.

Redirecting standard output to a file: To redirect the standard output of a command to a file, you can use the > operator. For example, command > output.txt will redirect the output of command to the file output.txt, overwriting its contents.

Getting standard input from a file: To send standard input to a command from a file instead of the keyboard, you can use the < operator. For example, command < input.txt will use the content of input.txt as the input for command.

Sending output from one program to another: To send the output of one program as input to another program, you can use the | (pipe) operator. For example, command1 | command2 will pass the output of command1 as input to command2.

Combining commands and filters with redirections: You can combine commands and filters with redirections to create powerful data processing pipelines. For example:

command1 | command2: Sends the output of command1 as input to command2.
command1 | sort | uniq > output.txt: Sorts the output of command1, removes duplicate lines, and saves the result in output.txt.
# Special Characters
## White spaces: 
White spaces, including spaces, tabs, and newlines, are used to separate words, arguments, and parameters in command-line interfaces and programming languages. They help in distinguishing between different elements and improve code readability.

## Single quotes (''): 
Single quotes are used to create a string literal in which special characters (except for single quotes themselves) are treated as literal characters. Variable interpolation does not occur within single quotes. For example, echo 'Hello, $USER' will output "Hello, $USER" instead of replacing $USER with the actual user name.

## Double quotes (""): 
Double quotes are used to create a string literal in which variable interpolation and command substitution occur. Special characters within double quotes are interpreted accordingly. For example, echo "Hello, $USER" will output "Hello, <username>" with the actual user name substituted.

## Backslash (): 
The backslash is used as an escape character. It allows you to include special characters literally or suppress their special meanings. For example, echo "This is a \"quote\"" will output "This is a "quote"" with the quotes included as literal characters.

## Comment (#): 
The pound sign or hash symbol is used to indicate comments in many programming languages and configuration files. Anything after a hash symbol on a line is treated as a comment and ignored by the interpreter or compiler.

## Pipe (|): 
The pipe character is used to redirect the output of one command to another as input. It allows you to chain multiple commands together, creating a pipeline for data processing. For example, ls | grep ".txt" will list all files in the current directory and then filter the output to show only files with the ".txt" extension.

## Command separator (;): 
The semicolon character is used as a command separator in many programming languages and shell scripts. It allows you to execute multiple commands on a single line. For example, command1; command2 will execute command1 and then command2 sequentially.

## Tilde (~): 
The tilde character is often used as a shorthand representation of the user's home directory. For example, cd ~ will change the current directory to the user's home directory.
[Shell, I/O Redirections and filters](https://intranet.hbtn.io/projects/2021/)
# Tasks 
## 0. Hello World
## 1. Confused smiley
2. Let's display a file
3. What about 2
4. Last lines of a file
5. I'd prefer the first ones actually
6. Line #2
7. It is a good file that cuts iron without making a noise
8. Save current state of directory
9. Duplicate last line
10. No more javascript
11. Don't just count your directories, make your directories count
12. What’s new
13. Being unique is better than being perfect
14. It must be in that file
15. Count that word
16. What's next?
17. I hate bins
18. Letters only please
19. A to Z
20. Without C, you would live in hiago
21. esrever
22. DJ Cut Killer
23. Empty casks make the most noise
24. A gif is worth ten thousand words
25. Acrostic
26. The biggest fan
(https://intranet.hbtn.io/projects/2021/)
