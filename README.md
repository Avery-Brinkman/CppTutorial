# CppTutorial

## Tools Needed

- [Visual Studio](https://visualstudio.microsoft.com/)\
    You'll want Visual Studio Community 2022. Visual Studio Code is a separate tool that's a lot more popular, but this is built around Visual Studio. The difference is that VSCode is really just a text editor, and is built for you to install extensions to customize how you'll use it. It's great for lighter weight languages like Python or JavaScript. Visual Studio, on the other hand is a full IDE (integrated development environment), and is more heavy weight. Visual Studio is built around compiling our code into executables and debugging said executables. It comes with a lot of the tools we need and doesn't require explicitly specifying where those tools are and how to use them.
- [Git](https://git-scm.com/downloads)\
    These tutorials won't really cover Git, but you will use it to actually get the code. For the puposes of these tutorials, just think of it as Google Drive for code (though that's a super incorrect description of it, and you shouldn't think of it like that if you were actually going to have to use Git).
- [CMake](https://cmake.org/download/) (Use the 'Windows x64 Installer')\
    This is going to be the tool that tells the computer and Visual Studio how to build the code and the project.

### Recomended Tools

- [Terminal](https://apps.microsoft.com/detail/9N0DX20HK701?hl=en-US&gl=US) (comes with Windows 11)\
    You can just use the normal Powershell that comes with Windows, but the Terminal app is nicer and has some cooler features and QoL upgrades.

## Visual Studio Setup

### Installation

### Extensions

### Options

## Project Setup

1. Open Terminal. It should say something like `PS C:\Users\USERNAME>`.
2. Decide a location that you want to save these files. For this, I'm doing 'Documents'. A new folder will be created at this location.
3. Move to that location.

    ```bat
    cd .\Documents\
    ```

    You can just start typing 'Documents' and press tab to have it autocomplete. You can write out the full path, or a relative path, and you can use `..` to go back by one directory (and you can chain them together. For example, `..\..` goes back two directories).

4. Clone the repository.

    ```bat
    git clone https://github.com/Avery-Brinkman/CppTutorial.git
    ```

    This will create a new folder called 'CppTutorial' wherever you ran the command, and will copy all the files and save them.

5. Move to the tutorial's root folder.

    ```bat
    cd .\CppTutorial\
    ```

## Individual Setup

These steps will be the same for each section of this tutorial, and will only need to be done the first time you build that section.

1. Starting from the root folder (.\\CppTutorial\\), move to the subfolder (in this example I'm doing '00_HelloWorld')

    ```bat
    cd .\00_HelloWorld\
    ```

2. Make a build folder, and move to it. This is where our Solution file will go, and where the binaries will go when we compile.

    ```bat
    mkdir build
    cd .\build\
    ```

3. Run CMake.

    ```bat
    cmake ..
    ```

4. Open '00_HelloWorld.sln'. You can can just click it in file explorer, run `explorer .` to open the file explorer here and then click it, or run `Start-Process .\00_HelloWorld.sln` to open it from the command line. It doesn't matter though.

5. In the Solution Explorer of Visual Studio, right click the Solution (very top) and click 'Build Solution' (or use `Ctrl+Shift+B`)
6. Right click the '00_HelloWorld' Project, and select 'Set as Startup Project'.
7. Click the Green Play button that says 'Local Windows Debugger' (or just press `F5`).
