#pragma once
#include "ofMain.h"

enum SCENE{
	STARTSCENE = 0,
	LOGINSCENE
};

class controllerEvent: public ofEventArgs
{
public:
	static ofEvent <controllerEvent> events;
	void setScene(SCENE s){_scene = s;}
	SCENE getScene(){return _scene;}

private:
	SCENE _scene;
};

class Controller
{
public:

	virtual void setup() = 0;
	virtual void update() = 0;
	virtual void draw() = 0;

	virtual void keyPressed  (int key) = 0;
	virtual void keyReleased(int key) = 0;
	virtual void mouseMoved(int x, int y ) = 0;
	virtual void mouseDragged(int x, int y, int button) = 0;
	virtual	void mousePressed(int x, int y, int button) = 0;
	virtual	void mouseReleased(int x, int y, int button) = 0;
	virtual	void windowResized(int w, int h) = 0;
	virtual	void dragEvent(ofDragInfo dragInfo) = 0;
	virtual	void gotMessage(ofMessage msg) = 0;

	static void LoadLevel(SCENE s);
private:

};