/*****PLUGIN_IDENTITY_CLASS*****/
#include "tsdkplugininformation.h"
#include "tsdkpluginmenu.h"
#include "tsdkpluginmenutab.h"
#include "tsdkpluginmenugroup.h"
#include "tsdkpluginmenuaction.h"
#include "RRM_Plugin.h"

// Please include here your activity header files
/*****ACTIVITIES*INCLUDE*****/

using namespace Slb::Ocean::Techlog;

// Please declare action id for your plug-in activity with line like this:
/*****ACTION*ID*****/
// static QString actionId("Activity");

/// <summary>
/// Gets the static information about the plug-in
/// This method runs once in the plug-in life; when it loaded into the plug-in manager.
/// If some changes are applied to this method, you have to restart Techlog to see them in the plug-in manager.
/// </summary>
void RRM_Plugin::getInformation(PluginInformation& pluginInformation) const
{
	pluginInformation.setVendorName(PLUGIN_VENDOR_NAME);
	pluginInformation.setName(PLUGIN_NAME);
	pluginInformation.setDescription("");
	pluginInformation.setVersion(PLUGIN_VERSION);
	pluginInformation.setReleaseDate("5/15/2020");
	pluginInformation.setIcon(QIcon("ocean.png"));
	pluginInformation.setCreator(PLUGIN_VENDOR_NAME);
	pluginInformation.setSupportEmail("contact@company.info");
	pluginInformation.setCrashDumpEmail("contact@company.info");
}

/// <summary>
/// Gets the list of activities of the plug-in
/// This method runs once in the plug-in life; when it loaded into the plug-in manager.
/// If some changes are applied to this method, you have to restart Techlog to see them in the plug-in manager.
/// A new activity type is added to the activity list using TSDK_ACTIVITY macro with the activity class name and an unique string identifier
/// </summary>
void RRM_Plugin::getActivities(Slb::Ocean::Techlog::PluginActivities& activities) const
{
	// Please fill this method with your activities with lines like this:
	// activities.add(TSDK_ACTIVITY(Activity, actionId));
	/*****ACTIVITIES*REGISTRATION*PLACE*****/
}

/// <summary>
/// Gets the menu items (tab, group, action) used to start the plugin activities. 
/// This method runs once in the plug-in life; when it loaded into the plug-in manager.
/// If some changes are applied to this method, you have to restart Techlog to see them in the plug-in manager.
/// </summary>
void RRM_Plugin::getMenu(PluginMenu& menu) const
{
	// Create a new menu tab for the plug-in like this:
	// PluginMenuTab tab("MyFirstPluginTab");
	// tab.setTitle("My first plugin tab");

	// Create a new menu group for the plug-in like this:
	// PluginMenuGroup group("MyFirstPluginGroup");
	//  group.setTitle("My first plugin group");	

	// Create a new cation menu for a plug-in activity like this:
	// PluginMenuAction actionMenu(actionId);
	// actionMenu.setText("My first plugin activity");
	// actionMenu.setTooltip("My first plugin activity");

	// Add the action menu to the plug-in group
	// group.addAction(actionMenu);
	// Add the plug-in group to the plug-in tab
	// tab.addGroup(group);
	// Add the plug-in tab to the plug-in menu
	// menu.addTab(tab);

	/*****MENU_REGISTRATION*****/
}

QList<QSharedPointer<Slb::Ocean::Techlog::PluginService>> RRM_Plugin::services_impl() const
{
	static QList<QSharedPointer<PluginService>> services;

	if (!services.isEmpty())
		return services;

	// Register the Import/Export services

	return services;
}