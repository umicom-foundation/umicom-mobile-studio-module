/*-----------------------------------------------------------------------------
 * Umicom Mobile Studio Module
 * File: src/workspace.c
 *
 * PURPOSE:
 *   Project canonical Framework layouts and next-feature planning through the thin application boundary.
 *
 * AUTHOR AND ORGANISATION:
 * Sammy Hegab
 * Umicom Foundation
 *
 * LICENCE:
 * MIT
 *---------------------------------------------------------------------------*/

#include "umicom/mobile_studio/workspace.h"

#include "umicom/mobile_studio/application.h"
#include "umicom/application/experience_plan.h"

/*
 * Return the number of records represented by mobile studio workspace layout without
 * changing their state.
 */
size_t umi_mobile_studio_workspace_layout_count(void)
{
    const UmiApplicationExperienceDefinition *definition =
        umi_mobile_studio_application_experience();
    return definition != NULL ? definition->layout_count : 0U;
}

/*
 * Find mobile studio workspace layout while leaving the underlying catalogue or model
 * owned by this module.
 */
const UmiExperienceLayoutDefinition *umi_mobile_studio_workspace_layout_at(
    size_t index)
{
    const UmiApplicationExperienceDefinition *definition =
        umi_mobile_studio_application_experience();
    return definition != NULL && index < definition->layout_count
        ? &definition->layouts[index] : NULL;
}

/*
 * Provide the mobile studio workspace default operation used by this module and its client
 * applications.
 */
const UmiExperienceLayoutDefinition *umi_mobile_studio_workspace_default(void)
{
    const UmiApplicationExperienceDefinition *definition =
        umi_mobile_studio_application_experience();
    return definition != NULL
        ? umi_application_experience_layout_find(
            definition, definition->default_layout_id)
        : NULL;
}

/*
 * Provide the mobile studio workspace next feature operation used by this module and its
 * client applications.
 */
const UmiExperienceFeatureDefinition *umi_mobile_studio_workspace_next_feature(
    void)
{
    return umi_application_experience_next_feature(
        umi_mobile_studio_application_experience());
}
