#pragma once

#include "ofMain.h"
#include "ofxSimpleTimer.h"

class testApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void mousePressed(int x, int y, int button);
    
    ofxSimpleTimer timer1 ;
    ofxSimpleTimer timer2 ;
    
    ofColor color1 ;
    ofColor color2 ;
    
    void timer1CompleteHandler( int &args ) ;
    void timer2CompleteHandler( int &args ) ;
    
    void timer1PauseHandler( int &args ) ;
    void timer2PauseHandler( int &args ) ;
    
    void timer1StartedHandler( int &args ) ;
    void timer2StartedHandler( int &args ) ;
    
};
