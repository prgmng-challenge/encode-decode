# encode-decode
Figure out how encoding algorithm, then write a decoder. C++ challenge. **There will be a Part II**.

# Challenge Description
To complete this challenge, you will study the code in encoder.hpp to understand how it enciphers messages, then write a complementary 
decoder that will decipher them. This file is a header file. Header files serve to define functions and variables that may be used in other code by using the ```#include "headerFilename.h"``` statement (called an include directive) at the top of a ```.cpp``` file. This will allow you to call the functions or use the variables defined in the header file. To work with the files, click "Clone/Download" and download as a ZIP folder to get a local copy of 
encoder.hpp to work with. The file test.cpp is provided as an example. Your solution should be a header file named ```decoder.hpp```. This file should contain a
function with the signature: 
```c++
string decoder(string input)
``` 
that will return the deciphered message as a string. 

## Working with the header file
The encoder is just a function in a header file. To use it, first compile the header file ```encoder.hpp``` (this example assumes you are compiling from the command line using either the [GNU Compiler Collection (via MINGW and Code::Blocks for simplicity)](https://sourceforge.net/projects/codeblocks/files/Binaries/17.12/Windows/codeblocks-17.12mingw-setup.exe/download) or [Clang](http://releases.llvm.org/9.0.0/LLVM-9.0.0-win64.exe). If you are using an IDE or other compiler follow your own procedure for compilation, just know that the header file must be compiled as well as any file that will use its functions):
```
g++ encoder.hpp <-----Using gcc/g++
```
**_OR_**
```
clang encoder.hpp <-----Using LLVM Clang
```
Then **in the same directory**, create a ```.cpp``` file, ```#include``` the encoder header file, and call the ```encode(string input)``` function:
```c++
#include <iostream>
#include <string>
#include "encoder.hpp"

int main()
{
  std::string cipher;
  cipher = encode("Ich lebe mein Leben in wachsenden Ringen")
  std::cout << cipher << std::endl;
}
```
And compile:
```
g++ test.cpp -o test
```
**_OR_**
```
clang test.cpp -o test.exe
```
Running the example should result in the output:
```
05144236900984036140552281044215368025217102941104612030003782521453900160661704200296114351
```
# Submitting
In your browser, navigate to <https://github.com/prgmng-challenge/encode-decode> and click the "Fork" button at the top-right. 
Login to your Github account and you will have your own copy of this repository. On your computer, create a folder named
_GithubUsername-decoder_ containing **_ONLY_** your file, ```decoder.hpp```. In your Github account, navigate to the 'submissions'
folder, click 'Upload' and
upload the folder. Finally, click "Create Pull Request", verify that everything is correct and finalize the pull request to complete
your submission.

# Hints
Take note of the fact that you have the source code to the encoder. You may modify it at will as you build your decoder. It may be helpful to change the way it works temporarily to assist you in building your decoder. Just make sure
that you keep track of changes you make to it so that it functions the same as the original encoder which is what it will be tested 
against when you submit it.

A helpful C++ standard library function is ```stoi()```
```c++
#include <iostream>
#include <string>

int main()
{
    std::string alpha_num = "12345";
    int num;
    
    // convert string to integer
    num = std::stoi(alpha_num);
    
    // increment new integer to prove it really is an integer
    num++;
    
    // print integer
    std::cout << num << std::endl;
}
```
### Result:
```
12346
```
For more info, [check this out](https://www.geeksforgeeks.org/converting-strings-numbers-cc/)

Take note of different aspects of the encoder: what is the maximum length message it can handle? These sorts of insights may simplify (or complicate) your solution.

**_Optional_** To keep track of changes you make to the original encoder file, you might like to install [Github Desktop](https://desktop.github.com/) on your machine. You can login to your account and download the copy of this repository you forked 
to your local machine. As you make changes, Github Desktop will track those changes and show you exactly what you changed (including deletions and additions) before you "commit" the changes tothe repository. Even better, you may also create a new "branch" of the repo, 
which is a "copy within a copy", allowing you to freely make changes to the repo while maintaining the original copy in place. to learn more about how to use Github Desktop, [click here](https://help.github.com/en/desktop).
