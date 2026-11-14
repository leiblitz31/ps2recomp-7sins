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

// Function: sub_0012B970
// Address: 0x12b970 - 0x12ea10
void sub_0012B970_0x12b970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B970_0x12b970");
#endif

    switch (ctx->pc) {
        case 0x12b9e0u: goto label_12b9e0;
        case 0x12ba04u: goto label_12ba04;
        case 0x12ba28u: goto label_12ba28;
        case 0x12ba48u: goto label_12ba48;
        case 0x12ba70u: goto label_12ba70;
        case 0x12ba98u: goto label_12ba98;
        case 0x12bac0u: goto label_12bac0;
        case 0x12bae8u: goto label_12bae8;
        case 0x12bb14u: goto label_12bb14;
        case 0x12bb40u: goto label_12bb40;
        case 0x12bb68u: goto label_12bb68;
        case 0x12bb94u: goto label_12bb94;
        case 0x12bbbcu: goto label_12bbbc;
        case 0x12bbe0u: goto label_12bbe0;
        case 0x12bc0cu: goto label_12bc0c;
        case 0x12bc38u: goto label_12bc38;
        case 0x12bc64u: goto label_12bc64;
        case 0x12bc90u: goto label_12bc90;
        case 0x12bcbcu: goto label_12bcbc;
        case 0x12bce8u: goto label_12bce8;
        case 0x12bd14u: goto label_12bd14;
        case 0x12bd40u: goto label_12bd40;
        case 0x12bd68u: goto label_12bd68;
        case 0x12bd94u: goto label_12bd94;
        case 0x12bdc0u: goto label_12bdc0;
        case 0x12bdecu: goto label_12bdec;
        case 0x12be18u: goto label_12be18;
        case 0x12be44u: goto label_12be44;
        case 0x12be6cu: goto label_12be6c;
        case 0x12be94u: goto label_12be94;
        case 0x12bebcu: goto label_12bebc;
        case 0x12bee4u: goto label_12bee4;
        case 0x12bf0cu: goto label_12bf0c;
        case 0x12bf34u: goto label_12bf34;
        case 0x12bf5cu: goto label_12bf5c;
        case 0x12bf84u: goto label_12bf84;
        case 0x12bfacu: goto label_12bfac;
        case 0x12bfccu: goto label_12bfcc;
        case 0x12bfecu: goto label_12bfec;
        case 0x12c014u: goto label_12c014;
        case 0x12c03cu: goto label_12c03c;
        case 0x12c064u: goto label_12c064;
        case 0x12c08cu: goto label_12c08c;
        case 0x12c0b4u: goto label_12c0b4;
        case 0x12c0dcu: goto label_12c0dc;
        case 0x12c104u: goto label_12c104;
        case 0x12c12cu: goto label_12c12c;
        case 0x12c158u: goto label_12c158;
        case 0x12c184u: goto label_12c184;
        case 0x12c1b0u: goto label_12c1b0;
        case 0x12c1dcu: goto label_12c1dc;
        case 0x12c204u: goto label_12c204;
        case 0x12c22cu: goto label_12c22c;
        case 0x12c254u: goto label_12c254;
        case 0x12c27cu: goto label_12c27c;
        case 0x12c2a4u: goto label_12c2a4;
        case 0x12c2ccu: goto label_12c2cc;
        case 0x12c2f4u: goto label_12c2f4;
        case 0x12c31cu: goto label_12c31c;
        case 0x12c344u: goto label_12c344;
        case 0x12c36cu: goto label_12c36c;
        case 0x12c390u: goto label_12c390;
        case 0x12c3b8u: goto label_12c3b8;
        case 0x12c3e0u: goto label_12c3e0;
        case 0x12c424u: goto label_12c424;
        case 0x12c450u: goto label_12c450;
        case 0x12c47cu: goto label_12c47c;
        case 0x12c4a8u: goto label_12c4a8;
        case 0x12c4d4u: goto label_12c4d4;
        case 0x12c500u: goto label_12c500;
        case 0x12c52cu: goto label_12c52c;
        case 0x12c558u: goto label_12c558;
        case 0x12c580u: goto label_12c580;
        case 0x12c5a8u: goto label_12c5a8;
        case 0x12c5d0u: goto label_12c5d0;
        case 0x12c5f8u: goto label_12c5f8;
        case 0x12c61cu: goto label_12c61c;
        case 0x12c644u: goto label_12c644;
        case 0x12c66cu: goto label_12c66c;
        case 0x12c694u: goto label_12c694;
        case 0x12c6bcu: goto label_12c6bc;
        case 0x12c6e4u: goto label_12c6e4;
        case 0x12c70cu: goto label_12c70c;
        case 0x12c734u: goto label_12c734;
        case 0x12c754u: goto label_12c754;
        case 0x12c77cu: goto label_12c77c;
        case 0x12c7a0u: goto label_12c7a0;
        case 0x12c7c4u: goto label_12c7c4;
        case 0x12c808u: goto label_12c808;
        case 0x12c830u: goto label_12c830;
        case 0x12c858u: goto label_12c858;
        case 0x12c884u: goto label_12c884;
        case 0x12c8b0u: goto label_12c8b0;
        case 0x12c8dcu: goto label_12c8dc;
        case 0x12c908u: goto label_12c908;
        case 0x12c934u: goto label_12c934;
        case 0x12c960u: goto label_12c960;
        case 0x12c98cu: goto label_12c98c;
        case 0x12c9b8u: goto label_12c9b8;
        case 0x12c9e4u: goto label_12c9e4;
        case 0x12ca10u: goto label_12ca10;
        case 0x12ca38u: goto label_12ca38;
        case 0x12ca64u: goto label_12ca64;
        case 0x12ca90u: goto label_12ca90;
        case 0x12cabcu: goto label_12cabc;
        case 0x12cae8u: goto label_12cae8;
        case 0x12cb10u: goto label_12cb10;
        case 0x12cb38u: goto label_12cb38;
        case 0x12cb60u: goto label_12cb60;
        case 0x12cb88u: goto label_12cb88;
        case 0x12cbb0u: goto label_12cbb0;
        case 0x12cbd8u: goto label_12cbd8;
        case 0x12cc00u: goto label_12cc00;
        case 0x12cc28u: goto label_12cc28;
        case 0x12cc48u: goto label_12cc48;
        case 0x12cc68u: goto label_12cc68;
        case 0x12cc90u: goto label_12cc90;
        case 0x12ccb8u: goto label_12ccb8;
        case 0x12cce0u: goto label_12cce0;
        case 0x12cd08u: goto label_12cd08;
        case 0x12cd2cu: goto label_12cd2c;
        case 0x12cd58u: goto label_12cd58;
        case 0x12cd80u: goto label_12cd80;
        case 0x12cda8u: goto label_12cda8;
        case 0x12cdd4u: goto label_12cdd4;
        case 0x12cdfcu: goto label_12cdfc;
        case 0x12ce20u: goto label_12ce20;
        case 0x12ce4cu: goto label_12ce4c;
        case 0x12ce74u: goto label_12ce74;
        case 0x12ce98u: goto label_12ce98;
        case 0x12cedcu: goto label_12cedc;
        case 0x12cf08u: goto label_12cf08;
        case 0x12cf34u: goto label_12cf34;
        case 0x12cf60u: goto label_12cf60;
        case 0x12cf8cu: goto label_12cf8c;
        case 0x12cfb8u: goto label_12cfb8;
        case 0x12cfe4u: goto label_12cfe4;
        case 0x12d010u: goto label_12d010;
        case 0x12d038u: goto label_12d038;
        case 0x12d064u: goto label_12d064;
        case 0x12d090u: goto label_12d090;
        case 0x12d0bcu: goto label_12d0bc;
        case 0x12d0e8u: goto label_12d0e8;
        case 0x12d114u: goto label_12d114;
        case 0x12d140u: goto label_12d140;
        case 0x12d16cu: goto label_12d16c;
        case 0x12d198u: goto label_12d198;
        case 0x12d1c4u: goto label_12d1c4;
        case 0x12d1f0u: goto label_12d1f0;
        case 0x12d21cu: goto label_12d21c;
        case 0x12d248u: goto label_12d248;
        case 0x12d274u: goto label_12d274;
        case 0x12d29cu: goto label_12d29c;
        case 0x12d2bcu: goto label_12d2bc;
        case 0x12d2e4u: goto label_12d2e4;
        case 0x12d30cu: goto label_12d30c;
        case 0x12d330u: goto label_12d330;
        case 0x12d350u: goto label_12d350;
        case 0x12d374u: goto label_12d374;
        case 0x12d3a0u: goto label_12d3a0;
        case 0x12d3ccu: goto label_12d3cc;
        case 0x12d3f4u: goto label_12d3f4;
        case 0x12d420u: goto label_12d420;
        case 0x12d44cu: goto label_12d44c;
        case 0x12d474u: goto label_12d474;
        case 0x12d4a0u: goto label_12d4a0;
        case 0x12d4ccu: goto label_12d4cc;
        case 0x12d4f4u: goto label_12d4f4;
        case 0x12d51cu: goto label_12d51c;
        case 0x12d544u: goto label_12d544;
        case 0x12d56cu: goto label_12d56c;
        case 0x12d5b0u: goto label_12d5b0;
        case 0x12d5dcu: goto label_12d5dc;
        case 0x12d608u: goto label_12d608;
        case 0x12d634u: goto label_12d634;
        case 0x12d660u: goto label_12d660;
        case 0x12d688u: goto label_12d688;
        case 0x12d6b0u: goto label_12d6b0;
        case 0x12d6d8u: goto label_12d6d8;
        case 0x12d704u: goto label_12d704;
        case 0x12d730u: goto label_12d730;
        case 0x12d75cu: goto label_12d75c;
        case 0x12d784u: goto label_12d784;
        case 0x12d7b0u: goto label_12d7b0;
        case 0x12d7dcu: goto label_12d7dc;
        case 0x12d808u: goto label_12d808;
        case 0x12d830u: goto label_12d830;
        case 0x12d85cu: goto label_12d85c;
        case 0x12d884u: goto label_12d884;
        case 0x12d8acu: goto label_12d8ac;
        case 0x12d8d4u: goto label_12d8d4;
        case 0x12d8fcu: goto label_12d8fc;
        case 0x12d920u: goto label_12d920;
        case 0x12d948u: goto label_12d948;
        case 0x12d970u: goto label_12d970;
        case 0x12d998u: goto label_12d998;
        case 0x12d9b8u: goto label_12d9b8;
        case 0x12d9e4u: goto label_12d9e4;
        case 0x12da10u: goto label_12da10;
        case 0x12da38u: goto label_12da38;
        case 0x12da60u: goto label_12da60;
        case 0x12da8cu: goto label_12da8c;
        case 0x12dab8u: goto label_12dab8;
        case 0x12dadcu: goto label_12dadc;
        case 0x12db04u: goto label_12db04;
        case 0x12db28u: goto label_12db28;
        case 0x12db50u: goto label_12db50;
        case 0x12db7cu: goto label_12db7c;
        case 0x12dba8u: goto label_12dba8;
        case 0x12dbd4u: goto label_12dbd4;
        case 0x12dc00u: goto label_12dc00;
        case 0x12dc2cu: goto label_12dc2c;
        case 0x12dc58u: goto label_12dc58;
        case 0x12dc84u: goto label_12dc84;
        case 0x12dcb0u: goto label_12dcb0;
        case 0x12dcdcu: goto label_12dcdc;
        case 0x12dd08u: goto label_12dd08;
        case 0x12dd34u: goto label_12dd34;
        case 0x12dd60u: goto label_12dd60;
        case 0x12dd8cu: goto label_12dd8c;
        case 0x12ddb8u: goto label_12ddb8;
        case 0x12dde4u: goto label_12dde4;
        case 0x12de10u: goto label_12de10;
        case 0x12de3cu: goto label_12de3c;
        case 0x12de68u: goto label_12de68;
        case 0x12de94u: goto label_12de94;
        case 0x12dec0u: goto label_12dec0;
        case 0x12dee8u: goto label_12dee8;
        case 0x12df10u: goto label_12df10;
        case 0x12df34u: goto label_12df34;
        case 0x12df5cu: goto label_12df5c;
        case 0x12df80u: goto label_12df80;
        case 0x12dfa8u: goto label_12dfa8;
        case 0x12dfd0u: goto label_12dfd0;
        case 0x12dff8u: goto label_12dff8;
        case 0x12e020u: goto label_12e020;
        case 0x12e048u: goto label_12e048;
        case 0x12e070u: goto label_12e070;
        case 0x12e098u: goto label_12e098;
        case 0x12e0c0u: goto label_12e0c0;
        case 0x12e0ecu: goto label_12e0ec;
        case 0x12e118u: goto label_12e118;
        case 0x12e144u: goto label_12e144;
        case 0x12e170u: goto label_12e170;
        case 0x12e198u: goto label_12e198;
        case 0x12e1c0u: goto label_12e1c0;
        case 0x12e1e8u: goto label_12e1e8;
        case 0x12e210u: goto label_12e210;
        case 0x12e238u: goto label_12e238;
        case 0x12e260u: goto label_12e260;
        case 0x12e288u: goto label_12e288;
        case 0x12e2b0u: goto label_12e2b0;
        case 0x12e2d8u: goto label_12e2d8;
        case 0x12e300u: goto label_12e300;
        case 0x12e328u: goto label_12e328;
        case 0x12e36cu: goto label_12e36c;
        case 0x12e398u: goto label_12e398;
        case 0x12e3c4u: goto label_12e3c4;
        case 0x12e3ecu: goto label_12e3ec;
        case 0x12e418u: goto label_12e418;
        case 0x12e444u: goto label_12e444;
        case 0x12e470u: goto label_12e470;
        case 0x12e49cu: goto label_12e49c;
        case 0x12e4c8u: goto label_12e4c8;
        case 0x12e4f4u: goto label_12e4f4;
        case 0x12e520u: goto label_12e520;
        case 0x12e54cu: goto label_12e54c;
        case 0x12e578u: goto label_12e578;
        case 0x12e5a0u: goto label_12e5a0;
        case 0x12e5c0u: goto label_12e5c0;
        case 0x12e5e0u: goto label_12e5e0;
        case 0x12e608u: goto label_12e608;
        case 0x12e630u: goto label_12e630;
        case 0x12e658u: goto label_12e658;
        case 0x12e680u: goto label_12e680;
        case 0x12e6a8u: goto label_12e6a8;
        case 0x12e6d0u: goto label_12e6d0;
        case 0x12e6f8u: goto label_12e6f8;
        case 0x12e718u: goto label_12e718;
        case 0x12e744u: goto label_12e744;
        case 0x12e770u: goto label_12e770;
        case 0x12e798u: goto label_12e798;
        case 0x12e7c4u: goto label_12e7c4;
        case 0x12e7f0u: goto label_12e7f0;
        case 0x12e81cu: goto label_12e81c;
        case 0x12e848u: goto label_12e848;
        case 0x12e874u: goto label_12e874;
        case 0x12e8a0u: goto label_12e8a0;
        case 0x12e8c8u: goto label_12e8c8;
        case 0x12e8f4u: goto label_12e8f4;
        case 0x12e920u: goto label_12e920;
        case 0x12e94cu: goto label_12e94c;
        case 0x12e978u: goto label_12e978;
        case 0x12e9a4u: goto label_12e9a4;
        case 0x12e9d0u: goto label_12e9d0;
        default: break;
    }

    ctx->pc = 0x12b970u;

    // 0x12b970: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x12b970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x12b974: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x12b974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x12b978: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x12b978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x12b97c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x12b97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x12b980: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x12b980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x12b984: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12b984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12b988: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12b988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12b98c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12b98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12b990: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12b990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12b994: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12b994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12b998: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x12b998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x12b99c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12b99cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b9a0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12b9a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b9a4: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x12b9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x12b9a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12b9a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b9ac: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B9ACu;
    {
        const bool branch_taken_0x12b9ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b9ac) {
            ctx->pc = 0x12B9C4u;
            goto label_12b9c4;
        }
    }
    ctx->pc = 0x12B9B4u;
    // 0x12b9b4: 0x8f84bb70  lw          $a0, -0x4490($gp)
    ctx->pc = 0x12b9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x12b9b8: 0x90850001  lbu         $a1, 0x1($a0)
    ctx->pc = 0x12b9b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x12b9bc: 0x14a00198  bnez        $a1, . + 4 + (0x198 << 2)
    ctx->pc = 0x12B9BCu;
    {
        const bool branch_taken_0x12b9bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b9bc) {
            ctx->pc = 0x12C020u;
            goto label_12c020;
        }
    }
    ctx->pc = 0x12B9C4u;
label_12b9c4:
    // 0x12b9c4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x12b9c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12b9c8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12b9cc: 0x24520030  addiu       $s2, $v0, 0x30
    ctx->pc = 0x12b9ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12b9d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12b9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b9d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x12b9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12b9d8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12B9D8u;
    SET_GPR_U32(ctx, 31, 0x12B9E0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12B9D8u, 0x12B9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B9E0u;
label_12b9e0:
    // 0x12b9e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12b9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12b9e4: 0xacb10114  sw          $s1, 0x114($a1)
    ctx->pc = 0x12b9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 276), GPR_U32(ctx, 17));
    // 0x12b9e8: 0x24110093  addiu       $s1, $zero, 0x93
    ctx->pc = 0x12b9e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    // 0x12b9ec: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12b9f0: 0x24520030  addiu       $s2, $v0, 0x30
    ctx->pc = 0x12b9f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12b9f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12b9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b9f8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x12b9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12b9fc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12B9FCu;
    SET_GPR_U32(ctx, 31, 0x12BA04u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12B9FCu, 0x12BA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BA04u;
label_12ba04:
    // 0x12ba04: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12ba04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ba08: 0xacb10124  sw          $s1, 0x124($a1)
    ctx->pc = 0x12ba08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 292), GPR_U32(ctx, 17));
    // 0x12ba0c: 0x24110013  addiu       $s1, $zero, 0x13
    ctx->pc = 0x12ba0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x12ba10: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12ba14: 0x24520030  addiu       $s2, $v0, 0x30
    ctx->pc = 0x12ba14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12ba18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12ba18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba1c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x12ba1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12ba20: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BA20u;
    SET_GPR_U32(ctx, 31, 0x12BA28u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BA20u, 0x12BA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BA28u;
label_12ba28:
    // 0x12ba28: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12ba28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ba2c: 0xacb1011c  sw          $s1, 0x11C($a1)
    ctx->pc = 0x12ba2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 284), GPR_U32(ctx, 17));
    // 0x12ba30: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12ba34: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x12ba34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12ba38: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x12ba38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12ba3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12ba3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba40: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BA40u;
    SET_GPR_U32(ctx, 31, 0x12BA48u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BA40u, 0x12BA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BA48u;
label_12ba48:
    // 0x12ba48: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12ba48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ba4c: 0xaca00120  sw          $zero, 0x120($a1)
    ctx->pc = 0x12ba4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 288), GPR_U32(ctx, 0));
    // 0x12ba50: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12ba50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ba54: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12ba58: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x12ba58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12ba5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12ba5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba60: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x12ba60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12ba64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12ba64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba68: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BA68u;
    SET_GPR_U32(ctx, 31, 0x12BA70u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BA68u, 0x12BA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BA70u;
label_12ba70:
    // 0x12ba70: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x12ba70u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ba74: 0xae910118  sw          $s1, 0x118($s4)
    ctx->pc = 0x12ba74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 17));
    // 0x12ba78: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x12ba78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12ba7c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12ba80: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x12ba80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12ba84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12ba84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba88: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x12ba88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12ba8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12ba8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba90: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BA90u;
    SET_GPR_U32(ctx, 31, 0x12BA98u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BA90u, 0x12BA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BA98u;
label_12ba98:
    // 0x12ba98: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x12ba98u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ba9c: 0xae910114  sw          $s1, 0x114($s4)
    ctx->pc = 0x12ba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 17));
    // 0x12baa0: 0x24110094  addiu       $s1, $zero, 0x94
    ctx->pc = 0x12baa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x12baa4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12baa8: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x12baa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12baac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12baacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bab0: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x12bab0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12bab4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12bab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bab8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BAB8u;
    SET_GPR_U32(ctx, 31, 0x12BAC0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BAB8u, 0x12BAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BAC0u;
label_12bac0:
    // 0x12bac0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12bac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12bac4: 0xacb10124  sw          $s1, 0x124($a1)
    ctx->pc = 0x12bac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 292), GPR_U32(ctx, 17));
    // 0x12bac8: 0x24110013  addiu       $s1, $zero, 0x13
    ctx->pc = 0x12bac8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x12bacc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12baccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bad0: 0x24550030  addiu       $s5, $v0, 0x30
    ctx->pc = 0x12bad0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12bad4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12bad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bad8: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x12bad8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12badc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12badcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bae0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BAE0u;
    SET_GPR_U32(ctx, 31, 0x12BAE8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BAE0u, 0x12BAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BAE8u;
label_12bae8:
    // 0x12bae8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12bae8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12baec: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x12baecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12baf0: 0xacb1011c  sw          $s1, 0x11C($a1)
    ctx->pc = 0x12baf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 284), GPR_U32(ctx, 17));
    // 0x12baf4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12baf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12baf8: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12baf8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bafc: 0x26950030  addiu       $s5, $s4, 0x30
    ctx->pc = 0x12bafcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12bb00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12bb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb04: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x12bb04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12bb08: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x12bb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb0c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BB0Cu;
    SET_GPR_U32(ctx, 31, 0x12BB14u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BB0Cu, 0x12BB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BB14u;
label_12bb14:
    // 0x12bb14: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x12bb14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb18: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x12bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x12bb1c: 0xac510120  sw          $s1, 0x120($v0)
    ctx->pc = 0x12bb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 17));
    // 0x12bb20: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12bb20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bb24: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12bb24u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bb28: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x12bb28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12bb2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12bb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb30: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x12bb30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12bb34: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12bb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb38: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BB38u;
    SET_GPR_U32(ctx, 31, 0x12BB40u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BB38u, 0x12BB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BB40u;
label_12bb40:
    // 0x12bb40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12bb44: 0xac510118  sw          $s1, 0x118($v0)
    ctx->pc = 0x12bb44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 17));
    // 0x12bb48: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x12bb48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12bb4c: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12bb4cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bb50: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x12bb50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12bb54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12bb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb58: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x12bb58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12bb5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12bb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb60: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BB60u;
    SET_GPR_U32(ctx, 31, 0x12BB68u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BB60u, 0x12BB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BB68u;
label_12bb68:
    // 0x12bb68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12bb68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb6c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x12bb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12bb70: 0xacb50114  sw          $s5, 0x114($a1)
    ctx->pc = 0x12bb70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 276), GPR_U32(ctx, 21));
    // 0x12bb74: 0x24140095  addiu       $s4, $zero, 0x95
    ctx->pc = 0x12bb74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    // 0x12bb78: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12bb78u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bb7c: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x12bb7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12bb80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12bb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb84: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x12bb84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12bb88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12bb88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb8c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BB8Cu;
    SET_GPR_U32(ctx, 31, 0x12BB94u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BB8Cu, 0x12BB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BB94u;
label_12bb94:
    // 0x12bb94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12bb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12bb98: 0xac540124  sw          $s4, 0x124($v0)
    ctx->pc = 0x12bb98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 20));
    // 0x12bb9c: 0x24140012  addiu       $s4, $zero, 0x12
    ctx->pc = 0x12bb9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x12bba0: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12bba0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bba4: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x12bba4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12bba8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12bba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bbac: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x12bbacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12bbb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12bbb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bbb4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BBB4u;
    SET_GPR_U32(ctx, 31, 0x12BBBCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BBB4u, 0x12BBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BBBCu;
label_12bbbc:
    // 0x12bbbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12bbc0: 0xac54011c  sw          $s4, 0x11C($v0)
    ctx->pc = 0x12bbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 20));
    // 0x12bbc4: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12bbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bbc8: 0x24b50030  addiu       $s5, $a1, 0x30
    ctx->pc = 0x12bbc8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12bbcc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12bbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bbd0: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x12bbd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12bbd4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12bbd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bbd8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BBD8u;
    SET_GPR_U32(ctx, 31, 0x12BBE0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BBD8u, 0x12BBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BBE0u;
label_12bbe0:
    // 0x12bbe0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12bbe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bbe4: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x12bbe4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12bbe8: 0xae200120  sw          $zero, 0x120($s1)
    ctx->pc = 0x12bbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
    // 0x12bbec: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12bbecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bbf0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12bbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bbf4: 0x24b50030  addiu       $s5, $a1, 0x30
    ctx->pc = 0x12bbf4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12bbf8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12bbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bbfc: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x12bbfcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12bc00: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x12bc00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc04: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BC04u;
    SET_GPR_U32(ctx, 31, 0x12BC0Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BC04u, 0x12BC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BC0Cu;
label_12bc0c:
    // 0x12bc0c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x12bc0cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc10: 0x8ef10000  lw          $s1, 0x0($s7)
    ctx->pc = 0x12bc10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x12bc14: 0xae340118  sw          $s4, 0x118($s1)
    ctx->pc = 0x12bc14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 20));
    // 0x12bc18: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x12bc18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12bc1c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12bc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bc20: 0x24b20030  addiu       $s2, $a1, 0x30
    ctx->pc = 0x12bc20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12bc24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12bc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc28: 0x24140006  addiu       $s4, $zero, 0x6
    ctx->pc = 0x12bc28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12bc2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12bc2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc30: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BC30u;
    SET_GPR_U32(ctx, 31, 0x12BC38u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BC30u, 0x12BC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BC38u;
label_12bc38:
    // 0x12bc38: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x12bc38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc3c: 0x8ed50000  lw          $s5, 0x0($s6)
    ctx->pc = 0x12bc3cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12bc40: 0xaeb30114  sw          $s3, 0x114($s5)
    ctx->pc = 0x12bc40u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 276), GPR_U32(ctx, 19));
    // 0x12bc44: 0x24130096  addiu       $s3, $zero, 0x96
    ctx->pc = 0x12bc44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x12bc48: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12bc48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bc4c: 0x24b20030  addiu       $s2, $a1, 0x30
    ctx->pc = 0x12bc4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12bc50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12bc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc54: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x12bc54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12bc58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12bc58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc5c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BC5Cu;
    SET_GPR_U32(ctx, 31, 0x12BC64u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BC5Cu, 0x12BC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BC64u;
label_12bc64:
    // 0x12bc64: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x12bc64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc68: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x12bc68u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12bc6c: 0xae930124  sw          $s3, 0x124($s4)
    ctx->pc = 0x12bc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 19));
    // 0x12bc70: 0x24130012  addiu       $s3, $zero, 0x12
    ctx->pc = 0x12bc70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x12bc74: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12bc74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bc78: 0x24b20030  addiu       $s2, $a1, 0x30
    ctx->pc = 0x12bc78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12bc7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12bc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc80: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x12bc80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12bc84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12bc84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc88: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BC88u;
    SET_GPR_U32(ctx, 31, 0x12BC90u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BC88u, 0x12BC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BC90u;
label_12bc90:
    // 0x12bc90: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12bc90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc94: 0x8eb40000  lw          $s4, 0x0($s5)
    ctx->pc = 0x12bc94u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12bc98: 0xae93011c  sw          $s3, 0x11C($s4)
    ctx->pc = 0x12bc98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 19));
    // 0x12bc9c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12bc9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bca0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12bca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bca4: 0x24b20030  addiu       $s2, $a1, 0x30
    ctx->pc = 0x12bca4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12bca8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12bca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bcac: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x12bcacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12bcb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12bcb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bcb4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BCB4u;
    SET_GPR_U32(ctx, 31, 0x12BCBCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BCB4u, 0x12BCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BCBCu;
label_12bcbc:
    // 0x12bcbc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12bcbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bcc0: 0x8eb40000  lw          $s4, 0x0($s5)
    ctx->pc = 0x12bcc0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12bcc4: 0xae930120  sw          $s3, 0x120($s4)
    ctx->pc = 0x12bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 19));
    // 0x12bcc8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12bcc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bccc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12bcccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bcd0: 0x24b20030  addiu       $s2, $a1, 0x30
    ctx->pc = 0x12bcd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12bcd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12bcd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bcd8: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x12bcd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12bcdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12bcdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bce0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BCE0u;
    SET_GPR_U32(ctx, 31, 0x12BCE8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BCE0u, 0x12BCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BCE8u;
label_12bce8:
    // 0x12bce8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12bce8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bcec: 0x8eb40000  lw          $s4, 0x0($s5)
    ctx->pc = 0x12bcecu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12bcf0: 0xae930118  sw          $s3, 0x118($s4)
    ctx->pc = 0x12bcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 19));
    // 0x12bcf4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12bcf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bcf8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12bcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bcfc: 0x24b20030  addiu       $s2, $a1, 0x30
    ctx->pc = 0x12bcfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12bd00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12bd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bd04: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x12bd04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12bd08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12bd08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bd0c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BD0Cu;
    SET_GPR_U32(ctx, 31, 0x12BD14u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BD0Cu, 0x12BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD14u;
label_12bd14:
    // 0x12bd14: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12bd14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bd18: 0x8eb40000  lw          $s4, 0x0($s5)
    ctx->pc = 0x12bd18u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12bd1c: 0xae930114  sw          $s3, 0x114($s4)
    ctx->pc = 0x12bd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 19));
    // 0x12bd20: 0x2413007a  addiu       $s3, $zero, 0x7A
    ctx->pc = 0x12bd20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x12bd24: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12bd24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bd28: 0x24b20030  addiu       $s2, $a1, 0x30
    ctx->pc = 0x12bd28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12bd2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12bd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bd30: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x12bd30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12bd34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12bd34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bd38: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BD38u;
    SET_GPR_U32(ctx, 31, 0x12BD40u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BD38u, 0x12BD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD40u;
label_12bd40:
    // 0x12bd40: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x12bd40u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12bd44: 0xae930124  sw          $s3, 0x124($s4)
    ctx->pc = 0x12bd44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 19));
    // 0x12bd48: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x12bd48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12bd4c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bd50: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x12bd50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12bd54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12bd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bd58: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x12bd58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12bd5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12bd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bd60: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BD60u;
    SET_GPR_U32(ctx, 31, 0x12BD68u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BD60u, 0x12BD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD68u;
label_12bd68:
    // 0x12bd68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12bd68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bd6c: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x12bd6cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12bd70: 0xae95011c  sw          $s5, 0x11C($s4)
    ctx->pc = 0x12bd70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 21));
    // 0x12bd74: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x12bd74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12bd78: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12bd78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bd7c: 0x24b70030  addiu       $s7, $a1, 0x30
    ctx->pc = 0x12bd7cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12bd80: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12bd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bd84: 0x24150008  addiu       $s5, $zero, 0x8
    ctx->pc = 0x12bd84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12bd88: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12bd88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bd8c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BD8Cu;
    SET_GPR_U32(ctx, 31, 0x12BD94u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BD8Cu, 0x12BD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD94u;
label_12bd94:
    // 0x12bd94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12bd94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bd98: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x12bd98u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12bd9c: 0xae760120  sw          $s6, 0x120($s3)
    ctx->pc = 0x12bd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 288), GPR_U32(ctx, 22));
    // 0x12bda0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12bda0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bda4: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12bda4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bda8: 0x24b60030  addiu       $s6, $a1, 0x30
    ctx->pc = 0x12bda8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12bdac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12bdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bdb0: 0x24170008  addiu       $s7, $zero, 0x8
    ctx->pc = 0x12bdb0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12bdb4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12bdb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bdb8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BDB8u;
    SET_GPR_U32(ctx, 31, 0x12BDC0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BDB8u, 0x12BDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BDC0u;
label_12bdc0:
    // 0x12bdc0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12bdc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bdc4: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x12bdc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12bdc8: 0xae320118  sw          $s2, 0x118($s1)
    ctx->pc = 0x12bdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 18));
    // 0x12bdcc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12bdccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bdd0: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12bdd0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bdd4: 0x26550030  addiu       $s5, $s2, 0x30
    ctx->pc = 0x12bdd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12bdd8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12bdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bddc: 0x24160009  addiu       $s6, $zero, 0x9
    ctx->pc = 0x12bddcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x12bde0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x12bde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bde4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BDE4u;
    SET_GPR_U32(ctx, 31, 0x12BDECu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BDE4u, 0x12BDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BDECu;
label_12bdec:
    // 0x12bdec: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x12bdecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bdf0: 0x8ef40000  lw          $s4, 0x0($s7)
    ctx->pc = 0x12bdf0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x12bdf4: 0xae930114  sw          $s3, 0x114($s4)
    ctx->pc = 0x12bdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 19));
    // 0x12bdf8: 0x24110073  addiu       $s1, $zero, 0x73
    ctx->pc = 0x12bdf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x12bdfc: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12bdfcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12be00: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x12be00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12be04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12be04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be08: 0x24150009  addiu       $s5, $zero, 0x9
    ctx->pc = 0x12be08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x12be0c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12be0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be10: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BE10u;
    SET_GPR_U32(ctx, 31, 0x12BE18u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BE10u, 0x12BE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE18u;
label_12be18:
    // 0x12be18: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x12be18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be1c: 0x8ef60000  lw          $s6, 0x0($s7)
    ctx->pc = 0x12be1cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x12be20: 0xaed10124  sw          $s1, 0x124($s6)
    ctx->pc = 0x12be20u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 292), GPR_U32(ctx, 17));
    // 0x12be24: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x12be24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12be28: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12be28u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12be2c: 0x26930030  addiu       $s3, $s4, 0x30
    ctx->pc = 0x12be2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12be30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12be30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be34: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x12be34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x12be38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12be38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be3c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BE3Cu;
    SET_GPR_U32(ctx, 31, 0x12BE44u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BE3Cu, 0x12BE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE44u;
label_12be44:
    // 0x12be44: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x12be44u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12be48: 0xaeb1011c  sw          $s1, 0x11C($s5)
    ctx->pc = 0x12be48u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 284), GPR_U32(ctx, 17));
    // 0x12be4c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x12be4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12be50: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12be50u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12be54: 0x26930030  addiu       $s3, $s4, 0x30
    ctx->pc = 0x12be54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12be58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12be58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be5c: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x12be5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x12be60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12be60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be64: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BE64u;
    SET_GPR_U32(ctx, 31, 0x12BE6Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BE64u, 0x12BE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE6Cu;
label_12be6c:
    // 0x12be6c: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x12be6cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12be70: 0xaeb10120  sw          $s1, 0x120($s5)
    ctx->pc = 0x12be70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 288), GPR_U32(ctx, 17));
    // 0x12be74: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12be74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12be78: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12be78u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12be7c: 0x26930030  addiu       $s3, $s4, 0x30
    ctx->pc = 0x12be7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12be80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12be80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be84: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x12be84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x12be88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12be88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be8c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BE8Cu;
    SET_GPR_U32(ctx, 31, 0x12BE94u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BE8Cu, 0x12BE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE94u;
label_12be94:
    // 0x12be94: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x12be94u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12be98: 0xaeb10118  sw          $s1, 0x118($s5)
    ctx->pc = 0x12be98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 280), GPR_U32(ctx, 17));
    // 0x12be9c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12be9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bea0: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12bea0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bea4: 0x26930030  addiu       $s3, $s4, 0x30
    ctx->pc = 0x12bea4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12bea8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12bea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12beac: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x12beacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12beb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12beb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12beb4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BEB4u;
    SET_GPR_U32(ctx, 31, 0x12BEBCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BEB4u, 0x12BEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BEBCu;
label_12bebc:
    // 0x12bebc: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x12bebcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12bec0: 0xaeb10114  sw          $s1, 0x114($s5)
    ctx->pc = 0x12bec0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 276), GPR_U32(ctx, 17));
    // 0x12bec4: 0x24110071  addiu       $s1, $zero, 0x71
    ctx->pc = 0x12bec4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x12bec8: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12bec8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12becc: 0x26930030  addiu       $s3, $s4, 0x30
    ctx->pc = 0x12beccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12bed0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12bed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bed4: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x12bed4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12bed8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12bed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bedc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BEDCu;
    SET_GPR_U32(ctx, 31, 0x12BEE4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BEDCu, 0x12BEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BEE4u;
label_12bee4:
    // 0x12bee4: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x12bee4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12bee8: 0xaeb10124  sw          $s1, 0x124($s5)
    ctx->pc = 0x12bee8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 292), GPR_U32(ctx, 17));
    // 0x12beec: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x12beecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12bef0: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12bef0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bef4: 0x26930030  addiu       $s3, $s4, 0x30
    ctx->pc = 0x12bef4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12bef8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12bef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12befc: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x12befcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12bf00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12bf00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf04: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BF04u;
    SET_GPR_U32(ctx, 31, 0x12BF0Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BF04u, 0x12BF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BF0Cu;
label_12bf0c:
    // 0x12bf0c: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x12bf0cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12bf10: 0xaeb1011c  sw          $s1, 0x11C($s5)
    ctx->pc = 0x12bf10u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 284), GPR_U32(ctx, 17));
    // 0x12bf14: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x12bf14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12bf18: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12bf18u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bf1c: 0x26930030  addiu       $s3, $s4, 0x30
    ctx->pc = 0x12bf1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12bf20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12bf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf24: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x12bf24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12bf28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12bf28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf2c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BF2Cu;
    SET_GPR_U32(ctx, 31, 0x12BF34u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BF2Cu, 0x12BF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BF34u;
label_12bf34:
    // 0x12bf34: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12bf34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12bf38: 0xacb10120  sw          $s1, 0x120($a1)
    ctx->pc = 0x12bf38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 288), GPR_U32(ctx, 17));
    // 0x12bf3c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12bf3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bf40: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12bf40u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bf44: 0x26930030  addiu       $s3, $s4, 0x30
    ctx->pc = 0x12bf44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12bf48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12bf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf4c: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x12bf4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12bf50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12bf50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf54: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BF54u;
    SET_GPR_U32(ctx, 31, 0x12BF5Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BF54u, 0x12BF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BF5Cu;
label_12bf5c:
    // 0x12bf5c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12bf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12bf60: 0xacb10118  sw          $s1, 0x118($a1)
    ctx->pc = 0x12bf60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 280), GPR_U32(ctx, 17));
    // 0x12bf64: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12bf64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bf68: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12bf68u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bf6c: 0x26930030  addiu       $s3, $s4, 0x30
    ctx->pc = 0x12bf6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12bf70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12bf70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf74: 0x2412000b  addiu       $s2, $zero, 0xB
    ctx->pc = 0x12bf74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x12bf78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12bf78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf7c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BF7Cu;
    SET_GPR_U32(ctx, 31, 0x12BF84u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BF7Cu, 0x12BF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BF84u;
label_12bf84:
    // 0x12bf84: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12bf84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12bf88: 0xacb10114  sw          $s1, 0x114($a1)
    ctx->pc = 0x12bf88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 276), GPR_U32(ctx, 17));
    // 0x12bf8c: 0x24110064  addiu       $s1, $zero, 0x64
    ctx->pc = 0x12bf8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x12bf90: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bf94: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x12bf94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12bf98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12bf98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf9c: 0x2412000b  addiu       $s2, $zero, 0xB
    ctx->pc = 0x12bf9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x12bfa0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12bfa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bfa4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BFA4u;
    SET_GPR_U32(ctx, 31, 0x12BFACu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BFA4u, 0x12BFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BFACu;
label_12bfac:
    // 0x12bfac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12bfacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12bfb0: 0xacb10124  sw          $s1, 0x124($a1)
    ctx->pc = 0x12bfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 292), GPR_U32(ctx, 17));
    // 0x12bfb4: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x12bfb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12bfb8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bfbc: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x12bfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12bfc0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x12bfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x12bfc4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BFC4u;
    SET_GPR_U32(ctx, 31, 0x12BFCCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BFC4u, 0x12BFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BFCCu;
label_12bfcc:
    // 0x12bfcc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12bfd0: 0xac51011c  sw          $s1, 0x11C($v0)
    ctx->pc = 0x12bfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 17));
    // 0x12bfd4: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x12bfd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12bfd8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12bfdc: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x12bfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12bfe0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x12bfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x12bfe4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12BFE4u;
    SET_GPR_U32(ctx, 31, 0x12BFECu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12BFE4u, 0x12BFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BFECu;
label_12bfec:
    // 0x12bfec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12bfecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bff0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12bff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12bff4: 0xac520120  sw          $s2, 0x120($v0)
    ctx->pc = 0x12bff4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 18));
    // 0x12bff8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12bff8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bffc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12bffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c000: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12c000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12c004: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c008: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x12c008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x12c00c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C00Cu;
    SET_GPR_U32(ctx, 31, 0x12C014u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C00Cu, 0x12C014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C014u;
label_12c014:
    // 0x12c014: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12c014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c018: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12c018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12c01c: 0xac520118  sw          $s2, 0x118($v0)
    ctx->pc = 0x12c01cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 18));
label_12c020:
    // 0x12c020: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12c020u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c024: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12c024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c028: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12c028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12c02c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c030: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x12c030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12c034: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C034u;
    SET_GPR_U32(ctx, 31, 0x12C03Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C034u, 0x12C03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C03Cu;
label_12c03c:
    // 0x12c03c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12c03cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c040: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12c040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12c044: 0xac520114  sw          $s2, 0x114($v0)
    ctx->pc = 0x12c044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 18));
    // 0x12c048: 0x24120069  addiu       $s2, $zero, 0x69
    ctx->pc = 0x12c048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x12c04c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12c04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c050: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12c050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12c054: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c058: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x12c058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12c05c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C05Cu;
    SET_GPR_U32(ctx, 31, 0x12C064u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C05Cu, 0x12C064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C064u;
label_12c064:
    // 0x12c064: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x12c064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c068: 0xac920124  sw          $s2, 0x124($a0)
    ctx->pc = 0x12c068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 18));
    // 0x12c06c: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x12c06cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12c070: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12c070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c074: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12c074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12c078: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12c078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c07c: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x12c07cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12c080: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c084: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C084u;
    SET_GPR_U32(ctx, 31, 0x12C08Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C084u, 0x12C08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C08Cu;
label_12c08c:
    // 0x12c08c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x12c08cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c090: 0xae72011c  sw          $s2, 0x11C($s3)
    ctx->pc = 0x12c090u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 18));
    // 0x12c094: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x12c094u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12c098: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12c098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c09c: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x12c09cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12c0a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12c0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c0a4: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x12c0a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12c0a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c0ac: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C0ACu;
    SET_GPR_U32(ctx, 31, 0x12C0B4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C0ACu, 0x12C0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C0B4u;
label_12c0b4:
    // 0x12c0b4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x12c0b4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c0b8: 0xae720120  sw          $s2, 0x120($s3)
    ctx->pc = 0x12c0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 288), GPR_U32(ctx, 18));
    // 0x12c0bc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12c0bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c0c0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c0c4: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x12c0c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12c0c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12c0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c0cc: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x12c0ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12c0d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c0d4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C0D4u;
    SET_GPR_U32(ctx, 31, 0x12C0DCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C0D4u, 0x12C0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C0DCu;
label_12c0dc:
    // 0x12c0dc: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x12c0dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c0e0: 0xae720118  sw          $s2, 0x118($s3)
    ctx->pc = 0x12c0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 18));
    // 0x12c0e4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12c0e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c0e8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c0ec: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12c0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12c0f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12c0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c0f4: 0x24110012  addiu       $s1, $zero, 0x12
    ctx->pc = 0x12c0f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x12c0f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c0fc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C0FCu;
    SET_GPR_U32(ctx, 31, 0x12C104u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C0FCu, 0x12C104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C104u;
label_12c104:
    // 0x12c104: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x12c104u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c108: 0xaeb20114  sw          $s2, 0x114($s5)
    ctx->pc = 0x12c108u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 276), GPR_U32(ctx, 18));
    // 0x12c10c: 0x2413006a  addiu       $s3, $zero, 0x6A
    ctx->pc = 0x12c10cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x12c110: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12c110u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c114: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x12c114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12c118: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12c118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c11c: 0x24110012  addiu       $s1, $zero, 0x12
    ctx->pc = 0x12c11cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x12c120: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c124: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C124u;
    SET_GPR_U32(ctx, 31, 0x12C12Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C124u, 0x12C12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C12Cu;
label_12c12c:
    // 0x12c12c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12c12cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c130: 0x8e950000  lw          $s5, 0x0($s4)
    ctx->pc = 0x12c130u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12c134: 0xaeb30124  sw          $s3, 0x124($s5)
    ctx->pc = 0x12c134u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 292), GPR_U32(ctx, 19));
    // 0x12c138: 0x2416000f  addiu       $s6, $zero, 0xF
    ctx->pc = 0x12c138u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x12c13c: 0x8fb70090  lw          $s7, 0x90($sp)
    ctx->pc = 0x12c13cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c140: 0x26e20030  addiu       $v0, $s7, 0x30
    ctx->pc = 0x12c140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x12c144: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c148: 0x24110012  addiu       $s1, $zero, 0x12
    ctx->pc = 0x12c148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x12c14c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c150: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C150u;
    SET_GPR_U32(ctx, 31, 0x12C158u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C150u, 0x12C158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C158u;
label_12c158:
    // 0x12c158: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12c158u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c15c: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x12c15cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12c160: 0xae56011c  sw          $s6, 0x11C($s2)
    ctx->pc = 0x12c160u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 284), GPR_U32(ctx, 22));
    // 0x12c164: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x12c164u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12c168: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12c168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c16c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x12c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12c170: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c174: 0x24150012  addiu       $s5, $zero, 0x12
    ctx->pc = 0x12c174u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x12c178: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12c178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c17c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C17Cu;
    SET_GPR_U32(ctx, 31, 0x12C184u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C17Cu, 0x12C184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C184u;
label_12c184:
    // 0x12c184: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12c184u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c188: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x12c188u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12c18c: 0xae540120  sw          $s4, 0x120($s2)
    ctx->pc = 0x12c18cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 20));
    // 0x12c190: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12c190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c194: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12c194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c198: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x12c198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12c19c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12c19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c1a0: 0x24140012  addiu       $s4, $zero, 0x12
    ctx->pc = 0x12c1a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x12c1a4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12c1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c1a8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C1A8u;
    SET_GPR_U32(ctx, 31, 0x12C1B0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C1A8u, 0x12C1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C1B0u;
label_12c1b0:
    // 0x12c1b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12c1b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c1b4: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x12c1b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12c1b8: 0xae510118  sw          $s1, 0x118($s2)
    ctx->pc = 0x12c1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 17));
    // 0x12c1bc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12c1bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c1c0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12c1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c1c4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x12c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12c1c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c1cc: 0x24140011  addiu       $s4, $zero, 0x11
    ctx->pc = 0x12c1ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x12c1d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12c1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c1d4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C1D4u;
    SET_GPR_U32(ctx, 31, 0x12C1DCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C1D4u, 0x12C1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C1DCu;
label_12c1dc:
    // 0x12c1dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12c1dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c1e0: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x12c1e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12c1e4: 0xae510114  sw          $s1, 0x114($s2)
    ctx->pc = 0x12c1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 17));
    // 0x12c1e8: 0x2411006b  addiu       $s1, $zero, 0x6B
    ctx->pc = 0x12c1e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x12c1ec: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c1f0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x12c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12c1f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c1f8: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x12c1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x12c1fc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C1FCu;
    SET_GPR_U32(ctx, 31, 0x12C204u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C1FCu, 0x12C204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C204u;
label_12c204:
    // 0x12c204: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12c204u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c208: 0x8eb30000  lw          $s3, 0x0($s5)
    ctx->pc = 0x12c208u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12c20c: 0xae710124  sw          $s1, 0x124($s3)
    ctx->pc = 0x12c20cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 292), GPR_U32(ctx, 17));
    // 0x12c210: 0x2412000e  addiu       $s2, $zero, 0xE
    ctx->pc = 0x12c210u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12c214: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12c214u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c218: 0x26340030  addiu       $s4, $s1, 0x30
    ctx->pc = 0x12c218u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12c21c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12c21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c220: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x12c220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x12c224: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C224u;
    SET_GPR_U32(ctx, 31, 0x12C22Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C224u, 0x12C22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C22Cu;
label_12c22c:
    // 0x12c22c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12c22cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c230: 0x8eb60000  lw          $s6, 0x0($s5)
    ctx->pc = 0x12c230u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12c234: 0xaed2011c  sw          $s2, 0x11C($s6)
    ctx->pc = 0x12c234u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 284), GPR_U32(ctx, 18));
    // 0x12c238: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x12c238u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12c23c: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12c23cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c240: 0x26330030  addiu       $s3, $s1, 0x30
    ctx->pc = 0x12c240u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12c244: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12c244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c248: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x12c248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x12c24c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C24Cu;
    SET_GPR_U32(ctx, 31, 0x12C254u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C24Cu, 0x12C254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C254u;
label_12c254:
    // 0x12c254: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12c254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c258: 0x8e540000  lw          $s4, 0x0($s2)
    ctx->pc = 0x12c258u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12c25c: 0xae970120  sw          $s7, 0x120($s4)
    ctx->pc = 0x12c25cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 23));
    // 0x12c260: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x12c260u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c264: 0x8fb50090  lw          $s5, 0x90($sp)
    ctx->pc = 0x12c264u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c268: 0x26b30030  addiu       $s3, $s5, 0x30
    ctx->pc = 0x12c268u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x12c26c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12c26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c270: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x12c270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x12c274: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C274u;
    SET_GPR_U32(ctx, 31, 0x12C27Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C274u, 0x12C27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C27Cu;
label_12c27c:
    // 0x12c27c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12c27cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c280: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x12c280u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12c284: 0xae360118  sw          $s6, 0x118($s1)
    ctx->pc = 0x12c284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 22));
    // 0x12c288: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x12c288u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c28c: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12c28cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c290: 0x26930030  addiu       $s3, $s4, 0x30
    ctx->pc = 0x12c290u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12c294: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12c294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c298: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x12c298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x12c29c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C29Cu;
    SET_GPR_U32(ctx, 31, 0x12C2A4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C29Cu, 0x12C2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C2A4u;
label_12c2a4:
    // 0x12c2a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12c2a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c2a8: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x12c2a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12c2ac: 0xae360114  sw          $s6, 0x114($s1)
    ctx->pc = 0x12c2acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 22));
    // 0x12c2b0: 0x2415006c  addiu       $s5, $zero, 0x6C
    ctx->pc = 0x12c2b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x12c2b4: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12c2b4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c2b8: 0x26930030  addiu       $s3, $s4, 0x30
    ctx->pc = 0x12c2b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12c2bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12c2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c2c0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x12c2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x12c2c4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C2C4u;
    SET_GPR_U32(ctx, 31, 0x12C2CCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C2C4u, 0x12C2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C2CCu;
label_12c2cc:
    // 0x12c2cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12c2ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c2d0: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x12c2d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12c2d4: 0xae350124  sw          $s5, 0x124($s1)
    ctx->pc = 0x12c2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 21));
    // 0x12c2d8: 0x2415000d  addiu       $s5, $zero, 0xD
    ctx->pc = 0x12c2d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x12c2dc: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12c2dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c2e0: 0x26930030  addiu       $s3, $s4, 0x30
    ctx->pc = 0x12c2e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12c2e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12c2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c2e8: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x12c2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x12c2ec: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C2ECu;
    SET_GPR_U32(ctx, 31, 0x12C2F4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C2ECu, 0x12C2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C2F4u;
label_12c2f4:
    // 0x12c2f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12c2f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c2f8: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x12c2f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12c2fc: 0xae35011c  sw          $s5, 0x11C($s1)
    ctx->pc = 0x12c2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 21));
    // 0x12c300: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x12c300u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12c304: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12c304u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c308: 0x26930030  addiu       $s3, $s4, 0x30
    ctx->pc = 0x12c308u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12c30c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12c30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c310: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x12c310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x12c314: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C314u;
    SET_GPR_U32(ctx, 31, 0x12C31Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C314u, 0x12C31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C31Cu;
label_12c31c:
    // 0x12c31c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12c31cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c320: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x12c320u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12c324: 0xae350120  sw          $s5, 0x120($s1)
    ctx->pc = 0x12c324u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 21));
    // 0x12c328: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x12c328u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c32c: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12c32cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c330: 0x26930030  addiu       $s3, $s4, 0x30
    ctx->pc = 0x12c330u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12c334: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12c334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c338: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x12c338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x12c33c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C33Cu;
    SET_GPR_U32(ctx, 31, 0x12C344u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C33Cu, 0x12C344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C344u;
label_12c344:
    // 0x12c344: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12c344u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c348: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x12c348u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12c34c: 0xae350118  sw          $s5, 0x118($s1)
    ctx->pc = 0x12c34cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 21));
    // 0x12c350: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12c350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c354: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x12c354u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12c358: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12c358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c35c: 0x24150010  addiu       $s5, $zero, 0x10
    ctx->pc = 0x12c35cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12c360: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12c360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c364: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C364u;
    SET_GPR_U32(ctx, 31, 0x12C36Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C364u, 0x12C36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C36Cu;
label_12c36c:
    // 0x12c36c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x12c36cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c370: 0xae600118  sw          $zero, 0x118($s3)
    ctx->pc = 0x12c370u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 0));
    // 0x12c374: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12c374u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c378: 0x26510030  addiu       $s1, $s2, 0x30
    ctx->pc = 0x12c378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12c37c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c380: 0x24140012  addiu       $s4, $zero, 0x12
    ctx->pc = 0x12c380u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x12c384: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12c384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c388: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C388u;
    SET_GPR_U32(ctx, 31, 0x12C390u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C388u, 0x12C390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C390u;
label_12c390:
    // 0x12c390: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x12c390u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c394: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x12c394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12c398: 0xaca00118  sw          $zero, 0x118($a1)
    ctx->pc = 0x12c398u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 280), GPR_U32(ctx, 0));
    // 0x12c39c: 0x8fb70090  lw          $s7, 0x90($sp)
    ctx->pc = 0x12c39cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c3a0: 0x26f50030  addiu       $s5, $s7, 0x30
    ctx->pc = 0x12c3a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x12c3a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12c3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c3a8: 0x24110011  addiu       $s1, $zero, 0x11
    ctx->pc = 0x12c3a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x12c3ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c3b0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C3B0u;
    SET_GPR_U32(ctx, 31, 0x12C3B8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C3B0u, 0x12C3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C3B8u;
label_12c3b8:
    // 0x12c3b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12c3b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c3bc: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x12c3bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12c3c0: 0xae400118  sw          $zero, 0x118($s2)
    ctx->pc = 0x12c3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 0));
    // 0x12c3c4: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12c3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c3c8: 0x24b60030  addiu       $s6, $a1, 0x30
    ctx->pc = 0x12c3c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12c3cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12c3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c3d0: 0x24170013  addiu       $s7, $zero, 0x13
    ctx->pc = 0x12c3d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x12c3d4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12c3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c3d8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C3D8u;
    SET_GPR_U32(ctx, 31, 0x12C3E0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C3D8u, 0x12C3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C3E0u;
label_12c3e0:
    // 0x12c3e0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12c3e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c3e4: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x12c3e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12c3e8: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x12c3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
    // 0x12c3ec: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C3ECu;
    {
        const bool branch_taken_0x12c3ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c3ec) {
            ctx->pc = 0x12C404u;
            goto label_12c404;
        }
    }
    ctx->pc = 0x12C3F4u;
    // 0x12c3f4: 0x8f93bb70  lw          $s3, -0x4490($gp)
    ctx->pc = 0x12c3f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x12c3f8: 0x92720001  lbu         $s2, 0x1($s3)
    ctx->pc = 0x12c3f8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x12c3fc: 0x164000f4  bnez        $s2, . + 4 + (0xF4 << 2)
    ctx->pc = 0x12C3FCu;
    {
        const bool branch_taken_0x12c3fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c3fc) {
            ctx->pc = 0x12C7D0u;
            goto label_12c7d0;
        }
    }
    ctx->pc = 0x12C404u;
label_12c404:
    // 0x12c404: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x12c404u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c408: 0x8fb60090  lw          $s6, 0x90($sp)
    ctx->pc = 0x12c408u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c40c: 0x26d70030  addiu       $s7, $s6, 0x30
    ctx->pc = 0x12c40cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x12c410: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12c410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c414: 0x24140016  addiu       $s4, $zero, 0x16
    ctx->pc = 0x12c414u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x12c418: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12c418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c41c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C41Cu;
    SET_GPR_U32(ctx, 31, 0x12C424u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C41Cu, 0x12C424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C424u;
label_12c424:
    // 0x12c424: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12c424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c428: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x12c428u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12c42c: 0xae750114  sw          $s5, 0x114($s3)
    ctx->pc = 0x12c42cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 21));
    // 0x12c430: 0x2412006f  addiu       $s2, $zero, 0x6F
    ctx->pc = 0x12c430u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x12c434: 0x8fb50090  lw          $s5, 0x90($sp)
    ctx->pc = 0x12c434u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c438: 0x26b70030  addiu       $s7, $s5, 0x30
    ctx->pc = 0x12c438u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x12c43c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12c43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c440: 0x24160016  addiu       $s6, $zero, 0x16
    ctx->pc = 0x12c440u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x12c444: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x12c444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c448: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C448u;
    SET_GPR_U32(ctx, 31, 0x12C450u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C448u, 0x12C450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C450u;
label_12c450:
    // 0x12c450: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12c450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c454: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x12c454u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12c458: 0xae920124  sw          $s2, 0x124($s4)
    ctx->pc = 0x12c458u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 18));
    // 0x12c45c: 0x2413000b  addiu       $s3, $zero, 0xB
    ctx->pc = 0x12c45cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x12c460: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12c460u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c464: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x12c464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12c468: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c46c: 0x24150016  addiu       $s5, $zero, 0x16
    ctx->pc = 0x12c46cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x12c470: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12c470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c474: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C474u;
    SET_GPR_U32(ctx, 31, 0x12C47Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C474u, 0x12C47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C47Cu;
label_12c47c:
    // 0x12c47c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12c47cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c480: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x12c480u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12c484: 0xae93011c  sw          $s3, 0x11C($s4)
    ctx->pc = 0x12c484u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 19));
    // 0x12c488: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x12c488u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12c48c: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12c48cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c490: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x12c490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12c494: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c498: 0x24150016  addiu       $s5, $zero, 0x16
    ctx->pc = 0x12c498u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x12c49c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12c49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4a0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C4A0u;
    SET_GPR_U32(ctx, 31, 0x12C4A8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C4A0u, 0x12C4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C4A8u;
label_12c4a8:
    // 0x12c4a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12c4a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4ac: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x12c4acu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12c4b0: 0xae930120  sw          $s3, 0x120($s4)
    ctx->pc = 0x12c4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 19));
    // 0x12c4b4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12c4b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c4b8: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12c4b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c4bc: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x12c4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12c4c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4c4: 0x24150016  addiu       $s5, $zero, 0x16
    ctx->pc = 0x12c4c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x12c4c8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12c4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4cc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C4CCu;
    SET_GPR_U32(ctx, 31, 0x12C4D4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C4CCu, 0x12C4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C4D4u;
label_12c4d4:
    // 0x12c4d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12c4d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4d8: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x12c4d8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12c4dc: 0xae930118  sw          $s3, 0x118($s4)
    ctx->pc = 0x12c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 19));
    // 0x12c4e0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12c4e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c4e4: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12c4e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c4e8: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x12c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12c4ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4f0: 0x24150017  addiu       $s5, $zero, 0x17
    ctx->pc = 0x12c4f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x12c4f4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12c4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4f8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C4F8u;
    SET_GPR_U32(ctx, 31, 0x12C500u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C4F8u, 0x12C500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C500u;
label_12c500:
    // 0x12c500: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12c500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c504: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x12c504u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12c508: 0xae930114  sw          $s3, 0x114($s4)
    ctx->pc = 0x12c508u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 19));
    // 0x12c50c: 0x24130070  addiu       $s3, $zero, 0x70
    ctx->pc = 0x12c50cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x12c510: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12c510u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c514: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x12c514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12c518: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c51c: 0x24150017  addiu       $s5, $zero, 0x17
    ctx->pc = 0x12c51cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x12c520: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12c520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c524: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C524u;
    SET_GPR_U32(ctx, 31, 0x12C52Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C524u, 0x12C52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C52Cu;
label_12c52c:
    // 0x12c52c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12c52cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c530: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x12c530u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12c534: 0xae930124  sw          $s3, 0x124($s4)
    ctx->pc = 0x12c534u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 19));
    // 0x12c538: 0x24130009  addiu       $s3, $zero, 0x9
    ctx->pc = 0x12c538u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x12c53c: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12c53cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c540: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x12c540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12c544: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c548: 0x24150017  addiu       $s5, $zero, 0x17
    ctx->pc = 0x12c548u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x12c54c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12c54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c550: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C550u;
    SET_GPR_U32(ctx, 31, 0x12C558u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C550u, 0x12C558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C558u;
label_12c558:
    // 0x12c558: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12c558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c55c: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x12c55cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12c560: 0xae93011c  sw          $s3, 0x11C($s4)
    ctx->pc = 0x12c560u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 19));
    // 0x12c564: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x12c564u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12c568: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12c568u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c56c: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x12c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12c570: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c574: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x12c574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x12c578: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C578u;
    SET_GPR_U32(ctx, 31, 0x12C580u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C578u, 0x12C580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C580u;
label_12c580:
    // 0x12c580: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12c580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c584: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x12c584u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12c588: 0xae930120  sw          $s3, 0x120($s4)
    ctx->pc = 0x12c588u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 19));
    // 0x12c58c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12c58cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c590: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12c590u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c594: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x12c594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12c598: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c59c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x12c59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x12c5a0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C5A0u;
    SET_GPR_U32(ctx, 31, 0x12C5A8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C5A0u, 0x12C5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C5A8u;
label_12c5a8:
    // 0x12c5a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12c5a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c5ac: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x12c5acu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12c5b0: 0xae930118  sw          $s3, 0x118($s4)
    ctx->pc = 0x12c5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 19));
    // 0x12c5b4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12c5b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c5b8: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12c5b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c5bc: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x12c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12c5c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c5c4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x12c5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12c5c8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C5C8u;
    SET_GPR_U32(ctx, 31, 0x12C5D0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C5C8u, 0x12C5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C5D0u;
label_12c5d0:
    // 0x12c5d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12c5d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c5d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12c5d8: 0xac530114  sw          $s3, 0x114($v0)
    ctx->pc = 0x12c5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 19));
    // 0x12c5dc: 0x24130075  addiu       $s3, $zero, 0x75
    ctx->pc = 0x12c5dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x12c5e0: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12c5e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c5e4: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x12c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12c5e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c5ec: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x12c5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12c5f0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C5F0u;
    SET_GPR_U32(ctx, 31, 0x12C5F8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C5F0u, 0x12C5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C5F8u;
label_12c5f8:
    // 0x12c5f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12c5f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c5fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12c5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12c600: 0xac530124  sw          $s3, 0x124($v0)
    ctx->pc = 0x12c600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 19));
    // 0x12c604: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x12c604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12c608: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12c608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c60c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x12c60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12c610: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x12c610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12c614: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C614u;
    SET_GPR_U32(ctx, 31, 0x12C61Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C614u, 0x12C61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C61Cu;
label_12c61c:
    // 0x12c61c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12c61cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c620: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12c620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12c624: 0xac52011c  sw          $s2, 0x11C($v0)
    ctx->pc = 0x12c624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 18));
    // 0x12c628: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x12c628u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12c62c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12c62cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c630: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12c630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12c634: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c638: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x12c638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12c63c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C63Cu;
    SET_GPR_U32(ctx, 31, 0x12C644u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C63Cu, 0x12C644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C644u;
label_12c644:
    // 0x12c644: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12c644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c648: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12c648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12c64c: 0xac520120  sw          $s2, 0x120($v0)
    ctx->pc = 0x12c64cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 18));
    // 0x12c650: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12c650u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c654: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12c654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c658: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12c658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12c65c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c660: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x12c660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12c664: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C664u;
    SET_GPR_U32(ctx, 31, 0x12C66Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C664u, 0x12C66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C66Cu;
label_12c66c:
    // 0x12c66c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12c66cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c670: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12c670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12c674: 0xac520118  sw          $s2, 0x118($v0)
    ctx->pc = 0x12c674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 18));
    // 0x12c678: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12c678u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c67c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12c67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c680: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12c680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12c684: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c688: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x12c688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x12c68c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C68Cu;
    SET_GPR_U32(ctx, 31, 0x12C694u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C68Cu, 0x12C694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C694u;
label_12c694:
    // 0x12c694: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x12c694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c698: 0xac920114  sw          $s2, 0x114($a0)
    ctx->pc = 0x12c698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 18));
    // 0x12c69c: 0x24120079  addiu       $s2, $zero, 0x79
    ctx->pc = 0x12c69cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x12c6a0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c6a4: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12c6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12c6a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12c6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6ac: 0x24110015  addiu       $s1, $zero, 0x15
    ctx->pc = 0x12c6acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x12c6b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6b4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C6B4u;
    SET_GPR_U32(ctx, 31, 0x12C6BCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C6B4u, 0x12C6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C6BCu;
label_12c6bc:
    // 0x12c6bc: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x12c6bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c6c0: 0xae720124  sw          $s2, 0x124($s3)
    ctx->pc = 0x12c6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 292), GPR_U32(ctx, 18));
    // 0x12c6c4: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x12c6c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12c6c8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c6cc: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x12c6ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12c6d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12c6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6d4: 0x24110015  addiu       $s1, $zero, 0x15
    ctx->pc = 0x12c6d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x12c6d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6dc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C6DCu;
    SET_GPR_U32(ctx, 31, 0x12C6E4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C6DCu, 0x12C6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C6E4u;
label_12c6e4:
    // 0x12c6e4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x12c6e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c6e8: 0xae72011c  sw          $s2, 0x11C($s3)
    ctx->pc = 0x12c6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 18));
    // 0x12c6ec: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x12c6ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12c6f0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c6f4: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x12c6f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12c6f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12c6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6fc: 0x24110015  addiu       $s1, $zero, 0x15
    ctx->pc = 0x12c6fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x12c700: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c704: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C704u;
    SET_GPR_U32(ctx, 31, 0x12C70Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C704u, 0x12C70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C70Cu;
label_12c70c:
    // 0x12c70c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x12c70cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c710: 0xae720120  sw          $s2, 0x120($s3)
    ctx->pc = 0x12c710u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 288), GPR_U32(ctx, 18));
    // 0x12c714: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12c714u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c718: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c71c: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12c71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12c720: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12c720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c724: 0x24110015  addiu       $s1, $zero, 0x15
    ctx->pc = 0x12c724u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x12c728: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c72c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C72Cu;
    SET_GPR_U32(ctx, 31, 0x12C734u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C72Cu, 0x12C734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C734u;
label_12c734:
    // 0x12c734: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x12c734u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c738: 0xaeb20118  sw          $s2, 0x118($s5)
    ctx->pc = 0x12c738u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 280), GPR_U32(ctx, 18));
    // 0x12c73c: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12c73cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c740: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x12c740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12c744: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c748: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x12c748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x12c74c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C74Cu;
    SET_GPR_U32(ctx, 31, 0x12C754u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C74Cu, 0x12C754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C754u;
label_12c754:
    // 0x12c754: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12c754u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c758: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x12c758u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12c75c: 0xae800118  sw          $zero, 0x118($s4)
    ctx->pc = 0x12c75cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 0));
    // 0x12c760: 0x8fb50090  lw          $s5, 0x90($sp)
    ctx->pc = 0x12c760u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c764: 0x26b60030  addiu       $s6, $s5, 0x30
    ctx->pc = 0x12c764u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x12c768: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12c768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c76c: 0x24170017  addiu       $s7, $zero, 0x17
    ctx->pc = 0x12c76cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x12c770: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12c770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c774: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C774u;
    SET_GPR_U32(ctx, 31, 0x12C77Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C774u, 0x12C77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C77Cu;
label_12c77c:
    // 0x12c77c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x12c77cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c780: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x12c780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
    // 0x12c784: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12c784u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c788: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x12c788u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12c78c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c790: 0x24140014  addiu       $s4, $zero, 0x14
    ctx->pc = 0x12c790u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12c794: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12c794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c798: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C798u;
    SET_GPR_U32(ctx, 31, 0x12C7A0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C798u, 0x12C7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C7A0u;
label_12c7a0:
    // 0x12c7a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12c7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c7a4: 0xac400118  sw          $zero, 0x118($v0)
    ctx->pc = 0x12c7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 0));
    // 0x12c7a8: 0x8fb50090  lw          $s5, 0x90($sp)
    ctx->pc = 0x12c7a8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c7ac: 0x26b30030  addiu       $s3, $s5, 0x30
    ctx->pc = 0x12c7acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x12c7b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12c7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c7b4: 0x24120015  addiu       $s2, $zero, 0x15
    ctx->pc = 0x12c7b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x12c7b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12c7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c7bc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C7BCu;
    SET_GPR_U32(ctx, 31, 0x12C7C4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C7BCu, 0x12C7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C7C4u;
label_12c7c4:
    // 0x12c7c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12c7c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c7c8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x12c7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12c7cc: 0xaca00118  sw          $zero, 0x118($a1)
    ctx->pc = 0x12c7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 280), GPR_U32(ctx, 0));
label_12c7d0:
    // 0x12c7d0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C7D0u;
    {
        const bool branch_taken_0x12c7d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c7d0) {
            ctx->pc = 0x12C7E8u;
            goto label_12c7e8;
        }
    }
    ctx->pc = 0x12C7D8u;
    // 0x12c7d8: 0x8f85bb70  lw          $a1, -0x4490($gp)
    ctx->pc = 0x12c7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x12c7dc: 0x90b40001  lbu         $s4, 0x1($a1)
    ctx->pc = 0x12c7dcu;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x12c7e0: 0x168001b0  bnez        $s4, . + 4 + (0x1B0 << 2)
    ctx->pc = 0x12C7E0u;
    {
        const bool branch_taken_0x12c7e0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c7e0) {
            ctx->pc = 0x12CEA4u;
            goto label_12cea4;
        }
    }
    ctx->pc = 0x12C7E8u;
label_12c7e8:
    // 0x12c7e8: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x12c7e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12c7ec: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12c7ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c7f0: 0x26510030  addiu       $s1, $s2, 0x30
    ctx->pc = 0x12c7f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12c7f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c7f8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x12c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12c7fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12c7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c800: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C800u;
    SET_GPR_U32(ctx, 31, 0x12C808u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C800u, 0x12C808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C808u;
label_12c808:
    // 0x12c808: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x12c808u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c80c: 0xae930114  sw          $s3, 0x114($s4)
    ctx->pc = 0x12c80cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 19));
    // 0x12c810: 0x241300ad  addiu       $s3, $zero, 0xAD
    ctx->pc = 0x12c810u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
    // 0x12c814: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12c814u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c818: 0x26510030  addiu       $s1, $s2, 0x30
    ctx->pc = 0x12c818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12c81c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c820: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x12c820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12c824: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12c824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c828: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C828u;
    SET_GPR_U32(ctx, 31, 0x12C830u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C828u, 0x12C830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C830u;
label_12c830:
    // 0x12c830: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12c830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c834: 0xacb30124  sw          $s3, 0x124($a1)
    ctx->pc = 0x12c834u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 292), GPR_U32(ctx, 19));
    // 0x12c838: 0x2415000a  addiu       $s5, $zero, 0xA
    ctx->pc = 0x12c838u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12c83c: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12c83cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c840: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x12c840u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12c844: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c848: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x12c848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12c84c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c850: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C850u;
    SET_GPR_U32(ctx, 31, 0x12C858u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C850u, 0x12C858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C858u;
label_12c858:
    // 0x12c858: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12c858u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c85c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x12c85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12c860: 0xacb5011c  sw          $s5, 0x11C($a1)
    ctx->pc = 0x12c860u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 284), GPR_U32(ctx, 21));
    // 0x12c864: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x12c864u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12c868: 0x8fb60090  lw          $s6, 0x90($sp)
    ctx->pc = 0x12c868u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c86c: 0x26d70030  addiu       $s7, $s6, 0x30
    ctx->pc = 0x12c86cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x12c870: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12c870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c874: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x12c874u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12c878: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c87c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C87Cu;
    SET_GPR_U32(ctx, 31, 0x12C884u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C87Cu, 0x12C884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C884u;
label_12c884:
    // 0x12c884: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12c884u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c888: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x12c888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12c88c: 0xacb50120  sw          $s5, 0x120($a1)
    ctx->pc = 0x12c88cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 288), GPR_U32(ctx, 21));
    // 0x12c890: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12c890u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c894: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12c894u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c898: 0x26960030  addiu       $s6, $s4, 0x30
    ctx->pc = 0x12c898u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12c89c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12c89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8a0: 0x24150007  addiu       $s5, $zero, 0x7
    ctx->pc = 0x12c8a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12c8a4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12c8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8a8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C8A8u;
    SET_GPR_U32(ctx, 31, 0x12C8B0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C8A8u, 0x12C8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C8B0u;
label_12c8b0:
    // 0x12c8b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12c8b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8b4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x12c8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12c8b8: 0xacb20118  sw          $s2, 0x118($a1)
    ctx->pc = 0x12c8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 280), GPR_U32(ctx, 18));
    // 0x12c8bc: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x12c8bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12c8c0: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12c8c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c8c4: 0x26360030  addiu       $s6, $s1, 0x30
    ctx->pc = 0x12c8c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12c8c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12c8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8cc: 0x24140018  addiu       $s4, $zero, 0x18
    ctx->pc = 0x12c8ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12c8d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12c8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8d4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C8D4u;
    SET_GPR_U32(ctx, 31, 0x12C8DCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C8D4u, 0x12C8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C8DCu;
label_12c8dc:
    // 0x12c8dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12c8dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8e0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x12c8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12c8e4: 0xacb20114  sw          $s2, 0x114($a1)
    ctx->pc = 0x12c8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 276), GPR_U32(ctx, 18));
    // 0x12c8e8: 0x24120078  addiu       $s2, $zero, 0x78
    ctx->pc = 0x12c8e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x12c8ec: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12c8ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c8f0: 0x26350030  addiu       $s5, $s1, 0x30
    ctx->pc = 0x12c8f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12c8f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12c8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8f8: 0x24140018  addiu       $s4, $zero, 0x18
    ctx->pc = 0x12c8f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12c8fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12c8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c900: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C900u;
    SET_GPR_U32(ctx, 31, 0x12C908u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C900u, 0x12C908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C908u;
label_12c908:
    // 0x12c908: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12c908u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c90c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x12c90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12c910: 0xacb20124  sw          $s2, 0x124($a1)
    ctx->pc = 0x12c910u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 292), GPR_U32(ctx, 18));
    // 0x12c914: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x12c914u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12c918: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12c918u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c91c: 0x26350030  addiu       $s5, $s1, 0x30
    ctx->pc = 0x12c91cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12c920: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12c920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c924: 0x24140018  addiu       $s4, $zero, 0x18
    ctx->pc = 0x12c924u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12c928: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12c928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c92c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C92Cu;
    SET_GPR_U32(ctx, 31, 0x12C934u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C92Cu, 0x12C934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C934u;
label_12c934:
    // 0x12c934: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12c934u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c938: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x12c938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12c93c: 0xacb2011c  sw          $s2, 0x11C($a1)
    ctx->pc = 0x12c93cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 284), GPR_U32(ctx, 18));
    // 0x12c940: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12c940u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c944: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12c944u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c948: 0x26350030  addiu       $s5, $s1, 0x30
    ctx->pc = 0x12c948u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12c94c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12c94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c950: 0x24140018  addiu       $s4, $zero, 0x18
    ctx->pc = 0x12c950u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12c954: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12c954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c958: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C958u;
    SET_GPR_U32(ctx, 31, 0x12C960u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C958u, 0x12C960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C960u;
label_12c960:
    // 0x12c960: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12c960u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c964: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x12c964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12c968: 0xacb20120  sw          $s2, 0x120($a1)
    ctx->pc = 0x12c968u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 288), GPR_U32(ctx, 18));
    // 0x12c96c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12c96cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c970: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12c970u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c974: 0x26350030  addiu       $s5, $s1, 0x30
    ctx->pc = 0x12c974u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12c978: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12c978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c97c: 0x24140018  addiu       $s4, $zero, 0x18
    ctx->pc = 0x12c97cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12c980: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12c980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c984: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C984u;
    SET_GPR_U32(ctx, 31, 0x12C98Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C984u, 0x12C98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C98Cu;
label_12c98c:
    // 0x12c98c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12c98cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c990: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x12c990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12c994: 0xacb20118  sw          $s2, 0x118($a1)
    ctx->pc = 0x12c994u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 280), GPR_U32(ctx, 18));
    // 0x12c998: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x12c998u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12c99c: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12c99cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c9a0: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x12c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12c9a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c9a8: 0x24140019  addiu       $s4, $zero, 0x19
    ctx->pc = 0x12c9a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x12c9ac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12c9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c9b0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C9B0u;
    SET_GPR_U32(ctx, 31, 0x12C9B8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C9B0u, 0x12C9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C9B8u;
label_12c9b8:
    // 0x12c9b8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12c9b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c9bc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x12c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12c9c0: 0xac520114  sw          $s2, 0x114($v0)
    ctx->pc = 0x12c9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 18));
    // 0x12c9c4: 0x24130077  addiu       $s3, $zero, 0x77
    ctx->pc = 0x12c9c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x12c9c8: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12c9c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c9cc: 0x26510030  addiu       $s1, $s2, 0x30
    ctx->pc = 0x12c9ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12c9d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c9d4: 0x24140019  addiu       $s4, $zero, 0x19
    ctx->pc = 0x12c9d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x12c9d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12c9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c9dc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12C9DCu;
    SET_GPR_U32(ctx, 31, 0x12C9E4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12C9DCu, 0x12C9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C9E4u;
label_12c9e4:
    // 0x12c9e4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x12c9e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c9e8: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x12c9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12c9ec: 0xacb30124  sw          $s3, 0x124($a1)
    ctx->pc = 0x12c9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 292), GPR_U32(ctx, 19));
    // 0x12c9f0: 0x24170010  addiu       $s7, $zero, 0x10
    ctx->pc = 0x12c9f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12c9f4: 0x8fb50090  lw          $s5, 0x90($sp)
    ctx->pc = 0x12c9f4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c9f8: 0x26b10030  addiu       $s1, $s5, 0x30
    ctx->pc = 0x12c9f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x12c9fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca00: 0x24130019  addiu       $s3, $zero, 0x19
    ctx->pc = 0x12ca00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x12ca04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12ca04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca08: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CA08u;
    SET_GPR_U32(ctx, 31, 0x12CA10u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CA08u, 0x12CA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CA10u;
label_12ca10:
    // 0x12ca10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12ca10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca14: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x12ca14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12ca18: 0xacb7011c  sw          $s7, 0x11C($a1)
    ctx->pc = 0x12ca18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 284), GPR_U32(ctx, 23));
    // 0x12ca1c: 0x8fb60090  lw          $s6, 0x90($sp)
    ctx->pc = 0x12ca1cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12ca20: 0x26d70030  addiu       $s7, $s6, 0x30
    ctx->pc = 0x12ca20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x12ca24: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12ca24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca28: 0x24140019  addiu       $s4, $zero, 0x19
    ctx->pc = 0x12ca28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x12ca2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12ca2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca30: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CA30u;
    SET_GPR_U32(ctx, 31, 0x12CA38u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CA30u, 0x12CA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CA38u;
label_12ca38:
    // 0x12ca38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12ca38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca3c: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x12ca3cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12ca40: 0xae600120  sw          $zero, 0x120($s3)
    ctx->pc = 0x12ca40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 288), GPR_U32(ctx, 0));
    // 0x12ca44: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12ca44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ca48: 0x8fb50090  lw          $s5, 0x90($sp)
    ctx->pc = 0x12ca48u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12ca4c: 0x26b60030  addiu       $s6, $s5, 0x30
    ctx->pc = 0x12ca4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x12ca50: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12ca50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca54: 0x24170019  addiu       $s7, $zero, 0x19
    ctx->pc = 0x12ca54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x12ca58: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12ca58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca5c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CA5Cu;
    SET_GPR_U32(ctx, 31, 0x12CA64u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CA5Cu, 0x12CA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CA64u;
label_12ca64:
    // 0x12ca64: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12ca64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca68: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x12ca68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12ca6c: 0xae320118  sw          $s2, 0x118($s1)
    ctx->pc = 0x12ca6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 18));
    // 0x12ca70: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x12ca70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12ca74: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12ca74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12ca78: 0x26550030  addiu       $s5, $s2, 0x30
    ctx->pc = 0x12ca78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12ca7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12ca7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca80: 0x2417001a  addiu       $s7, $zero, 0x1A
    ctx->pc = 0x12ca80u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x12ca84: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12ca84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca88: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CA88u;
    SET_GPR_U32(ctx, 31, 0x12CA90u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CA88u, 0x12CA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CA90u;
label_12ca90:
    // 0x12ca90: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x12ca90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca94: 0x8ed10000  lw          $s1, 0x0($s6)
    ctx->pc = 0x12ca94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12ca98: 0xae330114  sw          $s3, 0x114($s1)
    ctx->pc = 0x12ca98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 19));
    // 0x12ca9c: 0x24140091  addiu       $s4, $zero, 0x91
    ctx->pc = 0x12ca9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x12caa0: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12caa0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12caa4: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x12caa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12caa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12caa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12caac: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x12caacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x12cab0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12cab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cab4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CAB4u;
    SET_GPR_U32(ctx, 31, 0x12CABCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CAB4u, 0x12CABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CABCu;
label_12cabc:
    // 0x12cabc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12cabcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cac0: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x12cac0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12cac4: 0xae340124  sw          $s4, 0x124($s1)
    ctx->pc = 0x12cac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 20));
    // 0x12cac8: 0x24140011  addiu       $s4, $zero, 0x11
    ctx->pc = 0x12cac8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x12cacc: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12caccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cad0: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x12cad0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12cad4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12cad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cad8: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x12cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x12cadc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12cadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cae0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CAE0u;
    SET_GPR_U32(ctx, 31, 0x12CAE8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CAE0u, 0x12CAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CAE8u;
label_12cae8:
    // 0x12cae8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12cae8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12caec: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x12caecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12caf0: 0xae34011c  sw          $s4, 0x11C($s1)
    ctx->pc = 0x12caf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 20));
    // 0x12caf4: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12caf4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12caf8: 0x26930030  addiu       $s3, $s4, 0x30
    ctx->pc = 0x12caf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12cafc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12cafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb00: 0x2412001a  addiu       $s2, $zero, 0x1A
    ctx->pc = 0x12cb00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x12cb04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12cb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb08: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CB08u;
    SET_GPR_U32(ctx, 31, 0x12CB10u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CB08u, 0x12CB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB10u;
label_12cb10:
    // 0x12cb10: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x12cb10u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12cb14: 0xaea00120  sw          $zero, 0x120($s5)
    ctx->pc = 0x12cb14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 288), GPR_U32(ctx, 0));
    // 0x12cb18: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12cb18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cb1c: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12cb1cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cb20: 0x26930030  addiu       $s3, $s4, 0x30
    ctx->pc = 0x12cb20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12cb24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12cb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb28: 0x2412001a  addiu       $s2, $zero, 0x1A
    ctx->pc = 0x12cb28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x12cb2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12cb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb30: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CB30u;
    SET_GPR_U32(ctx, 31, 0x12CB38u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CB30u, 0x12CB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB38u;
label_12cb38:
    // 0x12cb38: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x12cb38u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12cb3c: 0xaeb10118  sw          $s1, 0x118($s5)
    ctx->pc = 0x12cb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 280), GPR_U32(ctx, 17));
    // 0x12cb40: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x12cb40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12cb44: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12cb44u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cb48: 0x26930030  addiu       $s3, $s4, 0x30
    ctx->pc = 0x12cb48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12cb4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12cb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb50: 0x2412001b  addiu       $s2, $zero, 0x1B
    ctx->pc = 0x12cb50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x12cb54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12cb54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb58: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CB58u;
    SET_GPR_U32(ctx, 31, 0x12CB60u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CB58u, 0x12CB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB60u;
label_12cb60:
    // 0x12cb60: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x12cb60u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12cb64: 0xaeb10114  sw          $s1, 0x114($s5)
    ctx->pc = 0x12cb64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 276), GPR_U32(ctx, 17));
    // 0x12cb68: 0x24110092  addiu       $s1, $zero, 0x92
    ctx->pc = 0x12cb68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
    // 0x12cb6c: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12cb6cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cb70: 0x26930030  addiu       $s3, $s4, 0x30
    ctx->pc = 0x12cb70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12cb74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12cb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb78: 0x2412001b  addiu       $s2, $zero, 0x1B
    ctx->pc = 0x12cb78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x12cb7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12cb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb80: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CB80u;
    SET_GPR_U32(ctx, 31, 0x12CB88u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CB80u, 0x12CB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB88u;
label_12cb88:
    // 0x12cb88: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x12cb88u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12cb8c: 0xaeb10124  sw          $s1, 0x124($s5)
    ctx->pc = 0x12cb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 292), GPR_U32(ctx, 17));
    // 0x12cb90: 0x24110011  addiu       $s1, $zero, 0x11
    ctx->pc = 0x12cb90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x12cb94: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12cb94u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cb98: 0x26930030  addiu       $s3, $s4, 0x30
    ctx->pc = 0x12cb98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12cb9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12cb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cba0: 0x2412001b  addiu       $s2, $zero, 0x1B
    ctx->pc = 0x12cba0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x12cba4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12cba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cba8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CBA8u;
    SET_GPR_U32(ctx, 31, 0x12CBB0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CBA8u, 0x12CBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CBB0u;
label_12cbb0:
    // 0x12cbb0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12cbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12cbb4: 0xacb1011c  sw          $s1, 0x11C($a1)
    ctx->pc = 0x12cbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 284), GPR_U32(ctx, 17));
    // 0x12cbb8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12cbb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cbbc: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12cbbcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cbc0: 0x26930030  addiu       $s3, $s4, 0x30
    ctx->pc = 0x12cbc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12cbc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12cbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cbc8: 0x2412001b  addiu       $s2, $zero, 0x1B
    ctx->pc = 0x12cbc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x12cbcc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12cbccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cbd0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CBD0u;
    SET_GPR_U32(ctx, 31, 0x12CBD8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CBD0u, 0x12CBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CBD8u;
label_12cbd8:
    // 0x12cbd8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12cbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12cbdc: 0xacb10120  sw          $s1, 0x120($a1)
    ctx->pc = 0x12cbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 288), GPR_U32(ctx, 17));
    // 0x12cbe0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12cbe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cbe4: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12cbe4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cbe8: 0x26930030  addiu       $s3, $s4, 0x30
    ctx->pc = 0x12cbe8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12cbec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12cbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cbf0: 0x2412001b  addiu       $s2, $zero, 0x1B
    ctx->pc = 0x12cbf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x12cbf4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12cbf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cbf8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CBF8u;
    SET_GPR_U32(ctx, 31, 0x12CC00u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CBF8u, 0x12CC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC00u;
label_12cc00:
    // 0x12cc00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12cc00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12cc04: 0xacb10118  sw          $s1, 0x118($a1)
    ctx->pc = 0x12cc04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 280), GPR_U32(ctx, 17));
    // 0x12cc08: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12cc08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cc0c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cc10: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x12cc10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12cc14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12cc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cc18: 0x2412001c  addiu       $s2, $zero, 0x1C
    ctx->pc = 0x12cc18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x12cc1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12cc1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cc20: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CC20u;
    SET_GPR_U32(ctx, 31, 0x12CC28u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CC20u, 0x12CC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC28u;
label_12cc28:
    // 0x12cc28: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12cc28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12cc2c: 0xacb10114  sw          $s1, 0x114($a1)
    ctx->pc = 0x12cc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 276), GPR_U32(ctx, 17));
    // 0x12cc30: 0x241100af  addiu       $s1, $zero, 0xAF
    ctx->pc = 0x12cc30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
    // 0x12cc34: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cc38: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x12cc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12cc3c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x12cc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x12cc40: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CC40u;
    SET_GPR_U32(ctx, 31, 0x12CC48u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CC40u, 0x12CC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC48u;
label_12cc48:
    // 0x12cc48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12cc4c: 0xac510124  sw          $s1, 0x124($v0)
    ctx->pc = 0x12cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 17));
    // 0x12cc50: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x12cc50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12cc54: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12cc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cc58: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x12cc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12cc5c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x12cc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x12cc60: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CC60u;
    SET_GPR_U32(ctx, 31, 0x12CC68u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CC60u, 0x12CC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC68u;
label_12cc68:
    // 0x12cc68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12cc68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cc6c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12cc70: 0xac52011c  sw          $s2, 0x11C($v0)
    ctx->pc = 0x12cc70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 18));
    // 0x12cc74: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x12cc74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12cc78: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12cc78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cc7c: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12cc80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12cc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cc84: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x12cc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x12cc88: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CC88u;
    SET_GPR_U32(ctx, 31, 0x12CC90u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CC88u, 0x12CC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC90u;
label_12cc90:
    // 0x12cc90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12cc90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cc94: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12cc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12cc98: 0xac520120  sw          $s2, 0x120($v0)
    ctx->pc = 0x12cc98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 18));
    // 0x12cc9c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12cc9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cca0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12cca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cca4: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12cca8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12cca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ccac: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x12ccacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x12ccb0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CCB0u;
    SET_GPR_U32(ctx, 31, 0x12CCB8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CCB0u, 0x12CCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CCB8u;
label_12ccb8:
    // 0x12ccb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12ccb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ccbc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12ccc0: 0xac520118  sw          $s2, 0x118($v0)
    ctx->pc = 0x12ccc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 18));
    // 0x12ccc4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12ccc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ccc8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12ccc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cccc: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12ccd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12ccd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ccd4: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x12ccd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x12ccd8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CCD8u;
    SET_GPR_U32(ctx, 31, 0x12CCE0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CCD8u, 0x12CCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CCE0u;
label_12cce0:
    // 0x12cce0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x12cce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12cce4: 0xac920114  sw          $s2, 0x114($a0)
    ctx->pc = 0x12cce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 18));
    // 0x12cce8: 0x241200ab  addiu       $s2, $zero, 0xAB
    ctx->pc = 0x12cce8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x12ccec: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12ccecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12ccf0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12ccf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12ccf4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12ccf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ccf8: 0x2411001d  addiu       $s1, $zero, 0x1D
    ctx->pc = 0x12ccf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x12ccfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12ccfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd00: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CD00u;
    SET_GPR_U32(ctx, 31, 0x12CD08u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CD00u, 0x12CD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CD08u;
label_12cd08:
    // 0x12cd08: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x12cd08u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12cd0c: 0xae720124  sw          $s2, 0x124($s3)
    ctx->pc = 0x12cd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 292), GPR_U32(ctx, 18));
    // 0x12cd10: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12cd10u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cd14: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x12cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12cd18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12cd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd1c: 0x2414001d  addiu       $s4, $zero, 0x1D
    ctx->pc = 0x12cd1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x12cd20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12cd20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd24: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CD24u;
    SET_GPR_U32(ctx, 31, 0x12CD2Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CD24u, 0x12CD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CD2Cu;
label_12cd2c:
    // 0x12cd2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12cd2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd30: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12cd34: 0xac40011c  sw          $zero, 0x11C($v0)
    ctx->pc = 0x12cd34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 0));
    // 0x12cd38: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x12cd38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12cd3c: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12cd3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cd40: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x12cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12cd44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12cd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd48: 0x2414001d  addiu       $s4, $zero, 0x1D
    ctx->pc = 0x12cd48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x12cd4c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12cd4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd50: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CD50u;
    SET_GPR_U32(ctx, 31, 0x12CD58u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CD50u, 0x12CD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CD58u;
label_12cd58:
    // 0x12cd58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12cd58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd5c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12cd60: 0xac530120  sw          $s3, 0x120($v0)
    ctx->pc = 0x12cd60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 19));
    // 0x12cd64: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12cd64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cd68: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12cd68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cd6c: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x12cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12cd70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12cd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd74: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x12cd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x12cd78: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CD78u;
    SET_GPR_U32(ctx, 31, 0x12CD80u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CD78u, 0x12CD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CD80u;
label_12cd80:
    // 0x12cd80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12cd80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd84: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12cd88: 0xac530118  sw          $s3, 0x118($v0)
    ctx->pc = 0x12cd88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 19));
    // 0x12cd8c: 0x8fb50090  lw          $s5, 0x90($sp)
    ctx->pc = 0x12cd8cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cd90: 0x26b30030  addiu       $s3, $s5, 0x30
    ctx->pc = 0x12cd90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x12cd94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12cd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd98: 0x2412001d  addiu       $s2, $zero, 0x1D
    ctx->pc = 0x12cd98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x12cd9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12cd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cda0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CDA0u;
    SET_GPR_U32(ctx, 31, 0x12CDA8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CDA0u, 0x12CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CDA8u;
label_12cda8:
    // 0x12cda8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12cda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cdac: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x12cdacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12cdb0: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x12cdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
    // 0x12cdb4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12cdb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cdb8: 0x8fb50090  lw          $s5, 0x90($sp)
    ctx->pc = 0x12cdb8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cdbc: 0x26b60030  addiu       $s6, $s5, 0x30
    ctx->pc = 0x12cdbcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x12cdc0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12cdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cdc4: 0x2417001e  addiu       $s7, $zero, 0x1E
    ctx->pc = 0x12cdc4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x12cdc8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12cdc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cdcc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CDCCu;
    SET_GPR_U32(ctx, 31, 0x12CDD4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CDCCu, 0x12CDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CDD4u;
label_12cdd4:
    // 0x12cdd4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x12cdd4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12cdd8: 0xae340114  sw          $s4, 0x114($s1)
    ctx->pc = 0x12cdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 20));
    // 0x12cddc: 0x24130020  addiu       $s3, $zero, 0x20
    ctx->pc = 0x12cddcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12cde0: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12cde0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cde4: 0x26540030  addiu       $s4, $s2, 0x30
    ctx->pc = 0x12cde4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12cde8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12cde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cdec: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x12cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x12cdf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12cdf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cdf4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CDF4u;
    SET_GPR_U32(ctx, 31, 0x12CDFCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CDF4u, 0x12CDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CDFCu;
label_12cdfc:
    // 0x12cdfc: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x12cdfcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ce00: 0xaeb30124  sw          $s3, 0x124($s5)
    ctx->pc = 0x12ce00u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 292), GPR_U32(ctx, 19));
    // 0x12ce04: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x12ce04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12ce08: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12ce08u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12ce0c: 0x26510030  addiu       $s1, $s2, 0x30
    ctx->pc = 0x12ce0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12ce10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ce10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ce14: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x12ce14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x12ce18: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CE18u;
    SET_GPR_U32(ctx, 31, 0x12CE20u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CE18u, 0x12CE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CE20u;
label_12ce20:
    // 0x12ce20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12ce20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ce24: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x12ce24u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ce28: 0xae93011c  sw          $s3, 0x11C($s4)
    ctx->pc = 0x12ce28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 19));
    // 0x12ce2c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x12ce2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12ce30: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12ce30u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12ce34: 0x26510030  addiu       $s1, $s2, 0x30
    ctx->pc = 0x12ce34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12ce38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ce38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ce3c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x12ce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x12ce40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12ce40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ce44: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CE44u;
    SET_GPR_U32(ctx, 31, 0x12CE4Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CE44u, 0x12CE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CE4Cu;
label_12ce4c:
    // 0x12ce4c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x12ce4cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ce50: 0xae930120  sw          $s3, 0x120($s4)
    ctx->pc = 0x12ce50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 19));
    // 0x12ce54: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12ce54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ce58: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12ce58u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12ce5c: 0x26510030  addiu       $s1, $s2, 0x30
    ctx->pc = 0x12ce5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12ce60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ce60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ce64: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x12ce64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x12ce68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12ce68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ce6c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CE6Cu;
    SET_GPR_U32(ctx, 31, 0x12CE74u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CE6Cu, 0x12CE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CE74u;
label_12ce74:
    // 0x12ce74: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12ce74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ce78: 0xacb30118  sw          $s3, 0x118($a1)
    ctx->pc = 0x12ce78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 280), GPR_U32(ctx, 19));
    // 0x12ce7c: 0x8fb50090  lw          $s5, 0x90($sp)
    ctx->pc = 0x12ce7cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12ce80: 0x26b30030  addiu       $s3, $s5, 0x30
    ctx->pc = 0x12ce80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x12ce84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12ce84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ce88: 0x2412001e  addiu       $s2, $zero, 0x1E
    ctx->pc = 0x12ce88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x12ce8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12ce8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ce90: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CE90u;
    SET_GPR_U32(ctx, 31, 0x12CE98u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CE90u, 0x12CE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CE98u;
label_12ce98:
    // 0x12ce98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12ce98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ce9c: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x12ce9cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12cea0: 0xae800118  sw          $zero, 0x118($s4)
    ctx->pc = 0x12cea0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 0));
label_12cea4:
    // 0x12cea4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12CEA4u;
    {
        const bool branch_taken_0x12cea4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cea4) {
            ctx->pc = 0x12CEBCu;
            goto label_12cebc;
        }
    }
    ctx->pc = 0x12CEACu;
    // 0x12ceac: 0x8f85bb70  lw          $a1, -0x4490($gp)
    ctx->pc = 0x12ceacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x12ceb0: 0x90b50001  lbu         $s5, 0x1($a1)
    ctx->pc = 0x12ceb0u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x12ceb4: 0x16a001b0  bnez        $s5, . + 4 + (0x1B0 << 2)
    ctx->pc = 0x12CEB4u;
    {
        const bool branch_taken_0x12ceb4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ceb4) {
            ctx->pc = 0x12D578u;
            goto label_12d578;
        }
    }
    ctx->pc = 0x12CEBCu;
label_12cebc:
    // 0x12cebc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x12cebcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cec0: 0x8fb70090  lw          $s7, 0x90($sp)
    ctx->pc = 0x12cec0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cec4: 0x26f10030  addiu       $s1, $s7, 0x30
    ctx->pc = 0x12cec4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x12cec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12cec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cecc: 0x2413001f  addiu       $s3, $zero, 0x1F
    ctx->pc = 0x12ceccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x12ced0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12ced0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ced4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CED4u;
    SET_GPR_U32(ctx, 31, 0x12CEDCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CED4u, 0x12CEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CEDCu;
label_12cedc:
    // 0x12cedc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12cedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cee0: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x12cee0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12cee4: 0xae560114  sw          $s6, 0x114($s2)
    ctx->pc = 0x12cee4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 22));
    // 0x12cee8: 0x2414006f  addiu       $s4, $zero, 0x6F
    ctx->pc = 0x12cee8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x12ceec: 0x8fb60090  lw          $s6, 0x90($sp)
    ctx->pc = 0x12ceecu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cef0: 0x26d50030  addiu       $s5, $s6, 0x30
    ctx->pc = 0x12cef0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x12cef4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12cef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cef8: 0x2413001f  addiu       $s3, $zero, 0x1F
    ctx->pc = 0x12cef8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x12cefc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12cefcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf00: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CF00u;
    SET_GPR_U32(ctx, 31, 0x12CF08u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CF00u, 0x12CF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF08u;
label_12cf08:
    // 0x12cf08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12cf08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf0c: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x12cf0cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12cf10: 0xae540124  sw          $s4, 0x124($s2)
    ctx->pc = 0x12cf10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 20));
    // 0x12cf14: 0x2411000b  addiu       $s1, $zero, 0xB
    ctx->pc = 0x12cf14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x12cf18: 0x8fb60090  lw          $s6, 0x90($sp)
    ctx->pc = 0x12cf18u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cf1c: 0x26d40030  addiu       $s4, $s6, 0x30
    ctx->pc = 0x12cf1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x12cf20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12cf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf24: 0x2413001f  addiu       $s3, $zero, 0x1F
    ctx->pc = 0x12cf24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x12cf28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12cf28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf2c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CF2Cu;
    SET_GPR_U32(ctx, 31, 0x12CF34u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CF2Cu, 0x12CF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF34u;
label_12cf34:
    // 0x12cf34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12cf34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf38: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x12cf38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12cf3c: 0xae51011c  sw          $s1, 0x11C($s2)
    ctx->pc = 0x12cf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 284), GPR_U32(ctx, 17));
    // 0x12cf40: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x12cf40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12cf44: 0x8fb50090  lw          $s5, 0x90($sp)
    ctx->pc = 0x12cf44u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cf48: 0x26b40030  addiu       $s4, $s5, 0x30
    ctx->pc = 0x12cf48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x12cf4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12cf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf50: 0x2413001f  addiu       $s3, $zero, 0x1F
    ctx->pc = 0x12cf50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x12cf54: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12cf54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf58: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CF58u;
    SET_GPR_U32(ctx, 31, 0x12CF60u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CF58u, 0x12CF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF60u;
label_12cf60:
    // 0x12cf60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12cf60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf64: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x12cf64u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12cf68: 0xae510120  sw          $s1, 0x120($s2)
    ctx->pc = 0x12cf68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 17));
    // 0x12cf6c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12cf6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cf70: 0x8fb50090  lw          $s5, 0x90($sp)
    ctx->pc = 0x12cf70u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cf74: 0x26b40030  addiu       $s4, $s5, 0x30
    ctx->pc = 0x12cf74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x12cf78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12cf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf7c: 0x2413001f  addiu       $s3, $zero, 0x1F
    ctx->pc = 0x12cf7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x12cf80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12cf80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf84: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CF84u;
    SET_GPR_U32(ctx, 31, 0x12CF8Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CF84u, 0x12CF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF8Cu;
label_12cf8c:
    // 0x12cf8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12cf8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf90: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x12cf90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12cf94: 0xae510118  sw          $s1, 0x118($s2)
    ctx->pc = 0x12cf94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 17));
    // 0x12cf98: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12cf98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cf9c: 0x8fb50090  lw          $s5, 0x90($sp)
    ctx->pc = 0x12cf9cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cfa0: 0x26b40030  addiu       $s4, $s5, 0x30
    ctx->pc = 0x12cfa0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x12cfa4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12cfa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfa8: 0x2413000c  addiu       $s3, $zero, 0xC
    ctx->pc = 0x12cfa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12cfac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12cfacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfb0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CFB0u;
    SET_GPR_U32(ctx, 31, 0x12CFB8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CFB0u, 0x12CFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CFB8u;
label_12cfb8:
    // 0x12cfb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12cfb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfbc: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x12cfbcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12cfc0: 0xae510114  sw          $s1, 0x114($s2)
    ctx->pc = 0x12cfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 17));
    // 0x12cfc4: 0x2411007a  addiu       $s1, $zero, 0x7A
    ctx->pc = 0x12cfc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x12cfc8: 0x8fb50090  lw          $s5, 0x90($sp)
    ctx->pc = 0x12cfc8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cfcc: 0x26b40030  addiu       $s4, $s5, 0x30
    ctx->pc = 0x12cfccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x12cfd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12cfd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfd4: 0x2413000c  addiu       $s3, $zero, 0xC
    ctx->pc = 0x12cfd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12cfd8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12cfd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfdc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12CFDCu;
    SET_GPR_U32(ctx, 31, 0x12CFE4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12CFDCu, 0x12CFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CFE4u;
label_12cfe4:
    // 0x12cfe4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12cfe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfe8: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x12cfe8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12cfec: 0xae510124  sw          $s1, 0x124($s2)
    ctx->pc = 0x12cfecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 17));
    // 0x12cff0: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x12cff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12cff4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12cff8: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x12cff8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12cffc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12cffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d000: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x12d000u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12d004: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12d004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d008: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D008u;
    SET_GPR_U32(ctx, 31, 0x12D010u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D008u, 0x12D010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D010u;
label_12d010:
    // 0x12d010: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x12d010u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12d014: 0xae71011c  sw          $s1, 0x11C($s3)
    ctx->pc = 0x12d014u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 17));
    // 0x12d018: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x12d018u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12d01c: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12d01cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d020: 0x26340030  addiu       $s4, $s1, 0x30
    ctx->pc = 0x12d020u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12d024: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12d024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d028: 0x2416000c  addiu       $s6, $zero, 0xC
    ctx->pc = 0x12d028u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12d02c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x12d02cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d030: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D030u;
    SET_GPR_U32(ctx, 31, 0x12D038u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D030u, 0x12D038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D038u;
label_12d038:
    // 0x12d038: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12d038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d03c: 0x8cb70000  lw          $s7, 0x0($a1)
    ctx->pc = 0x12d03cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12d040: 0xaef20120  sw          $s2, 0x120($s7)
    ctx->pc = 0x12d040u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 288), GPR_U32(ctx, 18));
    // 0x12d044: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x12d044u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d048: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12d048u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d04c: 0x26330030  addiu       $s3, $s1, 0x30
    ctx->pc = 0x12d04cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12d050: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12d050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d054: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x12d054u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12d058: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12d058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d05c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D05Cu;
    SET_GPR_U32(ctx, 31, 0x12D064u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D05Cu, 0x12D064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D064u;
label_12d064:
    // 0x12d064: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12d064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d068: 0x8cb60000  lw          $s6, 0x0($a1)
    ctx->pc = 0x12d068u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12d06c: 0xaed50118  sw          $s5, 0x118($s6)
    ctx->pc = 0x12d06cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 280), GPR_U32(ctx, 21));
    // 0x12d070: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x12d070u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d074: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12d074u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d078: 0x26910030  addiu       $s1, $s4, 0x30
    ctx->pc = 0x12d078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12d07c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d080: 0x2413000d  addiu       $s3, $zero, 0xD
    ctx->pc = 0x12d080u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x12d084: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12d084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d088: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D088u;
    SET_GPR_U32(ctx, 31, 0x12D090u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D088u, 0x12D090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D090u;
label_12d090:
    // 0x12d090: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12d090u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d094: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x12d094u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12d098: 0xaeb70114  sw          $s7, 0x114($s5)
    ctx->pc = 0x12d098u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 276), GPR_U32(ctx, 23));
    // 0x12d09c: 0x24160073  addiu       $s6, $zero, 0x73
    ctx->pc = 0x12d09cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x12d0a0: 0x8fb70090  lw          $s7, 0x90($sp)
    ctx->pc = 0x12d0a0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d0a4: 0x26f40030  addiu       $s4, $s7, 0x30
    ctx->pc = 0x12d0a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x12d0a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12d0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d0ac: 0x2411000d  addiu       $s1, $zero, 0xD
    ctx->pc = 0x12d0acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x12d0b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12d0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d0b4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D0B4u;
    SET_GPR_U32(ctx, 31, 0x12D0BCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D0B4u, 0x12D0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D0BCu;
label_12d0bc:
    // 0x12d0bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12d0bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d0c0: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x12d0c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12d0c4: 0xae560124  sw          $s6, 0x124($s2)
    ctx->pc = 0x12d0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 22));
    // 0x12d0c8: 0x24150006  addiu       $s5, $zero, 0x6
    ctx->pc = 0x12d0c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12d0cc: 0x8fb70090  lw          $s7, 0x90($sp)
    ctx->pc = 0x12d0ccu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d0d0: 0x26f60030  addiu       $s6, $s7, 0x30
    ctx->pc = 0x12d0d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x12d0d4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12d0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d0d8: 0x2411000d  addiu       $s1, $zero, 0xD
    ctx->pc = 0x12d0d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x12d0dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12d0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d0e0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D0E0u;
    SET_GPR_U32(ctx, 31, 0x12D0E8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D0E0u, 0x12D0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D0E8u;
label_12d0e8:
    // 0x12d0e8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12d0e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d0ec: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x12d0ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12d0f0: 0xae75011c  sw          $s5, 0x11C($s3)
    ctx->pc = 0x12d0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 21));
    // 0x12d0f4: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x12d0f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12d0f8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12d0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d0fc: 0x24550030  addiu       $s5, $v0, 0x30
    ctx->pc = 0x12d0fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12d100: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12d100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d104: 0x2411000d  addiu       $s1, $zero, 0xD
    ctx->pc = 0x12d104u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x12d108: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12d108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d10c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D10Cu;
    SET_GPR_U32(ctx, 31, 0x12D114u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D10Cu, 0x12D114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D114u;
label_12d114:
    // 0x12d114: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12d114u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d118: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x12d118u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12d11c: 0xae720120  sw          $s2, 0x120($s3)
    ctx->pc = 0x12d11cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 288), GPR_U32(ctx, 18));
    // 0x12d120: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12d120u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d124: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12d124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d128: 0x24550030  addiu       $s5, $v0, 0x30
    ctx->pc = 0x12d128u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12d12c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12d12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d130: 0x2411000d  addiu       $s1, $zero, 0xD
    ctx->pc = 0x12d130u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x12d134: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12d134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d138: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D138u;
    SET_GPR_U32(ctx, 31, 0x12D140u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D138u, 0x12D140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D140u;
label_12d140:
    // 0x12d140: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12d140u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d144: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x12d144u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12d148: 0xae720118  sw          $s2, 0x118($s3)
    ctx->pc = 0x12d148u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 18));
    // 0x12d14c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12d14cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d150: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12d150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d154: 0x24550030  addiu       $s5, $v0, 0x30
    ctx->pc = 0x12d154u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12d158: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12d158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d15c: 0x2411000e  addiu       $s1, $zero, 0xE
    ctx->pc = 0x12d15cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12d160: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12d160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d164: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D164u;
    SET_GPR_U32(ctx, 31, 0x12D16Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D164u, 0x12D16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D16Cu;
label_12d16c:
    // 0x12d16c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12d16cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d170: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x12d170u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12d174: 0xae720114  sw          $s2, 0x114($s3)
    ctx->pc = 0x12d174u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 18));
    // 0x12d178: 0x24120071  addiu       $s2, $zero, 0x71
    ctx->pc = 0x12d178u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x12d17c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12d17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d180: 0x24550030  addiu       $s5, $v0, 0x30
    ctx->pc = 0x12d180u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12d184: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12d184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d188: 0x2411000e  addiu       $s1, $zero, 0xE
    ctx->pc = 0x12d188u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12d18c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12d18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d190: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D190u;
    SET_GPR_U32(ctx, 31, 0x12D198u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D190u, 0x12D198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D198u;
label_12d198:
    // 0x12d198: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12d198u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d19c: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x12d19cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12d1a0: 0xae720124  sw          $s2, 0x124($s3)
    ctx->pc = 0x12d1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 292), GPR_U32(ctx, 18));
    // 0x12d1a4: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x12d1a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12d1a8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d1ac: 0x24550030  addiu       $s5, $v0, 0x30
    ctx->pc = 0x12d1acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12d1b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12d1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1b4: 0x2411000e  addiu       $s1, $zero, 0xE
    ctx->pc = 0x12d1b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12d1b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12d1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1bc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D1BCu;
    SET_GPR_U32(ctx, 31, 0x12D1C4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D1BCu, 0x12D1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D1C4u;
label_12d1c4:
    // 0x12d1c4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12d1c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1c8: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x12d1c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12d1cc: 0xae72011c  sw          $s2, 0x11C($s3)
    ctx->pc = 0x12d1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 18));
    // 0x12d1d0: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x12d1d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12d1d4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d1d8: 0x24550030  addiu       $s5, $v0, 0x30
    ctx->pc = 0x12d1d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12d1dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12d1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1e0: 0x2411000e  addiu       $s1, $zero, 0xE
    ctx->pc = 0x12d1e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12d1e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12d1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1e8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D1E8u;
    SET_GPR_U32(ctx, 31, 0x12D1F0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D1E8u, 0x12D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D1F0u;
label_12d1f0:
    // 0x12d1f0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12d1f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1f4: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x12d1f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12d1f8: 0xae720120  sw          $s2, 0x120($s3)
    ctx->pc = 0x12d1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 288), GPR_U32(ctx, 18));
    // 0x12d1fc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12d1fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d200: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12d200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d204: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12d204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12d208: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12d208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d20c: 0x2411000e  addiu       $s1, $zero, 0xE
    ctx->pc = 0x12d20cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12d210: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12d210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d214: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D214u;
    SET_GPR_U32(ctx, 31, 0x12D21Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D214u, 0x12D21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D21Cu;
label_12d21c:
    // 0x12d21c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12d21cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d220: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x12d220u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12d224: 0xae720118  sw          $s2, 0x118($s3)
    ctx->pc = 0x12d224u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 18));
    // 0x12d228: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12d228u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d22c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d230: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12d230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12d234: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12d234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d238: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x12d238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x12d23c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12d23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d240: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D240u;
    SET_GPR_U32(ctx, 31, 0x12D248u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D240u, 0x12D248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D248u;
label_12d248:
    // 0x12d248: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12d248u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d24c: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x12d24cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12d250: 0xae720114  sw          $s2, 0x114($s3)
    ctx->pc = 0x12d250u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 18));
    // 0x12d254: 0x24120064  addiu       $s2, $zero, 0x64
    ctx->pc = 0x12d254u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x12d258: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12d258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d25c: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12d25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12d260: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12d260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d264: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x12d264u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x12d268: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12d268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d26c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D26Cu;
    SET_GPR_U32(ctx, 31, 0x12D274u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D26Cu, 0x12D274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D274u;
label_12d274:
    // 0x12d274: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x12d274u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12d278: 0xae720124  sw          $s2, 0x124($s3)
    ctx->pc = 0x12d278u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 292), GPR_U32(ctx, 18));
    // 0x12d27c: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x12d27cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12d280: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12d280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d284: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12d284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12d288: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12d288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d28c: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x12d28cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x12d290: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12d290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d294: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D294u;
    SET_GPR_U32(ctx, 31, 0x12D29Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D294u, 0x12D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D29Cu;
label_12d29c:
    // 0x12d29c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x12d29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12d2a0: 0xac92011c  sw          $s2, 0x11C($a0)
    ctx->pc = 0x12d2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 18));
    // 0x12d2a4: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x12d2a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12d2a8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d2ac: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x12d2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12d2b0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x12d2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x12d2b4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D2B4u;
    SET_GPR_U32(ctx, 31, 0x12D2BCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D2B4u, 0x12D2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D2BCu;
label_12d2bc:
    // 0x12d2bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12d2bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d2c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d2c4: 0xac520120  sw          $s2, 0x120($v0)
    ctx->pc = 0x12d2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 18));
    // 0x12d2c8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12d2c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d2cc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12d2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d2d0: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12d2d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d2d8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x12d2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x12d2dc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D2DCu;
    SET_GPR_U32(ctx, 31, 0x12D2E4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D2DCu, 0x12D2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D2E4u;
label_12d2e4:
    // 0x12d2e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12d2e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d2e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d2ec: 0xac520118  sw          $s2, 0x118($v0)
    ctx->pc = 0x12d2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 18));
    // 0x12d2f0: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12d2f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d2f4: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x12d2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12d2f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12d2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d2fc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x12d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12d300: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12d300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d304: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D304u;
    SET_GPR_U32(ctx, 31, 0x12D30Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D304u, 0x12D30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D30Cu;
label_12d30c:
    // 0x12d30c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12d30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d310: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x12d310u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12d314: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x12d314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
    // 0x12d318: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12d318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d31c: 0x24520030  addiu       $s2, $v0, 0x30
    ctx->pc = 0x12d31cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12d320: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12d320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d324: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x12d324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x12d328: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D328u;
    SET_GPR_U32(ctx, 31, 0x12D330u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D328u, 0x12D330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D330u;
label_12d330:
    // 0x12d330: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12d330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12d334: 0xaca00118  sw          $zero, 0x118($a1)
    ctx->pc = 0x12d334u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 280), GPR_U32(ctx, 0));
    // 0x12d338: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12d338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d33c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x12d33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12d340: 0x2412000e  addiu       $s2, $zero, 0xE
    ctx->pc = 0x12d340u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12d344: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12d344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d348: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D348u;
    SET_GPR_U32(ctx, 31, 0x12D350u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D348u, 0x12D350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D350u;
label_12d350:
    // 0x12d350: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12d350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12d354: 0xaca00118  sw          $zero, 0x118($a1)
    ctx->pc = 0x12d354u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 280), GPR_U32(ctx, 0));
    // 0x12d358: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12d358u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d35c: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x12d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12d360: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d364: 0x2413000f  addiu       $s3, $zero, 0xF
    ctx->pc = 0x12d364u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x12d368: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12d368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d36c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D36Cu;
    SET_GPR_U32(ctx, 31, 0x12D374u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D36Cu, 0x12D374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D374u;
label_12d374:
    // 0x12d374: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12d374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d378: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12d378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12d37c: 0xac400118  sw          $zero, 0x118($v0)
    ctx->pc = 0x12d37cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 0));
    // 0x12d380: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12d380u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d384: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12d384u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d388: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x12d388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12d38c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d390: 0x24130047  addiu       $s3, $zero, 0x47
    ctx->pc = 0x12d390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x12d394: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12d394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d398: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D398u;
    SET_GPR_U32(ctx, 31, 0x12D3A0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D398u, 0x12D3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D3A0u;
label_12d3a0:
    // 0x12d3a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12d3a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3a4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12d3a8: 0xac540114  sw          $s4, 0x114($v0)
    ctx->pc = 0x12d3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 20));
    // 0x12d3ac: 0x241400ab  addiu       $s4, $zero, 0xAB
    ctx->pc = 0x12d3acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x12d3b0: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12d3b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d3b4: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x12d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12d3b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3bc: 0x24130047  addiu       $s3, $zero, 0x47
    ctx->pc = 0x12d3bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x12d3c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12d3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3c4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D3C4u;
    SET_GPR_U32(ctx, 31, 0x12D3CCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D3C4u, 0x12D3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D3CCu;
label_12d3cc:
    // 0x12d3cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12d3ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3d0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12d3d4: 0xac540124  sw          $s4, 0x124($v0)
    ctx->pc = 0x12d3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 20));
    // 0x12d3d8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12d3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d3dc: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x12d3dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12d3e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3e4: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x12d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x12d3e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12d3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3ec: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D3ECu;
    SET_GPR_U32(ctx, 31, 0x12D3F4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D3ECu, 0x12D3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D3F4u;
label_12d3f4:
    // 0x12d3f4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12d3f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3f8: 0x8eb30000  lw          $s3, 0x0($s5)
    ctx->pc = 0x12d3f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12d3fc: 0xae60011c  sw          $zero, 0x11C($s3)
    ctx->pc = 0x12d3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 0));
    // 0x12d400: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x12d400u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12d404: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12d404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d408: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x12d408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12d40c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d410: 0x24140047  addiu       $s4, $zero, 0x47
    ctx->pc = 0x12d410u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x12d414: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12d414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d418: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D418u;
    SET_GPR_U32(ctx, 31, 0x12D420u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D418u, 0x12D420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D420u;
label_12d420:
    // 0x12d420: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12d420u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d424: 0x8eb60000  lw          $s6, 0x0($s5)
    ctx->pc = 0x12d424u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12d428: 0xaed20120  sw          $s2, 0x120($s6)
    ctx->pc = 0x12d428u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 288), GPR_U32(ctx, 18));
    // 0x12d42c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x12d42cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d430: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12d430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d434: 0x24510030  addiu       $s1, $v0, 0x30
    ctx->pc = 0x12d434u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12d438: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d43c: 0x24130047  addiu       $s3, $zero, 0x47
    ctx->pc = 0x12d43cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x12d440: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12d440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d444: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D444u;
    SET_GPR_U32(ctx, 31, 0x12D44Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D444u, 0x12D44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D44Cu;
label_12d44c:
    // 0x12d44c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12d44cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d450: 0x8e540000  lw          $s4, 0x0($s2)
    ctx->pc = 0x12d450u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12d454: 0xae970118  sw          $s7, 0x118($s4)
    ctx->pc = 0x12d454u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 23));
    // 0x12d458: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12d458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d45c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x12d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12d460: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d464: 0x24150047  addiu       $s5, $zero, 0x47
    ctx->pc = 0x12d464u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x12d468: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12d468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d46c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D46Cu;
    SET_GPR_U32(ctx, 31, 0x12D474u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D46Cu, 0x12D474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D474u;
label_12d474:
    // 0x12d474: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12d474u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d478: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x12d478u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12d47c: 0xae400118  sw          $zero, 0x118($s2)
    ctx->pc = 0x12d47cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 0));
    // 0x12d480: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12d480u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d484: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12d484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d488: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x12d488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12d48c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12d48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d490: 0x24140048  addiu       $s4, $zero, 0x48
    ctx->pc = 0x12d490u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x12d494: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12d494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d498: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D498u;
    SET_GPR_U32(ctx, 31, 0x12D4A0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D498u, 0x12D4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D4A0u;
label_12d4a0:
    // 0x12d4a0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12d4a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4a4: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x12d4a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12d4a8: 0xae510114  sw          $s1, 0x114($s2)
    ctx->pc = 0x12d4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 17));
    // 0x12d4ac: 0x2411006f  addiu       $s1, $zero, 0x6F
    ctx->pc = 0x12d4acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x12d4b0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d4b4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x12d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12d4b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4bc: 0x24140048  addiu       $s4, $zero, 0x48
    ctx->pc = 0x12d4bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x12d4c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12d4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4c4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D4C4u;
    SET_GPR_U32(ctx, 31, 0x12D4CCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D4C4u, 0x12D4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D4CCu;
label_12d4cc:
    // 0x12d4cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12d4ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4d0: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x12d4d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12d4d4: 0xae510124  sw          $s1, 0x124($s2)
    ctx->pc = 0x12d4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 17));
    // 0x12d4d8: 0x2411000b  addiu       $s1, $zero, 0xB
    ctx->pc = 0x12d4d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x12d4dc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d4e0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x12d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12d4e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4e8: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x12d4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x12d4ec: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D4ECu;
    SET_GPR_U32(ctx, 31, 0x12D4F4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D4ECu, 0x12D4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D4F4u;
label_12d4f4:
    // 0x12d4f4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12d4f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4f8: 0x8eb30000  lw          $s3, 0x0($s5)
    ctx->pc = 0x12d4f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12d4fc: 0xae71011c  sw          $s1, 0x11C($s3)
    ctx->pc = 0x12d4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 17));
    // 0x12d500: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x12d500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12d504: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12d504u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d508: 0x26340030  addiu       $s4, $s1, 0x30
    ctx->pc = 0x12d508u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12d50c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12d50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d510: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x12d510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x12d514: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D514u;
    SET_GPR_U32(ctx, 31, 0x12D51Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D514u, 0x12D51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D51Cu;
label_12d51c:
    // 0x12d51c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12d51cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d520: 0x8eb60000  lw          $s6, 0x0($s5)
    ctx->pc = 0x12d520u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12d524: 0xaed20120  sw          $s2, 0x120($s6)
    ctx->pc = 0x12d524u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 288), GPR_U32(ctx, 18));
    // 0x12d528: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x12d528u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d52c: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12d52cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d530: 0x26330030  addiu       $s3, $s1, 0x30
    ctx->pc = 0x12d530u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12d534: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12d534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d538: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x12d538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x12d53c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D53Cu;
    SET_GPR_U32(ctx, 31, 0x12D544u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D53Cu, 0x12D544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D544u;
label_12d544:
    // 0x12d544: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12d544u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d548: 0x8e540000  lw          $s4, 0x0($s2)
    ctx->pc = 0x12d548u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12d54c: 0xae970118  sw          $s7, 0x118($s4)
    ctx->pc = 0x12d54cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 23));
    // 0x12d550: 0x8fb60090  lw          $s6, 0x90($sp)
    ctx->pc = 0x12d550u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d554: 0x26d50030  addiu       $s5, $s6, 0x30
    ctx->pc = 0x12d554u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x12d558: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12d558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d55c: 0x24130048  addiu       $s3, $zero, 0x48
    ctx->pc = 0x12d55cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x12d560: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12d560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d564: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D564u;
    SET_GPR_U32(ctx, 31, 0x12D56Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D564u, 0x12D56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D56Cu;
label_12d56c:
    // 0x12d56c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12d56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d570: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x12d570u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12d574: 0xae400118  sw          $zero, 0x118($s2)
    ctx->pc = 0x12d574u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 0));
label_12d578:
    // 0x12d578: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D578u;
    {
        const bool branch_taken_0x12d578 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d578) {
            ctx->pc = 0x12D590u;
            goto label_12d590;
        }
    }
    ctx->pc = 0x12D580u;
    // 0x12d580: 0x8f91bb70  lw          $s1, -0x4490($gp)
    ctx->pc = 0x12d580u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x12d584: 0x92360001  lbu         $s6, 0x1($s1)
    ctx->pc = 0x12d584u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x12d588: 0x16c0036a  bnez        $s6, . + 4 + (0x36A << 2)
    ctx->pc = 0x12D588u;
    {
        const bool branch_taken_0x12d588 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d588) {
            ctx->pc = 0x12E334u;
            goto label_12e334;
        }
    }
    ctx->pc = 0x12D590u;
label_12d590:
    // 0x12d590: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12d590u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d594: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12d594u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d598: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x12d598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12d59c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12d59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d5a0: 0x24120045  addiu       $s2, $zero, 0x45
    ctx->pc = 0x12d5a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x12d5a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12d5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d5a8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D5A8u;
    SET_GPR_U32(ctx, 31, 0x12D5B0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D5A8u, 0x12D5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D5B0u;
label_12d5b0:
    // 0x12d5b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12d5b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d5b4: 0x8e350000  lw          $s5, 0x0($s1)
    ctx->pc = 0x12d5b4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d5b8: 0xaeb40114  sw          $s4, 0x114($s5)
    ctx->pc = 0x12d5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 276), GPR_U32(ctx, 20));
    // 0x12d5bc: 0x24140020  addiu       $s4, $zero, 0x20
    ctx->pc = 0x12d5bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12d5c0: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12d5c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d5c4: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x12d5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12d5c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12d5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d5cc: 0x24120045  addiu       $s2, $zero, 0x45
    ctx->pc = 0x12d5ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x12d5d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12d5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d5d4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D5D4u;
    SET_GPR_U32(ctx, 31, 0x12D5DCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D5D4u, 0x12D5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D5DCu;
label_12d5dc:
    // 0x12d5dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12d5dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d5e0: 0x8e350000  lw          $s5, 0x0($s1)
    ctx->pc = 0x12d5e0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d5e4: 0xaeb40124  sw          $s4, 0x124($s5)
    ctx->pc = 0x12d5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 292), GPR_U32(ctx, 20));
    // 0x12d5e8: 0x2414000e  addiu       $s4, $zero, 0xE
    ctx->pc = 0x12d5e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12d5ec: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12d5ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d5f0: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x12d5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12d5f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12d5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d5f8: 0x24120045  addiu       $s2, $zero, 0x45
    ctx->pc = 0x12d5f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x12d5fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12d5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d600: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D600u;
    SET_GPR_U32(ctx, 31, 0x12D608u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D600u, 0x12D608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D608u;
label_12d608:
    // 0x12d608: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12d608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d60c: 0x8e350000  lw          $s5, 0x0($s1)
    ctx->pc = 0x12d60cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d610: 0xaeb4011c  sw          $s4, 0x11C($s5)
    ctx->pc = 0x12d610u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 284), GPR_U32(ctx, 20));
    // 0x12d614: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x12d614u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12d618: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12d618u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d61c: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x12d61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12d620: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12d620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d624: 0x24120045  addiu       $s2, $zero, 0x45
    ctx->pc = 0x12d624u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x12d628: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12d628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d62c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D62Cu;
    SET_GPR_U32(ctx, 31, 0x12D634u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D62Cu, 0x12D634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D634u;
label_12d634:
    // 0x12d634: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12d634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d638: 0x8e350000  lw          $s5, 0x0($s1)
    ctx->pc = 0x12d638u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d63c: 0xaeb40120  sw          $s4, 0x120($s5)
    ctx->pc = 0x12d63cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 288), GPR_U32(ctx, 20));
    // 0x12d640: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12d640u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d644: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12d644u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d648: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x12d648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12d64c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12d64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d650: 0x24120045  addiu       $s2, $zero, 0x45
    ctx->pc = 0x12d650u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x12d654: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12d654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d658: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D658u;
    SET_GPR_U32(ctx, 31, 0x12D660u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D658u, 0x12D660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D660u;
label_12d660:
    // 0x12d660: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12d660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d664: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12d664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d668: 0xac540118  sw          $s4, 0x118($v0)
    ctx->pc = 0x12d668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 20));
    // 0x12d66c: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12d66cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d670: 0x26950030  addiu       $s5, $s4, 0x30
    ctx->pc = 0x12d670u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12d674: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12d674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d678: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x12d678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x12d67c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12d67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d680: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D680u;
    SET_GPR_U32(ctx, 31, 0x12D688u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D680u, 0x12D688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D688u;
label_12d688:
    // 0x12d688: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12d688u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d68c: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x12d68cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12d690: 0xae400118  sw          $zero, 0x118($s2)
    ctx->pc = 0x12d690u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 0));
    // 0x12d694: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12d694u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d698: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12d698u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d69c: 0x26960030  addiu       $s6, $s4, 0x30
    ctx->pc = 0x12d69cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12d6a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12d6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d6a4: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x12d6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x12d6a8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D6A8u;
    SET_GPR_U32(ctx, 31, 0x12D6B0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D6A8u, 0x12D6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D6B0u;
label_12d6b0:
    // 0x12d6b0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x12d6b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d6b4: 0x8ef50000  lw          $s5, 0x0($s7)
    ctx->pc = 0x12d6b4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x12d6b8: 0xaeb10114  sw          $s1, 0x114($s5)
    ctx->pc = 0x12d6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 276), GPR_U32(ctx, 17));
    // 0x12d6bc: 0x24110020  addiu       $s1, $zero, 0x20
    ctx->pc = 0x12d6bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12d6c0: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12d6c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d6c4: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x12d6c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12d6c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12d6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d6cc: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x12d6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x12d6d0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D6D0u;
    SET_GPR_U32(ctx, 31, 0x12D6D8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D6D0u, 0x12D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D6D8u;
label_12d6d8:
    // 0x12d6d8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x12d6d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d6dc: 0x8ed70000  lw          $s7, 0x0($s6)
    ctx->pc = 0x12d6dcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12d6e0: 0xaef10124  sw          $s1, 0x124($s7)
    ctx->pc = 0x12d6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 292), GPR_U32(ctx, 17));
    // 0x12d6e4: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x12d6e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12d6e8: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12d6e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d6ec: 0x26330030  addiu       $s3, $s1, 0x30
    ctx->pc = 0x12d6ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12d6f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12d6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d6f4: 0x2412004a  addiu       $s2, $zero, 0x4A
    ctx->pc = 0x12d6f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x12d6f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12d6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d6fc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D6FCu;
    SET_GPR_U32(ctx, 31, 0x12D704u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D6FCu, 0x12D704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D704u;
label_12d704:
    // 0x12d704: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12d704u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d708: 0x8eb60000  lw          $s6, 0x0($s5)
    ctx->pc = 0x12d708u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12d70c: 0xaed4011c  sw          $s4, 0x11C($s6)
    ctx->pc = 0x12d70cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 284), GPR_U32(ctx, 20));
    // 0x12d710: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x12d710u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12d714: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12d714u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d718: 0x26910030  addiu       $s1, $s4, 0x30
    ctx->pc = 0x12d718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12d71c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d720: 0x2413004a  addiu       $s3, $zero, 0x4A
    ctx->pc = 0x12d720u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x12d724: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12d724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d728: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D728u;
    SET_GPR_U32(ctx, 31, 0x12D730u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D728u, 0x12D730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D730u;
label_12d730:
    // 0x12d730: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12d730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d734: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x12d734u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12d738: 0xaeb70120  sw          $s7, 0x120($s5)
    ctx->pc = 0x12d738u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 288), GPR_U32(ctx, 23));
    // 0x12d73c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x12d73cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d740: 0x8fb60090  lw          $s6, 0x90($sp)
    ctx->pc = 0x12d740u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d744: 0x26d10030  addiu       $s1, $s6, 0x30
    ctx->pc = 0x12d744u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x12d748: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d74c: 0x2414004a  addiu       $s4, $zero, 0x4A
    ctx->pc = 0x12d74cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x12d750: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12d750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d754: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D754u;
    SET_GPR_U32(ctx, 31, 0x12D75Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D754u, 0x12D75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D75Cu;
label_12d75c:
    // 0x12d75c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12d75cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d760: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x12d760u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12d764: 0xae570118  sw          $s7, 0x118($s2)
    ctx->pc = 0x12d764u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 23));
    // 0x12d768: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12d768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d76c: 0x24550030  addiu       $s5, $v0, 0x30
    ctx->pc = 0x12d76cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12d770: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12d770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d774: 0x2411004a  addiu       $s1, $zero, 0x4A
    ctx->pc = 0x12d774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x12d778: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12d778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d77c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D77Cu;
    SET_GPR_U32(ctx, 31, 0x12D784u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D77Cu, 0x12D784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D784u;
label_12d784:
    // 0x12d784: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12d784u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d788: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x12d788u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12d78c: 0xae600118  sw          $zero, 0x118($s3)
    ctx->pc = 0x12d78cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 0));
    // 0x12d790: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x12d790u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12d794: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12d794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d798: 0x24550030  addiu       $s5, $v0, 0x30
    ctx->pc = 0x12d798u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12d79c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12d79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7a0: 0x24110069  addiu       $s1, $zero, 0x69
    ctx->pc = 0x12d7a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x12d7a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12d7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7a8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D7A8u;
    SET_GPR_U32(ctx, 31, 0x12D7B0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D7A8u, 0x12D7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D7B0u;
label_12d7b0:
    // 0x12d7b0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12d7b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7b4: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x12d7b4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12d7b8: 0xae720114  sw          $s2, 0x114($s3)
    ctx->pc = 0x12d7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 18));
    // 0x12d7bc: 0x24120093  addiu       $s2, $zero, 0x93
    ctx->pc = 0x12d7bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    // 0x12d7c0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d7c4: 0x24550030  addiu       $s5, $v0, 0x30
    ctx->pc = 0x12d7c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12d7c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12d7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7cc: 0x24110069  addiu       $s1, $zero, 0x69
    ctx->pc = 0x12d7ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x12d7d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12d7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7d4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D7D4u;
    SET_GPR_U32(ctx, 31, 0x12D7DCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D7D4u, 0x12D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D7DCu;
label_12d7dc:
    // 0x12d7dc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12d7dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7e0: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x12d7e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12d7e4: 0xae720124  sw          $s2, 0x124($s3)
    ctx->pc = 0x12d7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 292), GPR_U32(ctx, 18));
    // 0x12d7e8: 0x24120013  addiu       $s2, $zero, 0x13
    ctx->pc = 0x12d7e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x12d7ec: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d7f0: 0x24550030  addiu       $s5, $v0, 0x30
    ctx->pc = 0x12d7f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12d7f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12d7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7f8: 0x24110069  addiu       $s1, $zero, 0x69
    ctx->pc = 0x12d7f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x12d7fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12d7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d800: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D800u;
    SET_GPR_U32(ctx, 31, 0x12D808u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D800u, 0x12D808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D808u;
label_12d808:
    // 0x12d808: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12d808u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d80c: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x12d80cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12d810: 0xae72011c  sw          $s2, 0x11C($s3)
    ctx->pc = 0x12d810u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 18));
    // 0x12d814: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12d814u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d818: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x12d818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12d81c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d820: 0x24150069  addiu       $s5, $zero, 0x69
    ctx->pc = 0x12d820u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x12d824: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12d824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d828: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D828u;
    SET_GPR_U32(ctx, 31, 0x12D830u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D828u, 0x12D830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D830u;
label_12d830:
    // 0x12d830: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12d830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d834: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x12d834u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d838: 0xae800120  sw          $zero, 0x120($s4)
    ctx->pc = 0x12d838u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 0));
    // 0x12d83c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12d83cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d840: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12d840u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d844: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x12d844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12d848: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d84c: 0x24150069  addiu       $s5, $zero, 0x69
    ctx->pc = 0x12d84cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x12d850: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12d850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d854: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D854u;
    SET_GPR_U32(ctx, 31, 0x12D85Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D854u, 0x12D85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D85Cu;
label_12d85c:
    // 0x12d85c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12d85cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d860: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x12d860u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d864: 0xae930118  sw          $s3, 0x118($s4)
    ctx->pc = 0x12d864u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 19));
    // 0x12d868: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x12d868u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12d86c: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12d86cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d870: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x12d870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12d874: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d878: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x12d878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x12d87c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D87Cu;
    SET_GPR_U32(ctx, 31, 0x12D884u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D87Cu, 0x12D884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D884u;
label_12d884:
    // 0x12d884: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12d884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d888: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x12d888u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d88c: 0xae930114  sw          $s3, 0x114($s4)
    ctx->pc = 0x12d88cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 19));
    // 0x12d890: 0x24130094  addiu       $s3, $zero, 0x94
    ctx->pc = 0x12d890u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x12d894: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12d894u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d898: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x12d898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12d89c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8a0: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x12d8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x12d8a4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D8A4u;
    SET_GPR_U32(ctx, 31, 0x12D8ACu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D8A4u, 0x12D8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D8ACu;
label_12d8ac:
    // 0x12d8ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12d8acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8b0: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x12d8b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d8b4: 0xae930124  sw          $s3, 0x124($s4)
    ctx->pc = 0x12d8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 19));
    // 0x12d8b8: 0x24130013  addiu       $s3, $zero, 0x13
    ctx->pc = 0x12d8b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x12d8bc: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12d8bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d8c0: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x12d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12d8c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8c8: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x12d8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x12d8cc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D8CCu;
    SET_GPR_U32(ctx, 31, 0x12D8D4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D8CCu, 0x12D8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D8D4u;
label_12d8d4:
    // 0x12d8d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12d8d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d8dc: 0xac53011c  sw          $s3, 0x11C($v0)
    ctx->pc = 0x12d8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 19));
    // 0x12d8e0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12d8e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d8e4: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12d8e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d8e8: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x12d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12d8ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8f0: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x12d8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x12d8f4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D8F4u;
    SET_GPR_U32(ctx, 31, 0x12D8FCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D8F4u, 0x12D8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D8FCu;
label_12d8fc:
    // 0x12d8fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12d8fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d900: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12d900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d904: 0xac530120  sw          $s3, 0x120($v0)
    ctx->pc = 0x12d904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 19));
    // 0x12d908: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12d908u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d90c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d910: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x12d910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12d914: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x12d914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x12d918: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D918u;
    SET_GPR_U32(ctx, 31, 0x12D920u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D918u, 0x12D920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D920u;
label_12d920:
    // 0x12d920: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12d920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d924: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12d924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d928: 0xac520118  sw          $s2, 0x118($v0)
    ctx->pc = 0x12d928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 18));
    // 0x12d92c: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x12d92cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12d930: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12d930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d934: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12d934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12d938: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d93c: 0x2405006b  addiu       $a1, $zero, 0x6B
    ctx->pc = 0x12d93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x12d940: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D940u;
    SET_GPR_U32(ctx, 31, 0x12D948u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D940u, 0x12D948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D948u;
label_12d948:
    // 0x12d948: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12d948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d94c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12d94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d950: 0xac520114  sw          $s2, 0x114($v0)
    ctx->pc = 0x12d950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 18));
    // 0x12d954: 0x24120095  addiu       $s2, $zero, 0x95
    ctx->pc = 0x12d954u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    // 0x12d958: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12d958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d95c: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12d960: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d964: 0x2405006b  addiu       $a1, $zero, 0x6B
    ctx->pc = 0x12d964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x12d968: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D968u;
    SET_GPR_U32(ctx, 31, 0x12D970u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D968u, 0x12D970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D970u;
label_12d970:
    // 0x12d970: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12d970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d974: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12d974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d978: 0xac520124  sw          $s2, 0x124($v0)
    ctx->pc = 0x12d978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 18));
    // 0x12d97c: 0x24120012  addiu       $s2, $zero, 0x12
    ctx->pc = 0x12d97cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x12d980: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12d980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d984: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12d984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12d988: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d98c: 0x2405006b  addiu       $a1, $zero, 0x6B
    ctx->pc = 0x12d98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x12d990: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D990u;
    SET_GPR_U32(ctx, 31, 0x12D998u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D990u, 0x12D998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D998u;
label_12d998:
    // 0x12d998: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x12d998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12d99c: 0xac92011c  sw          $s2, 0x11C($a0)
    ctx->pc = 0x12d99cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 18));
    // 0x12d9a0: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12d9a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d9a4: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x12d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12d9a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d9ac: 0x2405006b  addiu       $a1, $zero, 0x6B
    ctx->pc = 0x12d9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x12d9b0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D9B0u;
    SET_GPR_U32(ctx, 31, 0x12D9B8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D9B0u, 0x12D9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D9B8u;
label_12d9b8:
    // 0x12d9b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12d9b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d9bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d9c0: 0xac400120  sw          $zero, 0x120($v0)
    ctx->pc = 0x12d9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 0));
    // 0x12d9c4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12d9c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d9c8: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12d9c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d9cc: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x12d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12d9d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d9d4: 0x2414006b  addiu       $s4, $zero, 0x6B
    ctx->pc = 0x12d9d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x12d9d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12d9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d9dc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12D9DCu;
    SET_GPR_U32(ctx, 31, 0x12D9E4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12D9DCu, 0x12D9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D9E4u;
label_12d9e4:
    // 0x12d9e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12d9e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d9e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d9ec: 0xac530118  sw          $s3, 0x118($v0)
    ctx->pc = 0x12d9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 19));
    // 0x12d9f0: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x12d9f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12d9f4: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12d9f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d9f8: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x12d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12d9fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da00: 0x2414006c  addiu       $s4, $zero, 0x6C
    ctx->pc = 0x12da00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x12da04: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12da04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da08: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DA08u;
    SET_GPR_U32(ctx, 31, 0x12DA10u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DA08u, 0x12DA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA10u;
label_12da10:
    // 0x12da10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12da10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da14: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12da14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12da18: 0xac530114  sw          $s3, 0x114($v0)
    ctx->pc = 0x12da18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 19));
    // 0x12da1c: 0x24130096  addiu       $s3, $zero, 0x96
    ctx->pc = 0x12da1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x12da20: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12da20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12da24: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x12da24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12da28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12da28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da2c: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x12da2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x12da30: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DA30u;
    SET_GPR_U32(ctx, 31, 0x12DA38u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DA30u, 0x12DA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA38u;
label_12da38:
    // 0x12da38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12da38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da3c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12da40: 0xac530124  sw          $s3, 0x124($v0)
    ctx->pc = 0x12da40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 19));
    // 0x12da44: 0x24150012  addiu       $s5, $zero, 0x12
    ctx->pc = 0x12da44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x12da48: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12da48u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12da4c: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x12da4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12da50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12da50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da54: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x12da54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x12da58: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DA58u;
    SET_GPR_U32(ctx, 31, 0x12DA60u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DA58u, 0x12DA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA60u;
label_12da60:
    // 0x12da60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12da60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da64: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x12da64u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12da68: 0xae95011c  sw          $s5, 0x11C($s4)
    ctx->pc = 0x12da68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 21));
    // 0x12da6c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x12da6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12da70: 0x8fb60090  lw          $s6, 0x90($sp)
    ctx->pc = 0x12da70u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12da74: 0x26d70030  addiu       $s7, $s6, 0x30
    ctx->pc = 0x12da74u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x12da78: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12da78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da7c: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x12da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x12da80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12da80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da84: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DA84u;
    SET_GPR_U32(ctx, 31, 0x12DA8Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DA84u, 0x12DA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA8Cu;
label_12da8c:
    // 0x12da8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12da8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da90: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x12da90u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12da94: 0xae750120  sw          $s5, 0x120($s3)
    ctx->pc = 0x12da94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 288), GPR_U32(ctx, 21));
    // 0x12da98: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12da98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12da9c: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12da9cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12daa0: 0x26820030  addiu       $v0, $s4, 0x30
    ctx->pc = 0x12daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12daa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12daa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12daa8: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x12daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x12daac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12daacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dab0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DAB0u;
    SET_GPR_U32(ctx, 31, 0x12DAB8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DAB0u, 0x12DAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DAB8u;
label_12dab8:
    // 0x12dab8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12dab8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dabc: 0x8eb30000  lw          $s3, 0x0($s5)
    ctx->pc = 0x12dabcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12dac0: 0xae720118  sw          $s2, 0x118($s3)
    ctx->pc = 0x12dac0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 18));
    // 0x12dac4: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12dac4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12dac8: 0x26510030  addiu       $s1, $s2, 0x30
    ctx->pc = 0x12dac8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12dacc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12daccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dad0: 0x24050069  addiu       $a1, $zero, 0x69
    ctx->pc = 0x12dad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x12dad4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DAD4u;
    SET_GPR_U32(ctx, 31, 0x12DADCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DAD4u, 0x12DADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DADCu;
label_12dadc:
    // 0x12dadc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12dadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dae0: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x12dae0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12dae4: 0xae800118  sw          $zero, 0x118($s4)
    ctx->pc = 0x12dae4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 0));
    // 0x12dae8: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12dae8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12daec: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x12daecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12daf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12daf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12daf4: 0x2411006a  addiu       $s1, $zero, 0x6A
    ctx->pc = 0x12daf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x12daf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12daf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dafc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DAFCu;
    SET_GPR_U32(ctx, 31, 0x12DB04u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DAFCu, 0x12DB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DB04u;
label_12db04:
    // 0x12db04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12db04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12db08: 0xac400118  sw          $zero, 0x118($v0)
    ctx->pc = 0x12db08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 0));
    // 0x12db0c: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12db0cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12db10: 0x26930030  addiu       $s3, $s4, 0x30
    ctx->pc = 0x12db10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12db14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12db14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db18: 0x2412006b  addiu       $s2, $zero, 0x6B
    ctx->pc = 0x12db18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x12db1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12db1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db20: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DB20u;
    SET_GPR_U32(ctx, 31, 0x12DB28u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DB20u, 0x12DB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DB28u;
label_12db28:
    // 0x12db28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12db28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db2c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12db30: 0xac400118  sw          $zero, 0x118($v0)
    ctx->pc = 0x12db30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 0));
    // 0x12db34: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12db34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12db38: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12db38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12db3c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12db3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db40: 0x2415006c  addiu       $s5, $zero, 0x6C
    ctx->pc = 0x12db40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x12db44: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12db44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db48: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DB48u;
    SET_GPR_U32(ctx, 31, 0x12DB50u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DB48u, 0x12DB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DB50u;
label_12db50:
    // 0x12db50: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12db50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db54: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x12db54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12db58: 0xae400118  sw          $zero, 0x118($s2)
    ctx->pc = 0x12db58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 0));
    // 0x12db5c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12db5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12db60: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12db60u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12db64: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x12db64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12db68: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12db68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db6c: 0x2415006d  addiu       $s5, $zero, 0x6D
    ctx->pc = 0x12db6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x12db70: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12db70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db74: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DB74u;
    SET_GPR_U32(ctx, 31, 0x12DB7Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DB74u, 0x12DB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DB7Cu;
label_12db7c:
    // 0x12db7c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x12db7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db80: 0x8ed70000  lw          $s7, 0x0($s6)
    ctx->pc = 0x12db80u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12db84: 0xaef10114  sw          $s1, 0x114($s7)
    ctx->pc = 0x12db84u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 276), GPR_U32(ctx, 17));
    // 0x12db88: 0x2411007a  addiu       $s1, $zero, 0x7A
    ctx->pc = 0x12db88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x12db8c: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12db8cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12db90: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x12db90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12db94: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12db94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db98: 0x2412006d  addiu       $s2, $zero, 0x6D
    ctx->pc = 0x12db98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x12db9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12db9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dba0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DBA0u;
    SET_GPR_U32(ctx, 31, 0x12DBA8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DBA0u, 0x12DBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DBA8u;
label_12dba8:
    // 0x12dba8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12dba8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbac: 0x8e960000  lw          $s6, 0x0($s4)
    ctx->pc = 0x12dbacu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12dbb0: 0xaed10124  sw          $s1, 0x124($s6)
    ctx->pc = 0x12dbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 292), GPR_U32(ctx, 17));
    // 0x12dbb4: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x12dbb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12dbb8: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12dbb8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12dbbc: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x12dbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12dbc0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12dbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbc4: 0x2412006d  addiu       $s2, $zero, 0x6D
    ctx->pc = 0x12dbc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x12dbc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12dbc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbcc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DBCCu;
    SET_GPR_U32(ctx, 31, 0x12DBD4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DBCCu, 0x12DBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DBD4u;
label_12dbd4:
    // 0x12dbd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12dbd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbd8: 0x8e360000  lw          $s6, 0x0($s1)
    ctx->pc = 0x12dbd8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12dbdc: 0xaed5011c  sw          $s5, 0x11C($s6)
    ctx->pc = 0x12dbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 284), GPR_U32(ctx, 21));
    // 0x12dbe0: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x12dbe0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12dbe4: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12dbe4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12dbe8: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x12dbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12dbec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12dbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbf0: 0x2412006d  addiu       $s2, $zero, 0x6D
    ctx->pc = 0x12dbf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x12dbf4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12dbf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbf8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DBF8u;
    SET_GPR_U32(ctx, 31, 0x12DC00u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DBF8u, 0x12DC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC00u;
label_12dc00:
    // 0x12dc00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12dc00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc04: 0x8e350000  lw          $s5, 0x0($s1)
    ctx->pc = 0x12dc04u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12dc08: 0xaeb40120  sw          $s4, 0x120($s5)
    ctx->pc = 0x12dc08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 288), GPR_U32(ctx, 20));
    // 0x12dc0c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12dc0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12dc10: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12dc10u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12dc14: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x12dc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12dc18: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12dc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc1c: 0x2412006d  addiu       $s2, $zero, 0x6D
    ctx->pc = 0x12dc1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x12dc20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12dc20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc24: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DC24u;
    SET_GPR_U32(ctx, 31, 0x12DC2Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DC24u, 0x12DC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC2Cu;
label_12dc2c:
    // 0x12dc2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12dc2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc30: 0x8e350000  lw          $s5, 0x0($s1)
    ctx->pc = 0x12dc30u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12dc34: 0xaeb40118  sw          $s4, 0x118($s5)
    ctx->pc = 0x12dc34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 280), GPR_U32(ctx, 20));
    // 0x12dc38: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12dc38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12dc3c: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12dc3cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12dc40: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x12dc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12dc44: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12dc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc48: 0x2412006e  addiu       $s2, $zero, 0x6E
    ctx->pc = 0x12dc48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x12dc4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12dc4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc50: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DC50u;
    SET_GPR_U32(ctx, 31, 0x12DC58u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DC50u, 0x12DC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC58u;
label_12dc58:
    // 0x12dc58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12dc58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc5c: 0x8e350000  lw          $s5, 0x0($s1)
    ctx->pc = 0x12dc5cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12dc60: 0xaeb40114  sw          $s4, 0x114($s5)
    ctx->pc = 0x12dc60u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 276), GPR_U32(ctx, 20));
    // 0x12dc64: 0x24140073  addiu       $s4, $zero, 0x73
    ctx->pc = 0x12dc64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x12dc68: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12dc68u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12dc6c: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x12dc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12dc70: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12dc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc74: 0x2412006e  addiu       $s2, $zero, 0x6E
    ctx->pc = 0x12dc74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x12dc78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12dc78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc7c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DC7Cu;
    SET_GPR_U32(ctx, 31, 0x12DC84u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DC7Cu, 0x12DC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC84u;
label_12dc84:
    // 0x12dc84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12dc84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc88: 0x8e350000  lw          $s5, 0x0($s1)
    ctx->pc = 0x12dc88u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12dc8c: 0xaeb40124  sw          $s4, 0x124($s5)
    ctx->pc = 0x12dc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 292), GPR_U32(ctx, 20));
    // 0x12dc90: 0x24140006  addiu       $s4, $zero, 0x6
    ctx->pc = 0x12dc90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12dc94: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12dc94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12dc98: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x12dc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12dc9c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12dc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dca0: 0x2412006e  addiu       $s2, $zero, 0x6E
    ctx->pc = 0x12dca0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x12dca4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12dca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dca8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DCA8u;
    SET_GPR_U32(ctx, 31, 0x12DCB0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DCA8u, 0x12DCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DCB0u;
label_12dcb0:
    // 0x12dcb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12dcb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dcb4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12dcb8: 0xac54011c  sw          $s4, 0x11C($v0)
    ctx->pc = 0x12dcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 20));
    // 0x12dcbc: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x12dcbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12dcc0: 0x8fb50090  lw          $s5, 0x90($sp)
    ctx->pc = 0x12dcc0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12dcc4: 0x26a20030  addiu       $v0, $s5, 0x30
    ctx->pc = 0x12dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x12dcc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12dcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dccc: 0x2413006e  addiu       $s3, $zero, 0x6E
    ctx->pc = 0x12dcccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x12dcd0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12dcd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dcd4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DCD4u;
    SET_GPR_U32(ctx, 31, 0x12DCDCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DCD4u, 0x12DCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DCDCu;
label_12dcdc:
    // 0x12dcdc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12dcdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dce0: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x12dce0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12dce4: 0xae340120  sw          $s4, 0x120($s1)
    ctx->pc = 0x12dce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 20));
    // 0x12dce8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12dce8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12dcec: 0x8fb60090  lw          $s6, 0x90($sp)
    ctx->pc = 0x12dcecu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12dcf0: 0x26c50030  addiu       $a1, $s6, 0x30
    ctx->pc = 0x12dcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x12dcf4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12dcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dcf8: 0x2417006e  addiu       $s7, $zero, 0x6E
    ctx->pc = 0x12dcf8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x12dcfc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12dcfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd00: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DD00u;
    SET_GPR_U32(ctx, 31, 0x12DD08u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DD00u, 0x12DD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD08u;
label_12dd08:
    // 0x12dd08: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12dd08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd0c: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x12dd0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12dd10: 0xae340118  sw          $s4, 0x118($s1)
    ctx->pc = 0x12dd10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 20));
    // 0x12dd14: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12dd14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12dd18: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12dd18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12dd1c: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x12dd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12dd20: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12dd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd24: 0x2416006f  addiu       $s6, $zero, 0x6F
    ctx->pc = 0x12dd24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x12dd28: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x12dd28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd2c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DD2Cu;
    SET_GPR_U32(ctx, 31, 0x12DD34u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DD2Cu, 0x12DD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD34u;
label_12dd34:
    // 0x12dd34: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x12dd34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd38: 0x8ef40000  lw          $s4, 0x0($s7)
    ctx->pc = 0x12dd38u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x12dd3c: 0xae930114  sw          $s3, 0x114($s4)
    ctx->pc = 0x12dd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 19));
    // 0x12dd40: 0x24110071  addiu       $s1, $zero, 0x71
    ctx->pc = 0x12dd40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x12dd44: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12dd44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12dd48: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x12dd48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12dd4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12dd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd50: 0x2415006f  addiu       $s5, $zero, 0x6F
    ctx->pc = 0x12dd50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x12dd54: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12dd54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd58: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DD58u;
    SET_GPR_U32(ctx, 31, 0x12DD60u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DD58u, 0x12DD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD60u;
label_12dd60:
    // 0x12dd60: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x12dd60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd64: 0x8ed70000  lw          $s7, 0x0($s6)
    ctx->pc = 0x12dd64u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12dd68: 0xaef10124  sw          $s1, 0x124($s7)
    ctx->pc = 0x12dd68u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 292), GPR_U32(ctx, 17));
    // 0x12dd6c: 0x24140007  addiu       $s4, $zero, 0x7
    ctx->pc = 0x12dd6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12dd70: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12dd70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12dd74: 0x26330030  addiu       $s3, $s1, 0x30
    ctx->pc = 0x12dd74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12dd78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12dd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd7c: 0x2412006f  addiu       $s2, $zero, 0x6F
    ctx->pc = 0x12dd7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x12dd80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12dd80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd84: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DD84u;
    SET_GPR_U32(ctx, 31, 0x12DD8Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DD84u, 0x12DD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD8Cu;
label_12dd8c:
    // 0x12dd8c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12dd8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd90: 0x8eb70000  lw          $s7, 0x0($s5)
    ctx->pc = 0x12dd90u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12dd94: 0xaef4011c  sw          $s4, 0x11C($s7)
    ctx->pc = 0x12dd94u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 284), GPR_U32(ctx, 20));
    // 0x12dd98: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x12dd98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12dd9c: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12dd9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12dda0: 0x26340030  addiu       $s4, $s1, 0x30
    ctx->pc = 0x12dda0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12dda4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12dda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dda8: 0x2413006f  addiu       $s3, $zero, 0x6F
    ctx->pc = 0x12dda8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x12ddac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12ddacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ddb0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DDB0u;
    SET_GPR_U32(ctx, 31, 0x12DDB8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DDB0u, 0x12DDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DDB8u;
label_12ddb8:
    // 0x12ddb8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12ddb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ddbc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12ddc0: 0xac560120  sw          $s6, 0x120($v0)
    ctx->pc = 0x12ddc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 22));
    // 0x12ddc4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x12ddc4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ddc8: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12ddc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12ddcc: 0x26340030  addiu       $s4, $s1, 0x30
    ctx->pc = 0x12ddccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12ddd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12ddd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ddd4: 0x2413006f  addiu       $s3, $zero, 0x6F
    ctx->pc = 0x12ddd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x12ddd8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12ddd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dddc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DDDCu;
    SET_GPR_U32(ctx, 31, 0x12DDE4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DDDCu, 0x12DDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DDE4u;
label_12dde4:
    // 0x12dde4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12dde4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dde8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12ddec: 0xac550118  sw          $s5, 0x118($v0)
    ctx->pc = 0x12ddecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 21));
    // 0x12ddf0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x12ddf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ddf4: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12ddf4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12ddf8: 0x26340030  addiu       $s4, $s1, 0x30
    ctx->pc = 0x12ddf8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12ddfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12ddfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de00: 0x24130070  addiu       $s3, $zero, 0x70
    ctx->pc = 0x12de00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x12de04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12de04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de08: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DE08u;
    SET_GPR_U32(ctx, 31, 0x12DE10u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DE08u, 0x12DE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE10u;
label_12de10:
    // 0x12de10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12de10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de14: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12de14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12de18: 0xac550114  sw          $s5, 0x114($v0)
    ctx->pc = 0x12de18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 21));
    // 0x12de1c: 0x24150064  addiu       $s5, $zero, 0x64
    ctx->pc = 0x12de1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x12de20: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12de20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12de24: 0x26340030  addiu       $s4, $s1, 0x30
    ctx->pc = 0x12de24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12de28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12de28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de2c: 0x24130070  addiu       $s3, $zero, 0x70
    ctx->pc = 0x12de2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x12de30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12de30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de34: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DE34u;
    SET_GPR_U32(ctx, 31, 0x12DE3Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DE34u, 0x12DE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE3Cu;
label_12de3c:
    // 0x12de3c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12de3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de40: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12de40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12de44: 0xac550124  sw          $s5, 0x124($v0)
    ctx->pc = 0x12de44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 21));
    // 0x12de48: 0x24150005  addiu       $s5, $zero, 0x5
    ctx->pc = 0x12de48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12de4c: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12de4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12de50: 0x26340030  addiu       $s4, $s1, 0x30
    ctx->pc = 0x12de50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12de54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12de54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de58: 0x24130070  addiu       $s3, $zero, 0x70
    ctx->pc = 0x12de58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x12de5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12de5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de60: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DE60u;
    SET_GPR_U32(ctx, 31, 0x12DE68u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DE60u, 0x12DE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE68u;
label_12de68:
    // 0x12de68: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12de68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de6c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12de70: 0xac55011c  sw          $s5, 0x11C($v0)
    ctx->pc = 0x12de70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 21));
    // 0x12de74: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x12de74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12de78: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12de78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12de7c: 0x26340030  addiu       $s4, $s1, 0x30
    ctx->pc = 0x12de7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12de80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12de80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de84: 0x24130070  addiu       $s3, $zero, 0x70
    ctx->pc = 0x12de84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x12de88: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12de88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de8c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DE8Cu;
    SET_GPR_U32(ctx, 31, 0x12DE94u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DE8Cu, 0x12DE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE94u;
label_12de94:
    // 0x12de94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12de94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de98: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12de98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12de9c: 0xac550120  sw          $s5, 0x120($v0)
    ctx->pc = 0x12de9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 21));
    // 0x12dea0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x12dea0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12dea4: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12dea4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12dea8: 0x26340030  addiu       $s4, $s1, 0x30
    ctx->pc = 0x12dea8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12deac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12deacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12deb0: 0x24130070  addiu       $s3, $zero, 0x70
    ctx->pc = 0x12deb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x12deb4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12deb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12deb8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DEB8u;
    SET_GPR_U32(ctx, 31, 0x12DEC0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DEB8u, 0x12DEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DEC0u;
label_12dec0:
    // 0x12dec0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12dec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dec4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12dec8: 0xac550118  sw          $s5, 0x118($v0)
    ctx->pc = 0x12dec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 21));
    // 0x12decc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12deccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12ded0: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x12ded0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12ded4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ded4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ded8: 0x2414006d  addiu       $s4, $zero, 0x6D
    ctx->pc = 0x12ded8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x12dedc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12dedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dee0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DEE0u;
    SET_GPR_U32(ctx, 31, 0x12DEE8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DEE0u, 0x12DEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DEE8u;
label_12dee8:
    // 0x12dee8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12dee8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12deec: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x12deecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12def0: 0xae400118  sw          $zero, 0x118($s2)
    ctx->pc = 0x12def0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 0));
    // 0x12def4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12def4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12def8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12def8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12defc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12defcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df00: 0x2411006e  addiu       $s1, $zero, 0x6E
    ctx->pc = 0x12df00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x12df04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12df04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df08: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DF08u;
    SET_GPR_U32(ctx, 31, 0x12DF10u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DF08u, 0x12DF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF10u;
label_12df10:
    // 0x12df10: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12df10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df14: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x12df14u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12df18: 0xae600118  sw          $zero, 0x118($s3)
    ctx->pc = 0x12df18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 0));
    // 0x12df1c: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12df1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12df20: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x12df20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12df24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12df24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df28: 0x2405006f  addiu       $a1, $zero, 0x6F
    ctx->pc = 0x12df28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x12df2c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DF2Cu;
    SET_GPR_U32(ctx, 31, 0x12DF34u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DF2Cu, 0x12DF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF34u;
label_12df34:
    // 0x12df34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12df34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12df38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12df3c: 0xac400118  sw          $zero, 0x118($v0)
    ctx->pc = 0x12df3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 0));
    // 0x12df40: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12df40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12df44: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x12df44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12df48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12df48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df4c: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x12df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x12df50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12df50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df54: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DF54u;
    SET_GPR_U32(ctx, 31, 0x12DF5Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DF54u, 0x12DF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF5Cu;
label_12df5c:
    // 0x12df5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12df5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df60: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x12df60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12df64: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x12df64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
    // 0x12df68: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12df68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12df6c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12df6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12df70: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x12df70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12df74: 0x24050071  addiu       $a1, $zero, 0x71
    ctx->pc = 0x12df74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x12df78: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DF78u;
    SET_GPR_U32(ctx, 31, 0x12DF80u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DF78u, 0x12DF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF80u;
label_12df80:
    // 0x12df80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12df80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df84: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12df84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12df88: 0xac520114  sw          $s2, 0x114($v0)
    ctx->pc = 0x12df88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 18));
    // 0x12df8c: 0x24120069  addiu       $s2, $zero, 0x69
    ctx->pc = 0x12df8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x12df90: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12df90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12df94: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12df94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12df98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12df98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df9c: 0x24050071  addiu       $a1, $zero, 0x71
    ctx->pc = 0x12df9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x12dfa0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DFA0u;
    SET_GPR_U32(ctx, 31, 0x12DFA8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DFA0u, 0x12DFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DFA8u;
label_12dfa8:
    // 0x12dfa8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12dfa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dfac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12dfb0: 0xac520124  sw          $s2, 0x124($v0)
    ctx->pc = 0x12dfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 18));
    // 0x12dfb4: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x12dfb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12dfb8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12dfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12dfbc: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12dfc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12dfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dfc4: 0x24050071  addiu       $a1, $zero, 0x71
    ctx->pc = 0x12dfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x12dfc8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DFC8u;
    SET_GPR_U32(ctx, 31, 0x12DFD0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DFC8u, 0x12DFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DFD0u;
label_12dfd0:
    // 0x12dfd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12dfd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dfd4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12dfd8: 0xac52011c  sw          $s2, 0x11C($v0)
    ctx->pc = 0x12dfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 18));
    // 0x12dfdc: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x12dfdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12dfe0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12dfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12dfe4: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12dfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12dfe8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12dfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dfec: 0x24050071  addiu       $a1, $zero, 0x71
    ctx->pc = 0x12dfecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x12dff0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12DFF0u;
    SET_GPR_U32(ctx, 31, 0x12DFF8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12DFF0u, 0x12DFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DFF8u;
label_12dff8:
    // 0x12dff8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x12dff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12dffc: 0xac920120  sw          $s2, 0x120($a0)
    ctx->pc = 0x12dffcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 288), GPR_U32(ctx, 18));
    // 0x12e000: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12e000u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e004: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12e004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e008: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12e008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12e00c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12e00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e010: 0x24110071  addiu       $s1, $zero, 0x71
    ctx->pc = 0x12e010u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x12e014: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12e014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e018: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E018u;
    SET_GPR_U32(ctx, 31, 0x12E020u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E018u, 0x12E020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E020u;
label_12e020:
    // 0x12e020: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x12e020u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e024: 0xae720118  sw          $s2, 0x118($s3)
    ctx->pc = 0x12e024u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 18));
    // 0x12e028: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12e028u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e02c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e030: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x12e030u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12e034: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e038: 0x24110072  addiu       $s1, $zero, 0x72
    ctx->pc = 0x12e038u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x12e03c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12e03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e040: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E040u;
    SET_GPR_U32(ctx, 31, 0x12E048u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E040u, 0x12E048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E048u;
label_12e048:
    // 0x12e048: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x12e048u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e04c: 0xae720114  sw          $s2, 0x114($s3)
    ctx->pc = 0x12e04cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 18));
    // 0x12e050: 0x2412006a  addiu       $s2, $zero, 0x6A
    ctx->pc = 0x12e050u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x12e054: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12e054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e058: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x12e058u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12e05c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e060: 0x24110072  addiu       $s1, $zero, 0x72
    ctx->pc = 0x12e060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x12e064: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12e064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e068: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E068u;
    SET_GPR_U32(ctx, 31, 0x12E070u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E068u, 0x12E070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E070u;
label_12e070:
    // 0x12e070: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x12e070u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e074: 0xae720124  sw          $s2, 0x124($s3)
    ctx->pc = 0x12e074u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 292), GPR_U32(ctx, 18));
    // 0x12e078: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x12e078u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x12e07c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e080: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12e080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12e084: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12e084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e088: 0x24110072  addiu       $s1, $zero, 0x72
    ctx->pc = 0x12e088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x12e08c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12e08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e090: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E090u;
    SET_GPR_U32(ctx, 31, 0x12E098u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E090u, 0x12E098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E098u;
label_12e098:
    // 0x12e098: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x12e098u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e09c: 0xaeb2011c  sw          $s2, 0x11C($s5)
    ctx->pc = 0x12e09cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 284), GPR_U32(ctx, 18));
    // 0x12e0a0: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x12e0a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e0a4: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12e0a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e0a8: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x12e0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12e0ac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12e0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e0b0: 0x24110072  addiu       $s1, $zero, 0x72
    ctx->pc = 0x12e0b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x12e0b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12e0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e0b8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E0B8u;
    SET_GPR_U32(ctx, 31, 0x12E0C0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E0B8u, 0x12E0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E0C0u;
label_12e0c0:
    // 0x12e0c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12e0c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e0c4: 0x8e950000  lw          $s5, 0x0($s4)
    ctx->pc = 0x12e0c4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12e0c8: 0xaeb30120  sw          $s3, 0x120($s5)
    ctx->pc = 0x12e0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 288), GPR_U32(ctx, 19));
    // 0x12e0cc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x12e0ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e0d0: 0x8fb70090  lw          $s7, 0x90($sp)
    ctx->pc = 0x12e0d0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e0d4: 0x26e20030  addiu       $v0, $s7, 0x30
    ctx->pc = 0x12e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x12e0d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12e0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e0dc: 0x24110072  addiu       $s1, $zero, 0x72
    ctx->pc = 0x12e0dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x12e0e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12e0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e0e4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E0E4u;
    SET_GPR_U32(ctx, 31, 0x12E0ECu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E0E4u, 0x12E0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E0ECu;
label_12e0ec:
    // 0x12e0ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12e0ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e0f0: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x12e0f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12e0f4: 0xae560118  sw          $s6, 0x118($s2)
    ctx->pc = 0x12e0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 22));
    // 0x12e0f8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12e0f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e0fc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e100: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x12e100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12e104: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12e104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e108: 0x24150073  addiu       $s5, $zero, 0x73
    ctx->pc = 0x12e108u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x12e10c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12e10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e110: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E110u;
    SET_GPR_U32(ctx, 31, 0x12E118u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E110u, 0x12E118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E118u;
label_12e118:
    // 0x12e118: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12e118u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e11c: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x12e11cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12e120: 0xae540114  sw          $s4, 0x114($s2)
    ctx->pc = 0x12e120u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 20));
    // 0x12e124: 0x2411006b  addiu       $s1, $zero, 0x6B
    ctx->pc = 0x12e124u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x12e128: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12e128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e12c: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x12e12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12e130: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12e130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e134: 0x24140073  addiu       $s4, $zero, 0x73
    ctx->pc = 0x12e134u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x12e138: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12e138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e13c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E13Cu;
    SET_GPR_U32(ctx, 31, 0x12E144u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E13Cu, 0x12E144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E144u;
label_12e144:
    // 0x12e144: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12e144u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e148: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x12e148u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12e14c: 0xae510124  sw          $s1, 0x124($s2)
    ctx->pc = 0x12e14cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 17));
    // 0x12e150: 0x2411000e  addiu       $s1, $zero, 0xE
    ctx->pc = 0x12e150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12e154: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12e154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e158: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x12e158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12e15c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12e15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e160: 0x24140073  addiu       $s4, $zero, 0x73
    ctx->pc = 0x12e160u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x12e164: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12e164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e168: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E168u;
    SET_GPR_U32(ctx, 31, 0x12E170u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E168u, 0x12E170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E170u;
label_12e170:
    // 0x12e170: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12e170u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e174: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x12e174u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12e178: 0xae51011c  sw          $s1, 0x11C($s2)
    ctx->pc = 0x12e178u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 284), GPR_U32(ctx, 17));
    // 0x12e17c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x12e17cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e180: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12e180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e184: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x12e184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12e188: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12e188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e18c: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x12e18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x12e190: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E190u;
    SET_GPR_U32(ctx, 31, 0x12E198u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E190u, 0x12E198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E198u;
label_12e198:
    // 0x12e198: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12e198u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e19c: 0x8eb30000  lw          $s3, 0x0($s5)
    ctx->pc = 0x12e19cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12e1a0: 0xae710120  sw          $s1, 0x120($s3)
    ctx->pc = 0x12e1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 288), GPR_U32(ctx, 17));
    // 0x12e1a4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12e1a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e1a8: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12e1a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e1ac: 0x26340030  addiu       $s4, $s1, 0x30
    ctx->pc = 0x12e1acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12e1b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e1b4: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x12e1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x12e1b8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E1B8u;
    SET_GPR_U32(ctx, 31, 0x12E1C0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E1B8u, 0x12E1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E1C0u;
label_12e1c0:
    // 0x12e1c0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12e1c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e1c4: 0x8eb60000  lw          $s6, 0x0($s5)
    ctx->pc = 0x12e1c4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12e1c8: 0xaed20118  sw          $s2, 0x118($s6)
    ctx->pc = 0x12e1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 280), GPR_U32(ctx, 18));
    // 0x12e1cc: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x12e1ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e1d0: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12e1d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e1d4: 0x26330030  addiu       $s3, $s1, 0x30
    ctx->pc = 0x12e1d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12e1d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12e1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e1dc: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x12e1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x12e1e0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E1E0u;
    SET_GPR_U32(ctx, 31, 0x12E1E8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E1E0u, 0x12E1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E1E8u;
label_12e1e8:
    // 0x12e1e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12e1e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e1ec: 0x8e540000  lw          $s4, 0x0($s2)
    ctx->pc = 0x12e1ecu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12e1f0: 0xae970114  sw          $s7, 0x114($s4)
    ctx->pc = 0x12e1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 23));
    // 0x12e1f4: 0x2416006c  addiu       $s6, $zero, 0x6C
    ctx->pc = 0x12e1f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x12e1f8: 0x8fb50090  lw          $s5, 0x90($sp)
    ctx->pc = 0x12e1f8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e1fc: 0x26b30030  addiu       $s3, $s5, 0x30
    ctx->pc = 0x12e1fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x12e200: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12e200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e204: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x12e204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x12e208: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E208u;
    SET_GPR_U32(ctx, 31, 0x12E210u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E208u, 0x12E210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E210u;
label_12e210:
    // 0x12e210: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12e210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e214: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x12e214u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12e218: 0xae360124  sw          $s6, 0x124($s1)
    ctx->pc = 0x12e218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 22));
    // 0x12e21c: 0x2416000d  addiu       $s6, $zero, 0xD
    ctx->pc = 0x12e21cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x12e220: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12e220u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e224: 0x26930030  addiu       $s3, $s4, 0x30
    ctx->pc = 0x12e224u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12e228: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12e228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e22c: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x12e22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x12e230: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E230u;
    SET_GPR_U32(ctx, 31, 0x12E238u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E230u, 0x12E238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E238u;
label_12e238:
    // 0x12e238: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12e238u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e23c: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x12e23cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12e240: 0xae36011c  sw          $s6, 0x11C($s1)
    ctx->pc = 0x12e240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 22));
    // 0x12e244: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x12e244u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e248: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12e248u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e24c: 0x26930030  addiu       $s3, $s4, 0x30
    ctx->pc = 0x12e24cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12e250: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12e250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e254: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x12e254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x12e258: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E258u;
    SET_GPR_U32(ctx, 31, 0x12E260u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E258u, 0x12E260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E260u;
label_12e260:
    // 0x12e260: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12e260u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e264: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x12e264u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12e268: 0xae350120  sw          $s5, 0x120($s1)
    ctx->pc = 0x12e268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 21));
    // 0x12e26c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x12e26cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e270: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12e270u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e274: 0x26930030  addiu       $s3, $s4, 0x30
    ctx->pc = 0x12e274u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12e278: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12e278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e27c: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x12e27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x12e280: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E280u;
    SET_GPR_U32(ctx, 31, 0x12E288u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E280u, 0x12E288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E288u;
label_12e288:
    // 0x12e288: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12e288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e28c: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x12e28cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12e290: 0xae350118  sw          $s5, 0x118($s1)
    ctx->pc = 0x12e290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 21));
    // 0x12e294: 0x8fb50090  lw          $s5, 0x90($sp)
    ctx->pc = 0x12e294u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e298: 0x26b40030  addiu       $s4, $s5, 0x30
    ctx->pc = 0x12e298u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x12e29c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2a0: 0x24130071  addiu       $s3, $zero, 0x71
    ctx->pc = 0x12e2a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x12e2a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12e2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2a8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E2A8u;
    SET_GPR_U32(ctx, 31, 0x12E2B0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E2A8u, 0x12E2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E2B0u;
label_12e2b0:
    // 0x12e2b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2b4: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x12e2b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12e2b8: 0xae400118  sw          $zero, 0x118($s2)
    ctx->pc = 0x12e2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 0));
    // 0x12e2bc: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12e2bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e2c0: 0x26350030  addiu       $s5, $s1, 0x30
    ctx->pc = 0x12e2c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12e2c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12e2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2c8: 0x24140072  addiu       $s4, $zero, 0x72
    ctx->pc = 0x12e2c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x12e2cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12e2ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2d0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E2D0u;
    SET_GPR_U32(ctx, 31, 0x12E2D8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E2D0u, 0x12E2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E2D8u;
label_12e2d8:
    // 0x12e2d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12e2d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2dc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x12e2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12e2e0: 0xaca00118  sw          $zero, 0x118($a1)
    ctx->pc = 0x12e2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 280), GPR_U32(ctx, 0));
    // 0x12e2e4: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12e2e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e2e8: 0x26510030  addiu       $s1, $s2, 0x30
    ctx->pc = 0x12e2e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12e2ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2f0: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x12e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x12e2f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2f8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E2F8u;
    SET_GPR_U32(ctx, 31, 0x12E300u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E2F8u, 0x12E300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E300u;
label_12e300:
    // 0x12e300: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12e300u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e304: 0x8e950000  lw          $s5, 0x0($s4)
    ctx->pc = 0x12e304u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12e308: 0xaea00118  sw          $zero, 0x118($s5)
    ctx->pc = 0x12e308u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 280), GPR_U32(ctx, 0));
    // 0x12e30c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12e30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e310: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x12e310u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12e314: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12e314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e318: 0x24120074  addiu       $s2, $zero, 0x74
    ctx->pc = 0x12e318u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x12e31c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12e31cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e320: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E320u;
    SET_GPR_U32(ctx, 31, 0x12E328u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E320u, 0x12E328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E328u;
label_12e328:
    // 0x12e328: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12e328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e32c: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x12e32cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12e330: 0xae800118  sw          $zero, 0x118($s4)
    ctx->pc = 0x12e330u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 0));
label_12e334:
    // 0x12e334: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E334u;
    {
        const bool branch_taken_0x12e334 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e334) {
            ctx->pc = 0x12E34Cu;
            goto label_12e34c;
        }
    }
    ctx->pc = 0x12E33Cu;
    // 0x12e33c: 0x8f96bb70  lw          $s6, -0x4490($gp)
    ctx->pc = 0x12e33cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x12e340: 0x92c50001  lbu         $a1, 0x1($s6)
    ctx->pc = 0x12e340u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x12e344: 0x14a001a5  bnez        $a1, . + 4 + (0x1A5 << 2)
    ctx->pc = 0x12E344u;
    {
        const bool branch_taken_0x12e344 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e344) {
            ctx->pc = 0x12E9DCu;
            goto label_12e9dc;
        }
    }
    ctx->pc = 0x12E34Cu;
label_12e34c:
    // 0x12e34c: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x12e34cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e350: 0x8fb50090  lw          $s5, 0x90($sp)
    ctx->pc = 0x12e350u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e354: 0x26b10030  addiu       $s1, $s5, 0x30
    ctx->pc = 0x12e354u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x12e358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e35c: 0x2413005e  addiu       $s3, $zero, 0x5E
    ctx->pc = 0x12e35cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x12e360: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12e360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e364: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E364u;
    SET_GPR_U32(ctx, 31, 0x12E36Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E364u, 0x12E36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E36Cu;
label_12e36c:
    // 0x12e36c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12e36cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e370: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x12e370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12e374: 0xacb70114  sw          $s7, 0x114($a1)
    ctx->pc = 0x12e374u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 276), GPR_U32(ctx, 23));
    // 0x12e378: 0x2416008e  addiu       $s6, $zero, 0x8E
    ctx->pc = 0x12e378u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x12e37c: 0x8fb70090  lw          $s7, 0x90($sp)
    ctx->pc = 0x12e37cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e380: 0x26f40030  addiu       $s4, $s7, 0x30
    ctx->pc = 0x12e380u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x12e384: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e388: 0x2411005e  addiu       $s1, $zero, 0x5E
    ctx->pc = 0x12e388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x12e38c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12e38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e390: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E390u;
    SET_GPR_U32(ctx, 31, 0x12E398u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E390u, 0x12E398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E398u;
label_12e398:
    // 0x12e398: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12e398u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e39c: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x12e39cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12e3a0: 0xae560124  sw          $s6, 0x124($s2)
    ctx->pc = 0x12e3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 22));
    // 0x12e3a4: 0x24150010  addiu       $s5, $zero, 0x10
    ctx->pc = 0x12e3a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12e3a8: 0x8fb60090  lw          $s6, 0x90($sp)
    ctx->pc = 0x12e3a8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e3ac: 0x26d70030  addiu       $s7, $s6, 0x30
    ctx->pc = 0x12e3acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x12e3b0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12e3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e3b4: 0x2414005e  addiu       $s4, $zero, 0x5E
    ctx->pc = 0x12e3b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x12e3b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12e3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e3bc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E3BCu;
    SET_GPR_U32(ctx, 31, 0x12E3C4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E3BCu, 0x12E3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E3C4u;
label_12e3c4:
    // 0x12e3c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12e3c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e3c8: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x12e3c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12e3cc: 0xae75011c  sw          $s5, 0x11C($s3)
    ctx->pc = 0x12e3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 21));
    // 0x12e3d0: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12e3d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e3d4: 0x26550030  addiu       $s5, $s2, 0x30
    ctx->pc = 0x12e3d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12e3d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12e3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e3dc: 0x2417005e  addiu       $s7, $zero, 0x5E
    ctx->pc = 0x12e3dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x12e3e0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12e3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e3e4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E3E4u;
    SET_GPR_U32(ctx, 31, 0x12E3ECu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E3E4u, 0x12E3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E3ECu;
label_12e3ec:
    // 0x12e3ec: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x12e3ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e3f0: 0x8ed10000  lw          $s1, 0x0($s6)
    ctx->pc = 0x12e3f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12e3f4: 0xae200120  sw          $zero, 0x120($s1)
    ctx->pc = 0x12e3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
    // 0x12e3f8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12e3f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e3fc: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12e3fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e400: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x12e400u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12e404: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12e404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e408: 0x2402005e  addiu       $v0, $zero, 0x5E
    ctx->pc = 0x12e408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x12e40c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e410: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E410u;
    SET_GPR_U32(ctx, 31, 0x12E418u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E410u, 0x12E418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E418u;
label_12e418:
    // 0x12e418: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12e418u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e41c: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x12e41cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12e420: 0xae340118  sw          $s4, 0x118($s1)
    ctx->pc = 0x12e420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 20));
    // 0x12e424: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x12e424u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e428: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12e428u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e42c: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x12e42cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12e430: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12e430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e434: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x12e434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x12e438: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e43c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E43Cu;
    SET_GPR_U32(ctx, 31, 0x12E444u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E43Cu, 0x12E444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E444u;
label_12e444:
    // 0x12e444: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12e444u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e448: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x12e448u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12e44c: 0xae340114  sw          $s4, 0x114($s1)
    ctx->pc = 0x12e44cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 20));
    // 0x12e450: 0x24140092  addiu       $s4, $zero, 0x92
    ctx->pc = 0x12e450u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
    // 0x12e454: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12e454u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e458: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x12e458u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12e45c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12e45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e460: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x12e460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x12e464: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e468: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E468u;
    SET_GPR_U32(ctx, 31, 0x12E470u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E468u, 0x12E470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E470u;
label_12e470:
    // 0x12e470: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12e470u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e474: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x12e474u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12e478: 0xae340124  sw          $s4, 0x124($s1)
    ctx->pc = 0x12e478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 20));
    // 0x12e47c: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x12e47cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12e480: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12e480u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e484: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x12e484u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12e488: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12e488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e48c: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x12e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x12e490: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e494: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E494u;
    SET_GPR_U32(ctx, 31, 0x12E49Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E494u, 0x12E49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E49Cu;
label_12e49c:
    // 0x12e49c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12e49cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4a0: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x12e4a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12e4a4: 0xae34011c  sw          $s4, 0x11C($s1)
    ctx->pc = 0x12e4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 20));
    // 0x12e4a8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12e4a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e4ac: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12e4acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e4b0: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x12e4b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12e4b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12e4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4b8: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x12e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x12e4bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4c0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E4C0u;
    SET_GPR_U32(ctx, 31, 0x12E4C8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E4C0u, 0x12E4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E4C8u;
label_12e4c8:
    // 0x12e4c8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12e4c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4cc: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x12e4ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12e4d0: 0xae340120  sw          $s4, 0x120($s1)
    ctx->pc = 0x12e4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 20));
    // 0x12e4d4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12e4d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e4d8: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12e4d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e4dc: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x12e4dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12e4e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12e4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4e4: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x12e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x12e4e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4ec: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E4ECu;
    SET_GPR_U32(ctx, 31, 0x12E4F4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E4ECu, 0x12E4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E4F4u;
label_12e4f4:
    // 0x12e4f4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12e4f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4f8: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x12e4f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12e4fc: 0xae340118  sw          $s4, 0x118($s1)
    ctx->pc = 0x12e4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 20));
    // 0x12e500: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x12e500u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e504: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12e504u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e508: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x12e508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12e50c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12e50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e510: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x12e510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x12e514: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e518: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E518u;
    SET_GPR_U32(ctx, 31, 0x12E520u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E518u, 0x12E520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E520u;
label_12e520:
    // 0x12e520: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e524: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x12e524u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12e528: 0xae340114  sw          $s4, 0x114($s1)
    ctx->pc = 0x12e528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 20));
    // 0x12e52c: 0x2414008f  addiu       $s4, $zero, 0x8F
    ctx->pc = 0x12e52cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x12e530: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12e530u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e534: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x12e534u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12e538: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12e538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e53c: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x12e53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x12e540: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e544: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E544u;
    SET_GPR_U32(ctx, 31, 0x12E54Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E544u, 0x12E54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E54Cu;
label_12e54c:
    // 0x12e54c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e550: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x12e550u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12e554: 0xae340124  sw          $s4, 0x124($s1)
    ctx->pc = 0x12e554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 20));
    // 0x12e558: 0x24140011  addiu       $s4, $zero, 0x11
    ctx->pc = 0x12e558u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x12e55c: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12e55cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e560: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x12e560u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12e564: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12e564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e568: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x12e568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x12e56c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e570: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E570u;
    SET_GPR_U32(ctx, 31, 0x12E578u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E570u, 0x12E578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E578u;
label_12e578:
    // 0x12e578: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e57c: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x12e57cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12e580: 0xae34011c  sw          $s4, 0x11C($s1)
    ctx->pc = 0x12e580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 20));
    // 0x12e584: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12e584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e588: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x12e588u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12e58c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12e58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e590: 0x2412005c  addiu       $s2, $zero, 0x5C
    ctx->pc = 0x12e590u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x12e594: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12e594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e598: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E598u;
    SET_GPR_U32(ctx, 31, 0x12E5A0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E598u, 0x12E5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5A0u;
label_12e5a0:
    // 0x12e5a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12e5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e5a4: 0xaca00120  sw          $zero, 0x120($a1)
    ctx->pc = 0x12e5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 288), GPR_U32(ctx, 0));
    // 0x12e5a8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12e5a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e5ac: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e5b0: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x12e5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12e5b4: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x12e5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x12e5b8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E5B8u;
    SET_GPR_U32(ctx, 31, 0x12E5C0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E5B8u, 0x12E5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5C0u;
label_12e5c0:
    // 0x12e5c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e5c4: 0xac510118  sw          $s1, 0x118($v0)
    ctx->pc = 0x12e5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 17));
    // 0x12e5c8: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x12e5c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e5cc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e5d0: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x12e5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12e5d4: 0x2405005d  addiu       $a1, $zero, 0x5D
    ctx->pc = 0x12e5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x12e5d8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E5D8u;
    SET_GPR_U32(ctx, 31, 0x12E5E0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E5D8u, 0x12E5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5E0u;
label_12e5e0:
    // 0x12e5e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12e5e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e5e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12e5e8: 0xac520114  sw          $s2, 0x114($v0)
    ctx->pc = 0x12e5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 18));
    // 0x12e5ec: 0x24120090  addiu       $s2, $zero, 0x90
    ctx->pc = 0x12e5ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x12e5f0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12e5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e5f4: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12e5f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12e5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e5fc: 0x2405005d  addiu       $a1, $zero, 0x5D
    ctx->pc = 0x12e5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x12e600: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E600u;
    SET_GPR_U32(ctx, 31, 0x12E608u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E600u, 0x12E608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E608u;
label_12e608:
    // 0x12e608: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12e608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e60c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12e610: 0xac520124  sw          $s2, 0x124($v0)
    ctx->pc = 0x12e610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 18));
    // 0x12e614: 0x24120011  addiu       $s2, $zero, 0x11
    ctx->pc = 0x12e614u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x12e618: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12e618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e61c: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12e620: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12e620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e624: 0x2405005d  addiu       $a1, $zero, 0x5D
    ctx->pc = 0x12e624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x12e628: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E628u;
    SET_GPR_U32(ctx, 31, 0x12E630u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E628u, 0x12E630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E630u;
label_12e630:
    // 0x12e630: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12e630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e634: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12e634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12e638: 0xac52011c  sw          $s2, 0x11C($v0)
    ctx->pc = 0x12e638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 18));
    // 0x12e63c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12e63cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e640: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x12e640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e644: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12e644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12e648: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12e648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e64c: 0x2405005d  addiu       $a1, $zero, 0x5D
    ctx->pc = 0x12e64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x12e650: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E650u;
    SET_GPR_U32(ctx, 31, 0x12E658u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E650u, 0x12E658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E658u;
label_12e658:
    // 0x12e658: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x12e658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e65c: 0xac920120  sw          $s2, 0x120($a0)
    ctx->pc = 0x12e65cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 288), GPR_U32(ctx, 18));
    // 0x12e660: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12e660u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e664: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12e664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e668: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12e668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12e66c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12e66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e670: 0x2411005d  addiu       $s1, $zero, 0x5D
    ctx->pc = 0x12e670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x12e674: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12e674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e678: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E678u;
    SET_GPR_U32(ctx, 31, 0x12E680u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E678u, 0x12E680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E680u;
label_12e680:
    // 0x12e680: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x12e680u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e684: 0xae720118  sw          $s2, 0x118($s3)
    ctx->pc = 0x12e684u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 18));
    // 0x12e688: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x12e688u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e68c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12e68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e690: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x12e690u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12e694: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e698: 0x24110058  addiu       $s1, $zero, 0x58
    ctx->pc = 0x12e698u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x12e69c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12e69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e6a0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E6A0u;
    SET_GPR_U32(ctx, 31, 0x12E6A8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E6A0u, 0x12E6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E6A8u;
label_12e6a8:
    // 0x12e6a8: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x12e6a8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e6ac: 0xae720114  sw          $s2, 0x114($s3)
    ctx->pc = 0x12e6acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 18));
    // 0x12e6b0: 0x24120093  addiu       $s2, $zero, 0x93
    ctx->pc = 0x12e6b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    // 0x12e6b4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e6b8: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x12e6b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12e6bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e6c0: 0x24110058  addiu       $s1, $zero, 0x58
    ctx->pc = 0x12e6c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x12e6c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12e6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e6c8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E6C8u;
    SET_GPR_U32(ctx, 31, 0x12E6D0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E6C8u, 0x12E6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E6D0u;
label_12e6d0:
    // 0x12e6d0: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x12e6d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e6d4: 0xae720124  sw          $s2, 0x124($s3)
    ctx->pc = 0x12e6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 292), GPR_U32(ctx, 18));
    // 0x12e6d8: 0x24120013  addiu       $s2, $zero, 0x13
    ctx->pc = 0x12e6d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x12e6dc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e6e0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12e6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12e6e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12e6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e6e8: 0x24110058  addiu       $s1, $zero, 0x58
    ctx->pc = 0x12e6e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x12e6ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12e6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e6f0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E6F0u;
    SET_GPR_U32(ctx, 31, 0x12E6F8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E6F0u, 0x12E6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E6F8u;
label_12e6f8:
    // 0x12e6f8: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x12e6f8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e6fc: 0xaeb2011c  sw          $s2, 0x11C($s5)
    ctx->pc = 0x12e6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 284), GPR_U32(ctx, 18));
    // 0x12e700: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x12e700u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e704: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x12e704u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x12e708: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12e708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e70c: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x12e70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x12e710: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E710u;
    SET_GPR_U32(ctx, 31, 0x12E718u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E710u, 0x12E718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E718u;
label_12e718:
    // 0x12e718: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12e718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e71c: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x12e71cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12e720: 0xae800120  sw          $zero, 0x120($s4)
    ctx->pc = 0x12e720u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 0));
    // 0x12e724: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x12e724u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e728: 0x8fb60090  lw          $s6, 0x90($sp)
    ctx->pc = 0x12e728u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e72c: 0x26d70030  addiu       $s7, $s6, 0x30
    ctx->pc = 0x12e72cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x12e730: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12e730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e734: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x12e734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x12e738: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e73c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E73Cu;
    SET_GPR_U32(ctx, 31, 0x12E744u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E73Cu, 0x12E744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E744u;
label_12e744:
    // 0x12e744: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12e744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e748: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x12e748u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12e74c: 0xae750118  sw          $s5, 0x118($s3)
    ctx->pc = 0x12e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 21));
    // 0x12e750: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x12e750u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e754: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x12e754u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e758: 0x26820030  addiu       $v0, $s4, 0x30
    ctx->pc = 0x12e758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12e75c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12e75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e760: 0x24020059  addiu       $v0, $zero, 0x59
    ctx->pc = 0x12e760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x12e764: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e768: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E768u;
    SET_GPR_U32(ctx, 31, 0x12E770u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E768u, 0x12E770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E770u;
label_12e770:
    // 0x12e770: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12e770u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e774: 0x8eb30000  lw          $s3, 0x0($s5)
    ctx->pc = 0x12e774u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12e778: 0xae720114  sw          $s2, 0x114($s3)
    ctx->pc = 0x12e778u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 18));
    // 0x12e77c: 0x24120094  addiu       $s2, $zero, 0x94
    ctx->pc = 0x12e77cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x12e780: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12e780u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e784: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x12e784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12e788: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12e788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e78c: 0x24050059  addiu       $a1, $zero, 0x59
    ctx->pc = 0x12e78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x12e790: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E790u;
    SET_GPR_U32(ctx, 31, 0x12E798u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E790u, 0x12E798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E798u;
label_12e798:
    // 0x12e798: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12e798u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e79c: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x12e79cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12e7a0: 0xae720124  sw          $s2, 0x124($s3)
    ctx->pc = 0x12e7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 292), GPR_U32(ctx, 18));
    // 0x12e7a4: 0x24120013  addiu       $s2, $zero, 0x13
    ctx->pc = 0x12e7a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x12e7a8: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12e7a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e7ac: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x12e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12e7b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12e7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e7b4: 0x24020059  addiu       $v0, $zero, 0x59
    ctx->pc = 0x12e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x12e7b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e7bc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E7BCu;
    SET_GPR_U32(ctx, 31, 0x12E7C4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E7BCu, 0x12E7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E7C4u;
label_12e7c4:
    // 0x12e7c4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12e7c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e7c8: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x12e7c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12e7cc: 0xae72011c  sw          $s2, 0x11C($s3)
    ctx->pc = 0x12e7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 18));
    // 0x12e7d0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12e7d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e7d4: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12e7d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e7d8: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x12e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12e7dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12e7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e7e0: 0x24020059  addiu       $v0, $zero, 0x59
    ctx->pc = 0x12e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x12e7e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e7e8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E7E8u;
    SET_GPR_U32(ctx, 31, 0x12E7F0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E7E8u, 0x12E7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E7F0u;
label_12e7f0:
    // 0x12e7f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e7f4: 0x8cb50000  lw          $s5, 0x0($a1)
    ctx->pc = 0x12e7f4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12e7f8: 0xaeb20120  sw          $s2, 0x120($s5)
    ctx->pc = 0x12e7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 288), GPR_U32(ctx, 18));
    // 0x12e7fc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12e7fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e800: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12e800u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e804: 0x26510030  addiu       $s1, $s2, 0x30
    ctx->pc = 0x12e804u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12e808: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e80c: 0x24140059  addiu       $s4, $zero, 0x59
    ctx->pc = 0x12e80cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x12e810: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12e810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e814: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E814u;
    SET_GPR_U32(ctx, 31, 0x12E81Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E814u, 0x12E81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E81Cu;
label_12e81c:
    // 0x12e81c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e820: 0x8cb50000  lw          $s5, 0x0($a1)
    ctx->pc = 0x12e820u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12e824: 0xaeb30118  sw          $s3, 0x118($s5)
    ctx->pc = 0x12e824u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 280), GPR_U32(ctx, 19));
    // 0x12e828: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x12e828u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e82c: 0x8fb70090  lw          $s7, 0x90($sp)
    ctx->pc = 0x12e82cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e830: 0x26f10030  addiu       $s1, $s7, 0x30
    ctx->pc = 0x12e830u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x12e834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e838: 0x2413005a  addiu       $s3, $zero, 0x5A
    ctx->pc = 0x12e838u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x12e83c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12e83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e840: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E840u;
    SET_GPR_U32(ctx, 31, 0x12E848u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E840u, 0x12E848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E848u;
label_12e848:
    // 0x12e848: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e84c: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x12e84cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12e850: 0xae560114  sw          $s6, 0x114($s2)
    ctx->pc = 0x12e850u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 22));
    // 0x12e854: 0x24140095  addiu       $s4, $zero, 0x95
    ctx->pc = 0x12e854u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    // 0x12e858: 0x8fb60090  lw          $s6, 0x90($sp)
    ctx->pc = 0x12e858u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e85c: 0x26d50030  addiu       $s5, $s6, 0x30
    ctx->pc = 0x12e85cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x12e860: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12e860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e864: 0x2413005a  addiu       $s3, $zero, 0x5A
    ctx->pc = 0x12e864u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x12e868: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12e868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e86c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E86Cu;
    SET_GPR_U32(ctx, 31, 0x12E874u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E86Cu, 0x12E874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E874u;
label_12e874:
    // 0x12e874: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e878: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x12e878u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12e87c: 0xae540124  sw          $s4, 0x124($s2)
    ctx->pc = 0x12e87cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 20));
    // 0x12e880: 0x24110012  addiu       $s1, $zero, 0x12
    ctx->pc = 0x12e880u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x12e884: 0x8fb60090  lw          $s6, 0x90($sp)
    ctx->pc = 0x12e884u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e888: 0x26d40030  addiu       $s4, $s6, 0x30
    ctx->pc = 0x12e888u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x12e88c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e890: 0x2413005a  addiu       $s3, $zero, 0x5A
    ctx->pc = 0x12e890u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x12e894: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12e894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e898: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E898u;
    SET_GPR_U32(ctx, 31, 0x12E8A0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E898u, 0x12E8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E8A0u;
label_12e8a0:
    // 0x12e8a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8a4: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x12e8a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12e8a8: 0xae51011c  sw          $s1, 0x11C($s2)
    ctx->pc = 0x12e8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 284), GPR_U32(ctx, 17));
    // 0x12e8ac: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12e8acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e8b0: 0x26350030  addiu       $s5, $s1, 0x30
    ctx->pc = 0x12e8b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12e8b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12e8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8b8: 0x2414005a  addiu       $s4, $zero, 0x5A
    ctx->pc = 0x12e8b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x12e8bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12e8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8c0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E8C0u;
    SET_GPR_U32(ctx, 31, 0x12E8C8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E8C0u, 0x12E8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E8C8u;
label_12e8c8:
    // 0x12e8c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12e8c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8cc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x12e8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12e8d0: 0xaca00120  sw          $zero, 0x120($a1)
    ctx->pc = 0x12e8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 288), GPR_U32(ctx, 0));
    // 0x12e8d4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12e8d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e8d8: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12e8d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e8dc: 0x26350030  addiu       $s5, $s1, 0x30
    ctx->pc = 0x12e8dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12e8e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12e8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8e4: 0x2414005a  addiu       $s4, $zero, 0x5A
    ctx->pc = 0x12e8e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x12e8e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12e8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8ec: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E8ECu;
    SET_GPR_U32(ctx, 31, 0x12E8F4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E8ECu, 0x12E8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E8F4u;
label_12e8f4:
    // 0x12e8f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12e8f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8f8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x12e8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12e8fc: 0xacb20118  sw          $s2, 0x118($a1)
    ctx->pc = 0x12e8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 280), GPR_U32(ctx, 18));
    // 0x12e900: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x12e900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e904: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12e904u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e908: 0x26350030  addiu       $s5, $s1, 0x30
    ctx->pc = 0x12e908u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12e90c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12e90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e910: 0x2414005b  addiu       $s4, $zero, 0x5B
    ctx->pc = 0x12e910u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x12e914: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12e914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e918: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E918u;
    SET_GPR_U32(ctx, 31, 0x12E920u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E918u, 0x12E920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E920u;
label_12e920:
    // 0x12e920: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12e920u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e924: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x12e924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12e928: 0xacb20114  sw          $s2, 0x114($a1)
    ctx->pc = 0x12e928u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 276), GPR_U32(ctx, 18));
    // 0x12e92c: 0x24120096  addiu       $s2, $zero, 0x96
    ctx->pc = 0x12e92cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x12e930: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12e930u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e934: 0x26350030  addiu       $s5, $s1, 0x30
    ctx->pc = 0x12e934u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12e938: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12e938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e93c: 0x2414005b  addiu       $s4, $zero, 0x5B
    ctx->pc = 0x12e93cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x12e940: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12e940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e944: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E944u;
    SET_GPR_U32(ctx, 31, 0x12E94Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E944u, 0x12E94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E94Cu;
label_12e94c:
    // 0x12e94c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12e94cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e950: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x12e950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12e954: 0xacb20124  sw          $s2, 0x124($a1)
    ctx->pc = 0x12e954u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 292), GPR_U32(ctx, 18));
    // 0x12e958: 0x24120012  addiu       $s2, $zero, 0x12
    ctx->pc = 0x12e958u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x12e95c: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x12e95cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e960: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x12e960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12e964: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12e964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e968: 0x2414005b  addiu       $s4, $zero, 0x5B
    ctx->pc = 0x12e968u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x12e96c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12e96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e970: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E970u;
    SET_GPR_U32(ctx, 31, 0x12E978u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E970u, 0x12E978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E978u;
label_12e978:
    // 0x12e978: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12e978u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e97c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x12e97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12e980: 0xac52011c  sw          $s2, 0x11C($v0)
    ctx->pc = 0x12e980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 18));
    // 0x12e984: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12e984u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e988: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x12e988u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e98c: 0x26510030  addiu       $s1, $s2, 0x30
    ctx->pc = 0x12e98cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12e990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e994: 0x2414005b  addiu       $s4, $zero, 0x5B
    ctx->pc = 0x12e994u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x12e998: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12e998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e99c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E99Cu;
    SET_GPR_U32(ctx, 31, 0x12E9A4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E99Cu, 0x12E9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E9A4u;
label_12e9a4:
    // 0x12e9a4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x12e9a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9a8: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x12e9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12e9ac: 0xacb30120  sw          $s3, 0x120($a1)
    ctx->pc = 0x12e9acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 288), GPR_U32(ctx, 19));
    // 0x12e9b0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x12e9b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e9b4: 0x8fb50090  lw          $s5, 0x90($sp)
    ctx->pc = 0x12e9b4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e9b8: 0x26b10030  addiu       $s1, $s5, 0x30
    ctx->pc = 0x12e9b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x12e9bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9c0: 0x2413005b  addiu       $s3, $zero, 0x5B
    ctx->pc = 0x12e9c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x12e9c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12e9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9c8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12E9C8u;
    SET_GPR_U32(ctx, 31, 0x12E9D0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12E9C8u, 0x12E9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E9D0u;
label_12e9d0:
    // 0x12e9d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12e9d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9d4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x12e9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12e9d8: 0xacb70118  sw          $s7, 0x118($a1)
    ctx->pc = 0x12e9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 280), GPR_U32(ctx, 23));
label_12e9dc:
    // 0x12e9dc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x12e9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12e9e0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x12e9e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12e9e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x12e9e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12e9e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12e9e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12e9ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12e9ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12e9f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12e9f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12e9f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12e9f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e9f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12e9f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e9fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12e9fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ea00: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x12ea00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x12ea04: 0x3e00008  jr          $ra
    ctx->pc = 0x12EA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EA0Cu;
    // 0x12ea0c: 0x0  nop
    ctx->pc = 0x12ea0cu;
    // NOP
    ctx->pc = 0x12ea10u;
}
