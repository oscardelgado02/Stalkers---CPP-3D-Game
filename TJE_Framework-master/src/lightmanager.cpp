#include "lightmanager.h"

LightManager* LightManager::instance = NULL;

LightManager* LightManager::getInstance() {
	if (!instance)
		instance = new LightManager;
	return instance;
}

LightManager::LightManager() {
	initLights();
}

void LightManager::initLights() {
	lights.push_back(new Light(Vector3(0, 0, 0), Vector3(255, 255, 255), 10.0, 5.0, 0.0, 0.5));
}

std::vector<Light*> LightManager::getLights() {
	return lights;
}

void LightManager::updatePlayerLight(Vector3 pos) {
	lights[0]->position = pos;
}