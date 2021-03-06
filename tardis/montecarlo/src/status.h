#ifndef TARDIS_STATUS_H
#define TARDIS_STATUS_H

typedef enum
{
  TARDIS_ERROR_OK = 0,
  TARDIS_ERROR_BOUNDS_ERROR = 1,
  TARDIS_ERROR_COMOV_NU_LESS_THAN_NU_LINE = 2
} tardis_error_t;

typedef enum
{
  TARDIS_PACKET_STATUS_IN_PROCESS = 0,
  TARDIS_PACKET_STATUS_EMITTED = 1,
  TARDIS_PACKET_STATUS_REABSORBED = 2
} rpacket_status_t;

typedef enum
{
  CONTINUUM_OFF = 0,
  CONTINUUM_ON = 1,
} ContinuumProcessesStatus;

#endif // TARDIS_STATUS_H
