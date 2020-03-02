# encode-decode
Figure out how encoder works, then write a decoder. C++ challenge. There will be a Part II.

# Challenge Description
To complete this challenge, you will study the code in encoder.hpp to understand how it enciphers messages, then write a complementary 
decoder that will decipher them. To work with the files, navigate to the 'src' folder and click "Download" to get a local copy of 
encoder.hpp and test.cpp to work with. Your solution should be a header file named ```decoder.hpp```. This file should contain a
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
Then in the same directory, create a ```.cpp``` file, ```#include``` the encoder header file, and call the ```encode()``` function:
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
_GithubUsername-decoder_ and save your file, ```decoder.hpp```. Navigate to the 'submissions' folder, click 'Upload' and upload the
folder. Finally, click "Create Pull Request", verify that everything is correct and finalize the pull request to complete your
submission.
