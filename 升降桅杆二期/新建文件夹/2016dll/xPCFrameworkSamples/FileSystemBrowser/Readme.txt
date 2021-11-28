Simulink Real-Time Target File Browser Sample:
================================
This sample contains a c# Winform application project developed with
Microsoft Visual Studio 2010 IDE to build a standalone executable 
to connect to an Simulink Real-Time Target computer from a host 
computer running Microsoft Windows.

The application demonstates how to reference the xPCTarget Framework assembly 
and use the available types required to make a file system browser for browsing
directories and files on the Target PC file system.


1). A reference to the xPCFramwork.dll has been added to the project.

2)  Add a using directive to the "MathWorks.xPCTarget.FrameWork" namespace 
    to make it easier to qualify the available types.
    
3)  Make sure a copy of the correct version of the "xpcapi.dll" for the xPC Target version 
    is always in the same folder as the stand-alone executable.      

4)  Instantiate the "xPCTargetPC" class. This in the main object required to 
    connect and interact with the target PC.
	
5)  Reference the required object needed depending on the requirement of your 
    stand alone application.
    
    
    
In this sample we demonstrate the use of the File System specific types to create
a file system browser that would allow to browse the directories and files
for all the drives recognized by the xPC Target PC.


To run this sample, you will need a host computer and a target computer. Make sure the target PC 
is booted with the Simulink Real-Time Kernel bootable image and connectable to the host computer
on the network.

To connect this sample application enter the target's IP address, the target's port number 
and press the connect button. After the connection has been established you should see all
the recognized drives.

Make sure no open connections exists to the target PC from MATLAB or any other host clients.