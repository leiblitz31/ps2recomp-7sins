#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048E8A0
// Address: 0x48e8a0 - 0x48eea0
void sub_0048E8A0_0x48e8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E8A0_0x48e8a0");
#endif

    switch (ctx->pc) {
        case 0x48e8a0u: goto label_48e8a0;
        case 0x48e8a4u: goto label_48e8a4;
        case 0x48e8a8u: goto label_48e8a8;
        case 0x48e8acu: goto label_48e8ac;
        case 0x48e8b0u: goto label_48e8b0;
        case 0x48e8b4u: goto label_48e8b4;
        case 0x48e8b8u: goto label_48e8b8;
        case 0x48e8bcu: goto label_48e8bc;
        case 0x48e8c0u: goto label_48e8c0;
        case 0x48e8c4u: goto label_48e8c4;
        case 0x48e8c8u: goto label_48e8c8;
        case 0x48e8ccu: goto label_48e8cc;
        case 0x48e8d0u: goto label_48e8d0;
        case 0x48e8d4u: goto label_48e8d4;
        case 0x48e8d8u: goto label_48e8d8;
        case 0x48e8dcu: goto label_48e8dc;
        case 0x48e8e0u: goto label_48e8e0;
        case 0x48e8e4u: goto label_48e8e4;
        case 0x48e8e8u: goto label_48e8e8;
        case 0x48e8ecu: goto label_48e8ec;
        case 0x48e8f0u: goto label_48e8f0;
        case 0x48e8f4u: goto label_48e8f4;
        case 0x48e8f8u: goto label_48e8f8;
        case 0x48e8fcu: goto label_48e8fc;
        case 0x48e900u: goto label_48e900;
        case 0x48e904u: goto label_48e904;
        case 0x48e908u: goto label_48e908;
        case 0x48e90cu: goto label_48e90c;
        case 0x48e910u: goto label_48e910;
        case 0x48e914u: goto label_48e914;
        case 0x48e918u: goto label_48e918;
        case 0x48e91cu: goto label_48e91c;
        case 0x48e920u: goto label_48e920;
        case 0x48e924u: goto label_48e924;
        case 0x48e928u: goto label_48e928;
        case 0x48e92cu: goto label_48e92c;
        case 0x48e930u: goto label_48e930;
        case 0x48e934u: goto label_48e934;
        case 0x48e938u: goto label_48e938;
        case 0x48e93cu: goto label_48e93c;
        case 0x48e940u: goto label_48e940;
        case 0x48e944u: goto label_48e944;
        case 0x48e948u: goto label_48e948;
        case 0x48e94cu: goto label_48e94c;
        case 0x48e950u: goto label_48e950;
        case 0x48e954u: goto label_48e954;
        case 0x48e958u: goto label_48e958;
        case 0x48e95cu: goto label_48e95c;
        case 0x48e960u: goto label_48e960;
        case 0x48e964u: goto label_48e964;
        case 0x48e968u: goto label_48e968;
        case 0x48e96cu: goto label_48e96c;
        case 0x48e970u: goto label_48e970;
        case 0x48e974u: goto label_48e974;
        case 0x48e978u: goto label_48e978;
        case 0x48e97cu: goto label_48e97c;
        case 0x48e980u: goto label_48e980;
        case 0x48e984u: goto label_48e984;
        case 0x48e988u: goto label_48e988;
        case 0x48e98cu: goto label_48e98c;
        case 0x48e990u: goto label_48e990;
        case 0x48e994u: goto label_48e994;
        case 0x48e998u: goto label_48e998;
        case 0x48e99cu: goto label_48e99c;
        case 0x48e9a0u: goto label_48e9a0;
        case 0x48e9a4u: goto label_48e9a4;
        case 0x48e9a8u: goto label_48e9a8;
        case 0x48e9acu: goto label_48e9ac;
        case 0x48e9b0u: goto label_48e9b0;
        case 0x48e9b4u: goto label_48e9b4;
        case 0x48e9b8u: goto label_48e9b8;
        case 0x48e9bcu: goto label_48e9bc;
        case 0x48e9c0u: goto label_48e9c0;
        case 0x48e9c4u: goto label_48e9c4;
        case 0x48e9c8u: goto label_48e9c8;
        case 0x48e9ccu: goto label_48e9cc;
        case 0x48e9d0u: goto label_48e9d0;
        case 0x48e9d4u: goto label_48e9d4;
        case 0x48e9d8u: goto label_48e9d8;
        case 0x48e9dcu: goto label_48e9dc;
        case 0x48e9e0u: goto label_48e9e0;
        case 0x48e9e4u: goto label_48e9e4;
        case 0x48e9e8u: goto label_48e9e8;
        case 0x48e9ecu: goto label_48e9ec;
        case 0x48e9f0u: goto label_48e9f0;
        case 0x48e9f4u: goto label_48e9f4;
        case 0x48e9f8u: goto label_48e9f8;
        case 0x48e9fcu: goto label_48e9fc;
        case 0x48ea00u: goto label_48ea00;
        case 0x48ea04u: goto label_48ea04;
        case 0x48ea08u: goto label_48ea08;
        case 0x48ea0cu: goto label_48ea0c;
        case 0x48ea10u: goto label_48ea10;
        case 0x48ea14u: goto label_48ea14;
        case 0x48ea18u: goto label_48ea18;
        case 0x48ea1cu: goto label_48ea1c;
        case 0x48ea20u: goto label_48ea20;
        case 0x48ea24u: goto label_48ea24;
        case 0x48ea28u: goto label_48ea28;
        case 0x48ea2cu: goto label_48ea2c;
        case 0x48ea30u: goto label_48ea30;
        case 0x48ea34u: goto label_48ea34;
        case 0x48ea38u: goto label_48ea38;
        case 0x48ea3cu: goto label_48ea3c;
        case 0x48ea40u: goto label_48ea40;
        case 0x48ea44u: goto label_48ea44;
        case 0x48ea48u: goto label_48ea48;
        case 0x48ea4cu: goto label_48ea4c;
        case 0x48ea50u: goto label_48ea50;
        case 0x48ea54u: goto label_48ea54;
        case 0x48ea58u: goto label_48ea58;
        case 0x48ea5cu: goto label_48ea5c;
        case 0x48ea60u: goto label_48ea60;
        case 0x48ea64u: goto label_48ea64;
        case 0x48ea68u: goto label_48ea68;
        case 0x48ea6cu: goto label_48ea6c;
        case 0x48ea70u: goto label_48ea70;
        case 0x48ea74u: goto label_48ea74;
        case 0x48ea78u: goto label_48ea78;
        case 0x48ea7cu: goto label_48ea7c;
        case 0x48ea80u: goto label_48ea80;
        case 0x48ea84u: goto label_48ea84;
        case 0x48ea88u: goto label_48ea88;
        case 0x48ea8cu: goto label_48ea8c;
        case 0x48ea90u: goto label_48ea90;
        case 0x48ea94u: goto label_48ea94;
        case 0x48ea98u: goto label_48ea98;
        case 0x48ea9cu: goto label_48ea9c;
        case 0x48eaa0u: goto label_48eaa0;
        case 0x48eaa4u: goto label_48eaa4;
        case 0x48eaa8u: goto label_48eaa8;
        case 0x48eaacu: goto label_48eaac;
        case 0x48eab0u: goto label_48eab0;
        case 0x48eab4u: goto label_48eab4;
        case 0x48eab8u: goto label_48eab8;
        case 0x48eabcu: goto label_48eabc;
        case 0x48eac0u: goto label_48eac0;
        case 0x48eac4u: goto label_48eac4;
        case 0x48eac8u: goto label_48eac8;
        case 0x48eaccu: goto label_48eacc;
        case 0x48ead0u: goto label_48ead0;
        case 0x48ead4u: goto label_48ead4;
        case 0x48ead8u: goto label_48ead8;
        case 0x48eadcu: goto label_48eadc;
        case 0x48eae0u: goto label_48eae0;
        case 0x48eae4u: goto label_48eae4;
        case 0x48eae8u: goto label_48eae8;
        case 0x48eaecu: goto label_48eaec;
        case 0x48eaf0u: goto label_48eaf0;
        case 0x48eaf4u: goto label_48eaf4;
        case 0x48eaf8u: goto label_48eaf8;
        case 0x48eafcu: goto label_48eafc;
        case 0x48eb00u: goto label_48eb00;
        case 0x48eb04u: goto label_48eb04;
        case 0x48eb08u: goto label_48eb08;
        case 0x48eb0cu: goto label_48eb0c;
        case 0x48eb10u: goto label_48eb10;
        case 0x48eb14u: goto label_48eb14;
        case 0x48eb18u: goto label_48eb18;
        case 0x48eb1cu: goto label_48eb1c;
        case 0x48eb20u: goto label_48eb20;
        case 0x48eb24u: goto label_48eb24;
        case 0x48eb28u: goto label_48eb28;
        case 0x48eb2cu: goto label_48eb2c;
        case 0x48eb30u: goto label_48eb30;
        case 0x48eb34u: goto label_48eb34;
        case 0x48eb38u: goto label_48eb38;
        case 0x48eb3cu: goto label_48eb3c;
        case 0x48eb40u: goto label_48eb40;
        case 0x48eb44u: goto label_48eb44;
        case 0x48eb48u: goto label_48eb48;
        case 0x48eb4cu: goto label_48eb4c;
        case 0x48eb50u: goto label_48eb50;
        case 0x48eb54u: goto label_48eb54;
        case 0x48eb58u: goto label_48eb58;
        case 0x48eb5cu: goto label_48eb5c;
        case 0x48eb60u: goto label_48eb60;
        case 0x48eb64u: goto label_48eb64;
        case 0x48eb68u: goto label_48eb68;
        case 0x48eb6cu: goto label_48eb6c;
        case 0x48eb70u: goto label_48eb70;
        case 0x48eb74u: goto label_48eb74;
        case 0x48eb78u: goto label_48eb78;
        case 0x48eb7cu: goto label_48eb7c;
        case 0x48eb80u: goto label_48eb80;
        case 0x48eb84u: goto label_48eb84;
        case 0x48eb88u: goto label_48eb88;
        case 0x48eb8cu: goto label_48eb8c;
        case 0x48eb90u: goto label_48eb90;
        case 0x48eb94u: goto label_48eb94;
        case 0x48eb98u: goto label_48eb98;
        case 0x48eb9cu: goto label_48eb9c;
        case 0x48eba0u: goto label_48eba0;
        case 0x48eba4u: goto label_48eba4;
        case 0x48eba8u: goto label_48eba8;
        case 0x48ebacu: goto label_48ebac;
        case 0x48ebb0u: goto label_48ebb0;
        case 0x48ebb4u: goto label_48ebb4;
        case 0x48ebb8u: goto label_48ebb8;
        case 0x48ebbcu: goto label_48ebbc;
        case 0x48ebc0u: goto label_48ebc0;
        case 0x48ebc4u: goto label_48ebc4;
        case 0x48ebc8u: goto label_48ebc8;
        case 0x48ebccu: goto label_48ebcc;
        case 0x48ebd0u: goto label_48ebd0;
        case 0x48ebd4u: goto label_48ebd4;
        case 0x48ebd8u: goto label_48ebd8;
        case 0x48ebdcu: goto label_48ebdc;
        case 0x48ebe0u: goto label_48ebe0;
        case 0x48ebe4u: goto label_48ebe4;
        case 0x48ebe8u: goto label_48ebe8;
        case 0x48ebecu: goto label_48ebec;
        case 0x48ebf0u: goto label_48ebf0;
        case 0x48ebf4u: goto label_48ebf4;
        case 0x48ebf8u: goto label_48ebf8;
        case 0x48ebfcu: goto label_48ebfc;
        case 0x48ec00u: goto label_48ec00;
        case 0x48ec04u: goto label_48ec04;
        case 0x48ec08u: goto label_48ec08;
        case 0x48ec0cu: goto label_48ec0c;
        case 0x48ec10u: goto label_48ec10;
        case 0x48ec14u: goto label_48ec14;
        case 0x48ec18u: goto label_48ec18;
        case 0x48ec1cu: goto label_48ec1c;
        case 0x48ec20u: goto label_48ec20;
        case 0x48ec24u: goto label_48ec24;
        case 0x48ec28u: goto label_48ec28;
        case 0x48ec2cu: goto label_48ec2c;
        case 0x48ec30u: goto label_48ec30;
        case 0x48ec34u: goto label_48ec34;
        case 0x48ec38u: goto label_48ec38;
        case 0x48ec3cu: goto label_48ec3c;
        case 0x48ec40u: goto label_48ec40;
        case 0x48ec44u: goto label_48ec44;
        case 0x48ec48u: goto label_48ec48;
        case 0x48ec4cu: goto label_48ec4c;
        case 0x48ec50u: goto label_48ec50;
        case 0x48ec54u: goto label_48ec54;
        case 0x48ec58u: goto label_48ec58;
        case 0x48ec5cu: goto label_48ec5c;
        case 0x48ec60u: goto label_48ec60;
        case 0x48ec64u: goto label_48ec64;
        case 0x48ec68u: goto label_48ec68;
        case 0x48ec6cu: goto label_48ec6c;
        case 0x48ec70u: goto label_48ec70;
        case 0x48ec74u: goto label_48ec74;
        case 0x48ec78u: goto label_48ec78;
        case 0x48ec7cu: goto label_48ec7c;
        case 0x48ec80u: goto label_48ec80;
        case 0x48ec84u: goto label_48ec84;
        case 0x48ec88u: goto label_48ec88;
        case 0x48ec8cu: goto label_48ec8c;
        case 0x48ec90u: goto label_48ec90;
        case 0x48ec94u: goto label_48ec94;
        case 0x48ec98u: goto label_48ec98;
        case 0x48ec9cu: goto label_48ec9c;
        case 0x48eca0u: goto label_48eca0;
        case 0x48eca4u: goto label_48eca4;
        case 0x48eca8u: goto label_48eca8;
        case 0x48ecacu: goto label_48ecac;
        case 0x48ecb0u: goto label_48ecb0;
        case 0x48ecb4u: goto label_48ecb4;
        case 0x48ecb8u: goto label_48ecb8;
        case 0x48ecbcu: goto label_48ecbc;
        case 0x48ecc0u: goto label_48ecc0;
        case 0x48ecc4u: goto label_48ecc4;
        case 0x48ecc8u: goto label_48ecc8;
        case 0x48ecccu: goto label_48eccc;
        case 0x48ecd0u: goto label_48ecd0;
        case 0x48ecd4u: goto label_48ecd4;
        case 0x48ecd8u: goto label_48ecd8;
        case 0x48ecdcu: goto label_48ecdc;
        case 0x48ece0u: goto label_48ece0;
        case 0x48ece4u: goto label_48ece4;
        case 0x48ece8u: goto label_48ece8;
        case 0x48ececu: goto label_48ecec;
        case 0x48ecf0u: goto label_48ecf0;
        case 0x48ecf4u: goto label_48ecf4;
        case 0x48ecf8u: goto label_48ecf8;
        case 0x48ecfcu: goto label_48ecfc;
        case 0x48ed00u: goto label_48ed00;
        case 0x48ed04u: goto label_48ed04;
        case 0x48ed08u: goto label_48ed08;
        case 0x48ed0cu: goto label_48ed0c;
        case 0x48ed10u: goto label_48ed10;
        case 0x48ed14u: goto label_48ed14;
        case 0x48ed18u: goto label_48ed18;
        case 0x48ed1cu: goto label_48ed1c;
        case 0x48ed20u: goto label_48ed20;
        case 0x48ed24u: goto label_48ed24;
        case 0x48ed28u: goto label_48ed28;
        case 0x48ed2cu: goto label_48ed2c;
        case 0x48ed30u: goto label_48ed30;
        case 0x48ed34u: goto label_48ed34;
        case 0x48ed38u: goto label_48ed38;
        case 0x48ed3cu: goto label_48ed3c;
        case 0x48ed40u: goto label_48ed40;
        case 0x48ed44u: goto label_48ed44;
        case 0x48ed48u: goto label_48ed48;
        case 0x48ed4cu: goto label_48ed4c;
        case 0x48ed50u: goto label_48ed50;
        case 0x48ed54u: goto label_48ed54;
        case 0x48ed58u: goto label_48ed58;
        case 0x48ed5cu: goto label_48ed5c;
        case 0x48ed60u: goto label_48ed60;
        case 0x48ed64u: goto label_48ed64;
        case 0x48ed68u: goto label_48ed68;
        case 0x48ed6cu: goto label_48ed6c;
        case 0x48ed70u: goto label_48ed70;
        case 0x48ed74u: goto label_48ed74;
        case 0x48ed78u: goto label_48ed78;
        case 0x48ed7cu: goto label_48ed7c;
        case 0x48ed80u: goto label_48ed80;
        case 0x48ed84u: goto label_48ed84;
        case 0x48ed88u: goto label_48ed88;
        case 0x48ed8cu: goto label_48ed8c;
        case 0x48ed90u: goto label_48ed90;
        case 0x48ed94u: goto label_48ed94;
        case 0x48ed98u: goto label_48ed98;
        case 0x48ed9cu: goto label_48ed9c;
        case 0x48eda0u: goto label_48eda0;
        case 0x48eda4u: goto label_48eda4;
        case 0x48eda8u: goto label_48eda8;
        case 0x48edacu: goto label_48edac;
        case 0x48edb0u: goto label_48edb0;
        case 0x48edb4u: goto label_48edb4;
        case 0x48edb8u: goto label_48edb8;
        case 0x48edbcu: goto label_48edbc;
        case 0x48edc0u: goto label_48edc0;
        case 0x48edc4u: goto label_48edc4;
        case 0x48edc8u: goto label_48edc8;
        case 0x48edccu: goto label_48edcc;
        case 0x48edd0u: goto label_48edd0;
        case 0x48edd4u: goto label_48edd4;
        case 0x48edd8u: goto label_48edd8;
        case 0x48eddcu: goto label_48eddc;
        case 0x48ede0u: goto label_48ede0;
        case 0x48ede4u: goto label_48ede4;
        case 0x48ede8u: goto label_48ede8;
        case 0x48edecu: goto label_48edec;
        case 0x48edf0u: goto label_48edf0;
        case 0x48edf4u: goto label_48edf4;
        case 0x48edf8u: goto label_48edf8;
        case 0x48edfcu: goto label_48edfc;
        case 0x48ee00u: goto label_48ee00;
        case 0x48ee04u: goto label_48ee04;
        case 0x48ee08u: goto label_48ee08;
        case 0x48ee0cu: goto label_48ee0c;
        case 0x48ee10u: goto label_48ee10;
        case 0x48ee14u: goto label_48ee14;
        case 0x48ee18u: goto label_48ee18;
        case 0x48ee1cu: goto label_48ee1c;
        case 0x48ee20u: goto label_48ee20;
        case 0x48ee24u: goto label_48ee24;
        case 0x48ee28u: goto label_48ee28;
        case 0x48ee2cu: goto label_48ee2c;
        case 0x48ee30u: goto label_48ee30;
        case 0x48ee34u: goto label_48ee34;
        case 0x48ee38u: goto label_48ee38;
        case 0x48ee3cu: goto label_48ee3c;
        case 0x48ee40u: goto label_48ee40;
        case 0x48ee44u: goto label_48ee44;
        case 0x48ee48u: goto label_48ee48;
        case 0x48ee4cu: goto label_48ee4c;
        case 0x48ee50u: goto label_48ee50;
        case 0x48ee54u: goto label_48ee54;
        case 0x48ee58u: goto label_48ee58;
        case 0x48ee5cu: goto label_48ee5c;
        case 0x48ee60u: goto label_48ee60;
        case 0x48ee64u: goto label_48ee64;
        case 0x48ee68u: goto label_48ee68;
        case 0x48ee6cu: goto label_48ee6c;
        case 0x48ee70u: goto label_48ee70;
        case 0x48ee74u: goto label_48ee74;
        case 0x48ee78u: goto label_48ee78;
        case 0x48ee7cu: goto label_48ee7c;
        case 0x48ee80u: goto label_48ee80;
        case 0x48ee84u: goto label_48ee84;
        case 0x48ee88u: goto label_48ee88;
        case 0x48ee8cu: goto label_48ee8c;
        case 0x48ee90u: goto label_48ee90;
        case 0x48ee94u: goto label_48ee94;
        case 0x48ee98u: goto label_48ee98;
        case 0x48ee9cu: goto label_48ee9c;
        default: break;
    }

    ctx->pc = 0x48e8a0u;

label_48e8a0:
    // 0x48e8a0: 0x27bdfa30  addiu       $sp, $sp, -0x5D0
    ctx->pc = 0x48e8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965808));
label_48e8a4:
    // 0x48e8a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x48e8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_48e8a8:
    // 0x48e8a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x48e8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_48e8ac:
    // 0x48e8ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x48e8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_48e8b0:
    // 0x48e8b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x48e8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_48e8b4:
    // 0x48e8b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x48e8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_48e8b8:
    // 0x48e8b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x48e8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_48e8bc:
    // 0x48e8bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48e8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_48e8c0:
    // 0x48e8c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48e8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48e8c4:
    // 0x48e8c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48e8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48e8c8:
    // 0x48e8c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48e8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48e8cc:
    // 0x48e8cc: 0xafa405a0  sw          $a0, 0x5A0($sp)
    ctx->pc = 0x48e8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1440), GPR_U32(ctx, 4));
label_48e8d0:
    // 0x48e8d0: 0xafa505b0  sw          $a1, 0x5B0($sp)
    ctx->pc = 0x48e8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1456), GPR_U32(ctx, 5));
label_48e8d4:
    // 0x48e8d4: 0xafa605c0  sw          $a2, 0x5C0($sp)
    ctx->pc = 0x48e8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1472), GPR_U32(ctx, 6));
label_48e8d8:
    // 0x48e8d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x48e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48e8dc:
    // 0x48e8dc: 0xafa2059c  sw          $v0, 0x59C($sp)
    ctx->pc = 0x48e8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1436), GPR_U32(ctx, 2));
label_48e8e0:
    // 0x48e8e0: 0x8fa405b0  lw          $a0, 0x5B0($sp)
    ctx->pc = 0x48e8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1456)));
label_48e8e4:
    // 0x48e8e4: 0xc042514  jal         func_109450
label_48e8e8:
    if (ctx->pc == 0x48E8E8u) {
        ctx->pc = 0x48E8ECu;
        goto label_48e8ec;
    }
    ctx->pc = 0x48E8E4u;
    SET_GPR_U32(ctx, 31, 0x48E8ECu);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x48E8E4u, 0x48E8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E8ECu;
label_48e8ec:
    // 0x48e8ec: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x48e8ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48e8f0:
    // 0x48e8f0: 0x16e00004  bnez        $s7, . + 4 + (0x4 << 2)
label_48e8f4:
    if (ctx->pc == 0x48E8F4u) {
        ctx->pc = 0x48E8F8u;
        goto label_48e8f8;
    }
    ctx->pc = 0x48E8F0u;
    {
        const bool branch_taken_0x48e8f0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x48e8f0) {
            ctx->pc = 0x48E904u;
            goto label_48e904;
        }
    }
    ctx->pc = 0x48E8F8u;
label_48e8f8:
    // 0x48e8f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48e8f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48e8fc:
    // 0x48e8fc: 0x1000015a  b           . + 4 + (0x15A << 2)
label_48e900:
    if (ctx->pc == 0x48E900u) {
        ctx->pc = 0x48E904u;
        goto label_48e904;
    }
    ctx->pc = 0x48E8FCu;
    {
        const bool branch_taken_0x48e8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e8fc) {
            ctx->pc = 0x48EE68u;
            goto label_48ee68;
        }
    }
    ctx->pc = 0x48E904u;
label_48e904:
    // 0x48e904: 0x27a40590  addiu       $a0, $sp, 0x590
    ctx->pc = 0x48e904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
label_48e908:
    // 0x48e908: 0x2785b680  addiu       $a1, $gp, -0x4980
    ctx->pc = 0x48e908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948480));
label_48e90c:
    // 0x48e90c: 0xc040304  jal         func_100C10
label_48e910:
    if (ctx->pc == 0x48E910u) {
        ctx->pc = 0x48E914u;
        goto label_48e914;
    }
    ctx->pc = 0x48E90Cu;
    SET_GPR_U32(ctx, 31, 0x48E914u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x48E90Cu, 0x48E914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E914u;
label_48e914:
    // 0x48e914: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x48e914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48e918:
    // 0x48e918: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x48e918u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48e91c:
    // 0x48e91c: 0x27a40580  addiu       $a0, $sp, 0x580
    ctx->pc = 0x48e91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
label_48e920:
    // 0x48e920: 0x8fa505a0  lw          $a1, 0x5A0($sp)
    ctx->pc = 0x48e920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1440)));
label_48e924:
    // 0x48e924: 0x8fa605b0  lw          $a2, 0x5B0($sp)
    ctx->pc = 0x48e924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1456)));
label_48e928:
    // 0x48e928: 0xc123e88  jal         func_48FA20
label_48e92c:
    if (ctx->pc == 0x48E92Cu) {
        ctx->pc = 0x48E930u;
        goto label_48e930;
    }
    ctx->pc = 0x48E928u;
    SET_GPR_U32(ctx, 31, 0x48E930u);
    ctx->pc = 0x48FA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48FA20u, 0x48E928u, 0x48E930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E930u;
label_48e930:
    // 0x48e930: 0x8fa205a0  lw          $v0, 0x5A0($sp)
    ctx->pc = 0x48e930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1440)));
label_48e934:
    // 0x48e934: 0x27a40578  addiu       $a0, $sp, 0x578
    ctx->pc = 0x48e934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1400));
label_48e938:
    // 0x48e938: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x48e938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_48e93c:
    // 0x48e93c: 0x27a60580  addiu       $a2, $sp, 0x580
    ctx->pc = 0x48e93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
label_48e940:
    // 0x48e940: 0xc1239c8  jal         func_48E720
label_48e944:
    if (ctx->pc == 0x48E944u) {
        ctx->pc = 0x48E948u;
        goto label_48e948;
    }
    ctx->pc = 0x48E940u;
    SET_GPR_U32(ctx, 31, 0x48E948u);
    ctx->pc = 0x48E720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E720u, 0x48E940u, 0x48E948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E948u;
label_48e948:
    // 0x48e948: 0x8fa205a0  lw          $v0, 0x5A0($sp)
    ctx->pc = 0x48e948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1440)));
label_48e94c:
    // 0x48e94c: 0x27a40520  addiu       $a0, $sp, 0x520
    ctx->pc = 0x48e94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
label_48e950:
    // 0x48e950: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x48e950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_48e954:
    // 0x48e954: 0xc1238e0  jal         func_48E380
label_48e958:
    if (ctx->pc == 0x48E958u) {
        ctx->pc = 0x48E95Cu;
        goto label_48e95c;
    }
    ctx->pc = 0x48E954u;
    SET_GPR_U32(ctx, 31, 0x48E95Cu);
    ctx->pc = 0x48E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E380u, 0x48E954u, 0x48E95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E95Cu;
label_48e95c:
    // 0x48e95c: 0x27a40578  addiu       $a0, $sp, 0x578
    ctx->pc = 0x48e95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1400));
label_48e960:
    // 0x48e960: 0x27a50520  addiu       $a1, $sp, 0x520
    ctx->pc = 0x48e960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
label_48e964:
    // 0x48e964: 0xc1238d4  jal         func_48E350
label_48e968:
    if (ctx->pc == 0x48E968u) {
        ctx->pc = 0x48E96Cu;
        goto label_48e96c;
    }
    ctx->pc = 0x48E964u;
    SET_GPR_U32(ctx, 31, 0x48E96Cu);
    ctx->pc = 0x48E350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E350u, 0x48E964u, 0x48E96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E96Cu;
label_48e96c:
    // 0x48e96c: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
label_48e970:
    if (ctx->pc == 0x48E970u) {
        ctx->pc = 0x48E974u;
        goto label_48e974;
    }
    ctx->pc = 0x48E96Cu;
    {
        const bool branch_taken_0x48e96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e96c) {
            ctx->pc = 0x48EB4Cu;
            goto label_48eb4c;
        }
    }
    ctx->pc = 0x48E974u;
label_48e974:
    // 0x48e974: 0x8fa205c0  lw          $v0, 0x5C0($sp)
    ctx->pc = 0x48e974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1472)));
label_48e978:
    // 0x48e978: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_48e97c:
    if (ctx->pc == 0x48E97Cu) {
        ctx->pc = 0x48E980u;
        goto label_48e980;
    }
    ctx->pc = 0x48E978u;
    {
        const bool branch_taken_0x48e978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e978) {
            ctx->pc = 0x48EA60u;
            goto label_48ea60;
        }
    }
    ctx->pc = 0x48E980u;
label_48e980:
    // 0x48e980: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48e980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48e984:
    // 0x48e984: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x48e984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_48e988:
    // 0x48e988: 0x27a60568  addiu       $a2, $sp, 0x568
    ctx->pc = 0x48e988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1384));
label_48e98c:
    // 0x48e98c: 0xc115ee8  jal         func_457BA0
label_48e990:
    if (ctx->pc == 0x48E990u) {
        ctx->pc = 0x48E994u;
        goto label_48e994;
    }
    ctx->pc = 0x48E98Cu;
    SET_GPR_U32(ctx, 31, 0x48E994u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48E98Cu, 0x48E994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E994u;
label_48e994:
    // 0x48e994: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_48e998:
    if (ctx->pc == 0x48E998u) {
        ctx->pc = 0x48E99Cu;
        goto label_48e99c;
    }
    ctx->pc = 0x48E994u;
    {
        const bool branch_taken_0x48e994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e994) {
            ctx->pc = 0x48EA24u;
            goto label_48ea24;
        }
    }
    ctx->pc = 0x48E99Cu;
label_48e99c:
    // 0x48e99c: 0x8fa20570  lw          $v0, 0x570($sp)
    ctx->pc = 0x48e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1392)));
label_48e9a0:
    // 0x48e9a0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_48e9a4:
    if (ctx->pc == 0x48E9A4u) {
        ctx->pc = 0x48E9A8u;
        goto label_48e9a8;
    }
    ctx->pc = 0x48E9A0u;
    {
        const bool branch_taken_0x48e9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e9a0) {
            ctx->pc = 0x48EA24u;
            goto label_48ea24;
        }
    }
    ctx->pc = 0x48E9A8u;
label_48e9a8:
    // 0x48e9a8: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x48e9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_48e9ac:
    // 0x48e9ac: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x48e9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_48e9b0:
    // 0x48e9b0: 0x8fa6056c  lw          $a2, 0x56C($sp)
    ctx->pc = 0x48e9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1388)));
label_48e9b4:
    // 0x48e9b4: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48e9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48e9b8:
    // 0x48e9b8: 0x24e74d80  addiu       $a3, $a3, 0x4D80
    ctx->pc = 0x48e9b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19840));
label_48e9bc:
    // 0x48e9bc: 0x24080086  addiu       $t0, $zero, 0x86
    ctx->pc = 0x48e9bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_48e9c0:
    // 0x48e9c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x48e9c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48e9c4:
    // 0x48e9c4: 0xc113940  jal         func_44E500
label_48e9c8:
    if (ctx->pc == 0x48E9C8u) {
        ctx->pc = 0x48E9CCu;
        goto label_48e9cc;
    }
    ctx->pc = 0x48E9C4u;
    SET_GPR_U32(ctx, 31, 0x48E9CCu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48E9C4u, 0x48E9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E9CCu;
label_48e9cc:
    // 0x48e9cc: 0x8fa405b0  lw          $a0, 0x5B0($sp)
    ctx->pc = 0x48e9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1456)));
label_48e9d0:
    // 0x48e9d0: 0xc041b38  jal         func_106CE0
label_48e9d4:
    if (ctx->pc == 0x48E9D4u) {
        ctx->pc = 0x48E9D8u;
        goto label_48e9d8;
    }
    ctx->pc = 0x48E9D0u;
    SET_GPR_U32(ctx, 31, 0x48E9D8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x48E9D0u, 0x48E9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E9D8u;
label_48e9d8:
    // 0x48e9d8: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x48e9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_48e9dc:
    // 0x48e9dc: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48e9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48e9e0:
    // 0x48e9e0: 0x24a54e10  addiu       $a1, $a1, 0x4E10
    ctx->pc = 0x48e9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19984));
label_48e9e4:
    // 0x48e9e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x48e9e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48e9e8:
    // 0x48e9e8: 0xc115c24  jal         func_457090
label_48e9ec:
    if (ctx->pc == 0x48E9ECu) {
        ctx->pc = 0x48E9F0u;
        goto label_48e9f0;
    }
    ctx->pc = 0x48E9E8u;
    SET_GPR_U32(ctx, 31, 0x48E9F0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48E9E8u, 0x48E9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E9F0u;
label_48e9f0:
    // 0x48e9f0: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x48e9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_48e9f4:
    // 0x48e9f4: 0x8fa20570  lw          $v0, 0x570($sp)
    ctx->pc = 0x48e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1392)));
label_48e9f8:
    // 0x48e9f8: 0x40f809  jalr        $v0
label_48e9fc:
    if (ctx->pc == 0x48E9FCu) {
        ctx->pc = 0x48EA00u;
        goto label_48ea00;
    }
    ctx->pc = 0x48E9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48EA00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E9F8u, 0x48EA00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48EA00u;
label_48ea00:
    // 0x48ea00: 0x8fa20400  lw          $v0, 0x400($sp)
    ctx->pc = 0x48ea00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
label_48ea04:
    // 0x48ea04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48ea08:
    if (ctx->pc == 0x48EA08u) {
        ctx->pc = 0x48EA0Cu;
        goto label_48ea0c;
    }
    ctx->pc = 0x48EA04u;
    {
        const bool branch_taken_0x48ea04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ea04) {
            ctx->pc = 0x48EA14u;
            goto label_48ea14;
        }
    }
    ctx->pc = 0x48EA0Cu;
label_48ea0c:
    // 0x48ea0c: 0xd  break       0
    ctx->pc = 0x48ea0cu;
    runtime->handleBreak(rdram, ctx);
label_48ea10:
    // 0x48ea10: 0x0  nop
    ctx->pc = 0x48ea10u;
    // NOP
label_48ea14:
    // 0x48ea14: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x48ea14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_48ea18:
    // 0x48ea18: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48ea18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48ea1c:
    // 0x48ea1c: 0xc11392c  jal         func_44E4B0
label_48ea20:
    if (ctx->pc == 0x48EA20u) {
        ctx->pc = 0x48EA24u;
        goto label_48ea24;
    }
    ctx->pc = 0x48EA1Cu;
    SET_GPR_U32(ctx, 31, 0x48EA24u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48EA1Cu, 0x48EA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EA24u;
label_48ea24:
    // 0x48ea24: 0x27a40578  addiu       $a0, $sp, 0x578
    ctx->pc = 0x48ea24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1400));
label_48ea28:
    // 0x48ea28: 0xc123ba8  jal         func_48EEA0
label_48ea2c:
    if (ctx->pc == 0x48EA2Cu) {
        ctx->pc = 0x48EA30u;
        goto label_48ea30;
    }
    ctx->pc = 0x48EA28u;
    SET_GPR_U32(ctx, 31, 0x48EA30u);
    ctx->pc = 0x48EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EEA0u, 0x48EA28u, 0x48EA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EA30u;
label_48ea30:
    // 0x48ea30: 0x8c56000c  lw          $s6, 0xC($v0)
    ctx->pc = 0x48ea30u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_48ea34:
    // 0x48ea34: 0x27a40580  addiu       $a0, $sp, 0x580
    ctx->pc = 0x48ea34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
label_48ea38:
    // 0x48ea38: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48ea38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48ea3c:
    // 0x48ea3c: 0xc0402d4  jal         func_100B50
label_48ea40:
    if (ctx->pc == 0x48EA40u) {
        ctx->pc = 0x48EA44u;
        goto label_48ea44;
    }
    ctx->pc = 0x48EA3Cu;
    SET_GPR_U32(ctx, 31, 0x48EA44u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x48EA3Cu, 0x48EA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EA44u;
label_48ea44:
    // 0x48ea44: 0x27a40590  addiu       $a0, $sp, 0x590
    ctx->pc = 0x48ea44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
label_48ea48:
    // 0x48ea48: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48ea48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48ea4c:
    // 0x48ea4c: 0xc0402d4  jal         func_100B50
label_48ea50:
    if (ctx->pc == 0x48EA50u) {
        ctx->pc = 0x48EA54u;
        goto label_48ea54;
    }
    ctx->pc = 0x48EA4Cu;
    SET_GPR_U32(ctx, 31, 0x48EA54u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x48EA4Cu, 0x48EA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EA54u;
label_48ea54:
    // 0x48ea54: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x48ea54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_48ea58:
    // 0x48ea58: 0x10000103  b           . + 4 + (0x103 << 2)
label_48ea5c:
    if (ctx->pc == 0x48EA5Cu) {
        ctx->pc = 0x48EA60u;
        goto label_48ea60;
    }
    ctx->pc = 0x48EA58u;
    {
        const bool branch_taken_0x48ea58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ea58) {
            ctx->pc = 0x48EE68u;
            goto label_48ee68;
        }
    }
    ctx->pc = 0x48EA60u;
label_48ea60:
    // 0x48ea60: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48ea60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48ea64:
    // 0x48ea64: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x48ea64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_48ea68:
    // 0x48ea68: 0x27a60558  addiu       $a2, $sp, 0x558
    ctx->pc = 0x48ea68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1368));
label_48ea6c:
    // 0x48ea6c: 0xc115ee8  jal         func_457BA0
label_48ea70:
    if (ctx->pc == 0x48EA70u) {
        ctx->pc = 0x48EA74u;
        goto label_48ea74;
    }
    ctx->pc = 0x48EA6Cu;
    SET_GPR_U32(ctx, 31, 0x48EA74u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48EA6Cu, 0x48EA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EA74u;
label_48ea74:
    // 0x48ea74: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_48ea78:
    if (ctx->pc == 0x48EA78u) {
        ctx->pc = 0x48EA7Cu;
        goto label_48ea7c;
    }
    ctx->pc = 0x48EA74u;
    {
        const bool branch_taken_0x48ea74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ea74) {
            ctx->pc = 0x48EB04u;
            goto label_48eb04;
        }
    }
    ctx->pc = 0x48EA7Cu;
label_48ea7c:
    // 0x48ea7c: 0x8fa20560  lw          $v0, 0x560($sp)
    ctx->pc = 0x48ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1376)));
label_48ea80:
    // 0x48ea80: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_48ea84:
    if (ctx->pc == 0x48EA84u) {
        ctx->pc = 0x48EA88u;
        goto label_48ea88;
    }
    ctx->pc = 0x48EA80u;
    {
        const bool branch_taken_0x48ea80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ea80) {
            ctx->pc = 0x48EB04u;
            goto label_48eb04;
        }
    }
    ctx->pc = 0x48EA88u;
label_48ea88:
    // 0x48ea88: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x48ea88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_48ea8c:
    // 0x48ea8c: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x48ea8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_48ea90:
    // 0x48ea90: 0x8fa6055c  lw          $a2, 0x55C($sp)
    ctx->pc = 0x48ea90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1372)));
label_48ea94:
    // 0x48ea94: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48ea94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48ea98:
    // 0x48ea98: 0x24e74d80  addiu       $a3, $a3, 0x4D80
    ctx->pc = 0x48ea98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19840));
label_48ea9c:
    // 0x48ea9c: 0x2408008b  addiu       $t0, $zero, 0x8B
    ctx->pc = 0x48ea9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
label_48eaa0:
    // 0x48eaa0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x48eaa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48eaa4:
    // 0x48eaa4: 0xc113940  jal         func_44E500
label_48eaa8:
    if (ctx->pc == 0x48EAA8u) {
        ctx->pc = 0x48EAACu;
        goto label_48eaac;
    }
    ctx->pc = 0x48EAA4u;
    SET_GPR_U32(ctx, 31, 0x48EAACu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48EAA4u, 0x48EAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EAACu;
label_48eaac:
    // 0x48eaac: 0x8fa405b0  lw          $a0, 0x5B0($sp)
    ctx->pc = 0x48eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1456)));
label_48eab0:
    // 0x48eab0: 0xc041b38  jal         func_106CE0
label_48eab4:
    if (ctx->pc == 0x48EAB4u) {
        ctx->pc = 0x48EAB8u;
        goto label_48eab8;
    }
    ctx->pc = 0x48EAB0u;
    SET_GPR_U32(ctx, 31, 0x48EAB8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x48EAB0u, 0x48EAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EAB8u;
label_48eab8:
    // 0x48eab8: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x48eab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_48eabc:
    // 0x48eabc: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48eabcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48eac0:
    // 0x48eac0: 0x24a54e40  addiu       $a1, $a1, 0x4E40
    ctx->pc = 0x48eac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20032));
label_48eac4:
    // 0x48eac4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x48eac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48eac8:
    // 0x48eac8: 0xc115c24  jal         func_457090
label_48eacc:
    if (ctx->pc == 0x48EACCu) {
        ctx->pc = 0x48EAD0u;
        goto label_48ead0;
    }
    ctx->pc = 0x48EAC8u;
    SET_GPR_U32(ctx, 31, 0x48EAD0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48EAC8u, 0x48EAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EAD0u;
label_48ead0:
    // 0x48ead0: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x48ead0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_48ead4:
    // 0x48ead4: 0x8fa20560  lw          $v0, 0x560($sp)
    ctx->pc = 0x48ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1376)));
label_48ead8:
    // 0x48ead8: 0x40f809  jalr        $v0
label_48eadc:
    if (ctx->pc == 0x48EADCu) {
        ctx->pc = 0x48EAE0u;
        goto label_48eae0;
    }
    ctx->pc = 0x48EAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48EAE0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48EAD8u, 0x48EAE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48EAE0u;
label_48eae0:
    // 0x48eae0: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x48eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_48eae4:
    // 0x48eae4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48eae8:
    if (ctx->pc == 0x48EAE8u) {
        ctx->pc = 0x48EAECu;
        goto label_48eaec;
    }
    ctx->pc = 0x48EAE4u;
    {
        const bool branch_taken_0x48eae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48eae4) {
            ctx->pc = 0x48EAF4u;
            goto label_48eaf4;
        }
    }
    ctx->pc = 0x48EAECu;
label_48eaec:
    // 0x48eaec: 0xd  break       0
    ctx->pc = 0x48eaecu;
    runtime->handleBreak(rdram, ctx);
label_48eaf0:
    // 0x48eaf0: 0x0  nop
    ctx->pc = 0x48eaf0u;
    // NOP
label_48eaf4:
    // 0x48eaf4: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x48eaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_48eaf8:
    // 0x48eaf8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48eaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48eafc:
    // 0x48eafc: 0xc11392c  jal         func_44E4B0
label_48eb00:
    if (ctx->pc == 0x48EB00u) {
        ctx->pc = 0x48EB04u;
        goto label_48eb04;
    }
    ctx->pc = 0x48EAFCu;
    SET_GPR_U32(ctx, 31, 0x48EB04u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48EAFCu, 0x48EB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EB04u;
label_48eb04:
    // 0x48eb04: 0x27a40578  addiu       $a0, $sp, 0x578
    ctx->pc = 0x48eb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1400));
label_48eb08:
    // 0x48eb08: 0xc123ba8  jal         func_48EEA0
label_48eb0c:
    if (ctx->pc == 0x48EB0Cu) {
        ctx->pc = 0x48EB10u;
        goto label_48eb10;
    }
    ctx->pc = 0x48EB08u;
    SET_GPR_U32(ctx, 31, 0x48EB10u);
    ctx->pc = 0x48EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EEA0u, 0x48EB08u, 0x48EB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EB10u;
label_48eb10:
    // 0x48eb10: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x48eb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_48eb14:
    // 0x48eb14: 0xc1230c0  jal         func_48C300
label_48eb18:
    if (ctx->pc == 0x48EB18u) {
        ctx->pc = 0x48EB1Cu;
        goto label_48eb1c;
    }
    ctx->pc = 0x48EB14u;
    SET_GPR_U32(ctx, 31, 0x48EB1Cu);
    ctx->pc = 0x48C300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C300u, 0x48EB14u, 0x48EB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EB1Cu;
label_48eb1c:
    // 0x48eb1c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x48eb1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48eb20:
    // 0x48eb20: 0x27a40580  addiu       $a0, $sp, 0x580
    ctx->pc = 0x48eb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
label_48eb24:
    // 0x48eb24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48eb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48eb28:
    // 0x48eb28: 0xc0402d4  jal         func_100B50
label_48eb2c:
    if (ctx->pc == 0x48EB2Cu) {
        ctx->pc = 0x48EB30u;
        goto label_48eb30;
    }
    ctx->pc = 0x48EB28u;
    SET_GPR_U32(ctx, 31, 0x48EB30u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x48EB28u, 0x48EB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EB30u;
label_48eb30:
    // 0x48eb30: 0x27a40590  addiu       $a0, $sp, 0x590
    ctx->pc = 0x48eb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
label_48eb34:
    // 0x48eb34: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48eb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48eb38:
    // 0x48eb38: 0xc0402d4  jal         func_100B50
label_48eb3c:
    if (ctx->pc == 0x48EB3Cu) {
        ctx->pc = 0x48EB40u;
        goto label_48eb40;
    }
    ctx->pc = 0x48EB38u;
    SET_GPR_U32(ctx, 31, 0x48EB40u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x48EB38u, 0x48EB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EB40u;
label_48eb40:
    // 0x48eb40: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x48eb40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_48eb44:
    // 0x48eb44: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_48eb48:
    if (ctx->pc == 0x48EB48u) {
        ctx->pc = 0x48EB4Cu;
        goto label_48eb4c;
    }
    ctx->pc = 0x48EB44u;
    {
        const bool branch_taken_0x48eb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48eb44) {
            ctx->pc = 0x48EE68u;
            goto label_48ee68;
        }
    }
    ctx->pc = 0x48EB4Cu;
label_48eb4c:
    // 0x48eb4c: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x48eb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_48eb50:
    // 0x48eb50: 0xc119b68  jal         func_466DA0
label_48eb54:
    if (ctx->pc == 0x48EB54u) {
        ctx->pc = 0x48EB58u;
        goto label_48eb58;
    }
    ctx->pc = 0x48EB50u;
    SET_GPR_U32(ctx, 31, 0x48EB58u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x48EB50u, 0x48EB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EB58u;
label_48eb58:
    // 0x48eb58: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x48eb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_48eb5c:
    // 0x48eb5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48eb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48eb60:
    // 0x48eb60: 0xc0400e0  jal         func_100380
label_48eb64:
    if (ctx->pc == 0x48EB64u) {
        ctx->pc = 0x48EB68u;
        goto label_48eb68;
    }
    ctx->pc = 0x48EB60u;
    SET_GPR_U32(ctx, 31, 0x48EB68u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x48EB60u, 0x48EB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EB68u;
label_48eb68:
    // 0x48eb68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x48eb68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48eb6c:
    // 0x48eb6c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_48eb70:
    if (ctx->pc == 0x48EB70u) {
        ctx->pc = 0x48EB74u;
        goto label_48eb74;
    }
    ctx->pc = 0x48EB6Cu;
    {
        const bool branch_taken_0x48eb6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x48eb6c) {
            ctx->pc = 0x48EB84u;
            goto label_48eb84;
        }
    }
    ctx->pc = 0x48EB74u;
label_48eb74:
    // 0x48eb74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x48eb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48eb78:
    // 0x48eb78: 0xc122e6c  jal         func_48B9B0
label_48eb7c:
    if (ctx->pc == 0x48EB7Cu) {
        ctx->pc = 0x48EB80u;
        goto label_48eb80;
    }
    ctx->pc = 0x48EB78u;
    SET_GPR_U32(ctx, 31, 0x48EB80u);
    ctx->pc = 0x48B9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B9B0u, 0x48EB78u, 0x48EB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EB80u;
label_48eb80:
    // 0x48eb80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x48eb80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48eb84:
    // 0x48eb84: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x48eb84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48eb88:
    // 0x48eb88: 0x27a40590  addiu       $a0, $sp, 0x590
    ctx->pc = 0x48eb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
label_48eb8c:
    // 0x48eb8c: 0x8fa505b0  lw          $a1, 0x5B0($sp)
    ctx->pc = 0x48eb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1456)));
label_48eb90:
    // 0x48eb90: 0xc0430e4  jal         func_10C390
label_48eb94:
    if (ctx->pc == 0x48EB94u) {
        ctx->pc = 0x48EB98u;
        goto label_48eb98;
    }
    ctx->pc = 0x48EB90u;
    SET_GPR_U32(ctx, 31, 0x48EB98u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x48EB90u, 0x48EB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EB98u;
label_48eb98:
    // 0x48eb98: 0x27a40590  addiu       $a0, $sp, 0x590
    ctx->pc = 0x48eb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
label_48eb9c:
    // 0x48eb9c: 0x2785b688  addiu       $a1, $gp, -0x4978
    ctx->pc = 0x48eb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948488));
label_48eba0:
    // 0x48eba0: 0xc0424e8  jal         func_1093A0
label_48eba4:
    if (ctx->pc == 0x48EBA4u) {
        ctx->pc = 0x48EBA8u;
        goto label_48eba8;
    }
    ctx->pc = 0x48EBA0u;
    SET_GPR_U32(ctx, 31, 0x48EBA8u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x48EBA0u, 0x48EBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EBA8u;
label_48eba8:
    // 0x48eba8: 0xc107150  jal         func_41C540
label_48ebac:
    if (ctx->pc == 0x48EBACu) {
        ctx->pc = 0x48EBB0u;
        goto label_48ebb0;
    }
    ctx->pc = 0x48EBA8u;
    SET_GPR_U32(ctx, 31, 0x48EBB0u);
    ctx->pc = 0x41C540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C540u, 0x48EBA8u, 0x48EBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EBB0u;
label_48ebb0:
    // 0x48ebb0: 0x27a40548  addiu       $a0, $sp, 0x548
    ctx->pc = 0x48ebb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1352));
label_48ebb4:
    // 0x48ebb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48ebb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48ebb8:
    // 0x48ebb8: 0xc040304  jal         func_100C10
label_48ebbc:
    if (ctx->pc == 0x48EBBCu) {
        ctx->pc = 0x48EBC0u;
        goto label_48ebc0;
    }
    ctx->pc = 0x48EBB8u;
    SET_GPR_U32(ctx, 31, 0x48EBC0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x48EBB8u, 0x48EBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EBC0u;
label_48ebc0:
    // 0x48ebc0: 0x8fa405a0  lw          $a0, 0x5A0($sp)
    ctx->pc = 0x48ebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1440)));
label_48ebc4:
    // 0x48ebc4: 0xc041b38  jal         func_106CE0
label_48ebc8:
    if (ctx->pc == 0x48EBC8u) {
        ctx->pc = 0x48EBCCu;
        goto label_48ebcc;
    }
    ctx->pc = 0x48EBC4u;
    SET_GPR_U32(ctx, 31, 0x48EBCCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x48EBC4u, 0x48EBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EBCCu;
label_48ebcc:
    // 0x48ebcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x48ebccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48ebd0:
    // 0x48ebd0: 0xc107156  jal         func_41C558
label_48ebd4:
    if (ctx->pc == 0x48EBD4u) {
        ctx->pc = 0x48EBD8u;
        goto label_48ebd8;
    }
    ctx->pc = 0x48EBD0u;
    SET_GPR_U32(ctx, 31, 0x48EBD8u);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x48EBD0u, 0x48EBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EBD8u;
label_48ebd8:
    // 0x48ebd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48ebd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48ebdc:
    // 0x48ebdc: 0x27a50590  addiu       $a1, $sp, 0x590
    ctx->pc = 0x48ebdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
label_48ebe0:
    // 0x48ebe0: 0xc123008  jal         func_48C020
label_48ebe4:
    if (ctx->pc == 0x48EBE4u) {
        ctx->pc = 0x48EBE8u;
        goto label_48ebe8;
    }
    ctx->pc = 0x48EBE0u;
    SET_GPR_U32(ctx, 31, 0x48EBE8u);
    ctx->pc = 0x48C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C020u, 0x48EBE0u, 0x48EBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EBE8u;
label_48ebe8:
    // 0x48ebe8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48ebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48ebec:
    // 0x48ebec: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
label_48ebf0:
    if (ctx->pc == 0x48EBF0u) {
        ctx->pc = 0x48EBF4u;
        goto label_48ebf4;
    }
    ctx->pc = 0x48EBECu;
    {
        const bool branch_taken_0x48ebec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x48ebec) {
            ctx->pc = 0x48EC58u;
            goto label_48ec58;
        }
    }
    ctx->pc = 0x48EBF4u;
label_48ebf4:
    // 0x48ebf4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_48ebf8:
    if (ctx->pc == 0x48EBF8u) {
        ctx->pc = 0x48EBFCu;
        goto label_48ebfc;
    }
    ctx->pc = 0x48EBF4u;
    {
        const bool branch_taken_0x48ebf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ebf4) {
            ctx->pc = 0x48EC18u;
            goto label_48ec18;
        }
    }
    ctx->pc = 0x48EBFCu;
label_48ebfc:
    // 0x48ebfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48ebfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48ec00:
    // 0x48ec00: 0xc082d24  jal         func_20B490
label_48ec04:
    if (ctx->pc == 0x48EC04u) {
        ctx->pc = 0x48EC08u;
        goto label_48ec08;
    }
    ctx->pc = 0x48EC00u;
    SET_GPR_U32(ctx, 31, 0x48EC08u);
    ctx->pc = 0x20B490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B490u, 0x48EC00u, 0x48EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EC08u;
label_48ec08:
    // 0x48ec08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48ec08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48ec0c:
    // 0x48ec0c: 0xc119c5c  jal         func_467170
label_48ec10:
    if (ctx->pc == 0x48EC10u) {
        ctx->pc = 0x48EC14u;
        goto label_48ec14;
    }
    ctx->pc = 0x48EC0Cu;
    SET_GPR_U32(ctx, 31, 0x48EC14u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x48EC0Cu, 0x48EC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EC14u;
label_48ec14:
    // 0x48ec14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x48ec14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48ec18:
    // 0x48ec18: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x48ec18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48ec1c:
    // 0x48ec1c: 0x27a40548  addiu       $a0, $sp, 0x548
    ctx->pc = 0x48ec1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1352));
label_48ec20:
    // 0x48ec20: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48ec20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48ec24:
    // 0x48ec24: 0xc0402d4  jal         func_100B50
label_48ec28:
    if (ctx->pc == 0x48EC28u) {
        ctx->pc = 0x48EC2Cu;
        goto label_48ec2c;
    }
    ctx->pc = 0x48EC24u;
    SET_GPR_U32(ctx, 31, 0x48EC2Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x48EC24u, 0x48EC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EC2Cu;
label_48ec2c:
    // 0x48ec2c: 0x27a40580  addiu       $a0, $sp, 0x580
    ctx->pc = 0x48ec2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
label_48ec30:
    // 0x48ec30: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48ec30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48ec34:
    // 0x48ec34: 0xc0402d4  jal         func_100B50
label_48ec38:
    if (ctx->pc == 0x48EC38u) {
        ctx->pc = 0x48EC3Cu;
        goto label_48ec3c;
    }
    ctx->pc = 0x48EC34u;
    SET_GPR_U32(ctx, 31, 0x48EC3Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x48EC34u, 0x48EC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EC3Cu;
label_48ec3c:
    // 0x48ec3c: 0x27a40590  addiu       $a0, $sp, 0x590
    ctx->pc = 0x48ec3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
label_48ec40:
    // 0x48ec40: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48ec40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48ec44:
    // 0x48ec44: 0xc0402d4  jal         func_100B50
label_48ec48:
    if (ctx->pc == 0x48EC48u) {
        ctx->pc = 0x48EC4Cu;
        goto label_48ec4c;
    }
    ctx->pc = 0x48EC44u;
    SET_GPR_U32(ctx, 31, 0x48EC4Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x48EC44u, 0x48EC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EC4Cu;
label_48ec4c:
    // 0x48ec4c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x48ec4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_48ec50:
    // 0x48ec50: 0x10000085  b           . + 4 + (0x85 << 2)
label_48ec54:
    if (ctx->pc == 0x48EC54u) {
        ctx->pc = 0x48EC58u;
        goto label_48ec58;
    }
    ctx->pc = 0x48EC50u;
    {
        const bool branch_taken_0x48ec50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ec50) {
            ctx->pc = 0x48EE68u;
            goto label_48ee68;
        }
    }
    ctx->pc = 0x48EC58u;
label_48ec58:
    // 0x48ec58: 0x27a40548  addiu       $a0, $sp, 0x548
    ctx->pc = 0x48ec58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1352));
label_48ec5c:
    // 0x48ec5c: 0xc041b38  jal         func_106CE0
label_48ec60:
    if (ctx->pc == 0x48EC60u) {
        ctx->pc = 0x48EC64u;
        goto label_48ec64;
    }
    ctx->pc = 0x48EC5Cu;
    SET_GPR_U32(ctx, 31, 0x48EC64u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x48EC5Cu, 0x48EC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EC64u;
label_48ec64:
    // 0x48ec64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x48ec64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48ec68:
    // 0x48ec68: 0xc107156  jal         func_41C558
label_48ec6c:
    if (ctx->pc == 0x48EC6Cu) {
        ctx->pc = 0x48EC70u;
        goto label_48ec70;
    }
    ctx->pc = 0x48EC68u;
    SET_GPR_U32(ctx, 31, 0x48EC70u);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x48EC68u, 0x48EC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EC70u;
label_48ec70:
    // 0x48ec70: 0x8fa405a0  lw          $a0, 0x5A0($sp)
    ctx->pc = 0x48ec70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1440)));
label_48ec74:
    // 0x48ec74: 0x27a50580  addiu       $a1, $sp, 0x580
    ctx->pc = 0x48ec74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
label_48ec78:
    // 0x48ec78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x48ec78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48ec7c:
    // 0x48ec7c: 0xc123d38  jal         func_48F4E0
label_48ec80:
    if (ctx->pc == 0x48EC80u) {
        ctx->pc = 0x48EC84u;
        goto label_48ec84;
    }
    ctx->pc = 0x48EC7Cu;
    SET_GPR_U32(ctx, 31, 0x48EC84u);
    ctx->pc = 0x48F4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F4E0u, 0x48EC7Cu, 0x48EC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EC84u;
label_48ec84:
    // 0x48ec84: 0x8fa305c0  lw          $v1, 0x5C0($sp)
    ctx->pc = 0x48ec84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1472)));
label_48ec88:
    // 0x48ec88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48ec8c:
    // 0x48ec8c: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
label_48ec90:
    if (ctx->pc == 0x48EC90u) {
        ctx->pc = 0x48EC94u;
        goto label_48ec94;
    }
    ctx->pc = 0x48EC8Cu;
    {
        const bool branch_taken_0x48ec8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x48ec8c) {
            ctx->pc = 0x48ED78u;
            goto label_48ed78;
        }
    }
    ctx->pc = 0x48EC94u;
label_48ec94:
    // 0x48ec94: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48ec94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48ec98:
    // 0x48ec98: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x48ec98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_48ec9c:
    // 0x48ec9c: 0x27a60538  addiu       $a2, $sp, 0x538
    ctx->pc = 0x48ec9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1336));
label_48eca0:
    // 0x48eca0: 0xc115ee8  jal         func_457BA0
label_48eca4:
    if (ctx->pc == 0x48ECA4u) {
        ctx->pc = 0x48ECA8u;
        goto label_48eca8;
    }
    ctx->pc = 0x48ECA0u;
    SET_GPR_U32(ctx, 31, 0x48ECA8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48ECA0u, 0x48ECA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48ECA8u;
label_48eca8:
    // 0x48eca8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_48ecac:
    if (ctx->pc == 0x48ECACu) {
        ctx->pc = 0x48ECB0u;
        goto label_48ecb0;
    }
    ctx->pc = 0x48ECA8u;
    {
        const bool branch_taken_0x48eca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48eca8) {
            ctx->pc = 0x48ED38u;
            goto label_48ed38;
        }
    }
    ctx->pc = 0x48ECB0u;
label_48ecb0:
    // 0x48ecb0: 0x8fa20540  lw          $v0, 0x540($sp)
    ctx->pc = 0x48ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
label_48ecb4:
    // 0x48ecb4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_48ecb8:
    if (ctx->pc == 0x48ECB8u) {
        ctx->pc = 0x48ECBCu;
        goto label_48ecbc;
    }
    ctx->pc = 0x48ECB4u;
    {
        const bool branch_taken_0x48ecb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ecb4) {
            ctx->pc = 0x48ED38u;
            goto label_48ed38;
        }
    }
    ctx->pc = 0x48ECBCu;
label_48ecbc:
    // 0x48ecbc: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x48ecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_48ecc0:
    // 0x48ecc0: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x48ecc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_48ecc4:
    // 0x48ecc4: 0x8fa6053c  lw          $a2, 0x53C($sp)
    ctx->pc = 0x48ecc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1340)));
label_48ecc8:
    // 0x48ecc8: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48ecc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48eccc:
    // 0x48eccc: 0x24e74d80  addiu       $a3, $a3, 0x4D80
    ctx->pc = 0x48ecccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19840));
label_48ecd0:
    // 0x48ecd0: 0x240800a3  addiu       $t0, $zero, 0xA3
    ctx->pc = 0x48ecd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
label_48ecd4:
    // 0x48ecd4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x48ecd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48ecd8:
    // 0x48ecd8: 0xc113940  jal         func_44E500
label_48ecdc:
    if (ctx->pc == 0x48ECDCu) {
        ctx->pc = 0x48ECE0u;
        goto label_48ece0;
    }
    ctx->pc = 0x48ECD8u;
    SET_GPR_U32(ctx, 31, 0x48ECE0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48ECD8u, 0x48ECE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48ECE0u;
label_48ece0:
    // 0x48ece0: 0x8fa405b0  lw          $a0, 0x5B0($sp)
    ctx->pc = 0x48ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1456)));
label_48ece4:
    // 0x48ece4: 0xc041b38  jal         func_106CE0
label_48ece8:
    if (ctx->pc == 0x48ECE8u) {
        ctx->pc = 0x48ECECu;
        goto label_48ecec;
    }
    ctx->pc = 0x48ECE4u;
    SET_GPR_U32(ctx, 31, 0x48ECECu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x48ECE4u, 0x48ECECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48ECECu;
label_48ecec:
    // 0x48ecec: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x48ececu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_48ecf0:
    // 0x48ecf0: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48ecf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48ecf4:
    // 0x48ecf4: 0x24a54e60  addiu       $a1, $a1, 0x4E60
    ctx->pc = 0x48ecf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20064));
label_48ecf8:
    // 0x48ecf8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x48ecf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48ecfc:
    // 0x48ecfc: 0xc115c24  jal         func_457090
label_48ed00:
    if (ctx->pc == 0x48ED00u) {
        ctx->pc = 0x48ED04u;
        goto label_48ed04;
    }
    ctx->pc = 0x48ECFCu;
    SET_GPR_U32(ctx, 31, 0x48ED04u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48ECFCu, 0x48ED04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48ED04u;
label_48ed04:
    // 0x48ed04: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x48ed04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_48ed08:
    // 0x48ed08: 0x8fa20540  lw          $v0, 0x540($sp)
    ctx->pc = 0x48ed08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
label_48ed0c:
    // 0x48ed0c: 0x40f809  jalr        $v0
label_48ed10:
    if (ctx->pc == 0x48ED10u) {
        ctx->pc = 0x48ED14u;
        goto label_48ed14;
    }
    ctx->pc = 0x48ED0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48ED14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48ED0Cu, 0x48ED14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48ED14u;
label_48ed14:
    // 0x48ed14: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x48ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_48ed18:
    // 0x48ed18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48ed1c:
    if (ctx->pc == 0x48ED1Cu) {
        ctx->pc = 0x48ED20u;
        goto label_48ed20;
    }
    ctx->pc = 0x48ED18u;
    {
        const bool branch_taken_0x48ed18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ed18) {
            ctx->pc = 0x48ED28u;
            goto label_48ed28;
        }
    }
    ctx->pc = 0x48ED20u;
label_48ed20:
    // 0x48ed20: 0xd  break       0
    ctx->pc = 0x48ed20u;
    runtime->handleBreak(rdram, ctx);
label_48ed24:
    // 0x48ed24: 0x0  nop
    ctx->pc = 0x48ed24u;
    // NOP
label_48ed28:
    // 0x48ed28: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x48ed28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_48ed2c:
    // 0x48ed2c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48ed2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48ed30:
    // 0x48ed30: 0xc11392c  jal         func_44E4B0
label_48ed34:
    if (ctx->pc == 0x48ED34u) {
        ctx->pc = 0x48ED38u;
        goto label_48ed38;
    }
    ctx->pc = 0x48ED30u;
    SET_GPR_U32(ctx, 31, 0x48ED38u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48ED30u, 0x48ED38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48ED38u;
label_48ed38:
    // 0x48ed38: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x48ed38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48ed3c:
    // 0x48ed3c: 0x27a40548  addiu       $a0, $sp, 0x548
    ctx->pc = 0x48ed3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1352));
label_48ed40:
    // 0x48ed40: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48ed40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48ed44:
    // 0x48ed44: 0xc0402d4  jal         func_100B50
label_48ed48:
    if (ctx->pc == 0x48ED48u) {
        ctx->pc = 0x48ED4Cu;
        goto label_48ed4c;
    }
    ctx->pc = 0x48ED44u;
    SET_GPR_U32(ctx, 31, 0x48ED4Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x48ED44u, 0x48ED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48ED4Cu;
label_48ed4c:
    // 0x48ed4c: 0x27a40580  addiu       $a0, $sp, 0x580
    ctx->pc = 0x48ed4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
label_48ed50:
    // 0x48ed50: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48ed50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48ed54:
    // 0x48ed54: 0xc0402d4  jal         func_100B50
label_48ed58:
    if (ctx->pc == 0x48ED58u) {
        ctx->pc = 0x48ED5Cu;
        goto label_48ed5c;
    }
    ctx->pc = 0x48ED54u;
    SET_GPR_U32(ctx, 31, 0x48ED5Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x48ED54u, 0x48ED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48ED5Cu;
label_48ed5c:
    // 0x48ed5c: 0x27a40590  addiu       $a0, $sp, 0x590
    ctx->pc = 0x48ed5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
label_48ed60:
    // 0x48ed60: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48ed60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48ed64:
    // 0x48ed64: 0xc0402d4  jal         func_100B50
label_48ed68:
    if (ctx->pc == 0x48ED68u) {
        ctx->pc = 0x48ED6Cu;
        goto label_48ed6c;
    }
    ctx->pc = 0x48ED64u;
    SET_GPR_U32(ctx, 31, 0x48ED6Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x48ED64u, 0x48ED6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48ED6Cu;
label_48ed6c:
    // 0x48ed6c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x48ed6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_48ed70:
    // 0x48ed70: 0x1000003d  b           . + 4 + (0x3D << 2)
label_48ed74:
    if (ctx->pc == 0x48ED74u) {
        ctx->pc = 0x48ED78u;
        goto label_48ed78;
    }
    ctx->pc = 0x48ED70u;
    {
        const bool branch_taken_0x48ed70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ed70) {
            ctx->pc = 0x48EE68u;
            goto label_48ee68;
        }
    }
    ctx->pc = 0x48ED78u;
label_48ed78:
    // 0x48ed78: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48ed78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48ed7c:
    // 0x48ed7c: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x48ed7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_48ed80:
    // 0x48ed80: 0x27a60528  addiu       $a2, $sp, 0x528
    ctx->pc = 0x48ed80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1320));
label_48ed84:
    // 0x48ed84: 0xc115ee8  jal         func_457BA0
label_48ed88:
    if (ctx->pc == 0x48ED88u) {
        ctx->pc = 0x48ED8Cu;
        goto label_48ed8c;
    }
    ctx->pc = 0x48ED84u;
    SET_GPR_U32(ctx, 31, 0x48ED8Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48ED84u, 0x48ED8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48ED8Cu;
label_48ed8c:
    // 0x48ed8c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_48ed90:
    if (ctx->pc == 0x48ED90u) {
        ctx->pc = 0x48ED94u;
        goto label_48ed94;
    }
    ctx->pc = 0x48ED8Cu;
    {
        const bool branch_taken_0x48ed8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ed8c) {
            ctx->pc = 0x48EE1Cu;
            goto label_48ee1c;
        }
    }
    ctx->pc = 0x48ED94u;
label_48ed94:
    // 0x48ed94: 0x8fa20530  lw          $v0, 0x530($sp)
    ctx->pc = 0x48ed94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_48ed98:
    // 0x48ed98: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_48ed9c:
    if (ctx->pc == 0x48ED9Cu) {
        ctx->pc = 0x48EDA0u;
        goto label_48eda0;
    }
    ctx->pc = 0x48ED98u;
    {
        const bool branch_taken_0x48ed98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ed98) {
            ctx->pc = 0x48EE1Cu;
            goto label_48ee1c;
        }
    }
    ctx->pc = 0x48EDA0u;
label_48eda0:
    // 0x48eda0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x48eda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_48eda4:
    // 0x48eda4: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x48eda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_48eda8:
    // 0x48eda8: 0x8fa6052c  lw          $a2, 0x52C($sp)
    ctx->pc = 0x48eda8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1324)));
label_48edac:
    // 0x48edac: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48edacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48edb0:
    // 0x48edb0: 0x24e74d80  addiu       $a3, $a3, 0x4D80
    ctx->pc = 0x48edb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19840));
label_48edb4:
    // 0x48edb4: 0x240800a7  addiu       $t0, $zero, 0xA7
    ctx->pc = 0x48edb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
label_48edb8:
    // 0x48edb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x48edb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48edbc:
    // 0x48edbc: 0xc113940  jal         func_44E500
label_48edc0:
    if (ctx->pc == 0x48EDC0u) {
        ctx->pc = 0x48EDC4u;
        goto label_48edc4;
    }
    ctx->pc = 0x48EDBCu;
    SET_GPR_U32(ctx, 31, 0x48EDC4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48EDBCu, 0x48EDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EDC4u;
label_48edc4:
    // 0x48edc4: 0x8fa405b0  lw          $a0, 0x5B0($sp)
    ctx->pc = 0x48edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1456)));
label_48edc8:
    // 0x48edc8: 0xc041b38  jal         func_106CE0
label_48edcc:
    if (ctx->pc == 0x48EDCCu) {
        ctx->pc = 0x48EDD0u;
        goto label_48edd0;
    }
    ctx->pc = 0x48EDC8u;
    SET_GPR_U32(ctx, 31, 0x48EDD0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x48EDC8u, 0x48EDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EDD0u;
label_48edd0:
    // 0x48edd0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x48edd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_48edd4:
    // 0x48edd4: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48edd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48edd8:
    // 0x48edd8: 0x24a54e90  addiu       $a1, $a1, 0x4E90
    ctx->pc = 0x48edd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20112));
label_48eddc:
    // 0x48eddc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x48eddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48ede0:
    // 0x48ede0: 0xc115c24  jal         func_457090
label_48ede4:
    if (ctx->pc == 0x48EDE4u) {
        ctx->pc = 0x48EDE8u;
        goto label_48ede8;
    }
    ctx->pc = 0x48EDE0u;
    SET_GPR_U32(ctx, 31, 0x48EDE8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48EDE0u, 0x48EDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EDE8u;
label_48ede8:
    // 0x48ede8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x48ede8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_48edec:
    // 0x48edec: 0x8fa20530  lw          $v0, 0x530($sp)
    ctx->pc = 0x48edecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_48edf0:
    // 0x48edf0: 0x40f809  jalr        $v0
label_48edf4:
    if (ctx->pc == 0x48EDF4u) {
        ctx->pc = 0x48EDF8u;
        goto label_48edf8;
    }
    ctx->pc = 0x48EDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48EDF8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48EDF0u, 0x48EDF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48EDF8u;
label_48edf8:
    // 0x48edf8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x48edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_48edfc:
    // 0x48edfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48ee00:
    if (ctx->pc == 0x48EE00u) {
        ctx->pc = 0x48EE04u;
        goto label_48ee04;
    }
    ctx->pc = 0x48EDFCu;
    {
        const bool branch_taken_0x48edfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48edfc) {
            ctx->pc = 0x48EE0Cu;
            goto label_48ee0c;
        }
    }
    ctx->pc = 0x48EE04u;
label_48ee04:
    // 0x48ee04: 0xd  break       0
    ctx->pc = 0x48ee04u;
    runtime->handleBreak(rdram, ctx);
label_48ee08:
    // 0x48ee08: 0x0  nop
    ctx->pc = 0x48ee08u;
    // NOP
label_48ee0c:
    // 0x48ee0c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x48ee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_48ee10:
    // 0x48ee10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48ee10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48ee14:
    // 0x48ee14: 0xc11392c  jal         func_44E4B0
label_48ee18:
    if (ctx->pc == 0x48EE18u) {
        ctx->pc = 0x48EE1Cu;
        goto label_48ee1c;
    }
    ctx->pc = 0x48EE14u;
    SET_GPR_U32(ctx, 31, 0x48EE1Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48EE14u, 0x48EE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EE1Cu;
label_48ee1c:
    // 0x48ee1c: 0x8fa405a0  lw          $a0, 0x5A0($sp)
    ctx->pc = 0x48ee1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1440)));
label_48ee20:
    // 0x48ee20: 0x8fa505b0  lw          $a1, 0x5B0($sp)
    ctx->pc = 0x48ee20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1456)));
label_48ee24:
    // 0x48ee24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x48ee24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48ee28:
    // 0x48ee28: 0xc123a28  jal         func_48E8A0
label_48ee2c:
    if (ctx->pc == 0x48EE2Cu) {
        ctx->pc = 0x48EE30u;
        goto label_48ee30;
    }
    ctx->pc = 0x48EE28u;
    SET_GPR_U32(ctx, 31, 0x48EE30u);
    ctx->pc = 0x48E8A0u;
    goto label_48e8a0;
    ctx->pc = 0x48EE30u;
label_48ee30:
    // 0x48ee30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x48ee30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48ee34:
    // 0x48ee34: 0x27a40548  addiu       $a0, $sp, 0x548
    ctx->pc = 0x48ee34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1352));
label_48ee38:
    // 0x48ee38: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48ee38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48ee3c:
    // 0x48ee3c: 0xc0402d4  jal         func_100B50
label_48ee40:
    if (ctx->pc == 0x48EE40u) {
        ctx->pc = 0x48EE44u;
        goto label_48ee44;
    }
    ctx->pc = 0x48EE3Cu;
    SET_GPR_U32(ctx, 31, 0x48EE44u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x48EE3Cu, 0x48EE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EE44u;
label_48ee44:
    // 0x48ee44: 0x27a40580  addiu       $a0, $sp, 0x580
    ctx->pc = 0x48ee44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
label_48ee48:
    // 0x48ee48: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48ee48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48ee4c:
    // 0x48ee4c: 0xc0402d4  jal         func_100B50
label_48ee50:
    if (ctx->pc == 0x48EE50u) {
        ctx->pc = 0x48EE54u;
        goto label_48ee54;
    }
    ctx->pc = 0x48EE4Cu;
    SET_GPR_U32(ctx, 31, 0x48EE54u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x48EE4Cu, 0x48EE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EE54u;
label_48ee54:
    // 0x48ee54: 0x27a40590  addiu       $a0, $sp, 0x590
    ctx->pc = 0x48ee54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
label_48ee58:
    // 0x48ee58: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48ee58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48ee5c:
    // 0x48ee5c: 0xc0402d4  jal         func_100B50
label_48ee60:
    if (ctx->pc == 0x48EE60u) {
        ctx->pc = 0x48EE64u;
        goto label_48ee64;
    }
    ctx->pc = 0x48EE5Cu;
    SET_GPR_U32(ctx, 31, 0x48EE64u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x48EE5Cu, 0x48EE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EE64u;
label_48ee64:
    // 0x48ee64: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x48ee64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_48ee68:
    // 0x48ee68: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x48ee68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_48ee6c:
    // 0x48ee6c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x48ee6cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_48ee70:
    // 0x48ee70: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x48ee70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_48ee74:
    // 0x48ee74: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x48ee74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_48ee78:
    // 0x48ee78: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x48ee78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_48ee7c:
    // 0x48ee7c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x48ee7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_48ee80:
    // 0x48ee80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48ee80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48ee84:
    // 0x48ee84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48ee84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48ee88:
    // 0x48ee88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48ee88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48ee8c:
    // 0x48ee8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48ee8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48ee90:
    // 0x48ee90: 0x27bd05d0  addiu       $sp, $sp, 0x5D0
    ctx->pc = 0x48ee90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
label_48ee94:
    // 0x48ee94: 0x3e00008  jr          $ra
label_48ee98:
    if (ctx->pc == 0x48EE98u) {
        ctx->pc = 0x48EE9Cu;
        goto label_48ee9c;
    }
    ctx->pc = 0x48EE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48EE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48EE9Cu;
label_48ee9c:
    // 0x48ee9c: 0x0  nop
    ctx->pc = 0x48ee9cu;
    // NOP
    ctx->pc = 0x48eea0u;
}
