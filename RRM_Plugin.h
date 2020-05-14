/*****PLUGIN_IDENTITY_CLASS*****/
#pragma once
#include "tsdkpluginidentity.h"
/*****INCLUDES*****/

class RRM_Plugin : public Slb::Ocean::Techlog::PluginIdentity
{
	Q_OBJECT
	Q_PLUGIN_METADATA( IID TSDK_PLUGIN_INTERFACE_ID )

public:
	virtual void getInformation(Slb::Ocean::Techlog::PluginInformation& pluginInformation) const;
	virtual void getActivities(Slb::Ocean::Techlog::PluginActivities& activities) const;
	virtual void getMenu(Slb::Ocean::Techlog::PluginMenu& menu) const;
	virtual QList<QSharedPointer<Slb::Ocean::Techlog::PluginService>> services_impl() const override;
};
