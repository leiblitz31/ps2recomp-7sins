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

// Function: sub_00155C00
// Address: 0x155c00 - 0x155c90
void sub_00155C00_0x155c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155C00_0x155c00");
#endif

    switch (ctx->pc) {
        case 0x155c1cu: goto label_155c1c;
        case 0x155c28u: goto label_155c28;
        case 0x155c38u: goto label_155c38;
        case 0x155c44u: goto label_155c44;
        case 0x155c58u: goto label_155c58;
        case 0x155c6cu: goto label_155c6c;
        default: break;
    }

    ctx->pc = 0x155c00u;

label_155c00:
    // 0x155c00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x155c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x155c04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x155c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x155c08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x155c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x155c0c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x155c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x155c10: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x155c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x155c14: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x155C14u;
    {
        const bool branch_taken_0x155c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155c14) {
            ctx->pc = 0x155C70u;
            goto label_155c70;
        }
    }
    ctx->pc = 0x155C1Cu;
label_155c1c:
    // 0x155c1c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x155c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155c20: 0xc0556c4  jal         func_155B10
    ctx->pc = 0x155C20u;
    SET_GPR_U32(ctx, 31, 0x155C28u);
    ctx->pc = 0x155B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B10u, 0x155C20u, 0x155C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C28u;
label_155c28:
    // 0x155c28: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x155c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155c2c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x155c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155c30: 0xc055700  jal         func_155C00
    ctx->pc = 0x155C30u;
    SET_GPR_U32(ctx, 31, 0x155C38u);
    ctx->pc = 0x155C00u;
    goto label_155c00;
    ctx->pc = 0x155C38u;
label_155c38:
    // 0x155c38: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x155c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155c3c: 0xc0556cc  jal         func_155B30
    ctx->pc = 0x155C3Cu;
    SET_GPR_U32(ctx, 31, 0x155C44u);
    ctx->pc = 0x155B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B30u, 0x155C3Cu, 0x155C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C44u;
label_155c44:
    // 0x155c44: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x155c44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155c48: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x155c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155c4c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x155c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x155c50: 0xc055724  jal         func_155C90
    ctx->pc = 0x155C50u;
    SET_GPR_U32(ctx, 31, 0x155C58u);
    ctx->pc = 0x155C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155C90u, 0x155C50u, 0x155C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C58u;
label_155c58:
    // 0x155c58: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x155c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155c5c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x155c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155c60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x155c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155c64: 0xc0555c8  jal         func_155720
    ctx->pc = 0x155C64u;
    SET_GPR_U32(ctx, 31, 0x155C6Cu);
    ctx->pc = 0x155720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155720u, 0x155C64u, 0x155C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C6Cu;
label_155c6c:
    // 0x155c6c: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x155c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_155c70:
    // 0x155c70: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x155c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155c74: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x155C74u;
    {
        const bool branch_taken_0x155c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155c74) {
            ctx->pc = 0x155C1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155c1c;
        }
    }
    ctx->pc = 0x155C7Cu;
    // 0x155c7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x155c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155c80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155c84: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x155c84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x155c88: 0x3e00008  jr          $ra
    ctx->pc = 0x155C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155C90u;
}
