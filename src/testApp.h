#pragma once

#include "ofMain.h"
#include "Controller.h"
#include "StartSceneController.h"
#include "LoginSceneController.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y ){}
		void mouseDragged(int x, int y, int button){}
		void mousePressed(int x, int y, int button){}
		void mouseReleased(int x, int y, int button){}
		void windowResized(int w, int h){}
		void dragEvent(ofDragInfo dragInfo){}
		void gotMessage(ofMessage msg){}
		void ChangeSceneListener(controllerEvent &e);

		SCENE GetScene(){return _scene;}
		void  SetScene(SCENE s);

private:	
		static bool IsSceneValid(SCENE s);
		SCENE		_scene;
		Controller	*_controller;
};
