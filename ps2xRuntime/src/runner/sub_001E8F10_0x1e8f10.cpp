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

// Function: sub_001E8F10
// Address: 0x1e8f10 - 0x1e8f90
void sub_001E8F10_0x1e8f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8F10_0x1e8f10");
#endif

    switch (ctx->pc) {
        case 0x1e8f38u: goto label_1e8f38;
        case 0x1e8f48u: goto label_1e8f48;
        default: break;
    }

    ctx->pc = 0x1e8f10u;

    // 0x1e8f10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e8f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e8f14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e8f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e8f18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e8f1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e8f20: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e8f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e8f24: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e8f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1e8f28: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1e8f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1e8f2c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x1e8f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e8f30: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E8F30u;
    {
        const bool branch_taken_0x1e8f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8f30) {
            ctx->pc = 0x1E8F5Cu;
            goto label_1e8f5c;
        }
    }
    ctx->pc = 0x1E8F38u;
label_1e8f38:
    // 0x1e8f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8f3c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e8f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8f40: 0xc07a3e4  jal         func_1E8F90
    ctx->pc = 0x1E8F40u;
    SET_GPR_U32(ctx, 31, 0x1E8F48u);
    ctx->pc = 0x1E8F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8F90u, 0x1E8F40u, 0x1E8F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8F48u;
label_1e8f48:
    // 0x1e8f48: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8f4c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1e8f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1e8f50: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1e8f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1e8f54: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1e8f54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1e8f58: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1e8f58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e8f5c:
    // 0x1e8f5c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e8f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8f60: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e8f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8f64: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E8F64u;
    {
        const bool branch_taken_0x1e8f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e8f64) {
            ctx->pc = 0x1E8F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8f38;
        }
    }
    ctx->pc = 0x1E8F6Cu;
    // 0x1e8f6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e8f6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8f70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e8f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8f74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8f74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8f78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8f7c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e8f7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e8f80: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8F88u;
    // 0x1e8f88: 0x0  nop
    ctx->pc = 0x1e8f88u;
    // NOP
    // 0x1e8f8c: 0x0  nop
    ctx->pc = 0x1e8f8cu;
    // NOP
    ctx->pc = 0x1e8f90u;
}
