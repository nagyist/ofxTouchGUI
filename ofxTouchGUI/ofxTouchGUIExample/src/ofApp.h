#pragma once

#include "ofMain.h"
#include "ofxTouchGUI.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    // settings
    ofxTouchGUI settings;
    void onGuiChanged(const void* sender, string &buttonLabel);
    
    // test values
    float sliderValX;
    int sliderValY;
    bool toggleValA, toggleValB;
    int selectListIndex;
    int mouseX, mouseY;
    
    ofxTouchGUITimeGraph *graph;
};