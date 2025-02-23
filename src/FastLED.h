#ifndef __INC_FASTSPI_LED2_H
#define __INC_FASTSPI_LED2_H

///@file FastLED.h
/// central include file for FastLED, defines the CFastLED class/object

#if (__GNUC__ > 4) || (__GNUC__ == 4 && __GNUC_MINOR__ >= 4)
#define FASTLED_HAS_PRAGMA_MESSAGE
#endif

#define FASTLED_VERSION 3004000

#ifndef __PROG_TYPES_COMPAT__
#define __PROG_TYPES_COMPAT__
#endif

#ifdef SmartMatrix_h
#include <SmartMatrix.h>
#endif

//#ifdef DmxSimple_h
//#include <DmxSimple.h>
//#endif
//
//#ifdef DmxSerial_h
//#include <DMXSerial.h>
//#endif

#include <stdint.h>

#include "cpp_compat.h"

#include "fastled_config.h"
#include "led_sysdefs.h"

// Utility functions
//#include "fastled_delay.h"
//#include "bitswap.h"

//#include "controller.h"
//#include "fastpin.h"
//#include "fastspi_types.h"
//#include "dmx.h"

//#include "platforms.h"
#include "fastled_progmem.h"

#include "lib8tion.h"
#include "pixeltypes.h"
#include "hsv2rgb.h"
#include "colorutils.h"
#include "pixelset.h"
#include "colorpalettes.h"

#include "noise.h"
//#include "power_mgt.h"

//#include "fastspi.h"
//#include "chipsets.h"

#endif
