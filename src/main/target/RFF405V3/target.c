#include "platform.h"
#include "drivers/io.h"
#include "drivers/pwm_output.h"
#include "drivers/sensor.h"
#include "drivers/adc.h"
#include "drivers/light_led.h"
#include "drivers/pinio.h"
#include "config/feature.h"

void targetPreInit(void)
{
    // Enable all GPIO clocks here if necessary
}

void targetInit(void)
{
    // Hardware initialization hooks can go here
}

void targetConfigure(void)
{
    // Optional board-specific configuration
}
