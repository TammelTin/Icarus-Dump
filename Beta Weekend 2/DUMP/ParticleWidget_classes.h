// WidgetBlueprintGeneratedClass ParticleWidget.ParticleWidget_C
// Size: 0x270 (Inherited: 0x260)
struct UParticleWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UMeshWidget* ParticleMeshWidget; // 0x268(0x08)

	void UpdateParticle(int32_t MeshId, int32_t InstanceId, struct UMeshWidget* ParticleWidget); // Function ParticleWidget.ParticleWidget_C.UpdateParticle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function ParticleWidget.ParticleWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ParticleMeshWidget_K2Node_ComponentBoundEvent_0_OnUpdateMeshInstance__DelegateSignature(int32_t MeshId, int32_t InstanceId); // Function ParticleWidget.ParticleWidget_C.BndEvt__ParticleMeshWidget_K2Node_ComponentBoundEvent_0_OnUpdateMeshInstance__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_ParticleWidget(int32_t EntryPoint); // Function ParticleWidget.ParticleWidget_C.ExecuteUbergraph_ParticleWidget // (Final|UbergraphFunction) // @ game+0x1a38c80
};

