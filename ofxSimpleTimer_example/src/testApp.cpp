#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup()
{
    timer1.setup( 2000 ) ;
    timer2.setup( 750 ) ;
    
    timer1.start( true ) ;
    timer2.start( false ) ;
    
    color1 = ofColor::fromHsb( ofRandom(255) , 255 , 255 ) ;
    color2 = ofColor::fromHsb( ofRandom(255) , 255 , 255 ) ;
    
    ofAddListener( timer1.TIMER_COMPLETE , this, &testApp::timer1CompleteHandler ) ;
    ofAddListener( timer2.TIMER_COMPLETE , this, &testApp::timer2CompleteHandler ) ;
    
}

//--------------------------------------------------------------
void testApp::update(){

    timer1.update( ) ;
    timer2.update( ) ; 
}

//--------------------------------------------------------------
void testApp::draw(){
    
    
    ofSetColor( color1 ) ;
    ofRect( 0 , 0 , ofGetWidth() / 2 , ofGetHeight() ) ;
    timer1.draw( 15 , 15 ) ;
    
    ofSetColor( color2 ) ;
    ofRect( ofGetWidth() / 2 , 0 , ofGetWidth() / 2 , ofGetHeight() ) ;
    timer2.draw( ofGetWidth() /2 + 15 , 15 ) ;
    
}

void testApp::mousePressed(int x, int y, int button)
{
    timer2.start( false ) ; 
}

void testApp::timer1CompleteHandler( int &args )
{
   color1 = ofColor::fromHsb( ofRandom(255) , 255 , 255 ) ; 
}

void testApp::timer2CompleteHandler( int &args )
{
   color2 = ofColor::fromHsb( ofRandom(255) , 255 , 255 ) ;
}
