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
		ofxSimpleTimer() {
			bIsRunning = false ;
			bIsPaused = false;
		}
        ~ofxSimpleTimer( ) { }
        
        void setup ( unsigned long delayInMillis , string _name = "noName" , int eventId = 18 ) ;
        void update( ) ;
    
        void draw ( float x , float y ) ;
        
		void reset(); 
		void togglePause ();

        void start( bool loop , bool bForceReset = false ) ;
        void stop ( ) ; 

		float getNormalizedProgress ( ) ; 
        
        unsigned long startTimeMillis ;
        unsigned long delayMillis ;
		unsigned long pauseTimeOffset ;

        bool bIsRunning ;
        bool bLoop ;
		bool bIsPaused ;

		string name ; 
        
		int eventId ; 
        ofEvent<int> TIMER_COMPLETE ;
        ofEvent<int> TIMER_STARTED ;
        ofEvent<int> TIMER_PAUSED ;
};

