#include <avr/io.h>
#include <util/delay.h>

int main() {
    DDRB |= _BV(DDB0);
    for (;;) {
        PORTB |= _BV(PORTB0);
        _delay_ms(250);
        PORTB &= ~_BV(PORTB0);
        _delay_ms(500);
    }
}
