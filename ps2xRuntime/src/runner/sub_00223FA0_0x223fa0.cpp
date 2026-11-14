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

// Function: sub_00223FA0
// Address: 0x223fa0 - 0x224130
void sub_00223FA0_0x223fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223FA0_0x223fa0");
#endif

    switch (ctx->pc) {
        case 0x223fc0u: goto label_223fc0;
        case 0x223fccu: goto label_223fcc;
        case 0x223fe4u: goto label_223fe4;
        case 0x223ff0u: goto label_223ff0;
        case 0x224008u: goto label_224008;
        case 0x22401cu: goto label_22401c;
        case 0x224034u: goto label_224034;
        case 0x224070u: goto label_224070;
        case 0x22407cu: goto label_22407c;
        case 0x2240c4u: goto label_2240c4;
        case 0x2240d0u: goto label_2240d0;
        case 0x2240e8u: goto label_2240e8;
        case 0x224108u: goto label_224108;
        default: break;
    }

    ctx->pc = 0x223fa0u;

    // 0x223fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x223fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x223fa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x223fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x223fa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x223fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x223fac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x223facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x223fb0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x223fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223fb4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x223fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x223fb8: 0xc088708  jal         func_221C20
    ctx->pc = 0x223FB8u;
    SET_GPR_U32(ctx, 31, 0x223FC0u);
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x223FB8u, 0x223FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223FC0u;
label_223fc0:
    // 0x223fc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x223fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223fc4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x223FC4u;
    {
        const bool branch_taken_0x223fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x223fc4) {
            ctx->pc = 0x22400Cu;
            goto label_22400c;
        }
    }
    ctx->pc = 0x223FCCu;
label_223fcc:
    // 0x223fcc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x223fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x223fd0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x223FD0u;
    {
        const bool branch_taken_0x223fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223fd0) {
            ctx->pc = 0x223FF4u;
            goto label_223ff4;
        }
    }
    ctx->pc = 0x223FD8u;
    // 0x223fd8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x223fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x223fdc: 0xc088840  jal         func_222100
    ctx->pc = 0x223FDCu;
    SET_GPR_U32(ctx, 31, 0x223FE4u);
    ctx->pc = 0x222100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222100u, 0x223FDCu, 0x223FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223FE4u;
label_223fe4:
    // 0x223fe4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x223fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x223fe8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x223FE8u;
    SET_GPR_U32(ctx, 31, 0x223FF0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x223FE8u, 0x223FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223FF0u;
label_223ff0:
    // 0x223ff0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x223ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_223ff4:
    // 0x223ff4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x223ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223ff8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x223ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x223ffc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x223ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224000: 0xc088d74  jal         func_2235D0
    ctx->pc = 0x224000u;
    SET_GPR_U32(ctx, 31, 0x224008u);
    ctx->pc = 0x2235D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2235D0u, 0x224000u, 0x224008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224008u;
label_224008:
    // 0x224008: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x224008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22400c:
    // 0x22400c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22400cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224010: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x224010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x224014: 0xc088700  jal         func_221C00
    ctx->pc = 0x224014u;
    SET_GPR_U32(ctx, 31, 0x22401Cu);
    ctx->pc = 0x221C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C00u, 0x224014u, 0x22401Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22401Cu;
label_22401c:
    // 0x22401c: 0x1602ffeb  bne         $s0, $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x22401Cu;
    {
        const bool branch_taken_0x22401c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x22401c) {
            ctx->pc = 0x223FCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223fcc;
        }
    }
    ctx->pc = 0x224024u;
    // 0x224024: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x224024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224028: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x224028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22402c: 0xc088698  jal         func_221A60
    ctx->pc = 0x22402Cu;
    SET_GPR_U32(ctx, 31, 0x224034u);
    ctx->pc = 0x221A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A60u, 0x22402Cu, 0x224034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224034u;
label_224034:
    // 0x224034: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224038: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x224038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22403c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22403cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x224040: 0x3e00008  jr          $ra
    ctx->pc = 0x224040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224048u;
    // 0x224048: 0x0  nop
    ctx->pc = 0x224048u;
    // NOP
    // 0x22404c: 0x0  nop
    ctx->pc = 0x22404cu;
    // NOP
    // 0x224050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x224050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x224054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x224054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x224058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x224058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22405c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22405cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x224060: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x224060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224064: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x224064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x224068: 0xc088708  jal         func_221C20
    ctx->pc = 0x224068u;
    SET_GPR_U32(ctx, 31, 0x224070u);
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x224068u, 0x224070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224070u;
label_224070:
    // 0x224070: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x224070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224074: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x224074u;
    {
        const bool branch_taken_0x224074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224074) {
            ctx->pc = 0x2240F8u;
            goto label_2240f8;
        }
    }
    ctx->pc = 0x22407Cu;
label_22407c:
    // 0x22407c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22407cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x224080: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x224080u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224084: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x224084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x224088: 0x284203e8  slti        $v0, $v0, 0x3E8
    ctx->pc = 0x224088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x22408c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x22408Cu;
    {
        const bool branch_taken_0x22408c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22408c) {
            ctx->pc = 0x2240F4u;
            goto label_2240f4;
        }
    }
    ctx->pc = 0x224094u;
    // 0x224094: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x224094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x224098: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x224098u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22409c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x22409cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2240a0: 0x284103e9  slti        $at, $v0, 0x3E9
    ctx->pc = 0x2240a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
    // 0x2240a4: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x2240A4u;
    {
        const bool branch_taken_0x2240a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2240a4) {
            ctx->pc = 0x2240F4u;
            goto label_2240f4;
        }
    }
    ctx->pc = 0x2240ACu;
    // 0x2240ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2240acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2240b0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2240B0u;
    {
        const bool branch_taken_0x2240b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2240b0) {
            ctx->pc = 0x2240D4u;
            goto label_2240d4;
        }
    }
    ctx->pc = 0x2240B8u;
    // 0x2240b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2240b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2240bc: 0xc088840  jal         func_222100
    ctx->pc = 0x2240BCu;
    SET_GPR_U32(ctx, 31, 0x2240C4u);
    ctx->pc = 0x222100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222100u, 0x2240BCu, 0x2240C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2240C4u;
label_2240c4:
    // 0x2240c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2240c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2240c8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2240C8u;
    SET_GPR_U32(ctx, 31, 0x2240D0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2240C8u, 0x2240D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2240D0u;
label_2240d0:
    // 0x2240d0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2240d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2240d4:
    // 0x2240d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2240d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2240d8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2240d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2240dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2240dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2240e0: 0xc088d74  jal         func_2235D0
    ctx->pc = 0x2240E0u;
    SET_GPR_U32(ctx, 31, 0x2240E8u);
    ctx->pc = 0x2235D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2235D0u, 0x2240E0u, 0x2240E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2240E8u;
label_2240e8:
    // 0x2240e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2240e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2240ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2240ECu;
    {
        const bool branch_taken_0x2240ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2240ec) {
            ctx->pc = 0x2240F8u;
            goto label_2240f8;
        }
    }
    ctx->pc = 0x2240F4u;
label_2240f4:
    // 0x2240f4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2240f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2240f8:
    // 0x2240f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2240f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2240fc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2240fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x224100: 0xc088700  jal         func_221C00
    ctx->pc = 0x224100u;
    SET_GPR_U32(ctx, 31, 0x224108u);
    ctx->pc = 0x221C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C00u, 0x224100u, 0x224108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224108u;
label_224108:
    // 0x224108: 0x1602ffdc  bne         $s0, $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x224108u;
    {
        const bool branch_taken_0x224108 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x224108) {
            ctx->pc = 0x22407Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22407c;
        }
    }
    ctx->pc = 0x224110u;
    // 0x224110: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224114: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x224114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224118: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x224118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22411c: 0x3e00008  jr          $ra
    ctx->pc = 0x22411Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22411Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224124u;
    // 0x224124: 0x0  nop
    ctx->pc = 0x224124u;
    // NOP
    // 0x224128: 0x0  nop
    ctx->pc = 0x224128u;
    // NOP
    // 0x22412c: 0x0  nop
    ctx->pc = 0x22412cu;
    // NOP
    ctx->pc = 0x224130u;
}
