// idaplugin
// template for creating ida plugins
// using ida 6.8 sdk and visual studio 2015
// ~ cloverleafswag3

#include <ida.hpp>
#include <idp.hpp>
#include <name.hpp>
#include <bytes.hpp>
#include <loader.hpp>
#include <kernwin.hpp>

int idaapi PluginStartup(void) {
	// test to see if using powerpc
	/*if (ph.id == PLFM_PPC) {
		return PLUGIN_OK;
	}*/


	return PLUGIN_OK;//PLUGIN_SKIP;
}

void idaapi PluginShutdown(void) {
}

void idaapi PluginInvoke(int param) {
	msg("hello world!\n");
}

const char G_PLUGIN_COMMENT[] = "IDA Plugin";
const char G_PLUGIN_HELP[] = "This is a template plugin made in Visual Studio 2015.\n";
const char G_PLUGIN_NAME[] = "idaplugin";
const char G_PLUGIN_HOTKEY[] = "";

plugin_t PLUGIN = {
	// values
	IDP_INTERFACE_VERSION,
	NULL,					// plugin flags

	// functions
	PluginStartup,			// initialize and test if pluginis supported
	PluginShutdown,			// terminate. this pointer may be NULL.
	PluginInvoke,			// invoke plugin

	// strings
	(char*)G_PLUGIN_COMMENT,// long comment about the plugin (may appear on status line or as a hint)
	(char*)G_PLUGIN_HELP,	// multiline help about the plugin
	(char*)G_PLUGIN_NAME,	// the preferred short name of the plugin, used by menu system
	(char*)G_PLUGIN_HOTKEY	// the preferred hotkey to run the plugin
};