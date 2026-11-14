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

// Function: sub_001C0B40
// Address: 0x1c0b40 - 0x1c0bf0
void sub_001C0B40_0x1c0b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0B40_0x1c0b40");
#endif

    switch (ctx->pc) {
        case 0x1c0b64u: goto label_1c0b64;
        case 0x1c0b7cu: goto label_1c0b7c;
        case 0x1c0ba4u: goto label_1c0ba4;
        case 0x1c0bc0u: goto label_1c0bc0;
        default: break;
    }

    ctx->pc = 0x1c0b40u;

    // 0x1c0b40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c0b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c0b44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c0b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c0b48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c0b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c0b4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c0b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c0b50: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1c0b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1c0b54: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1c0b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1c0b58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c0b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b5c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1C0B5Cu;
    {
        const bool branch_taken_0x1c0b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0b5c) {
            ctx->pc = 0x1C0BB0u;
            goto label_1c0bb0;
        }
    }
    ctx->pc = 0x1C0B64u;
label_1c0b64:
    // 0x1c0b64: 0x8fb10040  lw          $s1, 0x40($sp)
    ctx->pc = 0x1c0b64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c0b68: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c0b6c: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1c0b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1c0b70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c0b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b74: 0xc06ef08  jal         func_1BBC20
    ctx->pc = 0x1C0B74u;
    SET_GPR_U32(ctx, 31, 0x1C0B7Cu);
    ctx->pc = 0x1BBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC20u, 0x1C0B74u, 0x1C0B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0B7Cu;
label_1c0b7c:
    // 0x1c0b7c: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1c0b7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c0b80: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1c0b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c0b84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c0b84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c0b88: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0B88u;
    {
        const bool branch_taken_0x1c0b88 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0b88) {
            ctx->pc = 0x1C0BACu;
            goto label_1c0bac;
        }
    }
    ctx->pc = 0x1C0B90u;
    // 0x1c0b90: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c0b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c0b94: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1c0b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1c0b98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c0b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b9c: 0xc06ef08  jal         func_1BBC20
    ctx->pc = 0x1C0B9Cu;
    SET_GPR_U32(ctx, 31, 0x1C0BA4u);
    ctx->pc = 0x1BBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC20u, 0x1C0B9Cu, 0x1C0BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0BA4u;
label_1c0ba4:
    // 0x1c0ba4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C0BA4u;
    {
        const bool branch_taken_0x1c0ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0ba4) {
            ctx->pc = 0x1C0BD0u;
            goto label_1c0bd0;
        }
    }
    ctx->pc = 0x1C0BACu;
label_1c0bac:
    // 0x1c0bac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c0bacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c0bb0:
    // 0x1c0bb0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c0bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c0bb4: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1c0bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1c0bb8: 0xc06ef24  jal         func_1BBC90
    ctx->pc = 0x1C0BB8u;
    SET_GPR_U32(ctx, 31, 0x1C0BC0u);
    ctx->pc = 0x1BBC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC90u, 0x1C0BB8u, 0x1C0BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0BC0u;
label_1c0bc0:
    // 0x1c0bc0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1c0bc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c0bc4: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1C0BC4u;
    {
        const bool branch_taken_0x1c0bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0bc4) {
            ctx->pc = 0x1C0B64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0b64;
        }
    }
    ctx->pc = 0x1C0BCCu;
    // 0x1c0bcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c0bccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0bd0:
    // 0x1c0bd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c0bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0bd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c0bd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0bd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c0bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0bdc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1c0bdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c0be0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0BE8u;
    // 0x1c0be8: 0x0  nop
    ctx->pc = 0x1c0be8u;
    // NOP
    // 0x1c0bec: 0x0  nop
    ctx->pc = 0x1c0becu;
    // NOP
    ctx->pc = 0x1c0bf0u;
}
