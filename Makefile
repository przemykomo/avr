default:
	avr-gcc -Os -DF_CPU=1000000UL -mmcu=atmega328p -o blink blink.c
	avr-objcopy -R .eeprom -O ihex blink blink.hex
	avrdude -p atmega328p -c usbasp -U flash:w:blink.hex
