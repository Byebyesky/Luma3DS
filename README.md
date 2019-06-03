# Luma3DS
*Noob-proof (N)3DS "Custom Firmware"*

## What is this fork

Many of you probably know the NTR CFW that enabled streaming the 3DS' screen to the computer over the debugger.  
This fork implements this functionality into rosalina.  
It's still higly WIP and not intended for public use since framerates are quite slow.  
But it's more stable than the NTR firmware. You can switch games and the games I tested worked flawlessly.  
Some of the code is inspired by NTR but most of it is a complete reimplementation, because I wanted to figure out where the annoying bugs with the NTR firmware are. (e.g. 3DS hanging when switching processes)

## Usage of the streaming capability

1. Go to the rosalina menu->streaming->start strea
2. Type the IP of your 3DS into the python script
3. Install the dependencies with `pip3 install pygame pillow numpy`
4. Start the script with `python3 streaming.py 4`

---

### What it is
**Luma3DS** is a program to patch the system software of (New) Nintendo (2)3DS handheld consoles "on the fly", adding features such as per-game language settings, debugging capabilities for developers, and removing restrictions enforced by Nintendo such as the region lock.

It also allows you to run unauthorized ("homebrew") content by removing signature checks.
To use it, you will need a console capable of running homebrew software on the Arm9 processor.

Since v8.0, Luma3DS has its own in-game menu, triggerable by <kbd>L+Down+Select</kbd> (see the [release notes](https://github.com/LumaTeam/Luma3DS/releases/tag/v8.0)).

#
### Compiling
* Prerequisites
    1. git
    2. [makerom](https://github.com/jakcron/Project_CTR) in PATH
    3. [firmtool](https://github.com/TuxSH/firmtool)
    4. Up-to-date devkitARM+libctru
1. Clone the repository with `git clone https://github.com/LumaTeam/Luma3DS.git`
2. Run `make`.

    The produced `boot.firm` is meant to be copied to the root of your SD card for usage with Boot9Strap.

#
### Setup / Usage / Features
See https://github.com/LumaTeam/Luma3DS/wiki

#
### Credits
See https://github.com/LumaTeam/Luma3DS/wiki/Credits

#
### Licensing
This software is licensed under the terms of the GPLv3. You can find a copy of the license in the LICENSE.txt file.

Files in the GDB stub are instead triple-licensed as MIT or "GPLv2 or any later version", in which case it's specified in the file header.
