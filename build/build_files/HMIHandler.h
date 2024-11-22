#pragma once
#include "raylib.h"
#include "DroneSystem.h"
#include "UndergroundGarden.h"
#include "Laser.h"
#include "Radar.h"
class HMIHandler {
public:
    int menuButtonClicked(Vector2 mousePoint);
    bool returnToMenuButtonClicked(Vector2 mousePoint);
    void inDroneMenu(Vector2 mousePoint, DroneSystem& d);
    void drawUDG(UndergroundGarden& u);
    void inUDGMenu(Vector2 mousePoint, UndergroundGarden& u);
    void drawDrones(DroneSystem& d);
    void drawLaserAndRadar(BigLaser& laser, Radar& radar);
    void inLaserAndRadarMenu(Vector2 mousePoint, BigLaser& laser, Radar& radar);
    void handleLaserTargetInput(BigLaser& laser);
private:
    char latitudeInput[10] = "0.0";
    char longitudeInput[10] = "0.0";
    bool isLatBoxActive = false;
    bool isLonBoxActive = false;
};