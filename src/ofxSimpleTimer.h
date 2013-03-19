//
//  ofxSimpleTimer.h
//  Created by Ben McChesney on 3/8/13.
//  Maintained and open sourced by

//  Helios Interactive
//  301 8th Street
//  STE 250
//  San Francisco , CA

#pragma once

#include "ofMain.h"
#include "ofEvents.h"

class ofxSimpleTimer {
    
    public:
        ofxSimpleTimer() { }
        ~ofxSimpleTimer( ) { }
        
        void setup ( unsigned long delayInMillis ) ;
        void update( ) ;
    
        void draw ( float x , float y ) ;
        
        void start( bool loop , bool bForceReset = false ) ;
        void stop ( ) ; 

        
        unsigned long startTimeMillis ;
        unsigned long delayMillis ;
        bool bIsRunning ;
        bool bLoop ;
        
        ofEvent<int> TIMER_COMPLETE ; 
    
};

