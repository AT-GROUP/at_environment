#ifndef ATENVIRONMENT_H
#define ATENVIRONMENT_H

#include <ATCore/project/AProjectManager.h>
#include <ATGUI/AEditor.h>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiSubWindow>
#include "ui_ATEnvironment.h"
#include <libxml/tree.h>
#include <libxml/parser.h>


class AProject;
class AGroupProjectNode;
class ATApplication;

class ATMdiWindow : public QMdiSubWindow
{
	Q_OBJECT

public:
	ATMdiWindow(AGUIEditorInstance * ed_inst)
		:QMdiSubWindow(), m_pEditorInstance(ed_inst)
	{
		layout()->addWidget(ed_inst);
	}

protected:
	virtual void closeEvent(QCloseEvent * closeEvent)
	{
		emit editorClosed();
	}

signals:
	void editorClosed();

private:
	AGUIEditorInstance * m_pEditorInstance;
};

class ATEnvironment : public QMainWindow, public AProjectManager, public AEditorDelegate
{
	Q_OBJECT

public:
	ATEnvironment(ATApplication * app, QWidget *parent = 0);
	virtual ~ATEnvironment();
	
	/*
	Displays given project.
	*/
	void displayProject(AProject * _project);


	/*
	Closes current project. Returns 0 if after execution
	no project is displayed.
	*/
	virtual int closeProject() override;

	//void parseDocument(xmlNodePtr _ptr, AProjectNode * _node);
	
	void closeMdiWindow(ATMdiWindow * mdi_wnd, const std::string & fpath);

	//AEditorDelegate implementation
	virtual void documentChanged(const std::shared_ptr<ADocument> & doc) override;
	virtual void documentOpenRequested(const std::string & document_name) override;
public slots:
	void createNewProject();
	void createNewFile(AQProjectNode * project_parent_node);
	void openProject(const std::string & path);
	void openProject();
	void openFile();
	void openFile(const std::string & file_path);
	void openNodeDocument(ADocumentProjectNode * doc_node);
	void openDocument(const std::string & document_name);

	void linkFileActions(AGUIEditorInstance * editor_widget);
private:
	Ui::ATEnvironmentClass ui;
	ATApplication * m_pApplication;
	std::map<std::string, ATMdiWindow*> mOpenedFiles;
};

#endif // ATENVIRONMENT_H
