#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  
  ofSetVerticalSync(true);
  ofSetLogLevel(OF_LOG_VERBOSE);

  ofSetFrameRate(10);  
  //printer.open("/dev/tty.PL2303-00002014");
  printer.open("/dev/serial0");    
  // img.loadImage("tox3.jpeg");
  //   video.initGrabber(640, 480);

  modo = 0; 
  contador = 1; 
  
}

//--------------------------------------------------------------
void ofApp::update(){
  //	video.update();
  
  if(contador % 500 == 0){
    choose(); 
  }
  
  contador = contador + 1;
  // ofLog(OF_LOG_NOTICE, ofToString(contador)); 
  
}

//--------------------------------------------------------------

void ofApp::draw(){
  
  // ofBackground(0);
    //video.draw(0,0);
    
}

void ofApp::exit(){
    printer.close();
}

void ofApp::choose(){

  // ofLog(OF_LOG_NOTICE, ofToString((int)ofRandom(108))+".jpg");

  // ofBackground(0);

  img.loadImage("toxica/"+ofToString((int)ofRandom(108))+".jpg");

  // ofSleepMillis(5000);
  // img.draw(); // funcionara? puede ir comentado, realmente no estamos dibujando
  printer.print(img,127);
  
  
}

//--------------------------------------------------------------
void ofApp::keyPressed  (int key){ 
  /*
  if(key == ' '){
    // printer.print(video);
  } else if (key == 't'){
    printer.println("Hello World!!");
  } else if (key == 'r'){
    printer.setReverse(true);
    printer.println("Reverse ON");
    printer.setUnderline(true);
  } else if(key == 'b'){
    printer.setBold(true);
    printer.println("Bold ON");
    printer.setBold(false);
  } else if(key == 'u'){
    printer.setUpDown(true);
    printer.println("UpDown ON");
    printer.setUpDown(false);
  } else if(key == 'l'){
    printer.setUnderline(true);
    printer.println("Underline ON");
    printer.setUnderline(false);
  } else if(key == 'd'){
    printer.setDoubleWidth(true);
    printer.println("Double Width ON");
    printer.setDoubleWidth(false);
  } else if(key == 'a'){
    printer.setAlign(LEFT);
        printer.println("left align");
        printer.setAlign(MIDDLE);
        printer.println("middle align");
        printer.setAlign(RIGHT);
        printer.println("right align");
        printer.setAlign(LEFT);
    } else if(key == 'c'){
        //printer.printBarcode("12345678", EAN8);
	printer.print(img,127);

    } else if(key != OF_KEY_ESC){
        printer.setBold(true);
        printer.println("ofxThermalPrinter");
        printer.setBold(false);
        printer.println("by Patricio Gonzalez Vivo.com");
        //printer.print(img,127);
    }
  */ 
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){ 
	
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
	
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
	
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
	
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
	
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
	
}

