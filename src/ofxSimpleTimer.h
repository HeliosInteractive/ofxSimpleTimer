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
        
        void setup ( unsigned long delayInMillis , string _name = "noName" ) ;
        void update( ) ;
    
        void draw ( float x , float y ) ;
        
		void reset();
		void togglePause() { } 

        void start( bool loop , bool bForceReset = false ) ;
        void stop ( ) ; 
		void togglePause ();
		float getNormalizedProgress ( ) ; 
        
        unsigned long startTimeMillis ;
        unsigned long delayMillis ;
        bool bIsRunning ;
        bool bLoop ;
<<<<<<< HEAD
		bool bIsPaused ;
=======
		string name ; 
>>>>>>> 12f58735b8e5b4c49461b0d9b81ea560ba200f15
        
        ofEvent<int> TIMER_COMPLETE ; 
    
};

