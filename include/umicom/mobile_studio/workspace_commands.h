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

UmiStatus umi_mobile_studio_workspace_select_layout(
    UmiApplicationWorkspaceRuntime *runtime,
    const char *layout_id);
UmiStatus umi_mobile_studio_workspace_activate_panel(
    UmiApplicationWorkspaceRuntime *runtime,
    const char *panel_id);
UmiStatus umi_mobile_studio_workspace_set_context(
    UmiApplicationWorkspaceRuntime *runtime,
    const char *group_id,
    const char *value);
const UmiApplicationCommandSurface *umi_mobile_studio_workspace_commands(
    const UmiApplicationWorkspaceRuntime *runtime);

#ifdef __cplusplus
}
#endif

#endif
