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

// Function: sub_003B97F0
// Address: 0x3b97f0 - 0x3b9ad0
void sub_003B97F0_0x3b97f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B97F0_0x3b97f0");
#endif

    switch (ctx->pc) {
        case 0x3b97f0u: goto label_3b97f0;
        case 0x3b97f4u: goto label_3b97f4;
        case 0x3b97f8u: goto label_3b97f8;
        case 0x3b97fcu: goto label_3b97fc;
        case 0x3b9800u: goto label_3b9800;
        case 0x3b9804u: goto label_3b9804;
        case 0x3b9808u: goto label_3b9808;
        case 0x3b980cu: goto label_3b980c;
        case 0x3b9810u: goto label_3b9810;
        case 0x3b9814u: goto label_3b9814;
        case 0x3b9818u: goto label_3b9818;
        case 0x3b981cu: goto label_3b981c;
        case 0x3b9820u: goto label_3b9820;
        case 0x3b9824u: goto label_3b9824;
        case 0x3b9828u: goto label_3b9828;
        case 0x3b982cu: goto label_3b982c;
        case 0x3b9830u: goto label_3b9830;
        case 0x3b9834u: goto label_3b9834;
        case 0x3b9838u: goto label_3b9838;
        case 0x3b983cu: goto label_3b983c;
        case 0x3b9840u: goto label_3b9840;
        case 0x3b9844u: goto label_3b9844;
        case 0x3b9848u: goto label_3b9848;
        case 0x3b984cu: goto label_3b984c;
        case 0x3b9850u: goto label_3b9850;
        case 0x3b9854u: goto label_3b9854;
        case 0x3b9858u: goto label_3b9858;
        case 0x3b985cu: goto label_3b985c;
        case 0x3b9860u: goto label_3b9860;
        case 0x3b9864u: goto label_3b9864;
        case 0x3b9868u: goto label_3b9868;
        case 0x3b986cu: goto label_3b986c;
        case 0x3b9870u: goto label_3b9870;
        case 0x3b9874u: goto label_3b9874;
        case 0x3b9878u: goto label_3b9878;
        case 0x3b987cu: goto label_3b987c;
        case 0x3b9880u: goto label_3b9880;
        case 0x3b9884u: goto label_3b9884;
        case 0x3b9888u: goto label_3b9888;
        case 0x3b988cu: goto label_3b988c;
        case 0x3b9890u: goto label_3b9890;
        case 0x3b9894u: goto label_3b9894;
        case 0x3b9898u: goto label_3b9898;
        case 0x3b989cu: goto label_3b989c;
        case 0x3b98a0u: goto label_3b98a0;
        case 0x3b98a4u: goto label_3b98a4;
        case 0x3b98a8u: goto label_3b98a8;
        case 0x3b98acu: goto label_3b98ac;
        case 0x3b98b0u: goto label_3b98b0;
        case 0x3b98b4u: goto label_3b98b4;
        case 0x3b98b8u: goto label_3b98b8;
        case 0x3b98bcu: goto label_3b98bc;
        case 0x3b98c0u: goto label_3b98c0;
        case 0x3b98c4u: goto label_3b98c4;
        case 0x3b98c8u: goto label_3b98c8;
        case 0x3b98ccu: goto label_3b98cc;
        case 0x3b98d0u: goto label_3b98d0;
        case 0x3b98d4u: goto label_3b98d4;
        case 0x3b98d8u: goto label_3b98d8;
        case 0x3b98dcu: goto label_3b98dc;
        case 0x3b98e0u: goto label_3b98e0;
        case 0x3b98e4u: goto label_3b98e4;
        case 0x3b98e8u: goto label_3b98e8;
        case 0x3b98ecu: goto label_3b98ec;
        case 0x3b98f0u: goto label_3b98f0;
        case 0x3b98f4u: goto label_3b98f4;
        case 0x3b98f8u: goto label_3b98f8;
        case 0x3b98fcu: goto label_3b98fc;
        case 0x3b9900u: goto label_3b9900;
        case 0x3b9904u: goto label_3b9904;
        case 0x3b9908u: goto label_3b9908;
        case 0x3b990cu: goto label_3b990c;
        case 0x3b9910u: goto label_3b9910;
        case 0x3b9914u: goto label_3b9914;
        case 0x3b9918u: goto label_3b9918;
        case 0x3b991cu: goto label_3b991c;
        case 0x3b9920u: goto label_3b9920;
        case 0x3b9924u: goto label_3b9924;
        case 0x3b9928u: goto label_3b9928;
        case 0x3b992cu: goto label_3b992c;
        case 0x3b9930u: goto label_3b9930;
        case 0x3b9934u: goto label_3b9934;
        case 0x3b9938u: goto label_3b9938;
        case 0x3b993cu: goto label_3b993c;
        case 0x3b9940u: goto label_3b9940;
        case 0x3b9944u: goto label_3b9944;
        case 0x3b9948u: goto label_3b9948;
        case 0x3b994cu: goto label_3b994c;
        case 0x3b9950u: goto label_3b9950;
        case 0x3b9954u: goto label_3b9954;
        case 0x3b9958u: goto label_3b9958;
        case 0x3b995cu: goto label_3b995c;
        case 0x3b9960u: goto label_3b9960;
        case 0x3b9964u: goto label_3b9964;
        case 0x3b9968u: goto label_3b9968;
        case 0x3b996cu: goto label_3b996c;
        case 0x3b9970u: goto label_3b9970;
        case 0x3b9974u: goto label_3b9974;
        case 0x3b9978u: goto label_3b9978;
        case 0x3b997cu: goto label_3b997c;
        case 0x3b9980u: goto label_3b9980;
        case 0x3b9984u: goto label_3b9984;
        case 0x3b9988u: goto label_3b9988;
        case 0x3b998cu: goto label_3b998c;
        case 0x3b9990u: goto label_3b9990;
        case 0x3b9994u: goto label_3b9994;
        case 0x3b9998u: goto label_3b9998;
        case 0x3b999cu: goto label_3b999c;
        case 0x3b99a0u: goto label_3b99a0;
        case 0x3b99a4u: goto label_3b99a4;
        case 0x3b99a8u: goto label_3b99a8;
        case 0x3b99acu: goto label_3b99ac;
        case 0x3b99b0u: goto label_3b99b0;
        case 0x3b99b4u: goto label_3b99b4;
        case 0x3b99b8u: goto label_3b99b8;
        case 0x3b99bcu: goto label_3b99bc;
        case 0x3b99c0u: goto label_3b99c0;
        case 0x3b99c4u: goto label_3b99c4;
        case 0x3b99c8u: goto label_3b99c8;
        case 0x3b99ccu: goto label_3b99cc;
        case 0x3b99d0u: goto label_3b99d0;
        case 0x3b99d4u: goto label_3b99d4;
        case 0x3b99d8u: goto label_3b99d8;
        case 0x3b99dcu: goto label_3b99dc;
        case 0x3b99e0u: goto label_3b99e0;
        case 0x3b99e4u: goto label_3b99e4;
        case 0x3b99e8u: goto label_3b99e8;
        case 0x3b99ecu: goto label_3b99ec;
        case 0x3b99f0u: goto label_3b99f0;
        case 0x3b99f4u: goto label_3b99f4;
        case 0x3b99f8u: goto label_3b99f8;
        case 0x3b99fcu: goto label_3b99fc;
        case 0x3b9a00u: goto label_3b9a00;
        case 0x3b9a04u: goto label_3b9a04;
        case 0x3b9a08u: goto label_3b9a08;
        case 0x3b9a0cu: goto label_3b9a0c;
        case 0x3b9a10u: goto label_3b9a10;
        case 0x3b9a14u: goto label_3b9a14;
        case 0x3b9a18u: goto label_3b9a18;
        case 0x3b9a1cu: goto label_3b9a1c;
        case 0x3b9a20u: goto label_3b9a20;
        case 0x3b9a24u: goto label_3b9a24;
        case 0x3b9a28u: goto label_3b9a28;
        case 0x3b9a2cu: goto label_3b9a2c;
        case 0x3b9a30u: goto label_3b9a30;
        case 0x3b9a34u: goto label_3b9a34;
        case 0x3b9a38u: goto label_3b9a38;
        case 0x3b9a3cu: goto label_3b9a3c;
        case 0x3b9a40u: goto label_3b9a40;
        case 0x3b9a44u: goto label_3b9a44;
        case 0x3b9a48u: goto label_3b9a48;
        case 0x3b9a4cu: goto label_3b9a4c;
        case 0x3b9a50u: goto label_3b9a50;
        case 0x3b9a54u: goto label_3b9a54;
        case 0x3b9a58u: goto label_3b9a58;
        case 0x3b9a5cu: goto label_3b9a5c;
        case 0x3b9a60u: goto label_3b9a60;
        case 0x3b9a64u: goto label_3b9a64;
        case 0x3b9a68u: goto label_3b9a68;
        case 0x3b9a6cu: goto label_3b9a6c;
        case 0x3b9a70u: goto label_3b9a70;
        case 0x3b9a74u: goto label_3b9a74;
        case 0x3b9a78u: goto label_3b9a78;
        case 0x3b9a7cu: goto label_3b9a7c;
        case 0x3b9a80u: goto label_3b9a80;
        case 0x3b9a84u: goto label_3b9a84;
        case 0x3b9a88u: goto label_3b9a88;
        case 0x3b9a8cu: goto label_3b9a8c;
        case 0x3b9a90u: goto label_3b9a90;
        case 0x3b9a94u: goto label_3b9a94;
        case 0x3b9a98u: goto label_3b9a98;
        case 0x3b9a9cu: goto label_3b9a9c;
        case 0x3b9aa0u: goto label_3b9aa0;
        case 0x3b9aa4u: goto label_3b9aa4;
        case 0x3b9aa8u: goto label_3b9aa8;
        case 0x3b9aacu: goto label_3b9aac;
        case 0x3b9ab0u: goto label_3b9ab0;
        case 0x3b9ab4u: goto label_3b9ab4;
        case 0x3b9ab8u: goto label_3b9ab8;
        case 0x3b9abcu: goto label_3b9abc;
        case 0x3b9ac0u: goto label_3b9ac0;
        case 0x3b9ac4u: goto label_3b9ac4;
        case 0x3b9ac8u: goto label_3b9ac8;
        case 0x3b9accu: goto label_3b9acc;
        default: break;
    }

    ctx->pc = 0x3b97f0u;

label_3b97f0:
    // 0x3b97f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3b97f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3b97f4:
    // 0x3b97f4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3b97f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3b97f8:
    // 0x3b97f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b97f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b97fc:
    // 0x3b97fc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3b97fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3b9800:
    // 0x3b9800: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3b9800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3b9804:
    // 0x3b9804: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b9804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3b9808:
    // 0x3b9808: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3b9808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_3b980c:
    // 0x3b980c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3b980cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_3b9810:
    // 0x3b9810: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b9810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b9814:
    // 0x3b9814: 0xc0ed30a  jal         func_3B4C28
label_3b9818:
    if (ctx->pc == 0x3B9818u) {
        ctx->pc = 0x3B9818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9814u;
        // 0x3b9818: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B981Cu;
        goto label_3b981c;
    }
    ctx->pc = 0x3B9814u;
    SET_GPR_U32(ctx, 31, 0x3B981Cu);
    ctx->pc = 0x3B9818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9814u;
    // 0x3b9818: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4C28u, 0x3B9814u, 0x3B981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B981Cu;
label_3b981c:
    // 0x3b981c: 0x8e1100b0  lw          $s1, 0xB0($s0)
    ctx->pc = 0x3b981cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_3b9820:
    // 0x3b9820: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3b9820u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b9824:
    // 0x3b9824: 0xc10376a  jal         func_40DDA8
label_3b9828:
    if (ctx->pc == 0x3B9828u) {
        ctx->pc = 0x3B9828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9824u;
        // 0x3b9828: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B982Cu;
        goto label_3b982c;
    }
    ctx->pc = 0x3B9824u;
    SET_GPR_U32(ctx, 31, 0x3B982Cu);
    ctx->pc = 0x3B9828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9824u;
    // 0x3b9828: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B9824u, 0x3B982Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B982Cu;
label_3b982c:
    // 0x3b982c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3b982cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b9830:
    // 0x3b9830: 0xc1036d2  jal         func_40DB48
label_3b9834:
    if (ctx->pc == 0x3B9834u) {
        ctx->pc = 0x3B9834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9830u;
        // 0x3b9834: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9838u;
        goto label_3b9838;
    }
    ctx->pc = 0x3B9830u;
    SET_GPR_U32(ctx, 31, 0x3B9838u);
    ctx->pc = 0x3B9834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9830u;
    // 0x3b9834: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B9830u, 0x3B9838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9838u;
label_3b9838:
    // 0x3b9838: 0x1a000071  blez        $s0, . + 4 + (0x71 << 2)
label_3b983c:
    if (ctx->pc == 0x3B983Cu) {
        ctx->pc = 0x3B983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9838u;
        // 0x3b983c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9840u;
        goto label_3b9840;
    }
    ctx->pc = 0x3B9838u;
    {
        const bool branch_taken_0x3b9838 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3B983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9838u;
        // 0x3b983c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9838) {
            ctx->pc = 0x3B9A00u;
            goto label_3b9a00;
        }
    }
    ctx->pc = 0x3B9840u;
label_3b9840:
    // 0x3b9840: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x3b9840u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b9844:
    // 0x3b9844: 0x141023  negu        $v0, $s4
    ctx->pc = 0x3b9844u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
label_3b9848:
    // 0x3b9848: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3b9848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3b984c:
    // 0x3b984c: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
label_3b9850:
    if (ctx->pc == 0x3B9850u) {
        ctx->pc = 0x3B9850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B984Cu;
        // 0x3b9850: 0x26710008  addiu       $s1, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9854u;
        goto label_3b9854;
    }
    ctx->pc = 0x3B984Cu;
    {
        const bool branch_taken_0x3b984c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B984Cu;
        // 0x3b9850: 0x26710008  addiu       $s1, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b984c) {
            ctx->pc = 0x3B991Cu;
            goto label_3b991c;
        }
    }
    ctx->pc = 0x3B9854u;
label_3b9854:
    // 0x3b9854: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3b9854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3b9858:
    // 0x3b9858: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_3b985c:
    if (ctx->pc == 0x3B985Cu) {
        ctx->pc = 0x3B985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9858u;
        // 0x3b985c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9860u;
        goto label_3b9860;
    }
    ctx->pc = 0x3B9858u;
    {
        const bool branch_taken_0x3b9858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9858u;
        // 0x3b985c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9858) {
            ctx->pc = 0x3B98DCu;
            goto label_3b98dc;
        }
    }
    ctx->pc = 0x3B9860u;
label_3b9860:
    // 0x3b9860: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3b9864:
    if (ctx->pc == 0x3B9864u) {
        ctx->pc = 0x3B9864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9860u;
        // 0x3b9864: 0x8e24fffc  lw          $a0, -0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9868u;
        goto label_3b9868;
    }
    ctx->pc = 0x3B9860u;
    {
        const bool branch_taken_0x3b9860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9860u;
        // 0x3b9864: 0x8e24fffc  lw          $a0, -0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9860) {
            ctx->pc = 0x3B98A4u;
            goto label_3b98a4;
        }
    }
    ctx->pc = 0x3B9868u;
label_3b9868:
    // 0x3b9868: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3b986c:
    if (ctx->pc == 0x3B986Cu) {
        ctx->pc = 0x3B986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9868u;
        // 0x3b986c: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9870u;
        goto label_3b9870;
    }
    ctx->pc = 0x3B9868u;
    {
        const bool branch_taken_0x3b9868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9868u;
        // 0x3b986c: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9868) {
            ctx->pc = 0x3B987Cu;
            goto label_3b987c;
        }
    }
    ctx->pc = 0x3B9870u;
label_3b9870:
    // 0x3b9870: 0xc0ec6a4  jal         func_3B1A90
label_3b9874:
    if (ctx->pc == 0x3B9874u) {
        ctx->pc = 0x3B9878u;
        goto label_3b9878;
    }
    ctx->pc = 0x3B9870u;
    SET_GPR_U32(ctx, 31, 0x3B9878u);
    ctx->pc = 0x3B1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A90u, 0x3B9870u, 0x3B9878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9878u;
label_3b9878:
    // 0x3b9878: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x3b9878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3b987c:
    // 0x3b987c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x3b987cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3b9880:
    // 0x3b9880: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3b9884:
    if (ctx->pc == 0x3B9884u) {
        ctx->pc = 0x3B9884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9880u;
        // 0x3b9884: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9888u;
        goto label_3b9888;
    }
    ctx->pc = 0x3B9880u;
    {
        const bool branch_taken_0x3b9880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9880u;
        // 0x3b9884: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9880) {
            ctx->pc = 0x3B9898u;
            goto label_3b9898;
        }
    }
    ctx->pc = 0x3B9888u;
label_3b9888:
    // 0x3b9888: 0xc0e9f1e  jal         func_3A7C78
label_3b988c:
    if (ctx->pc == 0x3B988Cu) {
        ctx->pc = 0x3B9890u;
        goto label_3b9890;
    }
    ctx->pc = 0x3B9888u;
    SET_GPR_U32(ctx, 31, 0x3B9890u);
    ctx->pc = 0x3A7C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C78u, 0x3B9888u, 0x3B9890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9890u;
label_3b9890:
    // 0x3b9890: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3b9890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3b9894:
    // 0x3b9894: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3b9894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b9898:
    // 0x3b9898: 0x26710014  addiu       $s1, $s3, 0x14
    ctx->pc = 0x3b9898u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_3b989c:
    // 0x3b989c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3b989cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3b98a0:
    // 0x3b98a0: 0x8e24fffc  lw          $a0, -0x4($s1)
    ctx->pc = 0x3b98a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_3b98a4:
    // 0x3b98a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3b98a8:
    if (ctx->pc == 0x3B98A8u) {
        ctx->pc = 0x3B98A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B98A4u;
        // 0x3b98a8: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B98ACu;
        goto label_3b98ac;
    }
    ctx->pc = 0x3B98A4u;
    {
        const bool branch_taken_0x3b98a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B98A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B98A4u;
        // 0x3b98a8: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b98a4) {
            ctx->pc = 0x3B98B8u;
            goto label_3b98b8;
        }
    }
    ctx->pc = 0x3B98ACu;
label_3b98ac:
    // 0x3b98ac: 0xc0ec6a4  jal         func_3B1A90
label_3b98b0:
    if (ctx->pc == 0x3B98B0u) {
        ctx->pc = 0x3B98B4u;
        goto label_3b98b4;
    }
    ctx->pc = 0x3B98ACu;
    SET_GPR_U32(ctx, 31, 0x3B98B4u);
    ctx->pc = 0x3B1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A90u, 0x3B98ACu, 0x3B98B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B98B4u;
label_3b98b4:
    // 0x3b98b4: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x3b98b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3b98b8:
    // 0x3b98b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3b98b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b98bc:
    // 0x3b98bc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3b98c0:
    if (ctx->pc == 0x3B98C0u) {
        ctx->pc = 0x3B98C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B98BCu;
        // 0x3b98c0: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B98C4u;
        goto label_3b98c4;
    }
    ctx->pc = 0x3B98BCu;
    {
        const bool branch_taken_0x3b98bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b98bc) {
            ctx->pc = 0x3B98C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B98BCu;
            // 0x3b98c0: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B98D4u;
            goto label_3b98d4;
        }
    }
    ctx->pc = 0x3B98C4u;
label_3b98c4:
    // 0x3b98c4: 0xc0e9f1e  jal         func_3A7C78
label_3b98c8:
    if (ctx->pc == 0x3B98C8u) {
        ctx->pc = 0x3B98CCu;
        goto label_3b98cc;
    }
    ctx->pc = 0x3B98C4u;
    SET_GPR_U32(ctx, 31, 0x3B98CCu);
    ctx->pc = 0x3A7C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C78u, 0x3B98C4u, 0x3B98CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B98CCu;
label_3b98cc:
    // 0x3b98cc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3b98ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3b98d0:
    // 0x3b98d0: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x3b98d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_3b98d4:
    // 0x3b98d4: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x3b98d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_3b98d8:
    // 0x3b98d8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3b98d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3b98dc:
    // 0x3b98dc: 0x8e24fffc  lw          $a0, -0x4($s1)
    ctx->pc = 0x3b98dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_3b98e0:
    // 0x3b98e0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3b98e4:
    if (ctx->pc == 0x3B98E4u) {
        ctx->pc = 0x3B98E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B98E0u;
        // 0x3b98e4: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B98E8u;
        goto label_3b98e8;
    }
    ctx->pc = 0x3B98E0u;
    {
        const bool branch_taken_0x3b98e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B98E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B98E0u;
        // 0x3b98e4: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b98e0) {
            ctx->pc = 0x3B98F4u;
            goto label_3b98f4;
        }
    }
    ctx->pc = 0x3B98E8u;
label_3b98e8:
    // 0x3b98e8: 0xc0ec6a4  jal         func_3B1A90
label_3b98ec:
    if (ctx->pc == 0x3B98ECu) {
        ctx->pc = 0x3B98F0u;
        goto label_3b98f0;
    }
    ctx->pc = 0x3B98E8u;
    SET_GPR_U32(ctx, 31, 0x3B98F0u);
    ctx->pc = 0x3B1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A90u, 0x3B98E8u, 0x3B98F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B98F0u;
label_3b98f0:
    // 0x3b98f0: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x3b98f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3b98f4:
    // 0x3b98f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3b98f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b98f8:
    // 0x3b98f8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3b98fc:
    if (ctx->pc == 0x3B98FCu) {
        ctx->pc = 0x3B98FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B98F8u;
        // 0x3b98fc: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9900u;
        goto label_3b9900;
    }
    ctx->pc = 0x3B98F8u;
    {
        const bool branch_taken_0x3b98f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b98f8) {
            ctx->pc = 0x3B98FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B98F8u;
            // 0x3b98fc: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9910u;
            goto label_3b9910;
        }
    }
    ctx->pc = 0x3B9900u;
label_3b9900:
    // 0x3b9900: 0xc0e9f1e  jal         func_3A7C78
label_3b9904:
    if (ctx->pc == 0x3B9904u) {
        ctx->pc = 0x3B9908u;
        goto label_3b9908;
    }
    ctx->pc = 0x3B9900u;
    SET_GPR_U32(ctx, 31, 0x3B9908u);
    ctx->pc = 0x3A7C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C78u, 0x3B9900u, 0x3B9908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9908u;
label_3b9908:
    // 0x3b9908: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3b9908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3b990c:
    // 0x3b990c: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x3b990cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_3b9910:
    // 0x3b9910: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3b9910u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3b9914:
    // 0x3b9914: 0x1280003a  beqz        $s4, . + 4 + (0x3A << 2)
label_3b9918:
    if (ctx->pc == 0x3B9918u) {
        ctx->pc = 0x3B9918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9914u;
        // 0x3b9918: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B991Cu;
        goto label_3b991c;
    }
    ctx->pc = 0x3B9914u;
    {
        const bool branch_taken_0x3b9914 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9914u;
        // 0x3b9918: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9914) {
            ctx->pc = 0x3B9A00u;
            goto label_3b9a00;
        }
    }
    ctx->pc = 0x3B991Cu;
label_3b991c:
    // 0x3b991c: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x3b991cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b9920:
    // 0x3b9920: 0x8e64fffc  lw          $a0, -0x4($s3)
    ctx->pc = 0x3b9920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967292)));
label_3b9924:
    // 0x3b9924: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3b9928:
    if (ctx->pc == 0x3B9928u) {
        ctx->pc = 0x3B9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9924u;
        // 0x3b9928: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B992Cu;
        goto label_3b992c;
    }
    ctx->pc = 0x3B9924u;
    {
        const bool branch_taken_0x3b9924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9924u;
        // 0x3b9928: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9924) {
            ctx->pc = 0x3B9938u;
            goto label_3b9938;
        }
    }
    ctx->pc = 0x3B992Cu;
label_3b992c:
    // 0x3b992c: 0xc0ec6a4  jal         func_3B1A90
label_3b9930:
    if (ctx->pc == 0x3B9930u) {
        ctx->pc = 0x3B9934u;
        goto label_3b9934;
    }
    ctx->pc = 0x3B992Cu;
    SET_GPR_U32(ctx, 31, 0x3B9934u);
    ctx->pc = 0x3B1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A90u, 0x3B992Cu, 0x3B9934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9934u;
label_3b9934:
    // 0x3b9934: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x3b9934u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3b9938:
    // 0x3b9938: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3b9938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b993c:
    // 0x3b993c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3b9940:
    if (ctx->pc == 0x3B9940u) {
        ctx->pc = 0x3B9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B993Cu;
        // 0x3b9940: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9944u;
        goto label_3b9944;
    }
    ctx->pc = 0x3B993Cu;
    {
        const bool branch_taken_0x3b993c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b993c) {
            ctx->pc = 0x3B9940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B993Cu;
            // 0x3b9940: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9954u;
            goto label_3b9954;
        }
    }
    ctx->pc = 0x3B9944u;
label_3b9944:
    // 0x3b9944: 0xc0e9f1e  jal         func_3A7C78
label_3b9948:
    if (ctx->pc == 0x3B9948u) {
        ctx->pc = 0x3B994Cu;
        goto label_3b994c;
    }
    ctx->pc = 0x3B9944u;
    SET_GPR_U32(ctx, 31, 0x3B994Cu);
    ctx->pc = 0x3A7C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C78u, 0x3B9944u, 0x3B994Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B994Cu;
label_3b994c:
    // 0x3b994c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3b994cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3b9950:
    // 0x3b9950: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x3b9950u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_3b9954:
    // 0x3b9954: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x3b9954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3b9958:
    // 0x3b9958: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3b995c:
    if (ctx->pc == 0x3B995Cu) {
        ctx->pc = 0x3B995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9958u;
        // 0x3b995c: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9960u;
        goto label_3b9960;
    }
    ctx->pc = 0x3B9958u;
    {
        const bool branch_taken_0x3b9958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9958u;
        // 0x3b995c: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9958) {
            ctx->pc = 0x3B996Cu;
            goto label_3b996c;
        }
    }
    ctx->pc = 0x3B9960u;
label_3b9960:
    // 0x3b9960: 0xc0ec6a4  jal         func_3B1A90
label_3b9964:
    if (ctx->pc == 0x3B9964u) {
        ctx->pc = 0x3B9968u;
        goto label_3b9968;
    }
    ctx->pc = 0x3B9960u;
    SET_GPR_U32(ctx, 31, 0x3B9968u);
    ctx->pc = 0x3B1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A90u, 0x3B9960u, 0x3B9968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9968u;
label_3b9968:
    // 0x3b9968: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x3b9968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3b996c:
    // 0x3b996c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x3b996cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3b9970:
    // 0x3b9970: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3b9974:
    if (ctx->pc == 0x3B9974u) {
        ctx->pc = 0x3B9974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9970u;
        // 0x3b9974: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9978u;
        goto label_3b9978;
    }
    ctx->pc = 0x3B9970u;
    {
        const bool branch_taken_0x3b9970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9970) {
            ctx->pc = 0x3B9974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9970u;
            // 0x3b9974: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9988u;
            goto label_3b9988;
        }
    }
    ctx->pc = 0x3B9978u;
label_3b9978:
    // 0x3b9978: 0xc0e9f1e  jal         func_3A7C78
label_3b997c:
    if (ctx->pc == 0x3B997Cu) {
        ctx->pc = 0x3B9980u;
        goto label_3b9980;
    }
    ctx->pc = 0x3B9978u;
    SET_GPR_U32(ctx, 31, 0x3B9980u);
    ctx->pc = 0x3A7C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C78u, 0x3B9978u, 0x3B9980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9980u;
label_3b9980:
    // 0x3b9980: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3b9980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3b9984:
    // 0x3b9984: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x3b9984u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_3b9988:
    // 0x3b9988: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x3b9988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3b998c:
    // 0x3b998c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3b9990:
    if (ctx->pc == 0x3B9990u) {
        ctx->pc = 0x3B9990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B998Cu;
        // 0x3b9990: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9994u;
        goto label_3b9994;
    }
    ctx->pc = 0x3B998Cu;
    {
        const bool branch_taken_0x3b998c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B998Cu;
        // 0x3b9990: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b998c) {
            ctx->pc = 0x3B99A0u;
            goto label_3b99a0;
        }
    }
    ctx->pc = 0x3B9994u;
label_3b9994:
    // 0x3b9994: 0xc0ec6a4  jal         func_3B1A90
label_3b9998:
    if (ctx->pc == 0x3B9998u) {
        ctx->pc = 0x3B999Cu;
        goto label_3b999c;
    }
    ctx->pc = 0x3B9994u;
    SET_GPR_U32(ctx, 31, 0x3B999Cu);
    ctx->pc = 0x3B1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A90u, 0x3B9994u, 0x3B999Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B999Cu;
label_3b999c:
    // 0x3b999c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x3b999cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3b99a0:
    // 0x3b99a0: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x3b99a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3b99a4:
    // 0x3b99a4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3b99a8:
    if (ctx->pc == 0x3B99A8u) {
        ctx->pc = 0x3B99A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B99A4u;
        // 0x3b99a8: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B99ACu;
        goto label_3b99ac;
    }
    ctx->pc = 0x3B99A4u;
    {
        const bool branch_taken_0x3b99a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b99a4) {
            ctx->pc = 0x3B99A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B99A4u;
            // 0x3b99a8: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B99BCu;
            goto label_3b99bc;
        }
    }
    ctx->pc = 0x3B99ACu;
label_3b99ac:
    // 0x3b99ac: 0xc0e9f1e  jal         func_3A7C78
label_3b99b0:
    if (ctx->pc == 0x3B99B0u) {
        ctx->pc = 0x3B99B4u;
        goto label_3b99b4;
    }
    ctx->pc = 0x3B99ACu;
    SET_GPR_U32(ctx, 31, 0x3B99B4u);
    ctx->pc = 0x3A7C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C78u, 0x3B99ACu, 0x3B99B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B99B4u;
label_3b99b4:
    // 0x3b99b4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3b99b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3b99b8:
    // 0x3b99b8: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x3b99b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_3b99bc:
    // 0x3b99bc: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x3b99bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_3b99c0:
    // 0x3b99c0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3b99c4:
    if (ctx->pc == 0x3B99C4u) {
        ctx->pc = 0x3B99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B99C0u;
        // 0x3b99c4: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B99C8u;
        goto label_3b99c8;
    }
    ctx->pc = 0x3B99C0u;
    {
        const bool branch_taken_0x3b99c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B99C0u;
        // 0x3b99c4: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b99c0) {
            ctx->pc = 0x3B99D4u;
            goto label_3b99d4;
        }
    }
    ctx->pc = 0x3B99C8u;
label_3b99c8:
    // 0x3b99c8: 0xc0ec6a4  jal         func_3B1A90
label_3b99cc:
    if (ctx->pc == 0x3B99CCu) {
        ctx->pc = 0x3B99D0u;
        goto label_3b99d0;
    }
    ctx->pc = 0x3B99C8u;
    SET_GPR_U32(ctx, 31, 0x3B99D0u);
    ctx->pc = 0x3B1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A90u, 0x3B99C8u, 0x3B99D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B99D0u;
label_3b99d0:
    // 0x3b99d0: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x3b99d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3b99d4:
    // 0x3b99d4: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x3b99d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3b99d8:
    // 0x3b99d8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3b99dc:
    if (ctx->pc == 0x3B99DCu) {
        ctx->pc = 0x3B99DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B99D8u;
        // 0x3b99dc: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B99E0u;
        goto label_3b99e0;
    }
    ctx->pc = 0x3B99D8u;
    {
        const bool branch_taken_0x3b99d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b99d8) {
            ctx->pc = 0x3B99DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B99D8u;
            // 0x3b99dc: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B99F0u;
            goto label_3b99f0;
        }
    }
    ctx->pc = 0x3B99E0u;
label_3b99e0:
    // 0x3b99e0: 0xc0e9f1e  jal         func_3A7C78
label_3b99e4:
    if (ctx->pc == 0x3B99E4u) {
        ctx->pc = 0x3B99E8u;
        goto label_3b99e8;
    }
    ctx->pc = 0x3B99E0u;
    SET_GPR_U32(ctx, 31, 0x3B99E8u);
    ctx->pc = 0x3A7C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C78u, 0x3B99E0u, 0x3B99E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B99E8u;
label_3b99e8:
    // 0x3b99e8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3b99e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3b99ec:
    // 0x3b99ec: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x3b99ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_3b99f0:
    // 0x3b99f0: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x3b99f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_3b99f4:
    // 0x3b99f4: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x3b99f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
label_3b99f8:
    // 0x3b99f8: 0x1680ffc9  bnez        $s4, . + 4 + (-0x37 << 2)
label_3b99fc:
    if (ctx->pc == 0x3B99FCu) {
        ctx->pc = 0x3B99FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B99F8u;
        // 0x3b99fc: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9A00u;
        goto label_3b9a00;
    }
    ctx->pc = 0x3B99F8u;
    {
        const bool branch_taken_0x3b99f8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B99FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B99F8u;
        // 0x3b99fc: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b99f8) {
            ctx->pc = 0x3B9920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b9920;
        }
    }
    ctx->pc = 0x3B9A00u;
label_3b9a00:
    // 0x3b9a00: 0x2b2a821  addu        $s5, $s5, $s2
    ctx->pc = 0x3b9a00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_3b9a04:
    // 0x3b9a04: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3b9a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b9a08:
    // 0x3b9a08: 0x26a2000c  addiu       $v0, $s5, 0xC
    ctx->pc = 0x3b9a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_3b9a0c:
    // 0x3b9a0c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3b9a0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b9a10:
    // 0x3b9a10: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3b9a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b9a14:
    // 0x3b9a14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b9a14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b9a18:
    // 0x3b9a18: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3b9a18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b9a1c:
    // 0x3b9a1c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3b9a1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b9a20:
    // 0x3b9a20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b9a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b9a24:
    // 0x3b9a24: 0x3e00008  jr          $ra
label_3b9a28:
    if (ctx->pc == 0x3B9A28u) {
        ctx->pc = 0x3B9A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9A24u;
        // 0x3b9a28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9A2Cu;
        goto label_3b9a2c;
    }
    ctx->pc = 0x3B9A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9A24u;
        // 0x3b9a28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9A2Cu;
label_3b9a2c:
    // 0x3b9a2c: 0x0  nop
    ctx->pc = 0x3b9a2cu;
    // NOP
label_3b9a30:
    // 0x3b9a30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b9a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3b9a34:
    // 0x3b9a34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b9a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b9a38:
    // 0x3b9a38: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b9a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3b9a3c:
    // 0x3b9a3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b9a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b9a40:
    // 0x3b9a40: 0xc0ed294  jal         func_3B4A50
label_3b9a44:
    if (ctx->pc == 0x3B9A44u) {
        ctx->pc = 0x3B9A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9A40u;
        // 0x3b9a44: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9A48u;
        goto label_3b9a48;
    }
    ctx->pc = 0x3B9A40u;
    SET_GPR_U32(ctx, 31, 0x3B9A48u);
    ctx->pc = 0x3B9A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9A40u;
    // 0x3b9a44: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4A50u, 0x3B9A40u, 0x3B9A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9A48u;
label_3b9a48:
    // 0x3b9a48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b9a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b9a4c:
    // 0x3b9a4c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3b9a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b9a50:
    // 0x3b9a50: 0xc0ed13c  jal         func_3B44F0
label_3b9a54:
    if (ctx->pc == 0x3B9A54u) {
        ctx->pc = 0x3B9A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9A50u;
        // 0x3b9a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9A58u;
        goto label_3b9a58;
    }
    ctx->pc = 0x3B9A50u;
    SET_GPR_U32(ctx, 31, 0x3B9A58u);
    ctx->pc = 0x3B9A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9A50u;
    // 0x3b9a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B44F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B44F0u, 0x3B9A50u, 0x3B9A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9A58u;
label_3b9a58:
    // 0x3b9a58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b9a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b9a5c:
    // 0x3b9a5c: 0xc0ed340  jal         func_3B4D00
label_3b9a60:
    if (ctx->pc == 0x3B9A60u) {
        ctx->pc = 0x3B9A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9A5Cu;
        // 0x3b9a60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9A64u;
        goto label_3b9a64;
    }
    ctx->pc = 0x3B9A5Cu;
    SET_GPR_U32(ctx, 31, 0x3B9A64u);
    ctx->pc = 0x3B9A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9A5Cu;
    // 0x3b9a60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4D00u, 0x3B9A5Cu, 0x3B9A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9A64u;
label_3b9a64:
    // 0x3b9a64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3b9a68:
    if (ctx->pc == 0x3B9A68u) {
        ctx->pc = 0x3B9A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9A64u;
        // 0x3b9a68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9A6Cu;
        goto label_3b9a6c;
    }
    ctx->pc = 0x3B9A64u;
    {
        const bool branch_taken_0x3b9a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9A64u;
        // 0x3b9a68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9a64) {
            ctx->pc = 0x3B9A74u;
            goto label_3b9a74;
        }
    }
    ctx->pc = 0x3B9A6Cu;
label_3b9a6c:
    // 0x3b9a6c: 0x10000012  b           . + 4 + (0x12 << 2)
label_3b9a70:
    if (ctx->pc == 0x3B9A70u) {
        ctx->pc = 0x3B9A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9A6Cu;
        // 0x3b9a70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9A74u;
        goto label_3b9a74;
    }
    ctx->pc = 0x3B9A6Cu;
    {
        const bool branch_taken_0x3b9a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9A6Cu;
        // 0x3b9a70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9a6c) {
            ctx->pc = 0x3B9AB8u;
            goto label_3b9ab8;
        }
    }
    ctx->pc = 0x3B9A74u;
label_3b9a74:
    // 0x3b9a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b9a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b9a78:
    // 0x3b9a78: 0xc0ee452  jal         func_3B9148
label_3b9a7c:
    if (ctx->pc == 0x3B9A7Cu) {
        ctx->pc = 0x3B9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9A78u;
        // 0x3b9a7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9A80u;
        goto label_3b9a80;
    }
    ctx->pc = 0x3B9A78u;
    SET_GPR_U32(ctx, 31, 0x3B9A80u);
    ctx->pc = 0x3B9A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9A78u;
    // 0x3b9a7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9148u, 0x3B9A78u, 0x3B9A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9A80u;
label_3b9a80:
    // 0x3b9a80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b9a80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b9a84:
    // 0x3b9a84: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
label_3b9a88:
    if (ctx->pc == 0x3B9A88u) {
        ctx->pc = 0x3B9A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9A84u;
        // 0x3b9a88: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9A8Cu;
        goto label_3b9a8c;
    }
    ctx->pc = 0x3B9A84u;
    {
        const bool branch_taken_0x3b9a84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9A84u;
        // 0x3b9a88: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9a84) {
            ctx->pc = 0x3B9AB8u;
            goto label_3b9ab8;
        }
    }
    ctx->pc = 0x3B9A8Cu;
label_3b9a8c:
    // 0x3b9a8c: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_3b9a90:
    if (ctx->pc == 0x3B9A90u) {
        ctx->pc = 0x3B9A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9A8Cu;
        // 0x3b9a90: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9A94u;
        goto label_3b9a94;
    }
    ctx->pc = 0x3B9A8Cu;
    {
        const bool branch_taken_0x3b9a8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9a8c) {
            ctx->pc = 0x3B9A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9A8Cu;
            // 0x3b9a90: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9ABCu;
            goto label_3b9abc;
        }
    }
    ctx->pc = 0x3B9A94u;
label_3b9a94:
    // 0x3b9a94: 0xc0ee78c  jal         func_3B9E30
label_3b9a98:
    if (ctx->pc == 0x3B9A98u) {
        ctx->pc = 0x3B9A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9A94u;
        // 0x3b9a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9A9Cu;
        goto label_3b9a9c;
    }
    ctx->pc = 0x3B9A94u;
    SET_GPR_U32(ctx, 31, 0x3B9A9Cu);
    ctx->pc = 0x3B9A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9A94u;
    // 0x3b9a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9E30u, 0x3B9A94u, 0x3B9A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9A9Cu;
label_3b9a9c:
    // 0x3b9a9c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b9a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3b9aa0:
    // 0x3b9aa0: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x3b9aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_3b9aa4:
    // 0x3b9aa4: 0x8c62e99c  lw          $v0, -0x1664($v1)
    ctx->pc = 0x3b9aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961564)));
label_3b9aa8:
    // 0x3b9aa8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b9aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b9aac:
    // 0x3b9aac: 0x40f809  jalr        $v0
label_3b9ab0:
    if (ctx->pc == 0x3B9AB0u) {
        ctx->pc = 0x3B9AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9AACu;
        // 0x3b9ab0: 0x8cc4d3ac  lw          $a0, -0x2C54($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294955948)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9AB4u;
        goto label_3b9ab4;
    }
    ctx->pc = 0x3B9AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B9AB4u);
        ctx->pc = 0x3B9AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9AACu;
        // 0x3b9ab0: 0x8cc4d3ac  lw          $a0, -0x2C54($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294955948)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9AACu, 0x3B9AB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B9AB4u;
label_3b9ab4:
    // 0x3b9ab4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b9ab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b9ab8:
    // 0x3b9ab8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b9ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b9abc:
    // 0x3b9abc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b9abcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b9ac0:
    // 0x3b9ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b9ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b9ac4:
    // 0x3b9ac4: 0x3e00008  jr          $ra
label_3b9ac8:
    if (ctx->pc == 0x3B9AC8u) {
        ctx->pc = 0x3B9AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9AC4u;
        // 0x3b9ac8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9ACCu;
        goto label_3b9acc;
    }
    ctx->pc = 0x3B9AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9AC4u;
        // 0x3b9ac8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9ACCu;
label_3b9acc:
    // 0x3b9acc: 0x0  nop
    ctx->pc = 0x3b9accu;
    // NOP
    ctx->pc = 0x3b9ad0u;
}
