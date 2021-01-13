# ImageProcessingProject
Mini Project using opencv in C++

Name- Mansi Agarwal     
Course – B.Tech CSE (DS AND AI) 

Batch - 2019-23

The project is about using opencv to process an image in C++.In the following project I have displayed an image and rotated the image anti clockwise by any angle given as input by the user.
The tools and technology used are as follows:
1.	Visual Studio
2.	OpenCv

The project has been made as follows:
1.	The first step is installing Visual studio and opencv on our system using Internet.
2.	Once both of them got installed I modified the path in the system settings so the code that is written in Visual studio can be executed.
3.	Now I created an empty console type C++ project on Visual studio and created a new source file which contains the code for my project.
4. So first of all we include the header files for opencv and create a function rotate which has the image and angle as arguments. Inside the function the point of rotation is specified at which the image rotates through the given angle in anti clockwise direction. 

warpAffine is used for the size of the output image.

imread is used to read/load the image.

img.empty() is used to check if the image is loaded properly ,if not it terminates the program with a message so that our time is saved.

2 windows are created for the images , one before and after rotation using namedWindow . 
WINDOW_NORMAL  shows that the size of the window can be changed afterwards also.

imshow is used to display the images.

waitKey(0) is used to that the windows are closed when the user presses a button.

destroyWindow is used at the end of the program so that once the windows have performed their task they can be destroyed.

5.	The above program will work only when we have made some additional settings .

First of all we should check that the solution platform is the right configuration ( like I changed it to x64). 
Then click on the project properties and add additional include directories, additional library directories and additional dependencies.

6.	Now Build the program and Run to get the output.
7. The code for the project is in the files.

 
 

