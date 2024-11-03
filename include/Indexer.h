
#ifndef INDEXER
    
    #include <Arduino.h>
    
    #define UP_BUTTON 4
    #define DOWN_BUTTON 5
    #define LEFT_BUTTON 6
    #define RIGHT_BUTTON 7
    #define SELECT_BUTTON 8

    #define STEP    2                       // Board harware pin, Step signal
    #define DIR     3                      // Board harware pin, Direction signal
    #define ENABLE  13                       // Board harware pin, Enable signal

    #define STEPS360 12000L                 // Number of steps 360 degrees

    #define FWD true
    #define BWD false

    
    
    enum{
        NONE,
        SELECT,
        RIGHT,
        LEFT,
        UP,
        DOWN
    };

    #define INDEXER
#endif    