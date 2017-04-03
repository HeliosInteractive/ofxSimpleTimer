#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    timer1.setup( 2000 ) ;
    timer2.setup( 750 ) ;
    
    timer1.start( true ) ;
    timer2.start( false ) ;
    
    color1 = ofColor::fromHsb( ofRandom(255) , 255 , 255 ) ;
    color2 = ofColor::fromHsb( ofRandom(255) , 255 , 255 ) ;
    
    ofAddListener( timer1.TIMER_COMPLETE , this, &ofApp::timer1CompleteHandler ) ;
    ofAddListener( timer2.TIMER_COMPLETE , this, &ofApp::timer2CompleteHandler ) ;
    ofAddListener( timer1.TIMER_PAUSED , this, &ofApp::timer1PauseHandler ) ;
    ofAddListener( timer2.TIMER_PAUSED , this, &ofApp::timer2PauseHandler ) ;
    
    ofAddListener( timer1.TIMER_STARTED , this, &ofApp::timer1StartedHandler ) ;
    ofAddListener( timer2.TIMER_STARTED , this, &ofApp::timer2StartedHandler ) ;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    timer1.update( ) ;
    timer2.update( ) ;
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    ofSetColor( color1 ) ;
    ofRect( 0 , 0 , ofGetWidth() / 2 , ofGetHeight() ) ;
    timer1.draw( 15 , 15 ) ;
    
    ofSetColor( color2 ) ;
    ofRect( ofGetWidth() / 2 , 0 , ofGetWidth() / 2 , ofGetHeight() ) ;
    timer2.draw( ofGetWidth() /2 + 15 , 15 ) ;
    
}

void ofApp::mousePressed(int x, int y, int button)
{
    timer2.start( false ) ;
}

void ofApp::timer1CompleteHandler( int &args )
{
    color1 = ofColor::fromHsb( ofRandom(255) , 255 , 255 ) ;
    timer2.start(false);
}

void ofApp::timer2CompleteHandler( int &args )
{
    color2 = ofColor::fromHsb( ofRandom(255) , 255 , 255 ) ;
}


void ofApp::timer1PauseHandler( int &args ) {
    cout<<"TIMER1 PAUSED"<<endl;
    
}
void ofApp::timer2PauseHandler( int &args ) {
    cout<<"TIMER2 PAUSED"<<endl;
    
}

void ofApp::timer1StartedHandler( int &args ) {
    cout<<"TIMER1 STARTED"<<endl;
    timer2.togglePause();
}
void ofApp::timer2StartedHandler( int &args ) {
    cout<<"TIMER2 STARTED"<<endl;
    timer1.togglePause();
}
