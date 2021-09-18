#pragma once

#include "ofMain.h"
#include "ofxThermalPrinter.h"
#include "ofxGPIO.h"
//#include "ofxRPiCameraVideoGrabber.h"

class ofApp : public ofBaseApp{
public:
  void setup();
  void update();
  void draw();
  void exit();
  void choose(); 
  
  void keyPressed  (int key);
  void keyReleased(int key);
  void mouseMoved(int x, int y );
  void mouseDragged(int x, int y, int button);
  void mousePressed(int x, int y, int button);
  void mouseReleased(int x, int y, int button);
  void windowResized(int w, int h);
  void dragEvent(ofDragInfo dragInfo);
  void gotMessage(ofMessage msg);
	
  ofxThermalPrinter printer;
  ofImage img;
  int modo;
  int contador;
  string archivo; 
  GPIO gpio18;
  int imprime;
  int estado; 

  // ofVideoGrabber  video;
  // ofxOMXVideoGrabber videoGrabber;

};

