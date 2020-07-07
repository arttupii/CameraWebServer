#ifndef __CONFIG__H_
#define __CONFIG__H_

//
// WARNING!!! Make sure that you have either selected ESP32 Wrover Module,
//            or another board which has PSRAM enabled
//

// Select camera model
//#define CAMERA_MODEL_WROVER_KIT
//#define CAMERA_MODEL_ESP_EYE
//#define CAMERA_MODEL_M5STACK_PSRAM
//#define CAMERA_MODEL_M5STACK_WIDE
#define CAMERA_MODEL_AI_THINKER
//#define ESP32CAM


#define ENABLE_OTA
#define OTA_HOSTNAME "AUTOTALLI KAMERA"

#define ADD_WIFI_MACRO \
  wifiMulti.addAP("APNAME", "PASSWORD"); 
  //  wifiMulti.addAP("xxxxxx", "xxxxxxxxxxxxx"); \
  //  wifiMulti.addAP("xxxxxx", "xxxxxxxxxxxxx"); \
  // ADD_WIFI_MACRO END


#define FLASHLIGHT_PIN -1 /*4*/


#endif
