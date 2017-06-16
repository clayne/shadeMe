#pragma once

#include "shadeMeInternals.h"

namespace ShadowSundries
{
	extern TESObjectREFR*		kDebugSelection;
	extern TESObjectREFR*		kExclusiveCaster;

	namespace EditorSupport
	{
		_DeclareMemHdlr(EnableCastsShadowsFlag, "allows the flag to be set on non-light refs");
	}

	namespace SundrySloblock
	{
		_DeclareMemHdlr(ConsoleDebugSelectionA, "provides more detail about the console debug selection");
		_DeclareMemHdlr(ConsoleDebugSelectionB, "");
		_DeclareMemHdlr(ForceShaderModel3RenderPath, "");
	}

	void WriteShadowDebug(const char* Format, ...);

	void Patch(bool Editor);
}

