#include "sdl2/backend.h"
#include<string>  

int main(int argc, char* argv[])
{
    sdl2_back myChip8;

    if (argc == 2)
    {
        myChip8.invertColors = false;

        if (myChip8.loadRom(argv[1]) == false)
        {
            cout << "can't load " << argv[1] << endl;
            exit(-1);
        }

    }
    else if (argc == 3)
    {
        if (to_string(*argv[2]) == "105")
        {
            cout << "using inverted colors" << endl;
            myChip8.invertColors = true;
        }

        if (myChip8.loadRom(argv[1]) == false)
        {
            cout << "can't load " << argv[1] << endl;
            exit(-1);
        }
    }
    else
    {
        cout << "usage: chip8 <file> invert(optional)" << endl;
        exit(0);
    }

    return myChip8.loop();
}
