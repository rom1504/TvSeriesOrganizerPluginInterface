#include "episodeplugininterface.h"
#include <QDebug>

EpisodePluginInterface::EpisodePluginInterface(QString seriesName, int seasonNumber, int episodeNumber, QObject *parent) :
    QObject(parent),mSeriesName(seriesName),mSeasonNumber(seasonNumber),mEpisodeNumber(episodeNumber)
{
}

QString EpisodePluginInterface::seriesName() const
{
    return mSeriesName;
}

int EpisodePluginInterface::seasonNumber() const
{
    return mSeasonNumber;
}

int EpisodePluginInterface::episodeNumber() const
{
    return mEpisodeNumber;
}

void EpisodePluginInterface::sendSeenChanged(bool seen)
{
    emit seenChanged(seen);
}
