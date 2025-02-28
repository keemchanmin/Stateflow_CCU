/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: Vehicle_State0.c
 *
 * Code generated for Simulink model 'Vehicle_State0'.
 *
 * Model version                  : 1.66
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Feb 28 12:13:35 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "Vehicle_State0.h"
#include "Vehicle_State_Controller.h"

/* Block signals and states (default storage) */
DW rtDW;

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void Vehicle_State0_step(void)
{
    /* Chart: '<Root>/Vehicle_State' incorporates:
     *  Inport: '<Root>/f_distance'
     *  Inport: '<Root>/isArrived'
     *  Inport: '<Root>/isCloseComplete'
     *  Inport: '<Root>/isOpenComplete'
     *  Inport: '<Root>/isStart'
     *  Inport: '<Root>/left_speed'
     *  Inport: '<Root>/operation'
     *  Inport: '<Root>/operationDoorState'
     *  Inport: '<Root>/r_distance'
     *  Inport: '<Root>/right_speed'
     *  Outport: '<Root>/door_state'
     *  Outport: '<Root>/gear_state'
     *  Outport: '<Root>/isEnd'
     *  Outport: '<Root>/obstacle_detected'
     *  Outport: '<Root>/vehicle_state'
     */
    State_Control(rtU.isStart, rtU.isArrived, rtU.operation, rtU.left_speed,
                  rtU.right_speed, rtU.r_distance, rtU.f_distance,
                  rtU.operationDoorState, rtU.isOpenComplete,
                  rtU.isCloseComplete, &rtY.isEnd, &rtY.vehicle_state,
                  &rtY.gear_state, &rtY.obstacle_detected, &rtY.door_state,
                  &rtDW.sf_Vehicle_State);
}

/* Model initialize function */
void Vehicle_State0_initialize(void)
{
    /* SystemInitialize for Chart: '<Root>/Vehicle_State' incorporates:
     *  Outport: '<Root>/door_state'
     *  Outport: '<Root>/gear_state'
     *  Outport: '<Root>/isEnd'
     *  Outport: '<Root>/obstacle_detected'
     *  Outport: '<Root>/vehicle_state'
     */
    State_Control_Init(&rtY.isEnd, &rtY.vehicle_state, &rtY.gear_state,
                       &rtY.obstacle_detected, &rtY.door_state);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
