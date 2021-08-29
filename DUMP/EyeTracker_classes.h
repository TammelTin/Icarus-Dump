// Class EyeTracker.EyeTrackerFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UEyeTrackerFunctionLibrary : UBlueprintFunctionLibrary {

	void SetEyeTrackedPlayer(struct APlayerController* PlayerController); // Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2bc5250
	bool IsStereoGazeDataAvailable(); // Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2bc5220
	bool IsEyeTrackerConnected(); // Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2bc51f0
	bool GetStereoGazeData(struct FEyeTrackerStereoGazeData OutGazeData); // Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2bc5150
	bool GetGazeData(struct FEyeTrackerGazeData OutGazeData); // Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2bc50a0
};

