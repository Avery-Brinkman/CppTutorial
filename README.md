# CppTutorial

## Table of Contents

- [Tools Needed](#tools-needed)
- [Setup](#setup)
  - [Git Setup](#git-setup)
  - [CMake Setup](#cmake-setup)
  - [Visual Studio Setup](#visual-studio-setup)
- [Tutorial Setup](#tutorial-setup)
  - [Build the Tutorial](#build-the-tutorial)
- [Run a Project](#run-a-project)

## Tools Needed

- [Git](https://git-scm.com/downloads)\
    Click the link in the blue monitor on the top right, then the very top link.

    These tutorials won't really cover Git, but you will use it to actually get the code. For the puposes of these tutorials, just think of it as Google Drive for code (though that's a super incorrect description of it, and you shouldn't think of it like that if you were actually going to have to use Git).
- [CMake](https://cmake.org/download/) (Use the 'Windows x64 Installer')\
    This is going to be the tool that tells the computer and Visual Studio how to build the code and the project.
- [Visual Studio](https://visualstudio.microsoft.com/)\
    You'll want Visual Studio Community 2022. Visual Studio Code is a separate tool that's a lot more popular, but this is built around Visual Studio. The difference is that VSCode is really just a text editor, and is built for you to install extensions to customize how you'll use it. It's great for lighter weight languages like Python or JavaScript. Visual Studio, on the other hand is a full IDE (integrated development environment), and is more heavy weight. Visual Studio is built around compiling our code into executables and debugging said executables. It comes with a lot of the tools we need and doesn't require explicitly specifying where those tools are and how to use them.

### Recomended Tools

- [Terminal](https://apps.microsoft.com/detail/9N0DX20HK701?hl=en-US&gl=US) (comes with Windows 11)\
    You can just use the normal PowerShell that comes with Windows, but the Terminal app is nicer and has some cooler features and QoL upgrades.

## Setup

### Git Setup

- If you want, check add 'Git Bash Profile to Windows Terminal.' This will let you open a new Git Bash tab in Windows Terminal. This isn't necesary though, as you can still run Git commands in a normal PowerShell, but it will let you use tab to autocomplete git commands.

- When it asks if you want to adjust the name of the initial branch in new repositories, choose override (instead of letting git decide) and leave the name as 'main'. The primary branch for repositories used to be called 'master,' but has changed to 'main.' The default is still left as 'master' for backwards compatibility purposes.

### CMake Setup

- Make sure you select the option to add CMake to path.

### Visual Studio Setup

- Select "Desktop development with C++"

## Tutorial Setup

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

### Build the Tutorial

These steps will only need to be done the first time you build. After that we can just use Visual Studio.

1. Start in the root folder (CppTutorial).
2. Make a build folder, and move to it. This is where our Solution file will go, and where the binaries will go when we compile.

    ```bat
    mkdir build
    cd .\build\
    ```

3. Run CMake.

    ```bat
    cmake ..
    ```

4. Open 'CppTutorial.sln'. You can can just click it in file explorer, run `explorer .` to open the file explorer here and then click it, or run `Start-Process .\CppTutorial.sln` to open it from the command line. It doesn't matter though.

    ![Solution File](/images/README/SolutionFile.png)

5. In the Solution Explorer of Visual Studio, right click the Solution (very top).

    ![Solution](/images/README/Solution.png)

    Click 'Build Solution' (or use `Ctrl+Shift+B`)

    ![Build Solution](/images/README/BuildSolution.png)

### Run a Project

1. Right click the Project you want to run (00_HelloWorld, for example), and select 'Set as Startup Project'.

    ![Set as Startup Project](/images/README/SetAsStartup.png)

2. Click the Green Play button that says 'Local Windows Debugger' (or just press `F5`).

    ![Run](/images/README/Run.png)
