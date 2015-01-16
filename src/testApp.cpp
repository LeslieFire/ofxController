#include "testApp.h"



//--------------------------------------------------------------
void testApp::setup(){
	
	_controller = new StartSceneController();
	_controller->setup();
	ofAddListener(controllerEvent::events, this, &testApp::ChangeSceneListener);
}

//--------------------------------------------------------------
void testApp::update(){
	ofSetBackgroundColor(125,125,125);
	_controller->update();
}

//--------------------------------------------------------------
void testApp::draw(){
	_controller->draw();
}
void testApp::keyPressed(int key){

}
void testApp::keyReleased(int key){
	_controller->keyReleased(key);
}

void testApp::ChangeSceneListener(controllerEvent &e){
	SetScene(e.getScene());
}

void  testApp::SetScene(SCENE s)
{
	if(IsSceneValid(s) && s != _scene){
		_scene = s;
		Controller	*temp;
		temp = _controller;
		
		switch(_scene){
		case STARTSCENE:
			_controller = new StartSceneController();
		
			break;
		case LOGINSCENE:
			_controller = new LoginSceneController();
			
			break;
		default: break;
		}
		_controller->setup();
		delete temp;
	}
}

bool testApp::IsSceneValid(SCENE s)
{
	return (s >= STARTSCENE && s <= LOGINSCENE);
}

