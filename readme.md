# Bounzy 

A Raylib-based ball simulation engine written in C

## Build & Run

### Install Bounzy on Windows: 

1. Ensure that you have git installed (to clone into the repo). TO INSTALL GIT, FOLLOW THESE STEPS: 
Open terminal as Administrator, or alternatively, run Win+R and type cmd, then click 'Enter'. RUN: 
```bash
winget --install --id Git.Git -e --source winget
```
Restart the terminal

2. Verify installation (optional)
```bash
git --version
```

3. Clone into the repository: 
git clone https://github.com/Minnolter12/Bounzy <Your file destination>
 
example: 
```bash
git clone https://github.com/Minnolter12/Bounzy "C:\Users\Documents"
```

4. Install Raylib (IMPORTANT)
If you dont have Raylib library installed in your system, follow these steps: 

a) nstall MSYS2, then open the MSYS2 UCRT64 terminal.
b) Run the following commands in order: 
```bash
pacman -S mingw-w64-ucrt-x86_64-raylib
pacman -S mingw-w64-ucrt-x86_64-gcc
pacman -S make
```

5. Navigate to cloned folder (using cd <path to your directory>). Or alternately, open the directory using file explorer, click on the address bar, and type 'cmd'. Click enter.
run: 
```bash
make run
```

Raise any concerns for system dependencies and errores in the github report page. 

### Install Bounzy on Linux: 

1. Ensure git is installed and set up

On Debian/Ubuntu/Pop!OS
```bash
sudo apt update && sudo apt install git -y
# enter your sudo password
```
On Fedora based distributions:
```bash
sudo dnf install git
# enter your sudo password
```
on arch based distributions
```bash
sudo pacman -S git
```

refer to your specific distro documentation to install git accordingly!

```bash
git --version # optional
```
2. Install Raylib library if not set up: 

on debian based distributions:
```bash
sudo apt update
sudo apt install git build-essential cmake \
    libx11-dev libxrandr-dev libxi-dev \
    libxcursor-dev libxinerama-dev \
    libgl1-mesa-dev libglu1-mesa-dev \
    libasound2-dev

# clone the repo 
git clone https://github.com/raysan5/raylib.git
cd raylib

# Build it
mkdir build
cd build
cmake ..
make -j$(nproc)

# install
sudo make install

sudo ldconfig
```

3. Clone the repository: 
syntax: git clone https://github.com/Minnolter12/Bounzy <destination_link>
```bash
# example: 
git clone https://github.com/Minnolter12/Bounzy ~/Games/Bounzy

cd ~/Games/Bounzy
```

4. Make and run: 
```bash
make run
```

Report in 'Github Issues' if you encounter dependency errors or other difficulties

