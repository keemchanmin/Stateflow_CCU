/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: Vehicle_State0.h
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

#ifndef Vehicle_State0_h_
#define Vehicle_State0_h_
#ifndef Vehicle_State0_COMMON_INCLUDES_
#define Vehicle_State0_COMMON_INCLUDES_
#include <stdbool.h>
#include <stdint.h>
#include "math.h"
#endif                                 /* Vehicle_State0_COMMON_INCLUDES_ */

#include "Vehicle_State0_types.h"
#include "Vehicle_State_Controller.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals and states (default storage) for system '<Root>' */
typedef struct
{
    DW_State_Control sf_Vehicle_State; /* '<Root>/Vehicle_State' */
}
DW;

/* External inputs (root inport signals with default storage) */
typedef struct
{
    bool isStart;                      /* '<Root>/isStart' */
    bool isArrived;                    /* '<Root>/isArrived' */
    OperationMode operation;           /* '<Root>/operation' */
    uint16_t left_speed;               /* '<Root>/left_speed' */
    uint16_t right_speed;              /* '<Root>/right_speed' */
    uint32_t r_distance;               /* '<Root>/r_distance' */
    uint32_t f_distance;               /* '<Root>/f_distance' */
    OperationDoorState operationDoorState;/* '<Root>/operationDoorState' */
    bool isOpenComplete;               /* '<Root>/isOpenComplete' */
    bool isCloseComplete;              /* '<Root>/isCloseComplete' */
}
ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct
{
    bool isEnd;                        /* '<Root>/isEnd' */
    Vehicle_State vehicle_state;       /* '<Root>/vehicle_state' */
    Gear_State gear_state;             /* '<Root>/gear_state' */
    bool obstacle_detected;            /* '<Root>/obstacle_detected' */
    Door_State door_state;             /* '<Root>/door_state' */
}
ExtY;

/* Real-time Model Data Structure */
struct tag_RTM
{
    const char * volatile errorStatus;
};

/* Block signals and states (default storage) */
extern DW rtDW;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void Vehicle_State0_initialize(void);
extern void Vehicle_State0_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('TAXI/Vehicle_State')    - opens subsystem TAXI/Vehicle_State
 * hilite_system('TAXI/Vehicle_State/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'TAXI'
 * '<S1>'   : 'TAXI/Vehicle_State'
 */
#endif                                 /* Vehicle_State0_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
