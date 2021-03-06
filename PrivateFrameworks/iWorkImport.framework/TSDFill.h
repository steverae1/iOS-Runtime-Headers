/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSDFill : NSObject <TSDPathPainter, TSSThemeAsset> {
}

+ (id)instanceWithArchive:(const struct FillArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::pair<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, true>, std::__1::allocator<std::__1::pair<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::pair<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_3_1_1; } x3; struct Color {} *x4; struct GradientArchive {} *x5; struct ImageFillArchive {} *x6; int x7; unsigned int x8[1]; }*)arg1 unarchiver:(id)arg2;
+ (id)p_subclassRegistry;
+ (void)registerSubclass:(Class)arg1;

- (void)applyToCALayer:(id)arg1 withScale:(float)arg2;
- (void)applyToCAShapeLayer:(id)arg1 withScale:(float)arg2;
- (BOOL)canApplyToCALayer;
- (BOOL)canApplyToCALayerByAddingSublayers;
- (BOOL)canApplyToCAShapeLayer;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (BOOL)drawsInOneStep;
- (int)fillType;
- (id)initWithArchive:(const struct FillArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::pair<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, true>, std::__1::allocator<std::__1::pair<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::pair<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_3_1_1; } x3; struct Color {} *x4; struct GradientArchive {} *x5; struct ImageFillArchive {} *x6; int x7; unsigned int x8[1]; }*)arg1 unarchiver:(id)arg2;
- (BOOL)isClear;
- (BOOL)isNearlyWhite;
- (BOOL)isOpaque;
- (BOOL)isThemeEquivalent:(id)arg1;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintPath:(struct CGPath { }*)arg1 naturalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 inContext:(struct CGContext { }*)arg3 isPDF:(BOOL)arg4;
- (void)paintRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)referenceColor;
- (void)saveToArchive:(struct FillArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::pair<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, true>, std::__1::allocator<std::__1::pair<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::pair<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_3_1_1; } x3; struct Color {} *x4; struct GradientArchive {} *x5; struct ImageFillArchive {} *x6; int x7; unsigned int x8[1]; }*)arg1 archiver:(id)arg2;
- (BOOL)shouldBeReappliedToCALayer:(id)arg1;

@end
