/*
 * @file trigger_universal.h
 *
 *
 * @date Jan 3, 2017
 * @author Andrey Belomutskiy, (c) 2012-2020
 */

#pragma once
#include "trigger_structure.h"

#define NO_LEFT_FILTER -1
#define NO_RIGHT_FILTER 1000

void addSkippedToothTriggerEvents(TriggerWheel wheel, TriggerWaveform *s,
		int totalTeethCount, int skippedCount,
		float toothWidth,
		float offset, float engineCycle, float filterLeft, float filterRight);


void initializeSkippedToothTrigger(TriggerWaveform *s, int totalTeethCount, int skippedCount, operation_mode_e operationMode, SyncEdge syncEdge);

// TT_3_1_CAM
void configure3_1_cam(TriggerWaveform *s);

void configureOnePlusOne(TriggerWaveform *s);
// TT_VVT_BOSCH_QUICK_START
void configureQuickStartSenderWheel(TriggerWaveform *s);

// TT_KAWA_KX450F
void configureKawaKX450F(TriggerWaveform *s);

// TT_3_TOOTH_CRANK
void configure3ToothCrank(TriggerWaveform*);

// TT_6_TOOTH_CRANK
void configure6ToothCrank(TriggerWaveform*);

// TT_12_TOOTH_CRANK
void configure12ToothCrank(TriggerWaveform*);

// TT_DUALSYNC_8_1
void configureDualSync81(TriggerWaveform*);
