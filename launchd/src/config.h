#ifndef __CONFIG_H__
#define __CONFIG_H__
#include <TargetConfig.h>
#define HAVE_QUARANTINE TARGET_HAVE_QUARANTINE
#define HAVE_SANDBOX TARGET_HAVE_SANDBOX
#define HAVE_SECURITY !TARGET_HAVE_EMBEDDED_SECURITY
#endif /* __CONFIG_H__ */
