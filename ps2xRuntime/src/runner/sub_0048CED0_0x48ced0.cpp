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

// Function: sub_0048CED0
// Address: 0x48ced0 - 0x48d010
void sub_0048CED0_0x48ced0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CED0_0x48ced0");
#endif

    switch (ctx->pc) {
        case 0x48cf04u: goto label_48cf04;
        case 0x48cf30u: goto label_48cf30;
        case 0x48cf3cu: goto label_48cf3c;
        case 0x48cfa0u: goto label_48cfa0;
        default: break;
    }

    ctx->pc = 0x48ced0u;

    // 0x48ced0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x48ced0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x48ced4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48ced4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x48ced8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48ced8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48cedc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48cedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48cee0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x48cee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x48cee4: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x48cee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x48cee8: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x48cee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x48ceec: 0xafa70070  sw          $a3, 0x70($sp)
    ctx->pc = 0x48ceecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
    // 0x48cef0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x48cef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48cef4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x48cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x48cef8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x48CEF8u;
    {
        const bool branch_taken_0x48cef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cef8) {
            ctx->pc = 0x48CF20u;
            goto label_48cf20;
        }
    }
    ctx->pc = 0x48CF00u;
    // 0x48cf00: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x48cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_48cf04:
    // 0x48cf04: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x48cf04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x48cf08: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x48cf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x48cf0c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x48cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x48cf10: 0x0  nop
    ctx->pc = 0x48cf10u;
    // NOP
    // 0x48cf14: 0x0  nop
    ctx->pc = 0x48cf14u;
    // NOP
    // 0x48cf18: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x48CF18u;
    {
        const bool branch_taken_0x48cf18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48cf18) {
            ctx->pc = 0x48CF04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48cf04;
        }
    }
    ctx->pc = 0x48CF20u;
label_48cf20:
    // 0x48cf20: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x48cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48cf24: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x48cf24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48cf28: 0xc123200  jal         func_48C800
    ctx->pc = 0x48CF28u;
    SET_GPR_U32(ctx, 31, 0x48CF30u);
    ctx->pc = 0x48C800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C800u, 0x48CF28u, 0x48CF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CF30u;
label_48cf30:
    // 0x48cf30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48cf30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48cf34: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x48CF34u;
    {
        const bool branch_taken_0x48cf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cf34) {
            ctx->pc = 0x48CF90u;
            goto label_48cf90;
        }
    }
    ctx->pc = 0x48CF3Cu;
label_48cf3c:
    // 0x48cf3c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x48cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x48cf40: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x48cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x48cf44: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x48cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48cf48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x48cf4c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x48cf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x48cf50: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x48cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x48cf54: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x48cf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x48cf58: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x48cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x48cf5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x48cf60: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x48cf60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x48cf64: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x48cf64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x48cf68: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x48cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x48cf6c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x48cf6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x48cf70: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48CF70u;
    {
        const bool branch_taken_0x48cf70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48cf70) {
            ctx->pc = 0x48CF84u;
            goto label_48cf84;
        }
    }
    ctx->pc = 0x48CF78u;
    // 0x48cf78: 0x8fb10038  lw          $s1, 0x38($sp)
    ctx->pc = 0x48cf78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x48cf7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48CF7Cu;
    {
        const bool branch_taken_0x48cf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cf7c) {
            ctx->pc = 0x48CF88u;
            goto label_48cf88;
        }
    }
    ctx->pc = 0x48CF84u;
label_48cf84:
    // 0x48cf84: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x48cf84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_48cf88:
    // 0x48cf88: 0xafb10038  sw          $s1, 0x38($sp)
    ctx->pc = 0x48cf88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 17));
    // 0x48cf8c: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x48cf8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_48cf90:
    // 0x48cf90: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x48cf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48cf94: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x48cf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48cf98: 0xc1231f8  jal         func_48C7E0
    ctx->pc = 0x48CF98u;
    SET_GPR_U32(ctx, 31, 0x48CFA0u);
    ctx->pc = 0x48C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C7E0u, 0x48CF98u, 0x48CFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CFA0u;
label_48cfa0:
    // 0x48cfa0: 0x1602ffe6  bne         $s0, $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x48CFA0u;
    {
        const bool branch_taken_0x48cfa0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x48cfa0) {
            ctx->pc = 0x48CF3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48cf3c;
        }
    }
    ctx->pc = 0x48CFA8u;
    // 0x48cfa8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x48cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48cfac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48CFACu;
    {
        const bool branch_taken_0x48cfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cfac) {
            ctx->pc = 0x48CFC0u;
            goto label_48cfc0;
        }
    }
    ctx->pc = 0x48CFB4u;
    // 0x48cfb4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x48cfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48cfb8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x48cfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48cfbc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48cfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_48cfc0:
    // 0x48cfc0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x48cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48cfc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48CFC4u;
    {
        const bool branch_taken_0x48cfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cfc4) {
            ctx->pc = 0x48CFD8u;
            goto label_48cfd8;
        }
    }
    ctx->pc = 0x48CFCCu;
    // 0x48cfcc: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x48cfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x48cfd0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x48cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48cfd4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48cfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_48cfd8:
    // 0x48cfd8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x48cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x48cfdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48CFDCu;
    {
        const bool branch_taken_0x48cfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cfdc) {
            ctx->pc = 0x48CFF0u;
            goto label_48cff0;
        }
    }
    ctx->pc = 0x48CFE4u;
    // 0x48cfe4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x48cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x48cfe8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x48cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x48cfec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48cfecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_48cff0:
    // 0x48cff0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48cff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48cff4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48cff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48cff8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48cff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48cffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48cffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48d000: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x48d000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x48d004: 0x3e00008  jr          $ra
    ctx->pc = 0x48D004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48D00Cu;
    // 0x48d00c: 0x0  nop
    ctx->pc = 0x48d00cu;
    // NOP
    ctx->pc = 0x48d010u;
}
