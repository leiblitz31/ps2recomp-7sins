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

// Function: sub_0013B910
// Address: 0x13b910 - 0x13bb00
void sub_0013B910_0x13b910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B910_0x13b910");
#endif

    switch (ctx->pc) {
        case 0x13b948u: goto label_13b948;
        case 0x13b958u: goto label_13b958;
        case 0x13b96cu: goto label_13b96c;
        case 0x13b980u: goto label_13b980;
        case 0x13b9a0u: goto label_13b9a0;
        case 0x13b9a8u: goto label_13b9a8;
        case 0x13b9b4u: goto label_13b9b4;
        case 0x13b9c8u: goto label_13b9c8;
        case 0x13b9dcu: goto label_13b9dc;
        case 0x13b9e8u: goto label_13b9e8;
        case 0x13b9f4u: goto label_13b9f4;
        case 0x13ba0cu: goto label_13ba0c;
        case 0x13ba1cu: goto label_13ba1c;
        case 0x13ba28u: goto label_13ba28;
        case 0x13ba38u: goto label_13ba38;
        case 0x13ba64u: goto label_13ba64;
        case 0x13ba84u: goto label_13ba84;
        case 0x13ba94u: goto label_13ba94;
        case 0x13baa8u: goto label_13baa8;
        case 0x13babcu: goto label_13babc;
        case 0x13bad0u: goto label_13bad0;
        default: break;
    }

    ctx->pc = 0x13b910u;

    // 0x13b910: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x13b910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x13b914: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x13b914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x13b918: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13b918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13b91c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13b91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13b920: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13b920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13b924: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13b924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13b928: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13b928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13b92c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13b930: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13b930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13b934: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x13b934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x13b938: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x13b938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x13b93c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x13b93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13b940: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x13B940u;
    SET_GPR_U32(ctx, 31, 0x13B948u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x13B940u, 0x13B948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B948u;
label_13b948:
    // 0x13b948: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13b948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13b94c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13b94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b950: 0xc040304  jal         func_100C10
    ctx->pc = 0x13B950u;
    SET_GPR_U32(ctx, 31, 0x13B958u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x13B950u, 0x13B958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B958u;
label_13b958:
    // 0x13b958: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x13b958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13b95c: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x13b95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x13b960: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x13b960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13b964: 0xc04ecac  jal         func_13B2B0
    ctx->pc = 0x13B964u;
    SET_GPR_U32(ctx, 31, 0x13B96Cu);
    ctx->pc = 0x13B2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B2B0u, 0x13B964u, 0x13B96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B96Cu;
label_13b96c:
    // 0x13b96c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x13b96cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13b970: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13b970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13b974: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13b974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13b978: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x13B978u;
    SET_GPR_U32(ctx, 31, 0x13B980u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x13B978u, 0x13B980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B980u;
label_13b980:
    // 0x13b980: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B980u;
    {
        const bool branch_taken_0x13b980 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b980) {
            ctx->pc = 0x13B994u;
            goto label_13b994;
        }
    }
    ctx->pc = 0x13B988u;
    // 0x13b988: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13b988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b98c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x13B98Cu;
    {
        const bool branch_taken_0x13b98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b98c) {
            ctx->pc = 0x13BAD4u;
            goto label_13bad4;
        }
    }
    ctx->pc = 0x13B994u;
label_13b994:
    // 0x13b994: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x13b994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13b998: 0xc041b48  jal         func_106D20
    ctx->pc = 0x13B998u;
    SET_GPR_U32(ctx, 31, 0x13B9A0u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x13B998u, 0x13B9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B9A0u;
label_13b9a0:
    // 0x13b9a0: 0xc090864  jal         func_242190
    ctx->pc = 0x13B9A0u;
    SET_GPR_U32(ctx, 31, 0x13B9A8u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x13B9A0u, 0x13B9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B9A8u;
label_13b9a8:
    // 0x13b9a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13b9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9ac: 0xc090590  jal         func_241640
    ctx->pc = 0x13B9ACu;
    SET_GPR_U32(ctx, 31, 0x13B9B4u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x13B9ACu, 0x13B9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B9B4u;
label_13b9b4:
    // 0x13b9b4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x13b9b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13b9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9bc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x13b9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13b9c0: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x13B9C0u;
    SET_GPR_U32(ctx, 31, 0x13B9C8u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x13B9C0u, 0x13B9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B9C8u;
label_13b9c8:
    // 0x13b9c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13b9c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13b9ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13b9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9d4: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x13B9D4u;
    SET_GPR_U32(ctx, 31, 0x13B9DCu);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x13B9D4u, 0x13B9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B9DCu;
label_13b9dc:
    // 0x13b9dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13b9dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9e0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x13B9E0u;
    {
        const bool branch_taken_0x13b9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b9e0) {
            ctx->pc = 0x13BA50u;
            goto label_13ba50;
        }
    }
    ctx->pc = 0x13B9E8u;
label_13b9e8:
    // 0x13b9e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x13b9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13b9ec: 0xc0913ec  jal         func_244FB0
    ctx->pc = 0x13B9ECu;
    SET_GPR_U32(ctx, 31, 0x13B9F4u);
    ctx->pc = 0x244FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244FB0u, 0x13B9ECu, 0x13B9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B9F4u;
label_13b9f4:
    // 0x13b9f4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x13b9f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13b9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9fc: 0x2405055d  addiu       $a1, $zero, 0x55D
    ctx->pc = 0x13b9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1373));
    // 0x13ba00: 0x27868c70  addiu       $a2, $gp, -0x7390
    ctx->pc = 0x13ba00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937712));
    // 0x13ba04: 0xc041a50  jal         func_106940
    ctx->pc = 0x13BA04u;
    SET_GPR_U32(ctx, 31, 0x13BA0Cu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x13BA04u, 0x13BA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA0Cu;
label_13ba0c:
    // 0x13ba0c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x13ba0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13ba10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13ba10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ba14: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x13BA14u;
    SET_GPR_U32(ctx, 31, 0x13BA1Cu);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x13BA14u, 0x13BA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA1Cu;
label_13ba1c:
    // 0x13ba1c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x13ba1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13ba20: 0xc041874  jal         func_1061D0
    ctx->pc = 0x13BA20u;
    SET_GPR_U32(ctx, 31, 0x13BA28u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x13BA20u, 0x13BA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA28u;
label_13ba28:
    // 0x13ba28: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x13ba28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13ba2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13ba2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ba30: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x13BA30u;
    SET_GPR_U32(ctx, 31, 0x13BA38u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x13BA30u, 0x13BA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA38u;
label_13ba38:
    // 0x13ba38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13BA38u;
    {
        const bool branch_taken_0x13ba38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ba38) {
            ctx->pc = 0x13BA4Cu;
            goto label_13ba4c;
        }
    }
    ctx->pc = 0x13BA40u;
    // 0x13ba40: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x13ba40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ba44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13BA44u;
    {
        const bool branch_taken_0x13ba44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ba44) {
            ctx->pc = 0x13BA50u;
            goto label_13ba50;
        }
    }
    ctx->pc = 0x13BA4Cu;
label_13ba4c:
    // 0x13ba4c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x13ba4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_13ba50:
    // 0x13ba50: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x13BA50u;
    {
        const bool branch_taken_0x13ba50 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ba50) {
            ctx->pc = 0x13BA6Cu;
            goto label_13ba6c;
        }
    }
    ctx->pc = 0x13BA58u;
    // 0x13ba58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13ba58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ba5c: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x13BA5Cu;
    SET_GPR_U32(ctx, 31, 0x13BA64u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x13BA5Cu, 0x13BA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA64u;
label_13ba64:
    // 0x13ba64: 0x1602ffe0  bne         $s0, $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x13BA64u;
    {
        const bool branch_taken_0x13ba64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x13ba64) {
            ctx->pc = 0x13B9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b9e8;
        }
    }
    ctx->pc = 0x13BA6Cu;
label_13ba6c:
    // 0x13ba6c: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x13BA6Cu;
    {
        const bool branch_taken_0x13ba6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ba6c) {
            ctx->pc = 0x13BA78u;
            goto label_13ba78;
        }
    }
    ctx->pc = 0x13BA74u;
    // 0x13ba74: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x13ba74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13ba78:
    // 0x13ba78: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x13ba78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13ba7c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x13BA7Cu;
    SET_GPR_U32(ctx, 31, 0x13BA84u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x13BA7Cu, 0x13BA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA84u;
label_13ba84:
    // 0x13ba84: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13ba84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13ba88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13ba88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ba8c: 0xc040304  jal         func_100C10
    ctx->pc = 0x13BA8Cu;
    SET_GPR_U32(ctx, 31, 0x13BA94u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x13BA8Cu, 0x13BA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA94u;
label_13ba94:
    // 0x13ba94: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x13ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13ba98: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x13ba98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x13ba9c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x13ba9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13baa0: 0xc04ecac  jal         func_13B2B0
    ctx->pc = 0x13BAA0u;
    SET_GPR_U32(ctx, 31, 0x13BAA8u);
    ctx->pc = 0x13B2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B2B0u, 0x13BAA0u, 0x13BAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BAA8u;
label_13baa8:
    // 0x13baa8: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x13baa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x13baac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13baacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13bab0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13bab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13bab4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x13BAB4u;
    SET_GPR_U32(ctx, 31, 0x13BABCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x13BAB4u, 0x13BABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BABCu;
label_13babc:
    // 0x13babc: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x13babcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bac0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x13bac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13bac4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13bac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13bac8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x13BAC8u;
    SET_GPR_U32(ctx, 31, 0x13BAD0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x13BAC8u, 0x13BAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BAD0u;
label_13bad0:
    // 0x13bad0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x13bad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13bad4:
    // 0x13bad4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x13bad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13bad8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13bad8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13badc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13badcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13bae0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13bae0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13bae4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13bae4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13bae8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13bae8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13baec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13baecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13baf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13baf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13baf4: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x13baf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x13baf8: 0x3e00008  jr          $ra
    ctx->pc = 0x13BAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BB00u;
}
