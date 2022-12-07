#pragma once

#include <Windows.h>
#include <string>

// Please use this class. I would like all of the details of the implementation abstracted from view so
// that I only have to deal with the public functions and variables I have listed below.

class MeshAnimator
{
public:

	// Member Variables (create any member variables you need here)
	// ****

	// This is the name of fbx file to be loaded. Example: m_fbx_file = C:\myfiles\CubeMan.fbx
	std::wstring m_fbx_file = L"";

	// This flag determines if the animation should keep looping
	bool m_loop = false;

	// This determines which animation is played. For CubeMan, it will be either "HandWave" or "TwistBody"
	std::wstring m_animation_name = L"HandWave";

	// This is where you load and initialize any objects that you need
	void Initialize();

	// This update routine should be called every frame and manages any objects needed for the animation. It will begin animating whichever animation is stored in m_animation_name
	void Update();

	// This will pause the currently running animation
	void PauseAnimation();

	// This will resume the currently paused animation
	void ResumeAnimation();

	// This will switch the currently playing animation to a new one
	void SwitchAnimation(std::wstring animation_name);

	// Add any additional public functions here
	// **

private:

	// Add any additional private functions or member variables here that don't need to be public
	// **
};

