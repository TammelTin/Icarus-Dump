// UserDefinedStruct HabHandStateStruct.HabHandStateStruct
// Size: 0x30 (Inherited: 0x00)
struct FHabHandStateStruct {
	enum class ESpaceHandGripMode HandMode_2_3BD2AF2C427B5F1B39840BB09F35AD9D; // 0x00(0x01)
	bool Reaching_15_9D28D631418D25DF386AD0B1C27F775E; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector RelativeLocation_25_5AC79C6A4178DE0E1701B6A38044ECF9; // 0x04(0x0c)
	struct FVector RelativeNormal_26_1FC6816642E603478894349676EB5AF9; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UPrimitiveComponent* Component_12_CE5FF15A41EC22A879CEF595F50F7185; // 0x20(0x08)
	float HandDistance_19_6AAC0007451DAB31DD23CDA41E0DBF49; // 0x28(0x04)
	float Created_29_CFFB62AB43479A6245FF889EF02A8B15; // 0x2c(0x04)
};

