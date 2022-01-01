chip8
=====

Chip8 is a small emulator for the CHIP-8 interpreter language used in the COSMAC VIP and Telmac 1800 system.

This implementation uses C++ for the core functionality and a SDL2 backend completes the emulator with sound, keyboard input and GL display

#Introduction

- Chip-8 is more of a virtual machine than a physical one.

- It interprets the instructions and replicates the functionality of the original machine.

- Commonly interpreted on 4K systems such as Cosmac VIP in mid 1970s

- It was made to allow video games more easily programable for these machines as games written in chip8 language could easily run using the chip8 emulator.

#Description

- 16 8bit registers labeled from V0 to VF, VF is special as it is used as flag.

- 4K bytes memory i.e 0.000 to 0xFFF

- Address space is divided into 3 sections:
  - 0x000 to 0x1FF - (first 512 bytes)reserved for the interpreter
  - 0x050 to 0x0A0 - for characters 0 through F
  - 0x200 to 0xFFF - for ROMS

- 16 bit index register for storing the memory address used in operations

- 16 bit Program Counter which holds the address of next instruction to be excecuted.

- 16 level stack to keep track of the order of excecution.

- 8 bit stack pointer (top) for using the stack.

- 8 bit delay timer for timing, decrements at rate of 60Hz.

- 8 bit sound timer for sound, similar behaviour as the delay timer.

- 16 input keys which match the first 16 hex values (0 through F).

#Instructions

- 34/35 instructions in total. Eg: '00E0: CLS' to clear the display.

- 3 cycles: fetch, decode and excecute.

#Display

- Use SDL to render and get input in a multiplatfrom way.

#ROMS

-INVADERS: start the game using W
        left: Q
        right: E
        W: shoot

-BRIX: Q to move left, E to move right

-PONG: 2 player game
        Player1: 1 and Q to move up and down
        Player2: 4 and R to move up and down

-TANK: 2 to move down
        Q to turn left
        E to turn right
        S to move up
        W to fire

-TETRIS: W to move left
        E to move right
        Q to rotate piece
