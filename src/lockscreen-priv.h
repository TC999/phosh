/*
 * Copyright (C) 2025 The Phosh Developers
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#pragma once

#include "calls-manager.h"
#include "lockscreen.h"

G_BEGIN_DECLS

GtkWidget *phosh_lockscreen_new (GType lockscreen_type, gpointer layer_shell, gpointer wl_output,
                                 PhoshCallsManager *calls_manager);

G_END_DECLS
