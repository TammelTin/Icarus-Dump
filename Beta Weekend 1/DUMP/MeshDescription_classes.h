// Class MeshDescription.MeshDescription
// Size: 0x28 (Inherited: 0x28)
struct UMeshDescription : UObject {
};

// Class MeshDescription.MeshDescriptionBase
// Size: 0x390 (Inherited: 0x28)
struct UMeshDescriptionBase : UObject {
	char pad_28[0x368]; // 0x28(0x368)

	void SetVertexPosition(struct FVertexID VertexID, struct FVector position); // Function MeshDescription.MeshDescriptionBase.SetVertexPosition // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2b948a0
	void SetPolygonVertexInstance(struct FPolygonID PolygonID, int32_t PerimeterIndex, struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x2b94780
	void SetPolygonPolygonGroup(struct FPolygonID PolygonID, struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x2b946b0
	void ReversePolygonFacing(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing // (Final|Native|Public|BlueprintCallable) // @ game+0x2b94630
	void ReserveNewVertices(int32_t NumberOfNewVertices); // Function MeshDescription.MeshDescriptionBase.ReserveNewVertices // (Final|Native|Public|BlueprintCallable) // @ game+0x2b945a0
	void ReserveNewVertexInstances(int32_t NumberOfNewVertexInstances); // Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances // (Final|Native|Public|BlueprintCallable) // @ game+0x2b94360
	void ReserveNewTriangles(int32_t NumberOfNewTriangles); // Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles // (Final|Native|Public|BlueprintCallable) // @ game+0x2b94510
	void ReserveNewPolygons(int32_t NumberOfNewPolygons); // Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons // (Final|Native|Public|BlueprintCallable) // @ game+0x2b94480
	void ReserveNewPolygonGroups(int32_t NumberOfNewPolygonGroups); // Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups // (Final|Native|Public|BlueprintCallable) // @ game+0x2b943f0
	void ReserveNewEdges(int32_t NumberOfNewEdges); // Function MeshDescription.MeshDescriptionBase.ReserveNewEdges // (Final|Native|Public|BlueprintCallable) // @ game+0x2b94360
	bool IsVertexValid(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.IsVertexValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b942d0
	bool IsVertexOrphaned(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b94240
	bool IsVertexInstanceValid(struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b941b0
	bool IsTriangleValid(struct FTriangleID TriangleID); // Function MeshDescription.MeshDescriptionBase.IsTriangleValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b94120
	bool IsTrianglePartOfNgon(struct FTriangleID TriangleID); // Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b94090
	bool IsPolygonValid(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.IsPolygonValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b94000
	bool IsPolygonGroupValid(struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b93f70
	bool IsEmpty(); // Function MeshDescription.MeshDescriptionBase.IsEmpty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b93f40
	bool IsEdgeValid(struct FEdgeID EdgeID); // Function MeshDescription.MeshDescriptionBase.IsEdgeValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b93eb0
	bool IsEdgeInternalToPolygon(struct FEdgeID EdgeID, struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b93dd0
	bool IsEdgeInternal(struct FEdgeID EdgeID); // Function MeshDescription.MeshDescriptionBase.IsEdgeInternal // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b93d40
	void GetVertexVertexInstances(struct FVertexID VertexID, struct TArray<struct FVertexInstanceID> OutVertexInstanceIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b93c50
	struct FVector GetVertexPosition(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetVertexPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b93bb0
	struct FEdgeID GetVertexPairEdge(struct FVertexID VertexID0, struct FVertexID VertexID1); // Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b93ad0
	struct FVertexID GetVertexInstanceVertex(struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b93a30
	struct FEdgeID GetVertexInstancePairEdge(struct FVertexInstanceID VertexInstanceID0, struct FVertexInstanceID VertexInstanceID1); // Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b93950
	struct FVertexInstanceID GetVertexInstanceForTriangleVertex(struct FTriangleID TriangleID, struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b93870
	struct FVertexInstanceID GetVertexInstanceForPolygonVertex(struct FPolygonID PolygonID, struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b93790
	void GetVertexInstanceConnectedTriangles(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FTriangleID> OutConnectedTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b936a0
	void GetVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FPolygonID> OutConnectedPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b935b0
	void GetVertexConnectedTriangles(struct FVertexID VertexID, struct TArray<struct FTriangleID> OutConnectedTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b934c0
	void GetVertexConnectedPolygons(struct FVertexID VertexID, struct TArray<struct FPolygonID> OutConnectedPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b933d0
	void GetVertexConnectedEdges(struct FVertexID VertexID, struct TArray<struct FEdgeID> OutEdgeIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b932e0
	void GetVertexAdjacentVertices(struct FVertexID VertexID, struct TArray<struct FVertexID> OutAdjacentVertexIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b931f0
	void GetTriangleVertices(struct FTriangleID TriangleID, struct TArray<struct FVertexID> OutVertexIDs); // Function MeshDescription.MeshDescriptionBase.GetTriangleVertices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b93100
	void GetTriangleVertexInstances(struct FTriangleID TriangleID, struct TArray<struct FVertexInstanceID> OutVertexInstanceIDs); // Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b93010
	struct FVertexInstanceID GetTriangleVertexInstance(struct FTriangleID TriangleID, int32_t Index); // Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b92f30
	struct FPolygonGroupID GetTrianglePolygonGroup(struct FTriangleID TriangleID); // Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b92e90
	struct FPolygonID GetTrianglePolygon(struct FTriangleID TriangleID); // Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b92df0
	void GetTriangleEdges(struct FTriangleID TriangleID, struct TArray<struct FEdgeID> OutEdgeIDs); // Function MeshDescription.MeshDescriptionBase.GetTriangleEdges // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b92d00
	void GetTriangleAdjacentTriangles(struct FTriangleID TriangleID, struct TArray<struct FTriangleID> OutTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b92c10
	void GetPolygonVertices(struct FPolygonID PolygonID, struct TArray<struct FVertexID> OutVertexIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonVertices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b92b20
	void GetPolygonVertexInstances(struct FPolygonID PolygonID, struct TArray<struct FVertexInstanceID> OutVertexInstanceIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b92a30
	void GetPolygonTriangles(struct FPolygonID PolygonID, struct TArray<struct FTriangleID> OutTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b92940
	struct FPolygonGroupID GetPolygonPolygonGroup(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b928a0
	void GetPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID> OutEdgeIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b927b0
	void GetPolygonInternalEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID> OutEdgeIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b926c0
	void GetPolygonGroupPolygons(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FPolygonID> OutPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b925d0
	void GetPolygonAdjacentPolygons(struct FPolygonID PolygonID, struct TArray<struct FPolygonID> OutPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b924e0
	int32_t GetNumVertexVertexInstances(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b92450
	int32_t GetNumVertexInstanceConnectedTriangles(struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b923c0
	int32_t GetNumVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b92330
	int32_t GetNumVertexConnectedTriangles(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b922a0
	int32_t GetNumVertexConnectedPolygons(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b92210
	int32_t GetNumVertexConnectedEdges(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b92180
	int32_t GetNumPolygonVertices(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b920f0
	int32_t GetNumPolygonTriangles(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b92060
	int32_t GetNumPolygonInternalEdges(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b91fd0
	int32_t GetNumPolygonGroupPolygons(struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b91f40
	int32_t GetNumEdgeConnectedTriangles(struct FEdgeID EdgeID); // Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b91eb0
	int32_t GetNumEdgeConnectedPolygons(struct FEdgeID EdgeID); // Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b91e20
	void GetEdgeVertices(struct FEdgeID EdgeID, struct TArray<struct FVertexID> OutVertexIDs); // Function MeshDescription.MeshDescriptionBase.GetEdgeVertices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b91d30
	struct FVertexID GetEdgeVertex(struct FEdgeID EdgeID, int32_t VertexNumber); // Function MeshDescription.MeshDescriptionBase.GetEdgeVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b91c50
	void GetEdgeConnectedTriangles(struct FEdgeID EdgeID, struct TArray<struct FTriangleID> OutConnectedTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b91b60
	void GetEdgeConnectedPolygons(struct FEdgeID EdgeID, struct TArray<struct FPolygonID> OutConnectedPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b91a70
	void Empty(); // Function MeshDescription.MeshDescriptionBase.Empty // (Final|Native|Public|BlueprintCallable) // @ game+0x2b91a50
	void DeleteVertexInstance(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FVertexID> OrphanedVertices); // Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b91960
	void DeleteVertex(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.DeleteVertex // (Final|Native|Public|BlueprintCallable) // @ game+0x2b918e0
	void DeleteTriangle(struct FTriangleID TriangleID, struct TArray<struct FEdgeID> OrphanedEdges, struct TArray<struct FVertexInstanceID> OrphanedVertexInstances, struct TArray<struct FPolygonGroupID> OrphanedPolygonGroupsPtr); // Function MeshDescription.MeshDescriptionBase.DeleteTriangle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b91720
	void DeletePolygonGroup(struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x2b916a0
	void DeletePolygon(struct FPolygonID PolygonID, struct TArray<struct FEdgeID> OrphanedEdges, struct TArray<struct FVertexInstanceID> OrphanedVertexInstances, struct TArray<struct FPolygonGroupID> OrphanedPolygonGroups); // Function MeshDescription.MeshDescriptionBase.DeletePolygon // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b914e0
	void DeleteEdge(struct FEdgeID EdgeID, struct TArray<struct FVertexID> OrphanedVertices); // Function MeshDescription.MeshDescriptionBase.DeleteEdge // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b913f0
	void CreateVertexWithID(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.CreateVertexWithID // (Final|Native|Public|BlueprintCallable) // @ game+0x2b91370
	void CreateVertexInstanceWithID(struct FVertexInstanceID VertexInstanceID, struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID // (Final|Native|Public|BlueprintCallable) // @ game+0x2b912a0
	struct FVertexInstanceID CreateVertexInstance(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.CreateVertexInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x2b91200
	struct FVertexID CreateVertex(); // Function MeshDescription.MeshDescriptionBase.CreateVertex // (Final|Native|Public|BlueprintCallable) // @ game+0x2b911c0
	void CreateTriangleWithID(struct FTriangleID TriangleID, struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID> VertexInstanceIDs, struct TArray<struct FEdgeID> NewEdgeIDs); // Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b91010
	struct FTriangleID CreateTriangle(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID> VertexInstanceIDs, struct TArray<struct FEdgeID> NewEdgeIDs); // Function MeshDescription.MeshDescriptionBase.CreateTriangle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b90ea0
	void CreatePolygonWithID(struct FPolygonID PolygonID, struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID> VertexInstanceIDs, struct TArray<struct FEdgeID> NewEdgeIDs); // Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b90cf0
	void CreatePolygonGroupWithID(struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID // (Final|Native|Public|BlueprintCallable) // @ game+0x2b90c70
	struct FPolygonGroupID CreatePolygonGroup(); // Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x2b90c30
	struct FPolygonID CreatePolygon(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID> VertexInstanceIDs, struct TArray<struct FEdgeID> NewEdgeIDs); // Function MeshDescription.MeshDescriptionBase.CreatePolygon // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b90ac0
	void CreateEdgeWithID(struct FEdgeID EdgeID, struct FVertexID VertexID0, struct FVertexID VertexID1); // Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID // (Final|Native|Public|BlueprintCallable) // @ game+0x2b909a0
	struct FEdgeID CreateEdge(struct FVertexID VertexID0, struct FVertexID VertexID1); // Function MeshDescription.MeshDescriptionBase.CreateEdge // (Final|Native|Public|BlueprintCallable) // @ game+0x2b908c0
	void ComputePolygonTriangulation(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation // (Final|Native|Public|BlueprintCallable) // @ game+0x2b90840
};
