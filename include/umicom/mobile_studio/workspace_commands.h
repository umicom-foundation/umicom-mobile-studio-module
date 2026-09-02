/*-----------------------------------------------------------------------------
 * Umicom Mobile Studio Module
 * File: include/umicom/mobile_studio/workspace_commands.h
 *
 * PURPOSE:
 *   Expose product-facing layout, panel and context commands implemented by the Framework runtime.
 *
 * AUTHOR AND ORGANISATION:
 * Sammy Hegab
 * Umicom Foundation
 *
 * LICENCE:
 * MIT
 *---------------------------------------------------------------------------*/


#ifndef UMICOM_MOBILE_STUDIO_WORKSPACE_COMMANDS_H
#define UMICOM_MOBILE_STUDIO_WORKSPACE_COMMANDS_H

#include "umicom/mobile_studio/runtime.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Provide the mobile studio workspace select layout operation used by this module and its
 * client applications.
 */
UmiStatus umi_mobile_studio_workspace_select_layout(
    UmiApplicationWorkspaceRuntime *runtime,
    const char *layout_id);
/**
 * Provide the mobile studio workspace activate panel operation used by this module and its
 * client applications.
 */
UmiStatus umi_mobile_studio_workspace_activate_panel(
    UmiApplicationWorkspaceRuntime *runtime,
    const char *panel_id);
/**
 * Provide the mobile studio workspace set context operation used by this module and its
 * client applications.
 */
UmiStatus umi_mobile_studio_workspace_set_context(
    UmiApplicationWorkspaceRuntime *runtime,
    const char *group_id,
    const char *value);
/**
 * Provide the mobile studio workspace commands operation used by this module and its
 * client applications.
 */
const UmiApplicationCommandSurface *umi_mobile_studio_workspace_commands(
    const UmiApplicationWorkspaceRuntime *runtime);

#ifdef __cplusplus
}
#endif

#endif
