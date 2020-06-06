#ifndef V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_OBJECTS_INTL_OBJECTS_TQ_H_
#define V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_OBJECTS_INTL_OBJECTS_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<Foreign> LoadJSDateTimeFormatIcuLocale_1289(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o);
void StoreJSDateTimeFormatIcuLocale_1290(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<Foreign> LoadJSDateTimeFormatIcuSimpleDateFormat_1291(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o);
void StoreJSDateTimeFormatIcuSimpleDateFormat_1292(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<Foreign> LoadJSDateTimeFormatIcuDateIntervalFormat_1293(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o);
void StoreJSDateTimeFormatIcuDateIntervalFormat_1294(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<HeapObject> LoadJSDateTimeFormatBoundFormat_1295(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o);
void StoreJSDateTimeFormatBoundFormat_1296(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o, compiler::TNode<HeapObject> p_v);
compiler::TNode<Smi> LoadJSDateTimeFormatFlags_1297(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o);
void StoreJSDateTimeFormatFlags_1298(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<String> LoadJSListFormatLocale_1299(compiler::CodeAssemblerState* state_, compiler::TNode<JSListFormat> p_o);
void StoreJSListFormatLocale_1300(compiler::CodeAssemblerState* state_, compiler::TNode<JSListFormat> p_o, compiler::TNode<String> p_v);
compiler::TNode<Foreign> LoadJSListFormatIcuFormatter_1301(compiler::CodeAssemblerState* state_, compiler::TNode<JSListFormat> p_o);
void StoreJSListFormatIcuFormatter_1302(compiler::CodeAssemblerState* state_, compiler::TNode<JSListFormat> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<Smi> LoadJSListFormatFlags_1303(compiler::CodeAssemblerState* state_, compiler::TNode<JSListFormat> p_o);
void StoreJSListFormatFlags_1304(compiler::CodeAssemblerState* state_, compiler::TNode<JSListFormat> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<String> LoadJSNumberFormatLocale_1305(compiler::CodeAssemblerState* state_, compiler::TNode<JSNumberFormat> p_o);
void StoreJSNumberFormatLocale_1306(compiler::CodeAssemblerState* state_, compiler::TNode<JSNumberFormat> p_o, compiler::TNode<String> p_v);
compiler::TNode<Foreign> LoadJSNumberFormatIcuNumberFormatter_1307(compiler::CodeAssemblerState* state_, compiler::TNode<JSNumberFormat> p_o);
void StoreJSNumberFormatIcuNumberFormatter_1308(compiler::CodeAssemblerState* state_, compiler::TNode<JSNumberFormat> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<HeapObject> LoadJSNumberFormatBoundFormat_1309(compiler::CodeAssemblerState* state_, compiler::TNode<JSNumberFormat> p_o);
void StoreJSNumberFormatBoundFormat_1310(compiler::CodeAssemblerState* state_, compiler::TNode<JSNumberFormat> p_o, compiler::TNode<HeapObject> p_v);
compiler::TNode<Smi> LoadJSNumberFormatFlags_1311(compiler::CodeAssemblerState* state_, compiler::TNode<JSNumberFormat> p_o);
void StoreJSNumberFormatFlags_1312(compiler::CodeAssemblerState* state_, compiler::TNode<JSNumberFormat> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<String> LoadJSPluralRulesLocale_1313(compiler::CodeAssemblerState* state_, compiler::TNode<JSPluralRules> p_o);
void StoreJSPluralRulesLocale_1314(compiler::CodeAssemblerState* state_, compiler::TNode<JSPluralRules> p_o, compiler::TNode<String> p_v);
compiler::TNode<Smi> LoadJSPluralRulesFlags_1315(compiler::CodeAssemblerState* state_, compiler::TNode<JSPluralRules> p_o);
void StoreJSPluralRulesFlags_1316(compiler::CodeAssemblerState* state_, compiler::TNode<JSPluralRules> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Foreign> LoadJSPluralRulesIcuPluralRules_1317(compiler::CodeAssemblerState* state_, compiler::TNode<JSPluralRules> p_o);
void StoreJSPluralRulesIcuPluralRules_1318(compiler::CodeAssemblerState* state_, compiler::TNode<JSPluralRules> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<Foreign> LoadJSPluralRulesIcuNumberFormatter_1319(compiler::CodeAssemblerState* state_, compiler::TNode<JSPluralRules> p_o);
void StoreJSPluralRulesIcuNumberFormatter_1320(compiler::CodeAssemblerState* state_, compiler::TNode<JSPluralRules> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<String> LoadJSRelativeTimeFormatLocale_1321(compiler::CodeAssemblerState* state_, compiler::TNode<JSRelativeTimeFormat> p_o);
void StoreJSRelativeTimeFormatLocale_1322(compiler::CodeAssemblerState* state_, compiler::TNode<JSRelativeTimeFormat> p_o, compiler::TNode<String> p_v);
compiler::TNode<Foreign> LoadJSRelativeTimeFormatIcuFormatter_1323(compiler::CodeAssemblerState* state_, compiler::TNode<JSRelativeTimeFormat> p_o);
void StoreJSRelativeTimeFormatIcuFormatter_1324(compiler::CodeAssemblerState* state_, compiler::TNode<JSRelativeTimeFormat> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<Smi> LoadJSRelativeTimeFormatFlags_1325(compiler::CodeAssemblerState* state_, compiler::TNode<JSRelativeTimeFormat> p_o);
void StoreJSRelativeTimeFormatFlags_1326(compiler::CodeAssemblerState* state_, compiler::TNode<JSRelativeTimeFormat> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Foreign> LoadJSLocaleIcuLocale_1327(compiler::CodeAssemblerState* state_, compiler::TNode<JSLocale> p_o);
void StoreJSLocaleIcuLocale_1328(compiler::CodeAssemblerState* state_, compiler::TNode<JSLocale> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<String> LoadJSSegmenterLocale_1329(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmenter> p_o);
void StoreJSSegmenterLocale_1330(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmenter> p_o, compiler::TNode<String> p_v);
compiler::TNode<Foreign> LoadJSSegmenterIcuBreakIterator_1331(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmenter> p_o);
void StoreJSSegmenterIcuBreakIterator_1332(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmenter> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<Smi> LoadJSSegmenterFlags_1333(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmenter> p_o);
void StoreJSSegmenterFlags_1334(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmenter> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Foreign> LoadJSSegmentIteratorIcuBreakIterator_1335(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmentIterator> p_o);
void StoreJSSegmentIteratorIcuBreakIterator_1336(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmentIterator> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<Foreign> LoadJSSegmentIteratorUnicodeString_1337(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmentIterator> p_o);
void StoreJSSegmentIteratorUnicodeString_1338(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmentIterator> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<Smi> LoadJSSegmentIteratorFlags_1339(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmentIterator> p_o);
void StoreJSSegmentIteratorFlags_1340(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmentIterator> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<String> LoadJSV8BreakIteratorLocale_1341(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorLocale_1342(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<String> p_v);
compiler::TNode<Foreign> LoadJSV8BreakIteratorBreakIterator_1343(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorBreakIterator_1344(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<Foreign> LoadJSV8BreakIteratorUnicodeString_1345(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorUnicodeString_1346(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<HeapObject> LoadJSV8BreakIteratorBoundAdoptText_1347(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorBoundAdoptText_1348(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<HeapObject> p_v);
compiler::TNode<HeapObject> LoadJSV8BreakIteratorBoundFirst_1349(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorBoundFirst_1350(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<HeapObject> p_v);
compiler::TNode<HeapObject> LoadJSV8BreakIteratorBoundNext_1351(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorBoundNext_1352(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<HeapObject> p_v);
compiler::TNode<HeapObject> LoadJSV8BreakIteratorBoundCurrent_1353(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorBoundCurrent_1354(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<HeapObject> p_v);
compiler::TNode<HeapObject> LoadJSV8BreakIteratorBoundBreakType_1355(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorBoundBreakType_1356(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<HeapObject> p_v);
compiler::TNode<Smi> LoadJSV8BreakIteratorBreakIteratorType_1357(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorBreakIteratorType_1358(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Foreign> LoadJSCollatorIcuCollator_1359(compiler::CodeAssemblerState* state_, compiler::TNode<JSCollator> p_o);
void StoreJSCollatorIcuCollator_1360(compiler::CodeAssemblerState* state_, compiler::TNode<JSCollator> p_o, compiler::TNode<Foreign> p_v);
compiler::TNode<HeapObject> LoadJSCollatorBoundCompare_1361(compiler::CodeAssemblerState* state_, compiler::TNode<JSCollator> p_o);
void StoreJSCollatorBoundCompare_1362(compiler::CodeAssemblerState* state_, compiler::TNode<JSCollator> p_o, compiler::TNode<HeapObject> p_v);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_OBJECTS_INTL_OBJECTS_TQ_H_
