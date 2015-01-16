#include "StartSceneController.h"

//--------------------------------------------------------------
void StartSceneController::setup(){

}

//--------------------------------------------------------------
void StartSceneController::update(){
	ofSetBackgroundColor(125,125,125);
}

//--------------------------------------------------------------
void StartSceneController::draw(){
	ofSetColor(255, 255, 0);
	ofDrawBitmapString("Scene Start 1, 2, 3", ofGetWidth()/2, ofGetHeight()/2);
}

//--------------------------------------------------------------
void StartSceneController::keyPressed(int key){

}

//--------------------------------------------------------------
void StartSceneController::keyReleased(int key){
	switch(key){
	case 'x':
		Controller::LoadLevel(LOGINSCENE);
		/*controllerEvent event;
		event.setScene(LOGINSCENE);

		ofNotifyEvent(controllerEvent::events, event);*/
	default: 
		break;
	}
}

//--------------------------------------------------------------
void StartSceneController::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void StartSceneController::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void StartSceneController::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void StartSceneController::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void StartSceneController::windowResized(int w, int h){

}

//--------------------------------------------------------------
void StartSceneController::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void StartSceneController::dragEvent(ofDragInfo dragInfo){ 

}