#ifndef ABSTRACTPLUGIN_H
#define ABSTRACTPLUGIN_H

#include "episodeplugininterface.h"

class AbstractPlugin
{
public:

    virtual ~AbstractPlugin() {}
    virtual QString buttonName() const=0;
    virtual void run(EpisodePluginInterface * episode)=0;
};
Q_DECLARE_INTERFACE(AbstractPlugin,"com.rom1504.TvSeriesOrganizer.AbstractPlugin/1.1.0")

#endif // ABSTRACTPLUGIN_H
