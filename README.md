# OpenCorsairLighting
[![FOSSA Status](https://app.fossa.io/api/projects/git%2Bgithub.com%2FMcHauge%2FOpenCorsairLighting.svg?type=shield)](https://app.fossa.io/projects/git%2Bgithub.com%2FMcHauge%2FOpenCorsairLighting?ref=badge_shield)

In this repository you will find files and links associated with the creation of custom PCB's for opensource versions of the "Lighting Node Pro" and "Commander Pro" device, using motherboard USB and a Molex/SATA power. That allows for use with iCue from Corsair. The whole setup is based around the use of an ATMEGA32u4 with dedicated USB 2.0 build in, this processor is Arduino compatible and can be seen used in the "Arduino Leonardo" and "Spark Pro Micro".

# Software
**Module and examples made by Legion2 is available here:** https://github.com/Legion2/CorsairLightingProtocol

For the software, I recommend using the above-mentioned liberty and following the instructions available there.
When adding the boards "Lighting Node PRO" and "Commander Pro", then you can make use of the file "Boards.local.txt" under software and place it in the folder: "..\AppData\Local\arduino15\packages\arduino\hardware\avr\1.8.1" alongside the "Boards.txt".
Restart Arduino and now you should have two new boards available. 
These boards are bassed on the "Arduino Leonardo", and not the "Spark Pro Micro" as used by Legion2.

# Hardware
**PCB layout and design can be found in the hardware folder or at this link:** https://easyeda.com/OpenCorsairLighting

Both PCB's and components can be ordered directly from the link. 
After producing 10pcs of the V1.0 they ended up around 8-10$ per unit

## Related projects
- [CorsairLightingProtocol](https://github.com/Legion2/CorsairLightingProtocol)
- [CorsairArduinoController](https://github.com/TylerSeiford/CorsairArduinoController)

## License
[![FOSSA Status](https://app.fossa.io/api/projects/git%2Bgithub.com%2FMcHauge%2FOpenCorsairLighting.svg?type=small)](https://app.fossa.io/projects/git%2Bgithub.com%2FMcHauge%2FOpenCorsairLighting?ref=badge_small)
