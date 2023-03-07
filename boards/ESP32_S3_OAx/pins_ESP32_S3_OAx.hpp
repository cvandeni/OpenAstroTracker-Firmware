/**
 * @brief a pins configuration file for an MKS Gen L V2.1 OAT.
 */

#pragma once

// DRIVER_TYPE_TMC2209_UART requires 4 digital pins using GPIO numbering
#ifndef RA_STEP_PIN
    #define RA_STEP_PIN 15  // STEP
#endif
#ifndef RA_DIR_PIN
    #define RA_DIR_PIN 8  // DIR
#endif
#ifndef RA_EN_PIN
    #define RA_EN_PIN 7  // Enable
#endif
#ifndef RA_DIAG_PIN
    #define RA_DIAG_PIN 16  // only needed for autohome function
#endif
#ifndef RA_SERIAL_PORT
    #define RA_SERIAL_PORT Serial2
#endif
#ifndef RA_SERIAL_PORT_RX
  #define RA_SERIAL_PORT_RX 17
#endif
#ifndef RA_SERIAL_PORT_TX
  #define RA_SERIAL_PORT_TX 18
#endif
#ifndef RA_DRIVER_ADDRESS
    #define RA_DRIVER_ADDRESS 0b00  // Set by MS1/MS2 (MS1 LOW, MS2 LOW)
#endif
// DRIVER_TYPE_TMC2209_UART requires 4 digital pins using GPIO numbering
#ifndef DEC_STEP_PIN
    #define DEC_STEP_PIN 9  // STEP
#endif
#ifndef DEC_DIR_PIN
    #define DEC_DIR_PIN 46  // DIR
#endif
#ifndef DEC_EN_PIN
    #define DEC_EN_PIN 3  // Enable
#endif
#ifndef DEC_DIAG_PIN
    #define DEC_DIAG_PIN 10  // only needed for autohome function
#endif
#ifndef DEC_SERIAL_PORT
    #define DEC_SERIAL_PORT Serial2  // SoftwareSerial TX port
#endif
#ifndef DEC_SERIAL_PORT_RX
  #define DEC_SERIAL_PORT_RX 17
#endif
#ifndef DEC_SERIAL_PORT_TX
  #define DEC_SERIAL_PORT_TX 18
#endif
#ifndef DEC_DRIVER_ADDRESS
    #define DEC_DRIVER_ADDRESS 0b01  // Set by MS1/MS2 (MS1 HIGH, MS2 LOW)
#endif

// DRIVER_TYPE_TMC2209_UART requires 4 digital pins using GPIO numbering
#ifndef AZ_STEP_PIN
    #define AZ_STEP_PIN 13  // STEP
#endif
#ifndef AZ_DIR_PIN
    #define AZ_DIR_PIN 12  // DIR
#endif
#ifndef AZ_EN_PIN
    #define AZ_EN_PIN 0  // Enable
#endif
#ifndef AZ_DIAG_PIN
    #define AZ_DIAG_PIN 14  // only needed for autohome function
#endif
#ifndef AZ_SERIAL_PORT
    #define AZ_SERIAL_PORT Serial2  // SoftwareSerial TX port
#endif
#ifndef AZ_SERIAL_PORT_RX
  #define AZ_SERIAL_PORT_RX 17
#endif
#ifndef AZ_SERIAL_PORT_TX
  #define AZ_SERIAL_PORT_TX 18
#endif
#ifndef AZ_DRIVER_ADDRESS
    #define AZ_DRIVER_ADDRESS 0b10  // Set by MS1/MS2 (MS1 LOW, MS2 HIGH)
#endif
// DRIVER_TYPE_TMC2209_UART requires 4 digital pins using GPIO numbering
#ifndef ALT_STEP_PIN
    #define ALT_STEP_PIN 48  // STEP
#endif
#ifndef ALT_DIR_PIN
    #define ALT_DIR_PIN 45  // DIR
#endif
#ifndef ALT_EN_PIN
    #define ALT_EN_PIN 35  // Enable
#endif
#ifndef ALT_DIAG_PIN
    #define ALT_DIAG_PIN 47  // only needed for autohome function
#endif
// DRIVER_TYPE_TMC2209_UART requires 2 additional digital pins for SoftwareSerial, can be shared across all drivers
#ifndef ALT_SERIAL_PORT
    #define ALT_SERIAL_PORT Serial2  // SoftwareSerial TX port
#endif
#ifndef ALT_SERIAL_PORT_RX
  #define ALT_SERIAL_PORT_RX 18
#endif
#ifndef ALT_SERIAL_PORT_TX
  #define ALT_SERIAL_PORT_TX 17
#endif
#ifndef ALT_DRIVER_ADDRESS
    #define ALT_DRIVER_ADDRESS 0b11  // Set by MS1/MS2 (MS1 HIGH, MS2 HIGH)
#endif

// DRIVER_TYPE_TMC2209_UART requires 4 digital pins using GPIO numbering. This is the E1 port.
#ifndef FOCUS_STEP_PIN
    #define FOCUS_STEP_PIN 41  // STEP
#endif
#ifndef FOCUS_DIR_PIN
    #define FOCUS_DIR_PIN 40  // DIR
#endif
#ifndef FOCUS_EN_PIN
    #define FOCUS_EN_PIN 39  // Enable
#endif
#ifndef FOCUS_DIAG_PIN
    #define FOCUS_DIAG_PIN 42  // only needed for autohome function
#endif
// DRIVER_TYPE_TMC2209_UART requires 2 additional digital pins for SoftwareSerial, can be shared across all drivers
#ifndef FOCUS_SERIAL_PORT
    #define FOCUS_SERIAL_PORT Serial1  // SoftwareSerial TX port
#endif
#ifndef FOCUS_SERIAL_PORT_TX
    #define FOCUS_SERIAL_PORT_TX 37  // SoftwareSerial TX port
#endif
#ifndef FOCUS_SERIAL_PORT_RX
    #define FOCUS_SERIAL_PORT_RX 12  // SoftwareSerial RX port
#endif
#ifndef FOCUS_DRIVER_ADDRESS
    #define FOCUS_DRIVER_ADDRESS 0b00
#endif

// RA Homing pin for Hall sensor
#ifndef RA_HOMING_SENSOR_PIN
    #define RA_HOMING_SENSOR_PIN 38
#endif

// DEC Homing pin for Hall sensor
#ifndef DEC_HOMING_SENSOR_PIN
    #define DEC_HOMING_SENSOR_PIN 39
#endif

// RA End Switch East pin
#ifndef RA_ENDSWITCH_EAST_SENSOR_PIN_I2C
    #define RA_ENDSWITCH_EAST_SENSOR_PIN_I2C 19
#endif

// RA End Switch West pin
#ifndef RA_ENDSWITCH_WEST_SENSOR_PIN_I2C
    #define RA_ENDSWITCH_WEST_SENSOR_PIN_I2C 18
#endif

// DEC End Switch Up pin
#ifndef DEC_ENDSWITCH_UP_SENSOR_PIN_I2C
    #define DEC_ENDSWITCH_UP_SENSOR_PIN_I2C 3
#endif

// DEC End Switch Down pin
#ifndef DEC_ENDSWITCH_DOWN_SENSOR_PIN_I2C
    #define DEC_ENDSWITCH_DOWN_SENSOR_PIN_I2C 2
#endif

// ALT End Switch UP pin
#ifndef ALT_ENDSWITCH_UP_SENSOR_PIN_I2C
    #define ALT_ENDSWITCH_UP_SENSOR_PIN_I2C 2
#endif
// ALT End Switch Down pin
#ifndef ALT_ENDSWITCH_DOWN_SENSOR_PIN_I2C
    #define ALT_ENDSWITCH_DOWN_SENSOR_PIN_I2C 2
#endif

// AZ End Switch E pin
#ifndef AZ_ENDSWITCH_E_SENSOR_PIN_I2C
    #define AZ_ENDSWITCH_E_SENSOR_PIN_I2C 2
#endif

// AZ End Switch W pin
#ifndef AZ_ENDSWITCH_W_SENSOR_PIN_I2C
    #define AZ_ENDSWITCH_W_SENSOR_PIN_I2C 2
#endif

// ALT Homing Sensor pin
#ifndef ALT_HOMING_SENSOR_PIN_I2C
    #define ALT_HOMING_SENSOR_PIN_I2C 2
#endif

// AZ Homing Sensor pin
#ifndef AZ_HOMING_SENSOR_PIN_I2C
    #define AZ_HOMING_SENSOR_PIN_I2C 2
#endif

//GPS pin configuration
#ifndef GPS_SERIAL_PORT
    #define GPS_SERIAL_PORT Serial1
#endif

//Pin to turn on dew heater MOSFET
#ifndef DEW_HEATER_1_PIN_I2C
    #define DEW_HEATER_1_PIN_I2C 00
#endif
#ifndef DEW_HEATER_2_PIN_I2C
    #define DEW_HEATER_2_PIN_I2C 01
#endif

#define SW_SERIAL_UART 0

// DISPLAY_TYPE_LCD_JOY_I2C_SSD1306 requires 3 analog inputs in Arduino pin numbering
#ifndef LCD_KEY_SENSE_X_PIN
    #define LCD_KEY_SENSE_X_PIN 4
#endif
#ifndef LCD_KEY_SENSE_Y_PIN
    #define LCD_KEY_SENSE_Y_PIN 5
#endif
#ifndef LCD_KEY_SENSE_PUSH_PIN
    #define LCD_KEY_SENSE_PUSH_PIN 6
#endif

//Serial port for external debugging
#if DEBUG_SEPARATE_SERIAL == 1
    #ifndef DEBUG_SERIAL_PORT
        #error "There is no default separate serial port for ESP32, please define DEBUG_SERIAL_PORT"
    #endif
#else
    #ifndef DEBUG_SERIAL_PORT
        #define DEBUG_SERIAL_PORT Serial
    #endif
#endif
