#include "ASDPWidget.h"
#include <ATCore/sdp/SDPManager.h>
#include <QtWidgets/QTreeWidgetItem>

ASDPWidget::ASDPWidget(SDPManager * sdp_mgr, QWidget *parent)
	: QWidget(parent), m_pSdpMgr(sdp_mgr)
{
	ui.setupUi(this);

	updateData();
}

ASDPWidget::~ASDPWidget()
{

}

void ASDPWidget::updateData()
{
	ui.treePlugins->clear();

	QList<QTreeWidgetItem *> group_items;
	for (auto & document : m_pSdpMgr->sdps())
	{
		auto group_item = new QTreeWidgetItem((QTreeWidget*)0, QStringList(QString::fromStdString(document->name())));
		group_items.append(group_item);
	}
	
	ui.treePlugins->insertTopLevelItems(0, group_items);

	for(auto gi : group_items)
		gi->setExpanded(true);
}
