# devpkg
A simple tool to install programs from urls and make utility.

## How to use
-I <url>		: installs package from url
-L 	 		: lists all the urls of packages installed
-c <configure options> 	: passes options to configure
-m <make options>	: passes options to make
-i <install options> 	: passes options to install
-S 	    		: initializes the database file
-F <url>		: fetches the url
-B <url> 		: fetches the url and builds the package

## Test your devpkg
`./devpkg -I https://ftp.gnu.org/gnu/hello/hello-1.3.tar.gz`

## db.*
db files handle a simple database of program. They store the names and urls of all the packages that have been installed.

## shell.*
shell.* files handle command execution details from program. They use APR core functions to manage processes.

## command.*
Command file contains function necessary for individual steps during a installation like fetch, uncompress, build and install.


