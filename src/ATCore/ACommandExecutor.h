#ifndef ATCore_ACommandExecutor_h
#define ATCore_ACommandExecutor_h

#include "config.h"
#include "AError.h"
#include "plugin/APluginManager.h"
#include "architecture/AArchElementFactory.h"
#include "ASingleton.h"
#include <string>

class AUtilityPlugin;

class AIConsoleDelegate
{
public:
	virtual AError executeScript(const std::string & script, std::string & answer) = 0;
};


class AT_CORE_API ACommandExecutor : public APluginManager, public AIConsoleDelegate, public AArchElementFactory
{
public:
	ACommandExecutor();

	/*
	Primitive command execution.
	*/
	virtual AError executeCommand(const std::string & cmd_text, std::string & answer);

	/*
	AConsoleDelegate implementation. This method runs interpreter,
	compiles and executes given script via primitive commands,
	addressed to special plugins or core.
	*/
	virtual AError executeScript(const std::string & script, std::string & answer);
};

AT_CORE_API ACommandExecutor * command_executor();

typedef ASingleton<ACommandExecutor> CommandExecutor;

#endif
