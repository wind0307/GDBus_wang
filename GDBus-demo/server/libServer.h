#ifndef __SERVER_H__
#define __SERVER_H__

#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#include "ExampleGdbusGenerated.h"
/** thread function's definition */

static gboolean Emit_My_signal1(gconstpointer p);
static gboolean Emit_My_Signal2(gconstpointer p);
static gboolean My_Method1(RTplayGdbusExample* object, GDBusMethodInvocation* invocation, const gchar* in_arg, gpointer user_data);
static gboolean My_Method2(RTplayGdbusExample* object, GDBusMethodInvocation* invocation, GVariant* in_arg, gpointer user_data);
static void bus_acquired_cb(GDBusConnection* connection, const gchar* bus_name, gpointer user_data);
static void name_acquired_cb(GDBusConnection* connection, const gchar* bus_name, gpointer user_data);
static void name_lost_cb(GDBusConnection* connection, const gchar* bus_name, gpointer user_data);

bool InitDBusCommunicationServer(void);
bool DeinitDBusCommunicationServer(void);
#endif