
#ifndef AARCHEDITOR_AArchEditor_H
#define AARCHEDITOR_AArchEditor_H

#include "ui_AArchEditor.h"
#include <ATCore/architecture/AArchitectureDocument.h>
#include <ATGUI/AEditor.h>
#include <QtWidgets/QWidget>
#include <QtWidgets/QItemDelegate>

class AArchElementFactory;

class AArchEditor : public AGUIEditorInstance
{
	Q_OBJECT

public:
	AArchEditor(AGUIEditorPlugin * _plug, QWidget *parent = 0);
	~AArchEditor();
	void loadAvalibleElements(AArchElementFactory * arc_factory);
	virtual void showDocument() override;
private:
	Ui::AArchEditor ui;
};


class ArchEditorPlugin : public AGUITEditorPlugin<AArchitectureDocument, AArchEditor>
{
	using _Base = AGUITEditorPlugin<AArchitectureDocument, AArchEditor>;
public:

	ArchEditorPlugin()
		:_Base("arch", "Architecture Model", "EDFD Editor", "Architecture Model Editor", "Base AT Editor for editing Extended DFD diagrams.")
	{}

	virtual AError init(QToolBar * tb, QMenu * menu);
	virtual void openFile(ADocument * file);
};


class SheetDelegate: public QItemDelegate
{
    Q_OBJECT
public:
    SheetDelegate(QTreeView *view, QWidget *parent);

    virtual void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
    virtual QSize sizeHint(const QStyleOptionViewItem &opt, const QModelIndex &index) const;

private:
    QTreeView *m_view;
};

#endif // AARCHEDITOR_H
