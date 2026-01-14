#pragma once

#include_next <mcuconf.h>

#undef RP_SIO_USE_UART0
#define RP_SIO_USE_UART0 TRUE

// OR, if you are using UART1 pins:
// #undef RP_SIO_USE_UART1
// #define RP_SIO_USE_UART1 TRUE
