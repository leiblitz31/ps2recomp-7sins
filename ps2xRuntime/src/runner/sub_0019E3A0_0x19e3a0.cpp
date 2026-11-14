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

// Function: sub_0019E3A0
// Address: 0x19e3a0 - 0x19e420
void sub_0019E3A0_0x19e3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E3A0_0x19e3a0");
#endif

    switch (ctx->pc) {
        case 0x19e3c8u: goto label_19e3c8;
        case 0x19e3d8u: goto label_19e3d8;
        default: break;
    }

    ctx->pc = 0x19e3a0u;

    // 0x19e3a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19e3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19e3a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19e3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19e3a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e3ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19e3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19e3b0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x19e3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x19e3b4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x19e3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x19e3b8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x19e3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x19e3bc: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x19e3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19e3c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19E3C0u;
    {
        const bool branch_taken_0x19e3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e3c0) {
            ctx->pc = 0x19E3ECu;
            goto label_19e3ec;
        }
    }
    ctx->pc = 0x19E3C8u;
label_19e3c8:
    // 0x19e3c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e3cc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x19e3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e3d0: 0xc067878  jal         func_19E1E0
    ctx->pc = 0x19E3D0u;
    SET_GPR_U32(ctx, 31, 0x19E3D8u);
    ctx->pc = 0x19E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E1E0u, 0x19E3D0u, 0x19E3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E3D8u;
label_19e3d8:
    // 0x19e3d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19e3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e3dc: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x19e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x19e3e0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x19e3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x19e3e4: 0x26100024  addiu       $s0, $s0, 0x24
    ctx->pc = 0x19e3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x19e3e8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x19e3e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e3ec:
    // 0x19e3ec: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x19e3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e3f0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e3f4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x19E3F4u;
    {
        const bool branch_taken_0x19e3f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19e3f4) {
            ctx->pc = 0x19E3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e3c8;
        }
    }
    ctx->pc = 0x19E3FCu;
    // 0x19e3fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19e3fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e400: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19e400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e404: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e408: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19e408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e40c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x19e40cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x19e410: 0x3e00008  jr          $ra
    ctx->pc = 0x19E410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E418u;
    // 0x19e418: 0x0  nop
    ctx->pc = 0x19e418u;
    // NOP
    // 0x19e41c: 0x0  nop
    ctx->pc = 0x19e41cu;
    // NOP
    ctx->pc = 0x19e420u;
}
