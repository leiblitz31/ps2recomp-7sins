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

// Function: sub_003C96F8
// Address: 0x3c96f8 - 0x3c9a68
void sub_003C96F8_0x3c96f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C96F8_0x3c96f8");
#endif

    switch (ctx->pc) {
        case 0x3c96f8u: goto label_3c96f8;
        case 0x3c96fcu: goto label_3c96fc;
        case 0x3c9700u: goto label_3c9700;
        case 0x3c9704u: goto label_3c9704;
        case 0x3c9708u: goto label_3c9708;
        case 0x3c970cu: goto label_3c970c;
        case 0x3c9710u: goto label_3c9710;
        case 0x3c9714u: goto label_3c9714;
        case 0x3c9718u: goto label_3c9718;
        case 0x3c971cu: goto label_3c971c;
        case 0x3c9720u: goto label_3c9720;
        case 0x3c9724u: goto label_3c9724;
        case 0x3c9728u: goto label_3c9728;
        case 0x3c972cu: goto label_3c972c;
        case 0x3c9730u: goto label_3c9730;
        case 0x3c9734u: goto label_3c9734;
        case 0x3c9738u: goto label_3c9738;
        case 0x3c973cu: goto label_3c973c;
        case 0x3c9740u: goto label_3c9740;
        case 0x3c9744u: goto label_3c9744;
        case 0x3c9748u: goto label_3c9748;
        case 0x3c974cu: goto label_3c974c;
        case 0x3c9750u: goto label_3c9750;
        case 0x3c9754u: goto label_3c9754;
        case 0x3c9758u: goto label_3c9758;
        case 0x3c975cu: goto label_3c975c;
        case 0x3c9760u: goto label_3c9760;
        case 0x3c9764u: goto label_3c9764;
        case 0x3c9768u: goto label_3c9768;
        case 0x3c976cu: goto label_3c976c;
        case 0x3c9770u: goto label_3c9770;
        case 0x3c9774u: goto label_3c9774;
        case 0x3c9778u: goto label_3c9778;
        case 0x3c977cu: goto label_3c977c;
        case 0x3c9780u: goto label_3c9780;
        case 0x3c9784u: goto label_3c9784;
        case 0x3c9788u: goto label_3c9788;
        case 0x3c978cu: goto label_3c978c;
        case 0x3c9790u: goto label_3c9790;
        case 0x3c9794u: goto label_3c9794;
        case 0x3c9798u: goto label_3c9798;
        case 0x3c979cu: goto label_3c979c;
        case 0x3c97a0u: goto label_3c97a0;
        case 0x3c97a4u: goto label_3c97a4;
        case 0x3c97a8u: goto label_3c97a8;
        case 0x3c97acu: goto label_3c97ac;
        case 0x3c97b0u: goto label_3c97b0;
        case 0x3c97b4u: goto label_3c97b4;
        case 0x3c97b8u: goto label_3c97b8;
        case 0x3c97bcu: goto label_3c97bc;
        case 0x3c97c0u: goto label_3c97c0;
        case 0x3c97c4u: goto label_3c97c4;
        case 0x3c97c8u: goto label_3c97c8;
        case 0x3c97ccu: goto label_3c97cc;
        case 0x3c97d0u: goto label_3c97d0;
        case 0x3c97d4u: goto label_3c97d4;
        case 0x3c97d8u: goto label_3c97d8;
        case 0x3c97dcu: goto label_3c97dc;
        case 0x3c97e0u: goto label_3c97e0;
        case 0x3c97e4u: goto label_3c97e4;
        case 0x3c97e8u: goto label_3c97e8;
        case 0x3c97ecu: goto label_3c97ec;
        case 0x3c97f0u: goto label_3c97f0;
        case 0x3c97f4u: goto label_3c97f4;
        case 0x3c97f8u: goto label_3c97f8;
        case 0x3c97fcu: goto label_3c97fc;
        case 0x3c9800u: goto label_3c9800;
        case 0x3c9804u: goto label_3c9804;
        case 0x3c9808u: goto label_3c9808;
        case 0x3c980cu: goto label_3c980c;
        case 0x3c9810u: goto label_3c9810;
        case 0x3c9814u: goto label_3c9814;
        case 0x3c9818u: goto label_3c9818;
        case 0x3c981cu: goto label_3c981c;
        case 0x3c9820u: goto label_3c9820;
        case 0x3c9824u: goto label_3c9824;
        case 0x3c9828u: goto label_3c9828;
        case 0x3c982cu: goto label_3c982c;
        case 0x3c9830u: goto label_3c9830;
        case 0x3c9834u: goto label_3c9834;
        case 0x3c9838u: goto label_3c9838;
        case 0x3c983cu: goto label_3c983c;
        case 0x3c9840u: goto label_3c9840;
        case 0x3c9844u: goto label_3c9844;
        case 0x3c9848u: goto label_3c9848;
        case 0x3c984cu: goto label_3c984c;
        case 0x3c9850u: goto label_3c9850;
        case 0x3c9854u: goto label_3c9854;
        case 0x3c9858u: goto label_3c9858;
        case 0x3c985cu: goto label_3c985c;
        case 0x3c9860u: goto label_3c9860;
        case 0x3c9864u: goto label_3c9864;
        case 0x3c9868u: goto label_3c9868;
        case 0x3c986cu: goto label_3c986c;
        case 0x3c9870u: goto label_3c9870;
        case 0x3c9874u: goto label_3c9874;
        case 0x3c9878u: goto label_3c9878;
        case 0x3c987cu: goto label_3c987c;
        case 0x3c9880u: goto label_3c9880;
        case 0x3c9884u: goto label_3c9884;
        case 0x3c9888u: goto label_3c9888;
        case 0x3c988cu: goto label_3c988c;
        case 0x3c9890u: goto label_3c9890;
        case 0x3c9894u: goto label_3c9894;
        case 0x3c9898u: goto label_3c9898;
        case 0x3c989cu: goto label_3c989c;
        case 0x3c98a0u: goto label_3c98a0;
        case 0x3c98a4u: goto label_3c98a4;
        case 0x3c98a8u: goto label_3c98a8;
        case 0x3c98acu: goto label_3c98ac;
        case 0x3c98b0u: goto label_3c98b0;
        case 0x3c98b4u: goto label_3c98b4;
        case 0x3c98b8u: goto label_3c98b8;
        case 0x3c98bcu: goto label_3c98bc;
        case 0x3c98c0u: goto label_3c98c0;
        case 0x3c98c4u: goto label_3c98c4;
        case 0x3c98c8u: goto label_3c98c8;
        case 0x3c98ccu: goto label_3c98cc;
        case 0x3c98d0u: goto label_3c98d0;
        case 0x3c98d4u: goto label_3c98d4;
        case 0x3c98d8u: goto label_3c98d8;
        case 0x3c98dcu: goto label_3c98dc;
        case 0x3c98e0u: goto label_3c98e0;
        case 0x3c98e4u: goto label_3c98e4;
        case 0x3c98e8u: goto label_3c98e8;
        case 0x3c98ecu: goto label_3c98ec;
        case 0x3c98f0u: goto label_3c98f0;
        case 0x3c98f4u: goto label_3c98f4;
        case 0x3c98f8u: goto label_3c98f8;
        case 0x3c98fcu: goto label_3c98fc;
        case 0x3c9900u: goto label_3c9900;
        case 0x3c9904u: goto label_3c9904;
        case 0x3c9908u: goto label_3c9908;
        case 0x3c990cu: goto label_3c990c;
        case 0x3c9910u: goto label_3c9910;
        case 0x3c9914u: goto label_3c9914;
        case 0x3c9918u: goto label_3c9918;
        case 0x3c991cu: goto label_3c991c;
        case 0x3c9920u: goto label_3c9920;
        case 0x3c9924u: goto label_3c9924;
        case 0x3c9928u: goto label_3c9928;
        case 0x3c992cu: goto label_3c992c;
        case 0x3c9930u: goto label_3c9930;
        case 0x3c9934u: goto label_3c9934;
        case 0x3c9938u: goto label_3c9938;
        case 0x3c993cu: goto label_3c993c;
        case 0x3c9940u: goto label_3c9940;
        case 0x3c9944u: goto label_3c9944;
        case 0x3c9948u: goto label_3c9948;
        case 0x3c994cu: goto label_3c994c;
        case 0x3c9950u: goto label_3c9950;
        case 0x3c9954u: goto label_3c9954;
        case 0x3c9958u: goto label_3c9958;
        case 0x3c995cu: goto label_3c995c;
        case 0x3c9960u: goto label_3c9960;
        case 0x3c9964u: goto label_3c9964;
        case 0x3c9968u: goto label_3c9968;
        case 0x3c996cu: goto label_3c996c;
        case 0x3c9970u: goto label_3c9970;
        case 0x3c9974u: goto label_3c9974;
        case 0x3c9978u: goto label_3c9978;
        case 0x3c997cu: goto label_3c997c;
        case 0x3c9980u: goto label_3c9980;
        case 0x3c9984u: goto label_3c9984;
        case 0x3c9988u: goto label_3c9988;
        case 0x3c998cu: goto label_3c998c;
        case 0x3c9990u: goto label_3c9990;
        case 0x3c9994u: goto label_3c9994;
        case 0x3c9998u: goto label_3c9998;
        case 0x3c999cu: goto label_3c999c;
        case 0x3c99a0u: goto label_3c99a0;
        case 0x3c99a4u: goto label_3c99a4;
        case 0x3c99a8u: goto label_3c99a8;
        case 0x3c99acu: goto label_3c99ac;
        case 0x3c99b0u: goto label_3c99b0;
        case 0x3c99b4u: goto label_3c99b4;
        case 0x3c99b8u: goto label_3c99b8;
        case 0x3c99bcu: goto label_3c99bc;
        case 0x3c99c0u: goto label_3c99c0;
        case 0x3c99c4u: goto label_3c99c4;
        case 0x3c99c8u: goto label_3c99c8;
        case 0x3c99ccu: goto label_3c99cc;
        case 0x3c99d0u: goto label_3c99d0;
        case 0x3c99d4u: goto label_3c99d4;
        case 0x3c99d8u: goto label_3c99d8;
        case 0x3c99dcu: goto label_3c99dc;
        case 0x3c99e0u: goto label_3c99e0;
        case 0x3c99e4u: goto label_3c99e4;
        case 0x3c99e8u: goto label_3c99e8;
        case 0x3c99ecu: goto label_3c99ec;
        case 0x3c99f0u: goto label_3c99f0;
        case 0x3c99f4u: goto label_3c99f4;
        case 0x3c99f8u: goto label_3c99f8;
        case 0x3c99fcu: goto label_3c99fc;
        case 0x3c9a00u: goto label_3c9a00;
        case 0x3c9a04u: goto label_3c9a04;
        case 0x3c9a08u: goto label_3c9a08;
        case 0x3c9a0cu: goto label_3c9a0c;
        case 0x3c9a10u: goto label_3c9a10;
        case 0x3c9a14u: goto label_3c9a14;
        case 0x3c9a18u: goto label_3c9a18;
        case 0x3c9a1cu: goto label_3c9a1c;
        case 0x3c9a20u: goto label_3c9a20;
        case 0x3c9a24u: goto label_3c9a24;
        case 0x3c9a28u: goto label_3c9a28;
        case 0x3c9a2cu: goto label_3c9a2c;
        case 0x3c9a30u: goto label_3c9a30;
        case 0x3c9a34u: goto label_3c9a34;
        case 0x3c9a38u: goto label_3c9a38;
        case 0x3c9a3cu: goto label_3c9a3c;
        case 0x3c9a40u: goto label_3c9a40;
        case 0x3c9a44u: goto label_3c9a44;
        case 0x3c9a48u: goto label_3c9a48;
        case 0x3c9a4cu: goto label_3c9a4c;
        case 0x3c9a50u: goto label_3c9a50;
        case 0x3c9a54u: goto label_3c9a54;
        case 0x3c9a58u: goto label_3c9a58;
        case 0x3c9a5cu: goto label_3c9a5c;
        case 0x3c9a60u: goto label_3c9a60;
        case 0x3c9a64u: goto label_3c9a64;
        default: break;
    }

    ctx->pc = 0x3c96f8u;

label_3c96f8:
    // 0x3c96f8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3c96f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_3c96fc:
    // 0x3c96fc: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x3c96fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_3c9700:
    // 0x3c9700: 0x8c42b348  lw          $v0, -0x4CB8($v0)
    ctx->pc = 0x3c9700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947656)));
label_3c9704:
    // 0x3c9704: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x3c9704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_3c9708:
    // 0x3c9708: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x3c9708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_3c970c:
    // 0x3c970c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3c970cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c9710:
    // 0x3c9710: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x3c9710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_3c9714:
    // 0x3c9714: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x3c9714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_3c9718:
    // 0x3c9718: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x3c9718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_3c971c:
    // 0x3c971c: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x3c971cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_3c9720:
    // 0x3c9720: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x3c9720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_3c9724:
    // 0x3c9724: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3c9724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3c9728:
    // 0x3c9728: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x3c9728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_3c972c:
    // 0x3c972c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3c972cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3c9730:
    // 0x3c9730: 0xe7b80120  swc1        $f24, 0x120($sp)
    ctx->pc = 0x3c9730u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_3c9734:
    // 0x3c9734: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x3c9734u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_3c9738:
    // 0x3c9738: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x3c9738u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_3c973c:
    // 0x3c973c: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x3c973cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_3c9740:
    // 0x3c9740: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x3c9740u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_3c9744:
    // 0x3c9744: 0x104000b5  beqz        $v0, . + 4 + (0xB5 << 2)
label_3c9748:
    if (ctx->pc == 0x3C9748u) {
        ctx->pc = 0x3C9748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9744u;
        // 0x3c9748: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C974Cu;
        goto label_3c974c;
    }
    ctx->pc = 0x3C9744u;
    {
        const bool branch_taken_0x3c9744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9744u;
        // 0x3c9748: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9744) {
            ctx->pc = 0x3C9A1Cu;
            goto label_3c9a1c;
        }
    }
    ctx->pc = 0x3C974Cu;
label_3c974c:
    // 0x3c974c: 0x0  nop
    ctx->pc = 0x3c974cu;
    // NOP
label_3c9750:
    // 0x3c9750: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3c9750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3c9754:
    // 0x3c9754: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x3c9754u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c9758:
    // 0x3c9758: 0x13c000b0  beqz        $fp, . + 4 + (0xB0 << 2)
label_3c975c:
    if (ctx->pc == 0x3C975Cu) {
        ctx->pc = 0x3C975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9758u;
        // 0x3c975c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9760u;
        goto label_3c9760;
    }
    ctx->pc = 0x3C9758u;
    {
        const bool branch_taken_0x3c9758 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9758u;
        // 0x3c975c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9758) {
            ctx->pc = 0x3C9A1Cu;
            goto label_3c9a1c;
        }
    }
    ctx->pc = 0x3C9760u;
label_3c9760:
    // 0x3c9760: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_3c9764:
    if (ctx->pc == 0x3C9764u) {
        ctx->pc = 0x3C9768u;
        goto label_3c9768;
    }
    ctx->pc = 0x3C9760u;
    {
        const bool branch_taken_0x3c9760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9760) {
            ctx->pc = 0x3C99F8u;
            goto label_3c99f8;
        }
    }
    ctx->pc = 0x3C9768u;
label_3c9768:
    // 0x3c9768: 0xc1036da  jal         func_40DB68
label_3c976c:
    if (ctx->pc == 0x3C976Cu) {
        ctx->pc = 0x3C976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9768u;
        // 0x3c976c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9770u;
        goto label_3c9770;
    }
    ctx->pc = 0x3C9768u;
    SET_GPR_U32(ctx, 31, 0x3C9770u);
    ctx->pc = 0x3C976Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9768u;
    // 0x3c976c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3C9768u, 0x3C9770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9770u;
label_3c9770:
    // 0x3c9770: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3c9770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3c9774:
    // 0x3c9774: 0xafb00034  sw          $s0, 0x34($sp)
    ctx->pc = 0x3c9774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 16));
label_3c9778:
    // 0x3c9778: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c9778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c977c:
    // 0x3c977c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3c977cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c9780:
    // 0x3c9780: 0x1440009d  bnez        $v0, . + 4 + (0x9D << 2)
label_3c9784:
    if (ctx->pc == 0x3C9784u) {
        ctx->pc = 0x3C9784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9780u;
        // 0x3c9784: 0x8fb00034  lw          $s0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9788u;
        goto label_3c9788;
    }
    ctx->pc = 0x3C9780u;
    {
        const bool branch_taken_0x3c9780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C9784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9780u;
        // 0x3c9784: 0x8fb00034  lw          $s0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9780) {
            ctx->pc = 0x3C99F8u;
            goto label_3c99f8;
        }
    }
    ctx->pc = 0x3C9788u;
label_3c9788:
    // 0x3c9788: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3c9788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_3c978c:
    // 0x3c978c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3c978cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3c9790:
    // 0x3c9790: 0x2484b1e0  addiu       $a0, $a0, -0x4E20
    ctx->pc = 0x3c9790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947296));
label_3c9794:
    // 0x3c9794: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c9794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c9798:
    // 0x3c9798: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3c9798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3c979c:
    // 0x3c979c: 0x10000090  b           . + 4 + (0x90 << 2)
label_3c97a0:
    if (ctx->pc == 0x3C97A0u) {
        ctx->pc = 0x3C97A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C979Cu;
        // 0x3c97a0: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C97A4u;
        goto label_3c97a4;
    }
    ctx->pc = 0x3C979Cu;
    {
        const bool branch_taken_0x3c979c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C97A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C979Cu;
        // 0x3c97a0: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c979c) {
            ctx->pc = 0x3C99E0u;
            goto label_3c99e0;
        }
    }
    ctx->pc = 0x3C97A4u;
label_3c97a4:
    // 0x3c97a4: 0x0  nop
    ctx->pc = 0x3c97a4u;
    // NOP
label_3c97a8:
    // 0x3c97a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c97a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c97ac:
    // 0x3c97ac: 0xc1036da  jal         func_40DB68
label_3c97b0:
    if (ctx->pc == 0x3C97B0u) {
        ctx->pc = 0x3C97B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C97ACu;
        // 0x3c97b0: 0x26170001  addiu       $s7, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C97B4u;
        goto label_3c97b4;
    }
    ctx->pc = 0x3C97ACu;
    SET_GPR_U32(ctx, 31, 0x3C97B4u);
    ctx->pc = 0x3C97B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C97ACu;
    // 0x3c97b0: 0x26170001  addiu       $s7, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3C97ACu, 0x3C97B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C97B4u;
label_3c97b4:
    // 0x3c97b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c97b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c97b8:
    // 0x3c97b8: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x3c97b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3c97bc:
    // 0x3c97bc: 0x54800088  bnel        $a0, $zero, . + 4 + (0x88 << 2)
label_3c97c0:
    if (ctx->pc == 0x3C97C0u) {
        ctx->pc = 0x3C97C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C97BCu;
        // 0x3c97c0: 0x2e0802d  daddu       $s0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C97C4u;
        goto label_3c97c4;
    }
    ctx->pc = 0x3C97BCu;
    {
        const bool branch_taken_0x3c97bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c97bc) {
            ctx->pc = 0x3C97C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C97BCu;
            // 0x3c97c0: 0x2e0802d  daddu       $s0, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C99E0u;
            goto label_3c99e0;
        }
    }
    ctx->pc = 0x3C97C4u;
label_3c97c4:
    // 0x3c97c4: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x3c97c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_3c97c8:
    // 0x3c97c8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3c97c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c97cc:
    // 0x3c97cc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3c97ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c97d0:
    // 0x3c97d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c97d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c97d4:
    // 0x3c97d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3c97d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3c97d8:
    // 0x3c97d8: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x3c97d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3c97dc:
    // 0x3c97dc: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x3c97dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3c97e0:
    // 0x3c97e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c97e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3c97e4:
    // 0x3c97e4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3c97e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3c97e8:
    // 0x3c97e8: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x3c97e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_3c97ec:
    // 0x3c97ec: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x3c97ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c97f0:
    // 0x3c97f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c97f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c97f4:
    // 0x3c97f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c97f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c97f8:
    // 0x3c97f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3c97f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3c97fc:
    // 0x3c97fc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3c97fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3c9800:
    // 0x3c9800: 0x9222000a  lbu         $v0, 0xA($s1)
    ctx->pc = 0x3c9800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
label_3c9804:
    // 0x3c9804: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x3c9804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9808:
    // 0x3c9808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c9808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c980c:
    // 0x3c980c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c980cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c9810:
    // 0x3c9810: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3c9810u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3c9814:
    // 0x3c9814: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
label_3c9818:
    if (ctx->pc == 0x3C9818u) {
        ctx->pc = 0x3C9818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9814u;
        // 0x3c9818: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C981Cu;
        goto label_3c981c;
    }
    ctx->pc = 0x3C9814u;
    {
        const bool branch_taken_0x3c9814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9814u;
        // 0x3c9818: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9814) {
            ctx->pc = 0x3C99DCu;
            goto label_3c99dc;
        }
    }
    ctx->pc = 0x3C981Cu;
label_3c981c:
    // 0x3c981c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x3c981cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_3c9820:
    // 0x3c9820: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x3c9820u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_3c9824:
    // 0x3c9824: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x3c9824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3c9828:
    // 0x3c9828: 0x3c090060  lui         $t1, 0x60
    ctx->pc = 0x3c9828u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)96 << 16));
label_3c982c:
    // 0x3c982c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c982cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c9830:
    // 0x3c9830: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3c9830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3c9834:
    // 0x3c9834: 0x24b6b298  addiu       $s6, $a1, -0x4D68
    ctx->pc = 0x3c9834u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947480));
label_3c9838:
    // 0x3c9838: 0x24c3b1e0  addiu       $v1, $a2, -0x4E20
    ctx->pc = 0x3c9838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947296));
label_3c983c:
    // 0x3c983c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3c983cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c9840:
    // 0x3c9840: 0x2526c758  addiu       $a2, $t1, -0x38A8
    ctx->pc = 0x3c9840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952792));
label_3c9844:
    // 0x3c9844: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x3c9844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3c9848:
    // 0x3c9848: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x3c9848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3c984c:
    // 0x3c984c: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x3c984cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3c9850:
    // 0x3c9850: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x3c9850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3c9854:
    // 0x3c9854: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x3c9854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3c9858:
    // 0x3c9858: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x3c9858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3c985c:
    // 0x3c985c: 0xb3a4002f  sdl         $a0, 0x2F($sp)
    ctx->pc = 0x3c985cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3c9860:
    // 0x3c9860: 0xb7a40028  sdr         $a0, 0x28($sp)
    ctx->pc = 0x3c9860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3c9864:
    // 0x3c9864: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x3c9864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3c9868:
    // 0x3c9868: 0x543821  addu        $a3, $v0, $s4
    ctx->pc = 0x3c9868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_3c986c:
    // 0x3c986c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x3c986cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c9870:
    // 0x3c9870: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x3c9870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9874:
    // 0x3c9874: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3c9874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9878:
    // 0x3c9878: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x3c9878u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3c987c:
    // 0x3c987c: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x3c987cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3c9880:
    // 0x3c9880: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x3c9880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9884:
    // 0x3c9884: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x3c9884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9888:
    // 0x3c9888: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x3c9888u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3c988c:
    // 0x3c988c: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x3c988cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3c9890:
    // 0x3c9890: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x3c9890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9894:
    // 0x3c9894: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3c9894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9898:
    // 0x3c9898: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x3c9898u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3c989c:
    // 0x3c989c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x3c989cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3c98a0:
    // 0x3c98a0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3c98a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3c98a4:
    // 0x3c98a4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3c98a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c98a8:
    // 0x3c98a8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x3c98a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c98ac:
    // 0x3c98ac: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x3c98acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_3c98b0:
    // 0x3c98b0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3c98b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c98b4:
    // 0x3c98b4: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x3c98b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_3c98b8:
    // 0x3c98b8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x3c98b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3c98bc:
    // 0x3c98bc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3c98bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3c98c0:
    // 0x3c98c0: 0x46000d80  add.s       $f22, $f1, $f0
    ctx->pc = 0x3c98c0u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3c98c4:
    // 0x3c98c4: 0x4617b036  c.le.s      $f22, $f23
    ctx->pc = 0x3c98c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c98c8:
    // 0x3c98c8: 0x0  nop
    ctx->pc = 0x3c98c8u;
    // NOP
label_3c98cc:
    // 0x3c98cc: 0x4503003f  bc1tl       . + 4 + (0x3F << 2)
label_3c98d0:
    if (ctx->pc == 0x3C98D0u) {
        ctx->pc = 0x3C98D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C98CCu;
        // 0x3c98d0: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C98D4u;
        goto label_3c98d4;
    }
    ctx->pc = 0x3C98CCu;
    {
        const bool branch_taken_0x3c98cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c98cc) {
            ctx->pc = 0x3C98D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C98CCu;
            // 0x3c98d0: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C99CCu;
            goto label_3c99cc;
        }
    }
    ctx->pc = 0x3C98D4u;
label_3c98d4:
    // 0x3c98d4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3c98d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c98d8:
    // 0x3c98d8: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x3c98d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c98dc:
    // 0x3c98dc: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x3c98dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_3c98e0:
    // 0x3c98e0: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x3c98e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c98e4:
    // 0x3c98e4: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x3c98e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_3c98e8:
    // 0x3c98e8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c98e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_3c98ec:
    // 0x3c98ec: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c98ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3c98f0:
    // 0x3c98f0: 0x46010540  add.s       $f21, $f0, $f1
    ctx->pc = 0x3c98f0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c98f4:
    // 0x3c98f4: 0x4615b834  c.lt.s      $f23, $f21
    ctx->pc = 0x3c98f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c98f8:
    // 0x3c98f8: 0x0  nop
    ctx->pc = 0x3c98f8u;
    // NOP
label_3c98fc:
    // 0x3c98fc: 0x45030033  bc1tl       . + 4 + (0x33 << 2)
label_3c9900:
    if (ctx->pc == 0x3C9900u) {
        ctx->pc = 0x3C9900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C98FCu;
        // 0x3c9900: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9904u;
        goto label_3c9904;
    }
    ctx->pc = 0x3C98FCu;
    {
        const bool branch_taken_0x3c98fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c98fc) {
            ctx->pc = 0x3C9900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C98FCu;
            // 0x3c9900: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C99CCu;
            goto label_3c99cc;
        }
    }
    ctx->pc = 0x3C9904u;
label_3c9904:
    // 0x3c9904: 0x8ec200a4  lw          $v0, 0xA4($s6)
    ctx->pc = 0x3c9904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 164)));
label_3c9908:
    // 0x3c9908: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3c9908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c990c:
    // 0x3c990c: 0x8ec400ac  lw          $a0, 0xAC($s6)
    ctx->pc = 0x3c990cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 172)));
label_3c9910:
    // 0x3c9910: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c9910u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c9914:
    // 0x3c9914: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3c9914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3c9918:
    // 0x3c9918: 0x40f809  jalr        $v0
label_3c991c:
    if (ctx->pc == 0x3C991Cu) {
        ctx->pc = 0x3C991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9918u;
        // 0x3c991c: 0x7fa90050  sq          $t1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9920u;
        goto label_3c9920;
    }
    ctx->pc = 0x3C9918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C9920u);
        ctx->pc = 0x3C991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9918u;
        // 0x3c991c: 0x7fa90050  sq          $t1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9918u, 0x3C9920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C9920u;
label_3c9920:
    // 0x3c9920: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x3c9920u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c9924:
    // 0x3c9924: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_3c9928:
    if (ctx->pc == 0x3C9928u) {
        ctx->pc = 0x3C9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9924u;
        // 0x3c9928: 0x7ba90050  lq          $t1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C992Cu;
        goto label_3c992c;
    }
    ctx->pc = 0x3C9924u;
    {
        const bool branch_taken_0x3c9924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9924u;
        // 0x3c9928: 0x7ba90050  lq          $t1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9924) {
            ctx->pc = 0x3C99C8u;
            goto label_3c99c8;
        }
    }
    ctx->pc = 0x3C992Cu;
label_3c992c:
    // 0x3c992c: 0xc4740040  lwc1        $f20, 0x40($v1)
    ctx->pc = 0x3c992cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c9930:
    // 0x3c9930: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3c9930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c9934:
    // 0x3c9934: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x3c9934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9938:
    // 0x3c9938: 0xc104d24  jal         func_413490
label_3c993c:
    if (ctx->pc == 0x3C993Cu) {
        ctx->pc = 0x3C993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9938u;
        // 0x3c993c: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9940u;
        goto label_3c9940;
    }
    ctx->pc = 0x3C9938u;
    SET_GPR_U32(ctx, 31, 0x3C9940u);
    ctx->pc = 0x3C993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9938u;
    // 0x3c993c: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x3C9938u, 0x3C9940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9940u;
label_3c9940:
    // 0x3c9940: 0x4600c003  div.s       $f0, $f24, $f0
    ctx->pc = 0x3c9940u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[24], ctx->f[0]); }
label_3c9944:
    // 0x3c9944: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x3c9944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9948:
    // 0x3c9948: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x3c9948u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_3c994c:
    // 0x3c994c: 0xc7a70020  lwc1        $f7, 0x20($sp)
    ctx->pc = 0x3c994cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3c9950:
    // 0x3c9950: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3c9950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3c9954:
    // 0x3c9954: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x3c9954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3c9958:
    // 0x3c9958: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x3c9958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3c995c:
    // 0x3c995c: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x3c995cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_3c9960:
    // 0x3c9960: 0xc4460008  lwc1        $f6, 0x8($v0)
    ctx->pc = 0x3c9960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3c9964:
    // 0x3c9964: 0x461600c2  mul.s       $f3, $f0, $f22
    ctx->pc = 0x3c9964u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_3c9968:
    // 0x3c9968: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3c9968u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_3c996c:
    // 0x3c996c: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x3c996cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_3c9970:
    // 0x3c9970: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3c9970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3c9974:
    // 0x3c9974: 0x4603a502  mul.s       $f20, $f20, $f3
    ctx->pc = 0x3c9974u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
label_3c9978:
    // 0x3c9978: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x3c9978u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3c997c:
    // 0x3c997c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3c997cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_3c9980:
    // 0x3c9980: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x3c9980u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_3c9984:
    // 0x3c9984: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x3c9984u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_3c9988:
    // 0x3c9988: 0xe4440000  swc1        $f4, 0x0($v0)
    ctx->pc = 0x3c9988u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_3c998c:
    // 0x3c998c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3c998cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9990:
    // 0x3c9990: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x3c9990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9994:
    // 0x3c9994: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3c9994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3c9998:
    // 0x3c9998: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c9998u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3c999c:
    // 0x3c999c: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x3c999cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_3c99a0:
    // 0x3c99a0: 0xe4450004  swc1        $f5, 0x4($v0)
    ctx->pc = 0x3c99a0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3c99a4:
    // 0x3c99a4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x3c99a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c99a8:
    // 0x3c99a8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x3c99a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c99ac:
    // 0x3c99ac: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3c99acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3c99b0:
    // 0x3c99b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c99b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3c99b4:
    // 0x3c99b4: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x3c99b4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_3c99b8:
    // 0x3c99b8: 0xe4460008  swc1        $f6, 0x8($v0)
    ctx->pc = 0x3c99b8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_3c99bc:
    // 0x3c99bc: 0x7ba90050  lq          $t1, 0x50($sp)
    ctx->pc = 0x3c99bcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c99c0:
    // 0x3c99c0: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x3c99c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c99c4:
    // 0x3c99c4: 0x0  nop
    ctx->pc = 0x3c99c4u;
    // NOP
label_3c99c8:
    // 0x3c99c8: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x3c99c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3c99cc:
    // 0x3c99cc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3c99ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3c99d0:
    // 0x3c99d0: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x3c99d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3c99d4:
    // 0x3c99d4: 0x1440ff9a  bnez        $v0, . + 4 + (-0x66 << 2)
label_3c99d8:
    if (ctx->pc == 0x3C99D8u) {
        ctx->pc = 0x3C99D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C99D4u;
        // 0x3c99d8: 0x2694000c  addiu       $s4, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C99DCu;
        goto label_3c99dc;
    }
    ctx->pc = 0x3C99D4u;
    {
        const bool branch_taken_0x3c99d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C99D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C99D4u;
        // 0x3c99d8: 0x2694000c  addiu       $s4, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c99d4) {
            ctx->pc = 0x3C9840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c9840;
        }
    }
    ctx->pc = 0x3C99DCu;
label_3c99dc:
    // 0x3c99dc: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x3c99dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c99e0:
    // 0x3c99e0: 0xc10376a  jal         func_40DDA8
label_3c99e4:
    if (ctx->pc == 0x3C99E4u) {
        ctx->pc = 0x3C99E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C99E0u;
        // 0x3c99e4: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C99E8u;
        goto label_3c99e8;
    }
    ctx->pc = 0x3C99E0u;
    SET_GPR_U32(ctx, 31, 0x3C99E8u);
    ctx->pc = 0x3C99E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C99E0u;
    // 0x3c99e4: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3C99E0u, 0x3C99E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C99E8u;
label_3c99e8:
    // 0x3c99e8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3c99e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3c99ec:
    // 0x3c99ec: 0x5440ff6e  bnel        $v0, $zero, . + 4 + (-0x92 << 2)
label_3c99f0:
    if (ctx->pc == 0x3C99F0u) {
        ctx->pc = 0x3C99F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C99ECu;
        // 0x3c99f0: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C99F4u;
        goto label_3c99f4;
    }
    ctx->pc = 0x3C99ECu;
    {
        const bool branch_taken_0x3c99ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c99ec) {
            ctx->pc = 0x3C99F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C99ECu;
            // 0x3c99f0: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C97A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c97a8;
        }
    }
    ctx->pc = 0x3C99F4u;
label_3c99f4:
    // 0x3c99f4: 0x8fb00034  lw          $s0, 0x34($sp)
    ctx->pc = 0x3c99f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_3c99f8:
    // 0x3c99f8: 0xc10376a  jal         func_40DDA8
label_3c99fc:
    if (ctx->pc == 0x3C99FCu) {
        ctx->pc = 0x3C99FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C99F8u;
        // 0x3c99fc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9A00u;
        goto label_3c9a00;
    }
    ctx->pc = 0x3C99F8u;
    SET_GPR_U32(ctx, 31, 0x3C9A00u);
    ctx->pc = 0x3C99FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C99F8u;
    // 0x3c99fc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3C99F8u, 0x3C9A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9A00u;
label_3c9a00:
    // 0x3c9a00: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3c9a00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3c9a04:
    // 0x3c9a04: 0x1440ff58  bnez        $v0, . + 4 + (-0xA8 << 2)
label_3c9a08:
    if (ctx->pc == 0x3C9A08u) {
        ctx->pc = 0x3C9A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9A04u;
        // 0x3c9a08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9A0Cu;
        goto label_3c9a0c;
    }
    ctx->pc = 0x3C9A04u;
    {
        const bool branch_taken_0x3c9a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C9A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9A04u;
        // 0x3c9a08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9a04) {
            ctx->pc = 0x3C9768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c9768;
        }
    }
    ctx->pc = 0x3C9A0Cu;
label_3c9a0c:
    // 0x3c9a0c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3c9a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3c9a10:
    // 0x3c9a10: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3c9a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3c9a14:
    // 0x3c9a14: 0x1440ff4e  bnez        $v0, . + 4 + (-0xB2 << 2)
label_3c9a18:
    if (ctx->pc == 0x3C9A18u) {
        ctx->pc = 0x3C9A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9A14u;
        // 0x3c9a18: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9A1Cu;
        goto label_3c9a1c;
    }
    ctx->pc = 0x3C9A14u;
    {
        const bool branch_taken_0x3c9a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C9A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9A14u;
        // 0x3c9a18: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9a14) {
            ctx->pc = 0x3C9750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c9750;
        }
    }
    ctx->pc = 0x3C9A1Cu;
label_3c9a1c:
    // 0x3c9a1c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3c9a1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c9a20:
    // 0x3c9a20: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x3c9a20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3c9a24:
    // 0x3c9a24: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x3c9a24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3c9a28:
    // 0x3c9a28: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x3c9a28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3c9a2c:
    // 0x3c9a2c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x3c9a2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3c9a30:
    // 0x3c9a30: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x3c9a30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3c9a34:
    // 0x3c9a34: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x3c9a34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3c9a38:
    // 0x3c9a38: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x3c9a38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c9a3c:
    // 0x3c9a3c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3c9a3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c9a40:
    // 0x3c9a40: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x3c9a40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c9a44:
    // 0x3c9a44: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3c9a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3c9a48:
    // 0x3c9a48: 0xc7b80120  lwc1        $f24, 0x120($sp)
    ctx->pc = 0x3c9a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3c9a4c:
    // 0x3c9a4c: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x3c9a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3c9a50:
    // 0x3c9a50: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x3c9a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3c9a54:
    // 0x3c9a54: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x3c9a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c9a58:
    // 0x3c9a58: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x3c9a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c9a5c:
    // 0x3c9a5c: 0x3e00008  jr          $ra
label_3c9a60:
    if (ctx->pc == 0x3C9A60u) {
        ctx->pc = 0x3C9A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9A5Cu;
        // 0x3c9a60: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9A64u;
        goto label_3c9a64;
    }
    ctx->pc = 0x3C9A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9A5Cu;
        // 0x3c9a60: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9A64u;
label_3c9a64:
    // 0x3c9a64: 0x0  nop
    ctx->pc = 0x3c9a64u;
    // NOP
    ctx->pc = 0x3c9a68u;
}
