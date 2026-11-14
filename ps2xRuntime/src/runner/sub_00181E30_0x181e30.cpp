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

// Function: sub_00181E30
// Address: 0x181e30 - 0x181eb0
void sub_00181E30_0x181e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181E30_0x181e30");
#endif

    switch (ctx->pc) {
        case 0x181e58u: goto label_181e58;
        case 0x181e68u: goto label_181e68;
        default: break;
    }

    ctx->pc = 0x181e30u;

    // 0x181e30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x181e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x181e34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x181e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x181e38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x181e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x181e3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181e40: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x181e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x181e44: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x181e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x181e48: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x181e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x181e4c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x181e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181e50: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x181E50u;
    {
        const bool branch_taken_0x181e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181e50) {
            ctx->pc = 0x181E7Cu;
            goto label_181e7c;
        }
    }
    ctx->pc = 0x181E58u;
label_181e58:
    // 0x181e58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181e5c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x181e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181e60: 0xc06071c  jal         func_181C70
    ctx->pc = 0x181E60u;
    SET_GPR_U32(ctx, 31, 0x181E68u);
    ctx->pc = 0x181C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181C70u, 0x181E60u, 0x181E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181E68u;
label_181e68:
    // 0x181e68: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x181e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181e6c: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x181e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x181e70: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x181e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x181e74: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x181e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x181e78: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x181e78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181e7c:
    // 0x181e7c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x181e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181e80: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x181e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x181e84: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x181E84u;
    {
        const bool branch_taken_0x181e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x181e84) {
            ctx->pc = 0x181E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181e58;
        }
    }
    ctx->pc = 0x181E8Cu;
    // 0x181e8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x181e8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181e90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x181e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181e94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x181e94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181e98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181e9c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x181e9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x181ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x181EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181EA8u;
    // 0x181ea8: 0x0  nop
    ctx->pc = 0x181ea8u;
    // NOP
    // 0x181eac: 0x0  nop
    ctx->pc = 0x181eacu;
    // NOP
    ctx->pc = 0x181eb0u;
}
