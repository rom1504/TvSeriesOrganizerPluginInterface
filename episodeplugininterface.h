#ifndef EPISODEPLUGININTERFACE_H
#define EPISODEPLUGININTERFACE_H

#include <QObject>

class EpisodePluginInterface : public QObject
{
    Q_OBJECT
public:
    explicit EpisodePluginInterface(QString seriesName,int seasonNumber,int episodeNumber,QObject *parent = 0);
    QString seriesName() const;
    int seasonNumber() const;
    int episodeNumber() const;
    void sendSeenChanged(bool seen);

signals:
    void seenChanged(bool seen);

private:
    QString mSeriesName;
    int mSeasonNumber;
    int mEpisodeNumber;

};

#endif // EPISODEPLUGININTERFACE_H
