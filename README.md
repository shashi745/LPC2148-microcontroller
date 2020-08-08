# What is ARM?
ARM-Advanced RISC Machine is a 32-bit RISC (Reduced Instruction Set Computer) processor architecture developed by ARM Holdings. Many beginners sometimes misunderstood that the ARM is microcontroller or processor but in reality, ARM is an architecture which is used in many processors and microcontrollers. The ARM architecture licensed to companies that want to manufacture ARM-based CPUs or System-on-Chip products. This enables the companies to develop their own processors compliant with the ARM instruction set architecture


# LPC2148-microcontroller
The NXP (founded by Philips) LPC2148 is an ARM7TDMI-S based high-performance 32-bit RISC Microcontroller with Thumb extensions 512KB on-chip Flash ROM with In-System Programming (ISP) and In-Application Programming (IAP), 32KB RAM, Vectored Interrupt Controller, Two 10bit ADCs with 14 channels, USB 2.0 Full Speed ...

#INPUT/OUTPUT PORTS (GPIO of LPC2148)

 .LPC2148 has two IO ports each of 32-bit wide, provided by 64 IO pins.
 .Ports are named as P0 and P1.
 .Pins of each port labeled as Px.y where “x” stands for port number, 0 or 1. 
 .Where “y” stands for pin number usually between 0 to 31. Each pin can perform multiple functions.
 
 
 
 PORT PINS       	TYPE	DESCRIPTION
P0.0-P0.31
P1.16-P1.31	Input/output	General purpose input/output. The number of GPIOs actually available depends on the use of alternate functions.
