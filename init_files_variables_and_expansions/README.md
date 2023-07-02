## Shell, init files, variables and expansions

Difference between local and global variables: A local variable is defined within a specific scope, such as a function or a script. It is accessible only within that scope and its subscopes. In contrast, a global variable is defined outside of any specific scope, making it accessible throughout the entire script or shell session.

Reserved variable: Reserved variables are special variables with predefined meanings in the shell. They have specific purposes and are often used to store information or settings that the shell relies on.

Creating, updating, and deleting shell variables: To create a shell variable, you can simply assign a value to it using the = operator. For example, var="Hello" creates a variable named var with the value "Hello". To update the value of a variable, you can assign a new value to it. To delete a variable, you can use the unset command followed by the variable name. For example, unset var will delete the variable named var.

Roles of reserved variables:

HOME: Stores the path to the current user's home directory.
PATH: Specifies the directories where the shell searches for executable programs. It contains a list of directories separated by colons.
PS1: Determines the format of the primary prompt displayed in the shell. It defines the appearance of the command line and can include special characters.
Special parameters: Special parameters are variables that have predefined meanings in the shell and are automatically set by the shell based on certain conditions or events. They provide information about the current shell environment, command-line arguments, exit status, and more.

$? special parameter: $? is a special parameter that holds the exit status of the last executed command. A value of 0 typically indicates success, while a non-zero value indicates failure.

Expansions: Expansions are mechanisms in the shell that allow you to manipulate or substitute values of variables, commands, or other expressions. They are used to generate or modify strings dynamically. Some common expansions include variable expansion, command substitution, and arithmetic expansion.

Difference between single and double quotes: Single quotes (') preserve the literal value of each character within them, disabling variable expansion and most other forms of shell expansions. Double quotes (") allow for variable expansion and command substitution. They preserve the literal value of most characters but still interpret certain special characters within them.

Command substitution: Command substitution is a way to capture the output of a command and use it as part of another command or expression. It can be done using $() or backticks ````. For example, result=$(ls) captures the output of the ls command and assigns it to the variable result.

Shell arithmetic: Shell arithmetic allows you to perform basic arithmetic operations within shell scripts or directly in the shell. It can be done using the $(( )) syntax. For example, result=$((2 + 3)) will assign the value 5 to the variable result.

Creating an alias: To create an alias, you can use the alias command followed by the alias name and the command it should expand to. For example, alias ll='ls -l' creates an alias ll that expands to ls -l.

Listing aliases: To list all defined aliases, you can use the alias command without any arguments. Simply typing alias in the shell will display a list of currently defined aliases.

# Tasks
## 0. <o>
## 1. Hello you
## 2. The path to success is to take massive, determined action
## 3. If the path be beautiful, let us not ask where it leads
## 4. Global variables
## 5. Local variables
## 6. Local variable
## 7. Global variable
## 8. Every addition to true knowledge is an addition to human power
## 9. Divide and rule
## 10. Love is anterior to life, posterior to death, initial of creation, and the exponent of breath
## 11. There are 10 types of people in the world -- Those who understand binary, and those who don't
## 12. Combination
## 13. Floats
## 14. Decimal to Hexadecimal

[Shell, init files, variables and expansions](https://intranet.hbtn.io/projects/2022)


