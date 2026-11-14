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

// Function: sub_0025C0B0
// Address: 0x25c0b0 - 0x25c140
void sub_0025C0B0_0x25c0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C0B0_0x25c0b0");
#endif

    switch (ctx->pc) {
        case 0x25c0d0u: goto label_25c0d0;
        case 0x25c0dcu: goto label_25c0dc;
        case 0x25c100u: goto label_25c100;
        case 0x25c11cu: goto label_25c11c;
        default: break;
    }

    ctx->pc = 0x25c0b0u;

    // 0x25c0b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25c0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25c0b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25c0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25c0b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25c0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25c0bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25c0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25c0c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c0c4: 0x244401f4  addiu       $a0, $v0, 0x1F4
    ctx->pc = 0x25c0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x25c0c8: 0xc0963d0  jal         func_258F40
    ctx->pc = 0x25C0C8u;
    SET_GPR_U32(ctx, 31, 0x25C0D0u);
    ctx->pc = 0x258F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258F40u, 0x25C0C8u, 0x25C0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C0D0u;
label_25c0d0:
    // 0x25c0d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25c0d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c0d4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25C0D4u;
    {
        const bool branch_taken_0x25c0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c0d4) {
            ctx->pc = 0x25C10Cu;
            goto label_25c10c;
        }
    }
    ctx->pc = 0x25C0DCu;
label_25c0dc:
    // 0x25c0dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25c0e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x25c0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25c0e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25c0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25c0e8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25C0E8u;
    {
        const bool branch_taken_0x25c0e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25c0e8) {
            ctx->pc = 0x25C108u;
            goto label_25c108;
        }
    }
    ctx->pc = 0x25C0F0u;
    // 0x25c0f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25c0f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25c0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25c0f8: 0xc096e08  jal         func_25B820
    ctx->pc = 0x25C0F8u;
    SET_GPR_U32(ctx, 31, 0x25C100u);
    ctx->pc = 0x25B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B820u, 0x25C0F8u, 0x25C100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C100u;
label_25c100:
    // 0x25c100: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25C100u;
    {
        const bool branch_taken_0x25c100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c100) {
            ctx->pc = 0x25C128u;
            goto label_25c128;
        }
    }
    ctx->pc = 0x25C108u;
label_25c108:
    // 0x25c108: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x25c108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_25c10c:
    // 0x25c10c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c110: 0x244401f4  addiu       $a0, $v0, 0x1F4
    ctx->pc = 0x25c110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x25c114: 0xc0963c8  jal         func_258F20
    ctx->pc = 0x25C114u;
    SET_GPR_U32(ctx, 31, 0x25C11Cu);
    ctx->pc = 0x258F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258F20u, 0x25C114u, 0x25C11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C11Cu;
label_25c11c:
    // 0x25c11c: 0x1602ffef  bne         $s0, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x25C11Cu;
    {
        const bool branch_taken_0x25c11c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x25c11c) {
            ctx->pc = 0x25C0DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c0dc;
        }
    }
    ctx->pc = 0x25C124u;
    // 0x25c124: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25c124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c128:
    // 0x25c128: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25c128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c12c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c12cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c130: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25c130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25c134: 0x3e00008  jr          $ra
    ctx->pc = 0x25C134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C13Cu;
    // 0x25c13c: 0x0  nop
    ctx->pc = 0x25c13cu;
    // NOP
    ctx->pc = 0x25c140u;
}
