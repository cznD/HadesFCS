#ifndef DEFINES_H
#define DEFINES_H

/* Sample times */
#define SAMPLE_TIME_ACC_MS  16
#define SAMPLE_TIME_GYR_MS  10
#define SAMPLE_TIME_MAG_MS  100
#define SAMPLE_TIME_BAR_MS  20
#define SAMPLE_TIME_RC_MS   10
#define SAMPLE_TIME_CTRL_MS 4
#define SAMPLE_TIME_PWM_MS  10
#define SAMPLE_TIME_LED_MS  500

/* Low-pass filters */
#define LPF_ACC_CUTOFF_HZ 10.0f
#define LPF_GYR_CUTOFF_HZ 32.0f
#define LPF_MAG_CUTOFF_HZ  5.0f
#define LPF_BAR_CUTOFF_HZ  2.0f
#define LPF_RC_CUTOFF_HZ   7.5f

/* Kalman filter */
#define EKF_P_INIT 10.0f
#define EKF_N_GYR 0.00000191056f
#define EKF_N_ACC 0.000067666f

/* Complementary filter (yaw angle estimation */
#define CF_ALPHA 0.01f

/* Controllers */
#define CTRL_ROLL_P  1.00f
#define CTRL_ROLL_I  0.01f
#define CTRL_ROLL_D  0.05f
#define CTRL_ROLL_FF 0.00f
#define CTRL_ROLL_LIM_MIN -1.0f
#define CTRL_ROLL_LIM_MAX  1.0f

#define CTRL_PITCH_P  1.00f
#define CTRL_PITCH_I  0.01f
#define CTRL_PITCH_D  0.05f
#define CTRL_PITCH_FF 0.00f
#define CTRL_PITCH_LIM_MIN -1.0f
#define CTRL_PITCH_LIM_MAX  1.0f

/* PWM */
#define PWM_BASE_MICROS 1200
#define PWM_MAX_MICROS 2000
#define PWM_THR_LIMIT 600

/* Conversions */
#define PWM_MICROS_PER_UNIT_FORCE 100

/* Calibration */
#define CALIB_ACC_SCALE_X 0.9871f
#define CALIB_ACC_SCALE_Y 0.9973f
#define CALIB_ACC_SCALE_Z 0.9988f
#define CALIB_ACC_BIAS_X  0.6858f
#define CALIB_ACC_BIAS_Y  0.0530f
#define CALIB_ACC_BIAS_Z -0.3015f

#endif
