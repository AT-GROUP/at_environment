#ifndef SDPWIDGET_H
#define SDPWIDGET_H

#include <QtWidgets/QListWidget>
#include <QtGui/QDrag>
#include <QtGui/QMouseEvent>
#include <QtCore/QMimeData>
//#include <QtWidgets>

class SDPWidget : public QListWidget
{
    Q_OBJECT
public:
    SDPWidget(QWidget *parent = 0);

	void add(QString name, std::vector<int> i);

private:
	int m_CountSdp = 1;
	std::map <QString, std::vector<int>> m_IdMap;

public slots:
	void itemCover(QListWidgetItem * item);

signals:
	void covered(std::vector<int> i);
	
};

#endif // SDPWIDGET_H
