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

// Function: sub_0027E810
// Address: 0x27e810 - 0x27ed40
void sub_0027E810_0x27e810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E810_0x27e810");
#endif

    switch (ctx->pc) {
        case 0x27e810u: goto label_27e810;
        case 0x27e814u: goto label_27e814;
        case 0x27e818u: goto label_27e818;
        case 0x27e81cu: goto label_27e81c;
        case 0x27e820u: goto label_27e820;
        case 0x27e824u: goto label_27e824;
        case 0x27e828u: goto label_27e828;
        case 0x27e82cu: goto label_27e82c;
        case 0x27e830u: goto label_27e830;
        case 0x27e834u: goto label_27e834;
        case 0x27e838u: goto label_27e838;
        case 0x27e83cu: goto label_27e83c;
        case 0x27e840u: goto label_27e840;
        case 0x27e844u: goto label_27e844;
        case 0x27e848u: goto label_27e848;
        case 0x27e84cu: goto label_27e84c;
        case 0x27e850u: goto label_27e850;
        case 0x27e854u: goto label_27e854;
        case 0x27e858u: goto label_27e858;
        case 0x27e85cu: goto label_27e85c;
        case 0x27e860u: goto label_27e860;
        case 0x27e864u: goto label_27e864;
        case 0x27e868u: goto label_27e868;
        case 0x27e86cu: goto label_27e86c;
        case 0x27e870u: goto label_27e870;
        case 0x27e874u: goto label_27e874;
        case 0x27e878u: goto label_27e878;
        case 0x27e87cu: goto label_27e87c;
        case 0x27e880u: goto label_27e880;
        case 0x27e884u: goto label_27e884;
        case 0x27e888u: goto label_27e888;
        case 0x27e88cu: goto label_27e88c;
        case 0x27e890u: goto label_27e890;
        case 0x27e894u: goto label_27e894;
        case 0x27e898u: goto label_27e898;
        case 0x27e89cu: goto label_27e89c;
        case 0x27e8a0u: goto label_27e8a0;
        case 0x27e8a4u: goto label_27e8a4;
        case 0x27e8a8u: goto label_27e8a8;
        case 0x27e8acu: goto label_27e8ac;
        case 0x27e8b0u: goto label_27e8b0;
        case 0x27e8b4u: goto label_27e8b4;
        case 0x27e8b8u: goto label_27e8b8;
        case 0x27e8bcu: goto label_27e8bc;
        case 0x27e8c0u: goto label_27e8c0;
        case 0x27e8c4u: goto label_27e8c4;
        case 0x27e8c8u: goto label_27e8c8;
        case 0x27e8ccu: goto label_27e8cc;
        case 0x27e8d0u: goto label_27e8d0;
        case 0x27e8d4u: goto label_27e8d4;
        case 0x27e8d8u: goto label_27e8d8;
        case 0x27e8dcu: goto label_27e8dc;
        case 0x27e8e0u: goto label_27e8e0;
        case 0x27e8e4u: goto label_27e8e4;
        case 0x27e8e8u: goto label_27e8e8;
        case 0x27e8ecu: goto label_27e8ec;
        case 0x27e8f0u: goto label_27e8f0;
        case 0x27e8f4u: goto label_27e8f4;
        case 0x27e8f8u: goto label_27e8f8;
        case 0x27e8fcu: goto label_27e8fc;
        case 0x27e900u: goto label_27e900;
        case 0x27e904u: goto label_27e904;
        case 0x27e908u: goto label_27e908;
        case 0x27e90cu: goto label_27e90c;
        case 0x27e910u: goto label_27e910;
        case 0x27e914u: goto label_27e914;
        case 0x27e918u: goto label_27e918;
        case 0x27e91cu: goto label_27e91c;
        case 0x27e920u: goto label_27e920;
        case 0x27e924u: goto label_27e924;
        case 0x27e928u: goto label_27e928;
        case 0x27e92cu: goto label_27e92c;
        case 0x27e930u: goto label_27e930;
        case 0x27e934u: goto label_27e934;
        case 0x27e938u: goto label_27e938;
        case 0x27e93cu: goto label_27e93c;
        case 0x27e940u: goto label_27e940;
        case 0x27e944u: goto label_27e944;
        case 0x27e948u: goto label_27e948;
        case 0x27e94cu: goto label_27e94c;
        case 0x27e950u: goto label_27e950;
        case 0x27e954u: goto label_27e954;
        case 0x27e958u: goto label_27e958;
        case 0x27e95cu: goto label_27e95c;
        case 0x27e960u: goto label_27e960;
        case 0x27e964u: goto label_27e964;
        case 0x27e968u: goto label_27e968;
        case 0x27e96cu: goto label_27e96c;
        case 0x27e970u: goto label_27e970;
        case 0x27e974u: goto label_27e974;
        case 0x27e978u: goto label_27e978;
        case 0x27e97cu: goto label_27e97c;
        case 0x27e980u: goto label_27e980;
        case 0x27e984u: goto label_27e984;
        case 0x27e988u: goto label_27e988;
        case 0x27e98cu: goto label_27e98c;
        case 0x27e990u: goto label_27e990;
        case 0x27e994u: goto label_27e994;
        case 0x27e998u: goto label_27e998;
        case 0x27e99cu: goto label_27e99c;
        case 0x27e9a0u: goto label_27e9a0;
        case 0x27e9a4u: goto label_27e9a4;
        case 0x27e9a8u: goto label_27e9a8;
        case 0x27e9acu: goto label_27e9ac;
        case 0x27e9b0u: goto label_27e9b0;
        case 0x27e9b4u: goto label_27e9b4;
        case 0x27e9b8u: goto label_27e9b8;
        case 0x27e9bcu: goto label_27e9bc;
        case 0x27e9c0u: goto label_27e9c0;
        case 0x27e9c4u: goto label_27e9c4;
        case 0x27e9c8u: goto label_27e9c8;
        case 0x27e9ccu: goto label_27e9cc;
        case 0x27e9d0u: goto label_27e9d0;
        case 0x27e9d4u: goto label_27e9d4;
        case 0x27e9d8u: goto label_27e9d8;
        case 0x27e9dcu: goto label_27e9dc;
        case 0x27e9e0u: goto label_27e9e0;
        case 0x27e9e4u: goto label_27e9e4;
        case 0x27e9e8u: goto label_27e9e8;
        case 0x27e9ecu: goto label_27e9ec;
        case 0x27e9f0u: goto label_27e9f0;
        case 0x27e9f4u: goto label_27e9f4;
        case 0x27e9f8u: goto label_27e9f8;
        case 0x27e9fcu: goto label_27e9fc;
        case 0x27ea00u: goto label_27ea00;
        case 0x27ea04u: goto label_27ea04;
        case 0x27ea08u: goto label_27ea08;
        case 0x27ea0cu: goto label_27ea0c;
        case 0x27ea10u: goto label_27ea10;
        case 0x27ea14u: goto label_27ea14;
        case 0x27ea18u: goto label_27ea18;
        case 0x27ea1cu: goto label_27ea1c;
        case 0x27ea20u: goto label_27ea20;
        case 0x27ea24u: goto label_27ea24;
        case 0x27ea28u: goto label_27ea28;
        case 0x27ea2cu: goto label_27ea2c;
        case 0x27ea30u: goto label_27ea30;
        case 0x27ea34u: goto label_27ea34;
        case 0x27ea38u: goto label_27ea38;
        case 0x27ea3cu: goto label_27ea3c;
        case 0x27ea40u: goto label_27ea40;
        case 0x27ea44u: goto label_27ea44;
        case 0x27ea48u: goto label_27ea48;
        case 0x27ea4cu: goto label_27ea4c;
        case 0x27ea50u: goto label_27ea50;
        case 0x27ea54u: goto label_27ea54;
        case 0x27ea58u: goto label_27ea58;
        case 0x27ea5cu: goto label_27ea5c;
        case 0x27ea60u: goto label_27ea60;
        case 0x27ea64u: goto label_27ea64;
        case 0x27ea68u: goto label_27ea68;
        case 0x27ea6cu: goto label_27ea6c;
        case 0x27ea70u: goto label_27ea70;
        case 0x27ea74u: goto label_27ea74;
        case 0x27ea78u: goto label_27ea78;
        case 0x27ea7cu: goto label_27ea7c;
        case 0x27ea80u: goto label_27ea80;
        case 0x27ea84u: goto label_27ea84;
        case 0x27ea88u: goto label_27ea88;
        case 0x27ea8cu: goto label_27ea8c;
        case 0x27ea90u: goto label_27ea90;
        case 0x27ea94u: goto label_27ea94;
        case 0x27ea98u: goto label_27ea98;
        case 0x27ea9cu: goto label_27ea9c;
        case 0x27eaa0u: goto label_27eaa0;
        case 0x27eaa4u: goto label_27eaa4;
        case 0x27eaa8u: goto label_27eaa8;
        case 0x27eaacu: goto label_27eaac;
        case 0x27eab0u: goto label_27eab0;
        case 0x27eab4u: goto label_27eab4;
        case 0x27eab8u: goto label_27eab8;
        case 0x27eabcu: goto label_27eabc;
        case 0x27eac0u: goto label_27eac0;
        case 0x27eac4u: goto label_27eac4;
        case 0x27eac8u: goto label_27eac8;
        case 0x27eaccu: goto label_27eacc;
        case 0x27ead0u: goto label_27ead0;
        case 0x27ead4u: goto label_27ead4;
        case 0x27ead8u: goto label_27ead8;
        case 0x27eadcu: goto label_27eadc;
        case 0x27eae0u: goto label_27eae0;
        case 0x27eae4u: goto label_27eae4;
        case 0x27eae8u: goto label_27eae8;
        case 0x27eaecu: goto label_27eaec;
        case 0x27eaf0u: goto label_27eaf0;
        case 0x27eaf4u: goto label_27eaf4;
        case 0x27eaf8u: goto label_27eaf8;
        case 0x27eafcu: goto label_27eafc;
        case 0x27eb00u: goto label_27eb00;
        case 0x27eb04u: goto label_27eb04;
        case 0x27eb08u: goto label_27eb08;
        case 0x27eb0cu: goto label_27eb0c;
        case 0x27eb10u: goto label_27eb10;
        case 0x27eb14u: goto label_27eb14;
        case 0x27eb18u: goto label_27eb18;
        case 0x27eb1cu: goto label_27eb1c;
        case 0x27eb20u: goto label_27eb20;
        case 0x27eb24u: goto label_27eb24;
        case 0x27eb28u: goto label_27eb28;
        case 0x27eb2cu: goto label_27eb2c;
        case 0x27eb30u: goto label_27eb30;
        case 0x27eb34u: goto label_27eb34;
        case 0x27eb38u: goto label_27eb38;
        case 0x27eb3cu: goto label_27eb3c;
        case 0x27eb40u: goto label_27eb40;
        case 0x27eb44u: goto label_27eb44;
        case 0x27eb48u: goto label_27eb48;
        case 0x27eb4cu: goto label_27eb4c;
        case 0x27eb50u: goto label_27eb50;
        case 0x27eb54u: goto label_27eb54;
        case 0x27eb58u: goto label_27eb58;
        case 0x27eb5cu: goto label_27eb5c;
        case 0x27eb60u: goto label_27eb60;
        case 0x27eb64u: goto label_27eb64;
        case 0x27eb68u: goto label_27eb68;
        case 0x27eb6cu: goto label_27eb6c;
        case 0x27eb70u: goto label_27eb70;
        case 0x27eb74u: goto label_27eb74;
        case 0x27eb78u: goto label_27eb78;
        case 0x27eb7cu: goto label_27eb7c;
        case 0x27eb80u: goto label_27eb80;
        case 0x27eb84u: goto label_27eb84;
        case 0x27eb88u: goto label_27eb88;
        case 0x27eb8cu: goto label_27eb8c;
        case 0x27eb90u: goto label_27eb90;
        case 0x27eb94u: goto label_27eb94;
        case 0x27eb98u: goto label_27eb98;
        case 0x27eb9cu: goto label_27eb9c;
        case 0x27eba0u: goto label_27eba0;
        case 0x27eba4u: goto label_27eba4;
        case 0x27eba8u: goto label_27eba8;
        case 0x27ebacu: goto label_27ebac;
        case 0x27ebb0u: goto label_27ebb0;
        case 0x27ebb4u: goto label_27ebb4;
        case 0x27ebb8u: goto label_27ebb8;
        case 0x27ebbcu: goto label_27ebbc;
        case 0x27ebc0u: goto label_27ebc0;
        case 0x27ebc4u: goto label_27ebc4;
        case 0x27ebc8u: goto label_27ebc8;
        case 0x27ebccu: goto label_27ebcc;
        case 0x27ebd0u: goto label_27ebd0;
        case 0x27ebd4u: goto label_27ebd4;
        case 0x27ebd8u: goto label_27ebd8;
        case 0x27ebdcu: goto label_27ebdc;
        case 0x27ebe0u: goto label_27ebe0;
        case 0x27ebe4u: goto label_27ebe4;
        case 0x27ebe8u: goto label_27ebe8;
        case 0x27ebecu: goto label_27ebec;
        case 0x27ebf0u: goto label_27ebf0;
        case 0x27ebf4u: goto label_27ebf4;
        case 0x27ebf8u: goto label_27ebf8;
        case 0x27ebfcu: goto label_27ebfc;
        case 0x27ec00u: goto label_27ec00;
        case 0x27ec04u: goto label_27ec04;
        case 0x27ec08u: goto label_27ec08;
        case 0x27ec0cu: goto label_27ec0c;
        case 0x27ec10u: goto label_27ec10;
        case 0x27ec14u: goto label_27ec14;
        case 0x27ec18u: goto label_27ec18;
        case 0x27ec1cu: goto label_27ec1c;
        case 0x27ec20u: goto label_27ec20;
        case 0x27ec24u: goto label_27ec24;
        case 0x27ec28u: goto label_27ec28;
        case 0x27ec2cu: goto label_27ec2c;
        case 0x27ec30u: goto label_27ec30;
        case 0x27ec34u: goto label_27ec34;
        case 0x27ec38u: goto label_27ec38;
        case 0x27ec3cu: goto label_27ec3c;
        case 0x27ec40u: goto label_27ec40;
        case 0x27ec44u: goto label_27ec44;
        case 0x27ec48u: goto label_27ec48;
        case 0x27ec4cu: goto label_27ec4c;
        case 0x27ec50u: goto label_27ec50;
        case 0x27ec54u: goto label_27ec54;
        case 0x27ec58u: goto label_27ec58;
        case 0x27ec5cu: goto label_27ec5c;
        case 0x27ec60u: goto label_27ec60;
        case 0x27ec64u: goto label_27ec64;
        case 0x27ec68u: goto label_27ec68;
        case 0x27ec6cu: goto label_27ec6c;
        case 0x27ec70u: goto label_27ec70;
        case 0x27ec74u: goto label_27ec74;
        case 0x27ec78u: goto label_27ec78;
        case 0x27ec7cu: goto label_27ec7c;
        case 0x27ec80u: goto label_27ec80;
        case 0x27ec84u: goto label_27ec84;
        case 0x27ec88u: goto label_27ec88;
        case 0x27ec8cu: goto label_27ec8c;
        case 0x27ec90u: goto label_27ec90;
        case 0x27ec94u: goto label_27ec94;
        case 0x27ec98u: goto label_27ec98;
        case 0x27ec9cu: goto label_27ec9c;
        case 0x27eca0u: goto label_27eca0;
        case 0x27eca4u: goto label_27eca4;
        case 0x27eca8u: goto label_27eca8;
        case 0x27ecacu: goto label_27ecac;
        case 0x27ecb0u: goto label_27ecb0;
        case 0x27ecb4u: goto label_27ecb4;
        case 0x27ecb8u: goto label_27ecb8;
        case 0x27ecbcu: goto label_27ecbc;
        case 0x27ecc0u: goto label_27ecc0;
        case 0x27ecc4u: goto label_27ecc4;
        case 0x27ecc8u: goto label_27ecc8;
        case 0x27ecccu: goto label_27eccc;
        case 0x27ecd0u: goto label_27ecd0;
        case 0x27ecd4u: goto label_27ecd4;
        case 0x27ecd8u: goto label_27ecd8;
        case 0x27ecdcu: goto label_27ecdc;
        case 0x27ece0u: goto label_27ece0;
        case 0x27ece4u: goto label_27ece4;
        case 0x27ece8u: goto label_27ece8;
        case 0x27ececu: goto label_27ecec;
        case 0x27ecf0u: goto label_27ecf0;
        case 0x27ecf4u: goto label_27ecf4;
        case 0x27ecf8u: goto label_27ecf8;
        case 0x27ecfcu: goto label_27ecfc;
        case 0x27ed00u: goto label_27ed00;
        case 0x27ed04u: goto label_27ed04;
        case 0x27ed08u: goto label_27ed08;
        case 0x27ed0cu: goto label_27ed0c;
        case 0x27ed10u: goto label_27ed10;
        case 0x27ed14u: goto label_27ed14;
        case 0x27ed18u: goto label_27ed18;
        case 0x27ed1cu: goto label_27ed1c;
        case 0x27ed20u: goto label_27ed20;
        case 0x27ed24u: goto label_27ed24;
        case 0x27ed28u: goto label_27ed28;
        case 0x27ed2cu: goto label_27ed2c;
        case 0x27ed30u: goto label_27ed30;
        case 0x27ed34u: goto label_27ed34;
        case 0x27ed38u: goto label_27ed38;
        case 0x27ed3cu: goto label_27ed3c;
        default: break;
    }

    ctx->pc = 0x27e810u;

label_27e810:
    // 0x27e810: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x27e810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_27e814:
    // 0x27e814: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x27e814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_27e818:
    // 0x27e818: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x27e818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_27e81c:
    // 0x27e81c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x27e81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_27e820:
    // 0x27e820: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27e820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_27e824:
    // 0x27e824: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27e824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_27e828:
    // 0x27e828: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27e828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_27e82c:
    // 0x27e82c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27e82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27e830:
    // 0x27e830: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27e830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27e834:
    // 0x27e834: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27e834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27e838:
    // 0x27e838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27e838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27e83c:
    // 0x27e83c: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x27e83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
label_27e840:
    // 0x27e840: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x27e840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27e844:
    // 0x27e844: 0xa0400064  sb          $zero, 0x64($v0)
    ctx->pc = 0x27e844u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 100), (uint8_t)GPR_U32(ctx, 0));
label_27e848:
    // 0x27e848: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x27e848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_27e84c:
    // 0x27e84c: 0xaf82a220  sw          $v0, -0x5DE0($gp)
    ctx->pc = 0x27e84cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943264), GPR_U32(ctx, 2));
label_27e850:
    // 0x27e850: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27e850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_27e854:
    // 0x27e854: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27e854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27e858:
    // 0x27e858: 0x0  nop
    ctx->pc = 0x27e858u;
    // NOP
label_27e85c:
    // 0x27e85c: 0xe780a21c  swc1        $f0, -0x5DE4($gp)
    ctx->pc = 0x27e85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943260), bits); }
label_27e860:
    // 0x27e860: 0xc12246c  jal         func_4891B0
label_27e864:
    if (ctx->pc == 0x27E864u) {
        ctx->pc = 0x27E868u;
        goto label_27e868;
    }
    ctx->pc = 0x27E860u;
    SET_GPR_U32(ctx, 31, 0x27E868u);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x27E860u, 0x27E868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E868u;
label_27e868:
    // 0x27e868: 0x3c170048  lui         $s7, 0x48
    ctx->pc = 0x27e868u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
label_27e86c:
    // 0x27e86c: 0x26f717a0  addiu       $s7, $s7, 0x17A0
    ctx->pc = 0x27e86cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 6048));
label_27e870:
    // 0x27e870: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27e870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27e874:
    // 0x27e874: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27e874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27e878:
    // 0x27e878: 0x2e0f809  jalr        $s7
label_27e87c:
    if (ctx->pc == 0x27E87Cu) {
        ctx->pc = 0x27E880u;
        goto label_27e880;
    }
    ctx->pc = 0x27E878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x27E880u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E878u, 0x27E880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27E880u;
label_27e880:
    // 0x27e880: 0xc12246c  jal         func_4891B0
label_27e884:
    if (ctx->pc == 0x27E884u) {
        ctx->pc = 0x27E888u;
        goto label_27e888;
    }
    ctx->pc = 0x27E880u;
    SET_GPR_U32(ctx, 31, 0x27E888u);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x27E880u, 0x27E888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E888u;
label_27e888:
    // 0x27e888: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27e888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e88c:
    // 0x27e88c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27e88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e890:
    // 0x27e890: 0xc120520  jal         func_481480
label_27e894:
    if (ctx->pc == 0x27E894u) {
        ctx->pc = 0x27E898u;
        goto label_27e898;
    }
    ctx->pc = 0x27E890u;
    SET_GPR_U32(ctx, 31, 0x27E898u);
    ctx->pc = 0x481480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481480u, 0x27E890u, 0x27E898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E898u;
label_27e898:
    // 0x27e898: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x27e898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27e89c:
    // 0x27e89c: 0x8c630044  lw          $v1, 0x44($v1)
    ctx->pc = 0x27e89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_27e8a0:
    // 0x27e8a0: 0x10600117  beqz        $v1, . + 4 + (0x117 << 2)
label_27e8a4:
    if (ctx->pc == 0x27E8A4u) {
        ctx->pc = 0x27E8A8u;
        goto label_27e8a8;
    }
    ctx->pc = 0x27E8A0u;
    {
        const bool branch_taken_0x27e8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e8a0) {
            ctx->pc = 0x27ED00u;
            goto label_27ed00;
        }
    }
    ctx->pc = 0x27E8A8u;
label_27e8a8:
    // 0x27e8a8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x27e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27e8ac:
    // 0x27e8ac: 0x90420065  lbu         $v0, 0x65($v0)
    ctx->pc = 0x27e8acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 101)));
label_27e8b0:
    // 0x27e8b0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x27e8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27e8b4:
    // 0x27e8b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27e8b8:
    // 0x27e8b8: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
label_27e8bc:
    if (ctx->pc == 0x27E8BCu) {
        ctx->pc = 0x27E8C0u;
        goto label_27e8c0;
    }
    ctx->pc = 0x27E8B8u;
    {
        const bool branch_taken_0x27e8b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27e8b8) {
            ctx->pc = 0x27E984u;
            goto label_27e984;
        }
    }
    ctx->pc = 0x27E8C0u;
label_27e8c0:
    // 0x27e8c0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x27e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27e8c4:
    // 0x27e8c4: 0xa0400065  sb          $zero, 0x65($v0)
    ctx->pc = 0x27e8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 101), (uint8_t)GPR_U32(ctx, 0));
label_27e8c8:
    // 0x27e8c8: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x27e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_27e8cc:
    // 0x27e8cc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x27e8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_27e8d0:
    // 0x27e8d0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x27e8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_27e8d4:
    // 0x27e8d4: 0x24a5d360  addiu       $a1, $a1, -0x2CA0
    ctx->pc = 0x27e8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955872));
label_27e8d8:
    // 0x27e8d8: 0x2786a224  addiu       $a2, $gp, -0x5DDC
    ctx->pc = 0x27e8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943268));
label_27e8dc:
    // 0x27e8dc: 0xc04206c  jal         func_1081B0
label_27e8e0:
    if (ctx->pc == 0x27E8E0u) {
        ctx->pc = 0x27E8E4u;
        goto label_27e8e4;
    }
    ctx->pc = 0x27E8DCu;
    SET_GPR_U32(ctx, 31, 0x27E8E4u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x27E8DCu, 0x27E8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E8E4u;
label_27e8e4:
    // 0x27e8e4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x27e8e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e8e8:
    // 0x27e8e8: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x27e8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27e8ec:
    // 0x27e8ec: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x27e8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27e8f0:
    // 0x27e8f0: 0xc09ffc0  jal         func_27FF00
label_27e8f4:
    if (ctx->pc == 0x27E8F4u) {
        ctx->pc = 0x27E8F8u;
        goto label_27e8f8;
    }
    ctx->pc = 0x27E8F0u;
    SET_GPR_U32(ctx, 31, 0x27E8F8u);
    ctx->pc = 0x27FF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FF00u, 0x27E8F0u, 0x27E8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E8F8u;
label_27e8f8:
    // 0x27e8f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x27e8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27e8fc:
    // 0x27e8fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27e900:
    // 0x27e900: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
label_27e904:
    if (ctx->pc == 0x27E904u) {
        ctx->pc = 0x27E908u;
        goto label_27e908;
    }
    ctx->pc = 0x27E900u;
    {
        const bool branch_taken_0x27e900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27e900) {
            ctx->pc = 0x27E970u;
            goto label_27e970;
        }
    }
    ctx->pc = 0x27E908u;
label_27e908:
    // 0x27e908: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x27e908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27e90c:
    // 0x27e90c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x27e90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27e910:
    // 0x27e910: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27e910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27e914:
    // 0x27e914: 0xc09fe10  jal         func_27F840
label_27e918:
    if (ctx->pc == 0x27E918u) {
        ctx->pc = 0x27E91Cu;
        goto label_27e91c;
    }
    ctx->pc = 0x27E914u;
    SET_GPR_U32(ctx, 31, 0x27E91Cu);
    ctx->pc = 0x27F840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F840u, 0x27E914u, 0x27E91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E91Cu;
label_27e91c:
    // 0x27e91c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27e91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27e920:
    // 0x27e920: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_27e924:
    if (ctx->pc == 0x27E924u) {
        ctx->pc = 0x27E928u;
        goto label_27e928;
    }
    ctx->pc = 0x27E920u;
    {
        const bool branch_taken_0x27e920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e920) {
            ctx->pc = 0x27E93Cu;
            goto label_27e93c;
        }
    }
    ctx->pc = 0x27E928u;
label_27e928:
    // 0x27e928: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x27e928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27e92c:
    // 0x27e92c: 0xc09fa04  jal         func_27E810
label_27e930:
    if (ctx->pc == 0x27E930u) {
        ctx->pc = 0x27E934u;
        goto label_27e934;
    }
    ctx->pc = 0x27E92Cu;
    SET_GPR_U32(ctx, 31, 0x27E934u);
    ctx->pc = 0x27E810u;
    goto label_27e810;
    ctx->pc = 0x27E934u;
label_27e934:
    // 0x27e934: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_27e938:
    if (ctx->pc == 0x27E938u) {
        ctx->pc = 0x27E93Cu;
        goto label_27e93c;
    }
    ctx->pc = 0x27E934u;
    {
        const bool branch_taken_0x27e934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e934) {
            ctx->pc = 0x27ED00u;
            goto label_27ed00;
        }
    }
    ctx->pc = 0x27E93Cu;
label_27e93c:
    // 0x27e93c: 0xc12246c  jal         func_4891B0
label_27e940:
    if (ctx->pc == 0x27E940u) {
        ctx->pc = 0x27E944u;
        goto label_27e944;
    }
    ctx->pc = 0x27E93Cu;
    SET_GPR_U32(ctx, 31, 0x27E944u);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x27E93Cu, 0x27E944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E944u;
label_27e944:
    // 0x27e944: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27e944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e948:
    // 0x27e948: 0xc09fc0c  jal         func_27F030
label_27e94c:
    if (ctx->pc == 0x27E94Cu) {
        ctx->pc = 0x27E950u;
        goto label_27e950;
    }
    ctx->pc = 0x27E948u;
    SET_GPR_U32(ctx, 31, 0x27E950u);
    ctx->pc = 0x27F030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F030u, 0x27E948u, 0x27E950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E950u;
label_27e950:
    // 0x27e950: 0x144000eb  bnez        $v0, . + 4 + (0xEB << 2)
label_27e954:
    if (ctx->pc == 0x27E954u) {
        ctx->pc = 0x27E958u;
        goto label_27e958;
    }
    ctx->pc = 0x27E950u;
    {
        const bool branch_taken_0x27e950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e950) {
            ctx->pc = 0x27ED00u;
            goto label_27ed00;
        }
    }
    ctx->pc = 0x27E958u;
label_27e958:
    // 0x27e958: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x27e958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27e95c:
    // 0x27e95c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27e95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27e960:
    // 0x27e960: 0xc09fc6c  jal         func_27F1B0
label_27e964:
    if (ctx->pc == 0x27E964u) {
        ctx->pc = 0x27E968u;
        goto label_27e968;
    }
    ctx->pc = 0x27E960u;
    SET_GPR_U32(ctx, 31, 0x27E968u);
    ctx->pc = 0x27F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F1B0u, 0x27E960u, 0x27E968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E968u;
label_27e968:
    // 0x27e968: 0x100000e5  b           . + 4 + (0xE5 << 2)
label_27e96c:
    if (ctx->pc == 0x27E96Cu) {
        ctx->pc = 0x27E970u;
        goto label_27e970;
    }
    ctx->pc = 0x27E968u;
    {
        const bool branch_taken_0x27e968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e968) {
            ctx->pc = 0x27ED00u;
            goto label_27ed00;
        }
    }
    ctx->pc = 0x27E970u;
label_27e970:
    // 0x27e970: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x27e970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27e974:
    // 0x27e974: 0xc09fa04  jal         func_27E810
label_27e978:
    if (ctx->pc == 0x27E978u) {
        ctx->pc = 0x27E97Cu;
        goto label_27e97c;
    }
    ctx->pc = 0x27E974u;
    SET_GPR_U32(ctx, 31, 0x27E97Cu);
    ctx->pc = 0x27E810u;
    goto label_27e810;
    ctx->pc = 0x27E97Cu;
label_27e97c:
    // 0x27e97c: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_27e980:
    if (ctx->pc == 0x27E980u) {
        ctx->pc = 0x27E984u;
        goto label_27e984;
    }
    ctx->pc = 0x27E97Cu;
    {
        const bool branch_taken_0x27e97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e97c) {
            ctx->pc = 0x27ED00u;
            goto label_27ed00;
        }
    }
    ctx->pc = 0x27E984u;
label_27e984:
    // 0x27e984: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x27e984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_27e988:
    // 0x27e988: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27e988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e98c:
    // 0x27e98c: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x27e98cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_27e990:
    // 0x27e990: 0x24c6d380  addiu       $a2, $a2, -0x2C80
    ctx->pc = 0x27e990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955904));
label_27e994:
    // 0x27e994: 0xc08d48c  jal         func_235230
label_27e998:
    if (ctx->pc == 0x27E998u) {
        ctx->pc = 0x27E99Cu;
        goto label_27e99c;
    }
    ctx->pc = 0x27E994u;
    SET_GPR_U32(ctx, 31, 0x27E99Cu);
    ctx->pc = 0x235230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235230u, 0x27E994u, 0x27E99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E99Cu;
label_27e99c:
    // 0x27e99c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x27e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27e9a0:
    // 0x27e9a0: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x27e9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_27e9a4:
    // 0x27e9a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27e9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27e9a8:
    // 0x27e9a8: 0xc0a1248  jal         func_284920
label_27e9ac:
    if (ctx->pc == 0x27E9ACu) {
        ctx->pc = 0x27E9B0u;
        goto label_27e9b0;
    }
    ctx->pc = 0x27E9A8u;
    SET_GPR_U32(ctx, 31, 0x27E9B0u);
    ctx->pc = 0x284920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284920u, 0x27E9A8u, 0x27E9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E9B0u;
label_27e9b0:
    // 0x27e9b0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27e9b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e9b4:
    // 0x27e9b4: 0xc12242c  jal         func_4890B0
label_27e9b8:
    if (ctx->pc == 0x27E9B8u) {
        ctx->pc = 0x27E9BCu;
        goto label_27e9bc;
    }
    ctx->pc = 0x27E9B4u;
    SET_GPR_U32(ctx, 31, 0x27E9BCu);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x27E9B4u, 0x27E9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E9BCu;
label_27e9bc:
    // 0x27e9bc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x27e9bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e9c0:
    // 0x27e9c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27e9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27e9c4:
    // 0x27e9c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27e9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27e9c8:
    // 0x27e9c8: 0xc0e6e40  jal         func_39B900
label_27e9cc:
    if (ctx->pc == 0x27E9CCu) {
        ctx->pc = 0x27E9D0u;
        goto label_27e9d0;
    }
    ctx->pc = 0x27E9C8u;
    SET_GPR_U32(ctx, 31, 0x27E9D0u);
    ctx->pc = 0x39B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B900u, 0x27E9C8u, 0x27E9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E9D0u;
label_27e9d0:
    // 0x27e9d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_27e9d4:
    // 0x27e9d4: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x27e9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
label_27e9d8:
    // 0x27e9d8: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x27e9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_27e9dc:
    // 0x27e9dc: 0xc09fbb4  jal         func_27EED0
label_27e9e0:
    if (ctx->pc == 0x27E9E0u) {
        ctx->pc = 0x27E9E4u;
        goto label_27e9e4;
    }
    ctx->pc = 0x27E9DCu;
    SET_GPR_U32(ctx, 31, 0x27E9E4u);
    ctx->pc = 0x27EED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EED0u, 0x27E9DCu, 0x27E9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E9E4u;
label_27e9e4:
    // 0x27e9e4: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x27e9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27e9e8:
    // 0x27e9e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27e9e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27e9ec:
    // 0x27e9ec: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x27e9ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_27e9f0:
    // 0x27e9f0: 0x320f809  jalr        $t9
label_27e9f4:
    if (ctx->pc == 0x27E9F4u) {
        ctx->pc = 0x27E9F8u;
        goto label_27e9f8;
    }
    ctx->pc = 0x27E9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27E9F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E9F0u, 0x27E9F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27E9F8u;
label_27e9f8:
    // 0x27e9f8: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x27e9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_27e9fc:
    // 0x27e9fc: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x27e9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_27ea00:
    // 0x27ea00: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x27ea00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_27ea04:
    // 0x27ea04: 0xc085538  jal         func_2154E0
label_27ea08:
    if (ctx->pc == 0x27EA08u) {
        ctx->pc = 0x27EA0Cu;
        goto label_27ea0c;
    }
    ctx->pc = 0x27EA04u;
    SET_GPR_U32(ctx, 31, 0x27EA0Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27EA04u, 0x27EA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA0Cu;
label_27ea0c:
    // 0x27ea0c: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x27ea0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_27ea10:
    // 0x27ea10: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x27ea10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_27ea14:
    // 0x27ea14: 0xc091aa8  jal         func_246AA0
label_27ea18:
    if (ctx->pc == 0x27EA18u) {
        ctx->pc = 0x27EA1Cu;
        goto label_27ea1c;
    }
    ctx->pc = 0x27EA14u;
    SET_GPR_U32(ctx, 31, 0x27EA1Cu);
    ctx->pc = 0x246AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AA0u, 0x27EA14u, 0x27EA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA1Cu;
label_27ea1c:
    // 0x27ea1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27ea1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ea20:
    // 0x27ea20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ea20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27ea24:
    // 0x27ea24: 0xc040e7c  jal         func_1039F0
label_27ea28:
    if (ctx->pc == 0x27EA28u) {
        ctx->pc = 0x27EA2Cu;
        goto label_27ea2c;
    }
    ctx->pc = 0x27EA24u;
    SET_GPR_U32(ctx, 31, 0x27EA2Cu);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x27EA24u, 0x27EA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA2Cu;
label_27ea2c:
    // 0x27ea2c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27ea2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ea30:
    // 0x27ea30: 0x1000000d  b           . + 4 + (0xD << 2)
label_27ea34:
    if (ctx->pc == 0x27EA34u) {
        ctx->pc = 0x27EA38u;
        goto label_27ea38;
    }
    ctx->pc = 0x27EA30u;
    {
        const bool branch_taken_0x27ea30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ea30) {
            ctx->pc = 0x27EA68u;
            goto label_27ea68;
        }
    }
    ctx->pc = 0x27EA38u;
label_27ea38:
    // 0x27ea38: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x27ea38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_27ea3c:
    // 0x27ea3c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x27ea3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_27ea40:
    // 0x27ea40: 0xc085538  jal         func_2154E0
label_27ea44:
    if (ctx->pc == 0x27EA44u) {
        ctx->pc = 0x27EA48u;
        goto label_27ea48;
    }
    ctx->pc = 0x27EA40u;
    SET_GPR_U32(ctx, 31, 0x27EA48u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27EA40u, 0x27EA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA48u;
label_27ea48:
    // 0x27ea48: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x27ea48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_27ea4c:
    // 0x27ea4c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x27ea4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_27ea50:
    // 0x27ea50: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27ea50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_27ea54:
    // 0x27ea54: 0x24a58710  addiu       $a1, $a1, -0x78F0
    ctx->pc = 0x27ea54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936336));
label_27ea58:
    // 0x27ea58: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x27ea58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_27ea5c:
    // 0x27ea5c: 0xc0a3674  jal         func_28D9D0
label_27ea60:
    if (ctx->pc == 0x27EA60u) {
        ctx->pc = 0x27EA64u;
        goto label_27ea64;
    }
    ctx->pc = 0x27EA5Cu;
    SET_GPR_U32(ctx, 31, 0x27EA64u);
    ctx->pc = 0x28D9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9D0u, 0x27EA5Cu, 0x27EA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA64u;
label_27ea64:
    // 0x27ea64: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x27ea64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_27ea68:
    // 0x27ea68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ea68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27ea6c:
    // 0x27ea6c: 0xc04147c  jal         func_1051F0
label_27ea70:
    if (ctx->pc == 0x27EA70u) {
        ctx->pc = 0x27EA74u;
        goto label_27ea74;
    }
    ctx->pc = 0x27EA6Cu;
    SET_GPR_U32(ctx, 31, 0x27EA74u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x27EA6Cu, 0x27EA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA74u;
label_27ea74:
    // 0x27ea74: 0x1662fff0  bne         $s3, $v0, . + 4 + (-0x10 << 2)
label_27ea78:
    if (ctx->pc == 0x27EA78u) {
        ctx->pc = 0x27EA7Cu;
        goto label_27ea7c;
    }
    ctx->pc = 0x27EA74u;
    {
        const bool branch_taken_0x27ea74 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x27ea74) {
            ctx->pc = 0x27EA38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27ea38;
        }
    }
    ctx->pc = 0x27EA7Cu;
label_27ea7c:
    // 0x27ea7c: 0xc12246c  jal         func_4891B0
label_27ea80:
    if (ctx->pc == 0x27EA80u) {
        ctx->pc = 0x27EA84u;
        goto label_27ea84;
    }
    ctx->pc = 0x27EA7Cu;
    SET_GPR_U32(ctx, 31, 0x27EA84u);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x27EA7Cu, 0x27EA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA84u;
label_27ea84:
    // 0x27ea84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27ea84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ea88:
    // 0x27ea88: 0xc11ff78  jal         func_47FDE0
label_27ea8c:
    if (ctx->pc == 0x27EA8Cu) {
        ctx->pc = 0x27EA90u;
        goto label_27ea90;
    }
    ctx->pc = 0x27EA88u;
    SET_GPR_U32(ctx, 31, 0x27EA90u);
    ctx->pc = 0x47FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FDE0u, 0x27EA88u, 0x27EA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA90u;
label_27ea90:
    // 0x27ea90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27ea94:
    // 0x27ea94: 0x14020003  bne         $zero, $v0, . + 4 + (0x3 << 2)
label_27ea98:
    if (ctx->pc == 0x27EA98u) {
        ctx->pc = 0x27EA9Cu;
        goto label_27ea9c;
    }
    ctx->pc = 0x27EA94u;
    {
        const bool branch_taken_0x27ea94 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x27ea94) {
            ctx->pc = 0x27EAA4u;
            goto label_27eaa4;
        }
    }
    ctx->pc = 0x27EA9Cu;
label_27ea9c:
    // 0x27ea9c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x27ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27eaa0:
    // 0x27eaa0: 0xa0400066  sb          $zero, 0x66($v0)
    ctx->pc = 0x27eaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 102), (uint8_t)GPR_U32(ctx, 0));
label_27eaa4:
    // 0x27eaa4: 0xc12246c  jal         func_4891B0
label_27eaa8:
    if (ctx->pc == 0x27EAA8u) {
        ctx->pc = 0x27EAACu;
        goto label_27eaac;
    }
    ctx->pc = 0x27EAA4u;
    SET_GPR_U32(ctx, 31, 0x27EAACu);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x27EAA4u, 0x27EAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EAACu;
label_27eaac:
    // 0x27eaac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27eaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27eab0:
    // 0x27eab0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27eab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27eab4:
    // 0x27eab4: 0xc120114  jal         func_480450
label_27eab8:
    if (ctx->pc == 0x27EAB8u) {
        ctx->pc = 0x27EABCu;
        goto label_27eabc;
    }
    ctx->pc = 0x27EAB4u;
    SET_GPR_U32(ctx, 31, 0x27EABCu);
    ctx->pc = 0x480450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480450u, 0x27EAB4u, 0x27EABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EABCu;
label_27eabc:
    // 0x27eabc: 0xc12246c  jal         func_4891B0
label_27eac0:
    if (ctx->pc == 0x27EAC0u) {
        ctx->pc = 0x27EAC4u;
        goto label_27eac4;
    }
    ctx->pc = 0x27EABCu;
    SET_GPR_U32(ctx, 31, 0x27EAC4u);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x27EABCu, 0x27EAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EAC4u;
label_27eac4:
    // 0x27eac4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27eac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27eac8:
    // 0x27eac8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27eac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27eacc:
    // 0x27eacc: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x27eaccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_27ead0:
    // 0x27ead0: 0xc11ff80  jal         func_47FE00
label_27ead4:
    if (ctx->pc == 0x27EAD4u) {
        ctx->pc = 0x27EAD8u;
        goto label_27ead8;
    }
    ctx->pc = 0x27EAD0u;
    SET_GPR_U32(ctx, 31, 0x27EAD8u);
    ctx->pc = 0x47FE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FE00u, 0x27EAD0u, 0x27EAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EAD8u;
label_27ead8:
    // 0x27ead8: 0xc12246c  jal         func_4891B0
label_27eadc:
    if (ctx->pc == 0x27EADCu) {
        ctx->pc = 0x27EAE0u;
        goto label_27eae0;
    }
    ctx->pc = 0x27EAD8u;
    SET_GPR_U32(ctx, 31, 0x27EAE0u);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x27EAD8u, 0x27EAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EAE0u;
label_27eae0:
    // 0x27eae0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27eae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27eae4:
    // 0x27eae4: 0xc78ca21c  lwc1        $f12, -0x5DE4($gp)
    ctx->pc = 0x27eae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27eae8:
    // 0x27eae8: 0xc120108  jal         func_480420
label_27eaec:
    if (ctx->pc == 0x27EAECu) {
        ctx->pc = 0x27EAF0u;
        goto label_27eaf0;
    }
    ctx->pc = 0x27EAE8u;
    SET_GPR_U32(ctx, 31, 0x27EAF0u);
    ctx->pc = 0x480420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480420u, 0x27EAE8u, 0x27EAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EAF0u;
label_27eaf0:
    // 0x27eaf0: 0xc12246c  jal         func_4891B0
label_27eaf4:
    if (ctx->pc == 0x27EAF4u) {
        ctx->pc = 0x27EAF8u;
        goto label_27eaf8;
    }
    ctx->pc = 0x27EAF0u;
    SET_GPR_U32(ctx, 31, 0x27EAF8u);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x27EAF0u, 0x27EAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EAF8u;
label_27eaf8:
    // 0x27eaf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27eaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27eafc:
    // 0x27eafc: 0xc12025c  jal         func_480970
label_27eb00:
    if (ctx->pc == 0x27EB00u) {
        ctx->pc = 0x27EB04u;
        goto label_27eb04;
    }
    ctx->pc = 0x27EAFCu;
    SET_GPR_U32(ctx, 31, 0x27EB04u);
    ctx->pc = 0x480970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480970u, 0x27EAFCu, 0x27EB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EB04u;
label_27eb04:
    // 0x27eb04: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_27eb08:
    // 0x27eb08: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x27eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_27eb0c:
    // 0x27eb0c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x27eb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_27eb10:
    // 0x27eb10: 0xc12246c  jal         func_4891B0
label_27eb14:
    if (ctx->pc == 0x27EB14u) {
        ctx->pc = 0x27EB18u;
        goto label_27eb18;
    }
    ctx->pc = 0x27EB10u;
    SET_GPR_U32(ctx, 31, 0x27EB18u);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x27EB10u, 0x27EB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EB18u;
label_27eb18:
    // 0x27eb18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27eb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27eb1c:
    // 0x27eb1c: 0xc11ff78  jal         func_47FDE0
label_27eb20:
    if (ctx->pc == 0x27EB20u) {
        ctx->pc = 0x27EB24u;
        goto label_27eb24;
    }
    ctx->pc = 0x27EB1Cu;
    SET_GPR_U32(ctx, 31, 0x27EB24u);
    ctx->pc = 0x47FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FDE0u, 0x27EB1Cu, 0x27EB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EB24u;
label_27eb24:
    // 0x27eb24: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x27eb24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_27eb28:
    // 0x27eb28: 0xac43004c  sw          $v1, 0x4C($v0)
    ctx->pc = 0x27eb28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
label_27eb2c:
    // 0x27eb2c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x27eb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27eb30:
    // 0x27eb30: 0xc09fc34  jal         func_27F0D0
label_27eb34:
    if (ctx->pc == 0x27EB34u) {
        ctx->pc = 0x27EB38u;
        goto label_27eb38;
    }
    ctx->pc = 0x27EB30u;
    SET_GPR_U32(ctx, 31, 0x27EB38u);
    ctx->pc = 0x27F0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0D0u, 0x27EB30u, 0x27EB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EB38u;
label_27eb38:
    // 0x27eb38: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x27eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27eb3c:
    // 0x27eb3c: 0x90420066  lbu         $v0, 0x66($v0)
    ctx->pc = 0x27eb3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 102)));
label_27eb40:
    // 0x27eb40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27eb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27eb44:
    // 0x27eb44: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
label_27eb48:
    if (ctx->pc == 0x27EB48u) {
        ctx->pc = 0x27EB4Cu;
        goto label_27eb4c;
    }
    ctx->pc = 0x27EB44u;
    {
        const bool branch_taken_0x27eb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27eb44) {
            ctx->pc = 0x27EC6Cu;
            goto label_27ec6c;
        }
    }
    ctx->pc = 0x27EB4Cu;
label_27eb4c:
    // 0x27eb4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27eb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27eb50:
    // 0x27eb50: 0xc040e7c  jal         func_1039F0
label_27eb54:
    if (ctx->pc == 0x27EB54u) {
        ctx->pc = 0x27EB58u;
        goto label_27eb58;
    }
    ctx->pc = 0x27EB50u;
    SET_GPR_U32(ctx, 31, 0x27EB58u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x27EB50u, 0x27EB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EB58u;
label_27eb58:
    // 0x27eb58: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27eb58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27eb5c:
    // 0x27eb5c: 0x1000000d  b           . + 4 + (0xD << 2)
label_27eb60:
    if (ctx->pc == 0x27EB60u) {
        ctx->pc = 0x27EB64u;
        goto label_27eb64;
    }
    ctx->pc = 0x27EB5Cu;
    {
        const bool branch_taken_0x27eb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27eb5c) {
            ctx->pc = 0x27EB94u;
            goto label_27eb94;
        }
    }
    ctx->pc = 0x27EB64u;
label_27eb64:
    // 0x27eb64: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x27eb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_27eb68:
    // 0x27eb68: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x27eb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_27eb6c:
    // 0x27eb6c: 0xc085538  jal         func_2154E0
label_27eb70:
    if (ctx->pc == 0x27EB70u) {
        ctx->pc = 0x27EB74u;
        goto label_27eb74;
    }
    ctx->pc = 0x27EB6Cu;
    SET_GPR_U32(ctx, 31, 0x27EB74u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27EB6Cu, 0x27EB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EB74u;
label_27eb74:
    // 0x27eb74: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x27eb74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_27eb78:
    // 0x27eb78: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x27eb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_27eb7c:
    // 0x27eb7c: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27eb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_27eb80:
    // 0x27eb80: 0x24a58180  addiu       $a1, $a1, -0x7E80
    ctx->pc = 0x27eb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934912));
label_27eb84:
    // 0x27eb84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27eb84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27eb88:
    // 0x27eb88: 0xc0a3674  jal         func_28D9D0
label_27eb8c:
    if (ctx->pc == 0x27EB8Cu) {
        ctx->pc = 0x27EB90u;
        goto label_27eb90;
    }
    ctx->pc = 0x27EB88u;
    SET_GPR_U32(ctx, 31, 0x27EB90u);
    ctx->pc = 0x28D9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9D0u, 0x27EB88u, 0x27EB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EB90u;
label_27eb90:
    // 0x27eb90: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x27eb90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_27eb94:
    // 0x27eb94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27eb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27eb98:
    // 0x27eb98: 0xc04147c  jal         func_1051F0
label_27eb9c:
    if (ctx->pc == 0x27EB9Cu) {
        ctx->pc = 0x27EBA0u;
        goto label_27eba0;
    }
    ctx->pc = 0x27EB98u;
    SET_GPR_U32(ctx, 31, 0x27EBA0u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x27EB98u, 0x27EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EBA0u;
label_27eba0:
    // 0x27eba0: 0x1642fff0  bne         $s2, $v0, . + 4 + (-0x10 << 2)
label_27eba4:
    if (ctx->pc == 0x27EBA4u) {
        ctx->pc = 0x27EBA8u;
        goto label_27eba8;
    }
    ctx->pc = 0x27EBA0u;
    {
        const bool branch_taken_0x27eba0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x27eba0) {
            ctx->pc = 0x27EB64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27eb64;
        }
    }
    ctx->pc = 0x27EBA8u;
label_27eba8:
    // 0x27eba8: 0x8f84a220  lw          $a0, -0x5DE0($gp)
    ctx->pc = 0x27eba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943264)));
label_27ebac:
    // 0x27ebac: 0xc119758  jal         func_465D60
label_27ebb0:
    if (ctx->pc == 0x27EBB0u) {
        ctx->pc = 0x27EBB4u;
        goto label_27ebb4;
    }
    ctx->pc = 0x27EBACu;
    SET_GPR_U32(ctx, 31, 0x27EBB4u);
    ctx->pc = 0x465D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465D60u, 0x27EBACu, 0x27EBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EBB4u;
label_27ebb4:
    // 0x27ebb4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_27ebb8:
    if (ctx->pc == 0x27EBB8u) {
        ctx->pc = 0x27EBBCu;
        goto label_27ebbc;
    }
    ctx->pc = 0x27EBB4u;
    {
        const bool branch_taken_0x27ebb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ebb4) {
            ctx->pc = 0x27EBD4u;
            goto label_27ebd4;
        }
    }
    ctx->pc = 0x27EBBCu;
label_27ebbc:
    // 0x27ebbc: 0x8f82a220  lw          $v0, -0x5DE0($gp)
    ctx->pc = 0x27ebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943264)));
label_27ebc0:
    // 0x27ebc0: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x27ebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_27ebc4:
    // 0x27ebc4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x27ebc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_27ebc8:
    // 0x27ebc8: 0xc11971c  jal         func_465C70
label_27ebcc:
    if (ctx->pc == 0x27EBCCu) {
        ctx->pc = 0x27EBD0u;
        goto label_27ebd0;
    }
    ctx->pc = 0x27EBC8u;
    SET_GPR_U32(ctx, 31, 0x27EBD0u);
    ctx->pc = 0x465C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465C70u, 0x27EBC8u, 0x27EBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EBD0u;
label_27ebd0:
    // 0x27ebd0: 0xaf82a220  sw          $v0, -0x5DE0($gp)
    ctx->pc = 0x27ebd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943264), GPR_U32(ctx, 2));
label_27ebd4:
    // 0x27ebd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ebd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27ebd8:
    // 0x27ebd8: 0xc040e7c  jal         func_1039F0
label_27ebdc:
    if (ctx->pc == 0x27EBDCu) {
        ctx->pc = 0x27EBE0u;
        goto label_27ebe0;
    }
    ctx->pc = 0x27EBD8u;
    SET_GPR_U32(ctx, 31, 0x27EBE0u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x27EBD8u, 0x27EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EBE0u;
label_27ebe0:
    // 0x27ebe0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27ebe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ebe4:
    // 0x27ebe4: 0x1000000d  b           . + 4 + (0xD << 2)
label_27ebe8:
    if (ctx->pc == 0x27EBE8u) {
        ctx->pc = 0x27EBECu;
        goto label_27ebec;
    }
    ctx->pc = 0x27EBE4u;
    {
        const bool branch_taken_0x27ebe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ebe4) {
            ctx->pc = 0x27EC1Cu;
            goto label_27ec1c;
        }
    }
    ctx->pc = 0x27EBECu;
label_27ebec:
    // 0x27ebec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x27ebecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_27ebf0:
    // 0x27ebf0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x27ebf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_27ebf4:
    // 0x27ebf4: 0xc085538  jal         func_2154E0
label_27ebf8:
    if (ctx->pc == 0x27EBF8u) {
        ctx->pc = 0x27EBFCu;
        goto label_27ebfc;
    }
    ctx->pc = 0x27EBF4u;
    SET_GPR_U32(ctx, 31, 0x27EBFCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27EBF4u, 0x27EBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EBFCu;
label_27ebfc:
    // 0x27ebfc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x27ebfcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ec00:
    // 0x27ec00: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x27ec00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_27ec04:
    // 0x27ec04: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27ec04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_27ec08:
    // 0x27ec08: 0x24a58750  addiu       $a1, $a1, -0x78B0
    ctx->pc = 0x27ec08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936400));
label_27ec0c:
    // 0x27ec0c: 0x2786a220  addiu       $a2, $gp, -0x5DE0
    ctx->pc = 0x27ec0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943264));
label_27ec10:
    // 0x27ec10: 0xc0a3674  jal         func_28D9D0
label_27ec14:
    if (ctx->pc == 0x27EC14u) {
        ctx->pc = 0x27EC18u;
        goto label_27ec18;
    }
    ctx->pc = 0x27EC10u;
    SET_GPR_U32(ctx, 31, 0x27EC18u);
    ctx->pc = 0x28D9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9D0u, 0x27EC10u, 0x27EC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC18u;
label_27ec18:
    // 0x27ec18: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x27ec18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_27ec1c:
    // 0x27ec1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ec1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27ec20:
    // 0x27ec20: 0xc04147c  jal         func_1051F0
label_27ec24:
    if (ctx->pc == 0x27EC24u) {
        ctx->pc = 0x27EC28u;
        goto label_27ec28;
    }
    ctx->pc = 0x27EC20u;
    SET_GPR_U32(ctx, 31, 0x27EC28u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x27EC20u, 0x27EC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC28u;
label_27ec28:
    // 0x27ec28: 0x1622fff0  bne         $s1, $v0, . + 4 + (-0x10 << 2)
label_27ec2c:
    if (ctx->pc == 0x27EC2Cu) {
        ctx->pc = 0x27EC30u;
        goto label_27ec30;
    }
    ctx->pc = 0x27EC28u;
    {
        const bool branch_taken_0x27ec28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x27ec28) {
            ctx->pc = 0x27EBECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27ebec;
        }
    }
    ctx->pc = 0x27EC30u;
label_27ec30:
    // 0x27ec30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27ec30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ec34:
    // 0x27ec34: 0xc0f53ce  jal         func_3D4F38
label_27ec38:
    if (ctx->pc == 0x27EC38u) {
        ctx->pc = 0x27EC3Cu;
        goto label_27ec3c;
    }
    ctx->pc = 0x27EC34u;
    SET_GPR_U32(ctx, 31, 0x27EC3Cu);
    ctx->pc = 0x3D4F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4F38u, 0x27EC34u, 0x27EC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC3Cu;
label_27ec3c:
    // 0x27ec3c: 0xc12246c  jal         func_4891B0
label_27ec40:
    if (ctx->pc == 0x27EC40u) {
        ctx->pc = 0x27EC44u;
        goto label_27ec44;
    }
    ctx->pc = 0x27EC3Cu;
    SET_GPR_U32(ctx, 31, 0x27EC44u);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x27EC3Cu, 0x27EC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC44u;
label_27ec44:
    // 0x27ec44: 0x8f85a220  lw          $a1, -0x5DE0($gp)
    ctx->pc = 0x27ec44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943264)));
label_27ec48:
    // 0x27ec48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27ec48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ec4c:
    // 0x27ec4c: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x27ec4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_27ec50:
    // 0x27ec50: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x27ec50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27ec54:
    // 0x27ec54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27ec54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ec58:
    // 0x27ec58: 0xc120140  jal         func_480500
label_27ec5c:
    if (ctx->pc == 0x27EC5Cu) {
        ctx->pc = 0x27EC60u;
        goto label_27ec60;
    }
    ctx->pc = 0x27EC58u;
    SET_GPR_U32(ctx, 31, 0x27EC60u);
    ctx->pc = 0x480500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480500u, 0x27EC58u, 0x27EC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC60u;
label_27ec60:
    // 0x27ec60: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x27ec60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27ec64:
    // 0x27ec64: 0xc09fdd8  jal         func_27F760
label_27ec68:
    if (ctx->pc == 0x27EC68u) {
        ctx->pc = 0x27EC6Cu;
        goto label_27ec6c;
    }
    ctx->pc = 0x27EC64u;
    SET_GPR_U32(ctx, 31, 0x27EC6Cu);
    ctx->pc = 0x27F760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F760u, 0x27EC64u, 0x27EC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC6Cu;
label_27ec6c:
    // 0x27ec6c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x27ec6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27ec70:
    // 0x27ec70: 0xc09fd44  jal         func_27F510
label_27ec74:
    if (ctx->pc == 0x27EC74u) {
        ctx->pc = 0x27EC78u;
        goto label_27ec78;
    }
    ctx->pc = 0x27EC70u;
    SET_GPR_U32(ctx, 31, 0x27EC78u);
    ctx->pc = 0x27F510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F510u, 0x27EC70u, 0x27EC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC78u;
label_27ec78:
    // 0x27ec78: 0xc12246c  jal         func_4891B0
label_27ec7c:
    if (ctx->pc == 0x27EC7Cu) {
        ctx->pc = 0x27EC80u;
        goto label_27ec80;
    }
    ctx->pc = 0x27EC78u;
    SET_GPR_U32(ctx, 31, 0x27EC80u);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x27EC78u, 0x27EC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC80u;
label_27ec80:
    // 0x27ec80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27ec80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ec84:
    // 0x27ec84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27ec84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27ec88:
    // 0x27ec88: 0xc120248  jal         func_480920
label_27ec8c:
    if (ctx->pc == 0x27EC8Cu) {
        ctx->pc = 0x27EC90u;
        goto label_27ec90;
    }
    ctx->pc = 0x27EC88u;
    SET_GPR_U32(ctx, 31, 0x27EC90u);
    ctx->pc = 0x480920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480920u, 0x27EC88u, 0x27EC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC90u;
label_27ec90:
    // 0x27ec90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27ec90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27ec94:
    // 0x27ec94: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27ec94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27ec98:
    // 0x27ec98: 0xc0e6e36  jal         func_39B8D8
label_27ec9c:
    if (ctx->pc == 0x27EC9Cu) {
        ctx->pc = 0x27ECA0u;
        goto label_27eca0;
    }
    ctx->pc = 0x27EC98u;
    SET_GPR_U32(ctx, 31, 0x27ECA0u);
    ctx->pc = 0x39B8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B8D8u, 0x27EC98u, 0x27ECA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ECA0u;
label_27eca0:
    // 0x27eca0: 0xc12246c  jal         func_4891B0
label_27eca4:
    if (ctx->pc == 0x27ECA4u) {
        ctx->pc = 0x27ECA8u;
        goto label_27eca8;
    }
    ctx->pc = 0x27ECA0u;
    SET_GPR_U32(ctx, 31, 0x27ECA8u);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x27ECA0u, 0x27ECA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ECA8u;
label_27eca8:
    // 0x27eca8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27eca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ecac:
    // 0x27ecac: 0xc09fc0c  jal         func_27F030
label_27ecb0:
    if (ctx->pc == 0x27ECB0u) {
        ctx->pc = 0x27ECB4u;
        goto label_27ecb4;
    }
    ctx->pc = 0x27ECACu;
    SET_GPR_U32(ctx, 31, 0x27ECB4u);
    ctx->pc = 0x27F030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F030u, 0x27ECACu, 0x27ECB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ECB4u;
label_27ecb4:
    // 0x27ecb4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_27ecb8:
    if (ctx->pc == 0x27ECB8u) {
        ctx->pc = 0x27ECBCu;
        goto label_27ecbc;
    }
    ctx->pc = 0x27ECB4u;
    {
        const bool branch_taken_0x27ecb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ecb4) {
            ctx->pc = 0x27ECCCu;
            goto label_27eccc;
        }
    }
    ctx->pc = 0x27ECBCu;
label_27ecbc:
    // 0x27ecbc: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x27ecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27ecc0:
    // 0x27ecc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27ecc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ecc4:
    // 0x27ecc4: 0xc09fc6c  jal         func_27F1B0
label_27ecc8:
    if (ctx->pc == 0x27ECC8u) {
        ctx->pc = 0x27ECCCu;
        goto label_27eccc;
    }
    ctx->pc = 0x27ECC4u;
    SET_GPR_U32(ctx, 31, 0x27ECCCu);
    ctx->pc = 0x27F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F1B0u, 0x27ECC4u, 0x27ECCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ECCCu;
label_27eccc:
    // 0x27eccc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x27ecccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_27ecd0:
    // 0x27ecd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27ecd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ecd4:
    // 0x27ecd4: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x27ecd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_27ecd8:
    // 0x27ecd8: 0x24c6d3a0  addiu       $a2, $a2, -0x2C60
    ctx->pc = 0x27ecd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955936));
label_27ecdc:
    // 0x27ecdc: 0xc08d48c  jal         func_235230
label_27ece0:
    if (ctx->pc == 0x27ECE0u) {
        ctx->pc = 0x27ECE4u;
        goto label_27ece4;
    }
    ctx->pc = 0x27ECDCu;
    SET_GPR_U32(ctx, 31, 0x27ECE4u);
    ctx->pc = 0x235230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235230u, 0x27ECDCu, 0x27ECE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ECE4u;
label_27ece4:
    // 0x27ece4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27ece4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27ece8:
    // 0x27ece8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x27ece8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27ecec:
    // 0x27ecec: 0xa0430066  sb          $v1, 0x66($v0)
    ctx->pc = 0x27ececu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 102), (uint8_t)GPR_U32(ctx, 3));
label_27ecf0:
    // 0x27ecf0: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x27ecf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_27ecf4:
    // 0x27ecf4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27ecf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27ecf8:
    // 0x27ecf8: 0xc09fb50  jal         func_27ED40
label_27ecfc:
    if (ctx->pc == 0x27ECFCu) {
        ctx->pc = 0x27ED00u;
        goto label_27ed00;
    }
    ctx->pc = 0x27ECF8u;
    SET_GPR_U32(ctx, 31, 0x27ED00u);
    ctx->pc = 0x27ED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27ED40u, 0x27ECF8u, 0x27ED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ED00u;
label_27ed00:
    // 0x27ed00: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x27ed00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_27ed04:
    // 0x27ed04: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x27ed04u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27ed08:
    // 0x27ed08: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x27ed08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27ed0c:
    // 0x27ed0c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27ed0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27ed10:
    // 0x27ed10: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27ed10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27ed14:
    // 0x27ed14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27ed14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27ed18:
    // 0x27ed18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27ed18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27ed1c:
    // 0x27ed1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27ed1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27ed20:
    // 0x27ed20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27ed20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27ed24:
    // 0x27ed24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27ed24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27ed28:
    // 0x27ed28: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x27ed28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_27ed2c:
    // 0x27ed2c: 0x3e00008  jr          $ra
label_27ed30:
    if (ctx->pc == 0x27ED30u) {
        ctx->pc = 0x27ED34u;
        goto label_27ed34;
    }
    ctx->pc = 0x27ED2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27ED2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27ED34u;
label_27ed34:
    // 0x27ed34: 0x0  nop
    ctx->pc = 0x27ed34u;
    // NOP
label_27ed38:
    // 0x27ed38: 0x0  nop
    ctx->pc = 0x27ed38u;
    // NOP
label_27ed3c:
    // 0x27ed3c: 0x0  nop
    ctx->pc = 0x27ed3cu;
    // NOP
    ctx->pc = 0x27ed40u;
}
