#pragma once

#include "Module.h"

class NoKnockBack : public IModule {
public:
	NoKnockBack();
	~NoKnockBack();

	// Inherited via IModule
	virtual std::string getModuleName() override;
};