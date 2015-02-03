#ifndef VERSION_H
#define VERSION_H

#ifndef VERSION_STR_POSTFIX
#define VERSION_STR_POSTFIX ""
#endif /* VERSION_STR_POSTFIX */

#include "rtw_version.h"

#ifdef RTW_VERSION
	#define VERSION_STR "0.8.x" VERSION_STR_POSTFIX "_" RTW_VERSION
#else
	#define VERSION_STR "0.8.x" VERSION_STR_POSTFIX
#endif

#endif /* VERSION_H */
