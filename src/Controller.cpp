#include "Controller.h"

ofEvent<controllerEvent> controllerEvent::events;

void Controller::LoadLevel(SCENE s){

	controllerEvent event;
	event.setScene(s);

	ofNotifyEvent(controllerEvent::events, event);
}