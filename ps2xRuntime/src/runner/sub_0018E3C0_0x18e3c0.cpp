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

// Function: sub_0018E3C0
// Address: 0x18e3c0 - 0x18e440
void sub_0018E3C0_0x18e3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E3C0_0x18e3c0");
#endif

    switch (ctx->pc) {
        case 0x18e3e8u: goto label_18e3e8;
        case 0x18e3f8u: goto label_18e3f8;
        default: break;
    }

    ctx->pc = 0x18e3c0u;

    // 0x18e3c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18e3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18e3c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18e3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18e3c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18e3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18e3cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18e3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18e3d0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x18e3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x18e3d4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x18e3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x18e3d8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x18e3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x18e3dc: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x18e3dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e3e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18E3E0u;
    {
        const bool branch_taken_0x18e3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e3e0) {
            ctx->pc = 0x18E40Cu;
            goto label_18e40c;
        }
    }
    ctx->pc = 0x18E3E8u;
label_18e3e8:
    // 0x18e3e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e3ec: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x18e3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e3f0: 0xc063910  jal         func_18E440
    ctx->pc = 0x18E3F0u;
    SET_GPR_U32(ctx, 31, 0x18E3F8u);
    ctx->pc = 0x18E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E440u, 0x18E3F0u, 0x18E3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E3F8u;
label_18e3f8:
    // 0x18e3f8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x18e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e3fc: 0x24420054  addiu       $v0, $v0, 0x54
    ctx->pc = 0x18e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x18e400: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x18e400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x18e404: 0x26100054  addiu       $s0, $s0, 0x54
    ctx->pc = 0x18e404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x18e408: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x18e408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18e40c:
    // 0x18e40c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x18e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e410: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18e410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e414: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x18E414u;
    {
        const bool branch_taken_0x18e414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18e414) {
            ctx->pc = 0x18E3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e3e8;
        }
    }
    ctx->pc = 0x18E41Cu;
    // 0x18e41c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18e41cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e420: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18e420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e424: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18e424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e42c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x18e42cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18e430: 0x3e00008  jr          $ra
    ctx->pc = 0x18E430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E438u;
    // 0x18e438: 0x0  nop
    ctx->pc = 0x18e438u;
    // NOP
    // 0x18e43c: 0x0  nop
    ctx->pc = 0x18e43cu;
    // NOP
    ctx->pc = 0x18e440u;
}
