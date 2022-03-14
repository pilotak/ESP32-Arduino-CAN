#ifndef ESP32CAN_H
#define ESP32CAN_H

#include "CAN_config.h"
#include "CAN.h"

class ESP32CAN
{
    public: 
        int CANInit();
		int CANConfigFilter(const CAN_filter_t* p_filter);
        int CANWriteFrame(const CAN_frame_t* p_frame);
        int CANWriteFrame(const CAN_frame_t* p_frame, unsigned long timeoutUs);
        int CANStop();
        int CANOverrunCounter();
};

extern ESP32CAN ESP32Can;
#endif
