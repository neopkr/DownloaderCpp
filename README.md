# DownloaderCpp
 Welcome to DownloadCpp. This program was created for a person who hate installs things but i decided to create a full menu for download and "install" applications.
 This program have all what you need if you restart your pc from 0, just download this program (Literally is a exe file haha) and you will get all necesaries programs in your pc.
 Easy, useful and fast.
 >Note 0: If you're Desktop Name contains an space (Example: Neopkr PC, PC Neopkr) the bat file couldn't open the file!
 
 >Note 1: Maybe you can making a big question if your review the code, "Why you don't use fopen()? why you use bat files?". Fast answer: I don't have any idea how give a permissions, if i put the path, the fopen_s() recieve an error from the path: C: permission denied. Then i remember the bat files and yeah, just that xD.
 
 >Note 2: Is a good idea add IDE's too? (Example: Eclipse, NetBeans, Sublime Text 3, etc).
 ## How to use / Introduction
 - First of all we have all the program in a list, just select what program what you want and let it the DownloadCpp do the work for you.
 - When you select the program in the same moment the program just open your favorite browser and download the file. You gonna wait 10 seconds ```Sleep(10000)``` and the bat file do the work for open the installer for you.
 - NOT IMPORTANT: If you put 99 in the menu you will get a "Debug", thats overwritte all bat files in the program directory for your desktop name.
 - The option JAVA/JDK is not avalible because i want to detect if you have JAVA installed in your system but i can't do that (Basically an one of the windows updated delete my cmd PATH and now my cmd don't reconized the commands :P)
## Python Recommended Installation
I put in the bat file how to install correctly python, but here is with images!
- First: You need to check "Add Python 3.9.2 to PATH!"
![](images/py_to_the_path.png)
- Then "Install Now" and wait.
- When the install finalize don't close the installer yet. When the installer finalized you need to click
- "Disable path lenght limit"

![](images/disable_path.jpg)
- And then close it, Done!
## G++/minGW Installation
This installation is more complicated but there is a page that explain step by step!
[G++/MinGW Tutorial ESP](https://www.fdi.ucm.es/profesor/luis/fp/devtools/mingw.html)
# Program Installation
- In release you have a Direct Link for Download, literally is a exe haha.
- Using GIT:
```sh
$ git clone https://github.com/neopkr/DownloaderCpp.git
cd DownloaderCpp
dotnet run --proyect DownloaderCpp
```
- The easy way: Just Download Zip and in Release folder you found the "DownloaderCpp.exe", that is the unique file what you need.
