/*-----------------------------------------------------------------------------
 * Umicom Mobile Studio Module
 * File: include/umicom/mobile_studio/runtime.h
 *
 * PURPOSE:
 *   Bind the thin product to the Framework-owned application workspace runtime without duplicating services.
 *
 * AUTHOR AND ORGANISATION:
 * Sammy Hegab
 * Umicom Foundation
 *
 * LICENCE:
 * MIT
 *---------------------------------------------------------------------------*/

#ifndef UMICOM_MOBILE_STUDIO_RUNTIME_H
#define UMICOM_MOBILE_STUDIO_RUNTIME_H

#include "umicom/application/runtime/runtime.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Initialise mobile studio runtime from caller-provided values so later operations receive
 * a known state.
 */
UmiStatus umi_mobile_studio_runtime_init(
    UmiApplicationWorkspaceRuntime *out_runtime);
/**
 * Provide the mobile studio runtime health operation used by this module and its client
 * applications.
 */
UmiStatus umi_mobile_studio_runtime_health(
    UmiApplicationCapabilityProbe probe,
    void *user_data,
    UmiApplicationRuntimeHealth *out_health);
/**
 * Provide the mobile studio runtime experience operation used by this module and its
 * client applications.
 */
const UmiApplicationExperienceDefinition *umi_mobile_studio_runtime_experience(void);

#ifdef __cplusplus
}
#endif

#endif
