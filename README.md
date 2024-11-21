Let's say your pico's bootsel mode button is broken like mine and you can't get access to it.  

This is a pico sdk projet that gives you access to bootsel mode without pressing on the button via picotool 

First of all , clone picotool project : 

    git clone https://github.com/raspberrypi/picotool

After configuring the picotool , run the command : 
    
    picotool info 

Pick the bootloader_rest.uf2 file and run the command : 

    sudo picotool load bootloader_reset.uf2 --bus <bus number> --address <address number> -f 


A tip : 

Always make sure you include the [stdio_usb.h]([url](https://github.com/raspberrypi/pico-sdk/blob/master/src/rp2_common/pico_stdio_usb/include/pico/stdio_usb.h)) library in your projects  so you won't lose usb connection with the raspberry pi pico
