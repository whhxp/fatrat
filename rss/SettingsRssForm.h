#ifndef SETTINGSRSSFORM_H
#define SETTINGSRSSFORM_H
#include "config.h"
#include "ui_SettingsRssForm.h"
#include "WidgetHostChild.h"
#include <QObject>

#ifndef WITH_BITTORRENT
#	error This file is not supposed to be included!
#endif

#include "RssFetcher.h"

class SettingsRssForm : public QObject, public WidgetHostChild, Ui_SettingsRssForm
{
Q_OBJECT
public:
	SettingsRssForm(QWidget* w, QObject* parent);
	virtual void load();
	virtual void accepted();
protected slots:
	void feedAdd();
	void feedEdit();
	void feedDelete();
	
	void regexpAdd();
	void regexpEdit();
	void regexpDelete();
private:
	QList<RssFeed> m_feeds;
	QList<RssRegexp> m_regexps;
};

#endif