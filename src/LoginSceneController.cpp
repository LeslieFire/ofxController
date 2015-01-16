#include "LoginSceneController.h"

//--------------------------------------------------------------
void LoginSceneController::setup(){
	
}

//--------------------------------------------------------------
void LoginSceneController::update(){
	ofSetBackgroundColor(125,125,125);
}

//--------------------------------------------------------------
void LoginSceneController::draw(){
	ofSetColor(0, 255, 255);
	ofDrawBitmapString("Scene Login 1, 2, 3", ofGetWidth()/2, ofGetHeight()/2);
}

//--------------------------------------------------------------
void LoginSceneController::keyPressed(int key){

}

//--------------------------------------------------------------
void LoginSceneController::keyReleased(int key){
	switch(key){
	case 'x':
		Controller::LoadLevel(STARTSCENE);
		/*controllerEvent event;
		event.setScene(STARTSCENE);

		ofNotifyEvent(controllerEvent::events, event);*/
	default: 
		break;
	}
}

//--------------------------------------------------------------
void LoginSceneController::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void LoginSceneController::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void LoginSceneController::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void LoginSceneController::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void LoginSceneController::windowResized(int w, int h){

}

//--------------------------------------------------------------
void LoginSceneController::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void LoginSceneController::dragEvent(ofDragInfo dragInfo){ 

}