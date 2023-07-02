
  ##      Permissions                  

 ## chmod: 
The chmod command is used to change the permissions of a file or directory. It allows you to modify the read, write, and execute permissions for the owner, group, and other users.

 ## sudo: 
The sudo command allows a user with the appropriate privileges to execute commands as the superuser or another user. It is commonly used to perform administrative tasks that require elevated permissions.

 ## su: 
The su command allows a user to switch to another user account, including the superuser (root), by entering the target user's password. It is often used to gain administrative access temporarily.

 ## chown: 
The chown command is used to change the ownership of a file or directory. It allows you to assign a new owner to the file.

 ## chgrp: 
The chgrp command is used to change the group ownership of a file or directory. It allows you to assign a new group to the file.

 ## Linux file permissions: 
Linux file permissions determine who can read, write, or execute a file. The permissions are represented by three sets: owner, group, and other. Each set has three permissions: read (r), write (w), and execute (x).

Representing permissions as a single digit: Each set of permissions (owner, group, and other) can be represented by a single digit:

Read permission is represented by 4.
Write permission is represented by 2.
Execute permission is represented by 1.
No permission is represented by 0.
By adding the digits for each permission, you can obtain the corresponding single-digit representation. For example, if the owner has read and write permissions (4+2=6), the group has read permission (4), and others have no permissions (0), the overall permission would be 640.
Changing permissions, owner, and group: To change the permissions, owner, and group of a file, you can use the following commands:

 ## chmod: 
To change permissions, use chmod [permission] [file].
 ## chown: 
To change the owner, use chown [new_owner] [file].
 ## chgrp: 
To change the group, use chgrp [new_group] [file].
Why a normal user can't chown a file: By default, only the superuser (root) has the permission to change the ownership of files. This is a security measure to prevent normal users from modifying system files or interfering with other users' files.

Running a command with root privileges: To run a command with root privileges, you can use sudo followed by the command you want to execute. For example, sudo apt-get update will run the apt-get update command with elevated privileges.

Changing user ID or becoming superuser: To change the user ID (UID) or become the superuser, you can use the su command followed by the target user's name. For example, su root will switch to the root user if you have the necessary privileges and provide the root password.


# Tasks
## 0. My name is Betty
## 1. Who am I
2. Groups
3. New owner
4. Empty!
5. Execute
6. Multiple permissions
7. Everybody!
8. James Bond
9. John Doe
10. Look in the mirror
11. Directories
12. More directories
13. Change group
14. Owner and group
15. Symbolic links
16. If only

[Permissions](https://intranet.hbtn.io/projects/2020)
