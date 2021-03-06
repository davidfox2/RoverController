#define WS_SERVER_PORT  80

#define AP_SSID                             "RoverController"
#define AP_PASS                             ""

#define ROVER_WS_URL                        "ws://192.168.4.5:80/ws"

// TODO could use mdns instead of hardcoding
#define ROVER_CONTROLLER_STATIC_IP          "192.168.4.1"
#define ROVER_STATIC_IP                     "192.168.4.5"
#define ROVER_CAM_STATIC_IP                 "192.168.4.6"

#define ROVER_CONTROLLER_MIN_TX_VALUE       1000
#define ROVER_CONTROLLER_MAX_TX_VALUE       2000

#define ROVER_CONTROLLER_SDA                GPIO_NUM_22
#define ROVER_CONTROLLER_SCL                GPIO_NUM_23

#define LED_RIGHT_GPIO                      GPIO_NUM_15
#define LED_LEFT_GPIO                       GPIO_NUM_12
