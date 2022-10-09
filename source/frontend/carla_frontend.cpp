/*
 * Carla Plugin Host
 * Copyright (C) 2011-2022 Filipe Coelho <falktx@falktx.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * For a full copy of the GNU General Public License see the doc/GPL.txt file.
 */

#include "CarlaBackend.h"
#include "CarlaUtils.hpp"

namespace CB = CARLA_BACKEND_NAMESPACE;

// -------------------------------------------------------------------------------------------------------------------

struct WidgetResult {
    union {
        struct {
            const char* command;
            const char* name;
            const char* labelSetup;
        } jackappdialog;
    };
};

CARLA_PLUGIN_EXPORT void* carla_frontend_create_widget(void* parent, const char* widgetType);

CARLA_PLUGIN_EXPORT void* carla_frontend_get_result(void* widget, const char* widgetType);

// -------------------------------------------------------------------------------------------------------------------
