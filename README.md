# encode-decode
Figure out how encoding algorithm, then write a decoder. C++ challenge. There will be a Part II.

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
The encoder is just a function in a header file. To use it, first compile the header file ```encoder.hpp```:
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
  string cipher;
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
