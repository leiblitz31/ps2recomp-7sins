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

// Function: sub_001EC3D0
// Address: 0x1ec3d0 - 0x1ec440
void sub_001EC3D0_0x1ec3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC3D0_0x1ec3d0");
#endif

    switch (ctx->pc) {
        case 0x1ec3ecu: goto label_1ec3ec;
        default: break;
    }

    ctx->pc = 0x1ec3d0u;

    // 0x1ec3d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ec3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ec3d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ec3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ec3d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ec3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ec3dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1ec3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1ec3e0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1ec3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1ec3e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1EC3E4u;
    {
        const bool branch_taken_0x1ec3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec3e4) {
            ctx->pc = 0x1EC414u;
            goto label_1ec414;
        }
    }
    ctx->pc = 0x1EC3ECu;
label_1ec3ec:
    // 0x1ec3ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1ec3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec3f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ec3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec3f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ec3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec3f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ec3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ec3fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ec3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec400: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ec400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ec404: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1ec404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1ec408: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ec408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec40c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x1ec40cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ec410: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1ec410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_1ec414:
    // 0x1ec414: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ec414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec418: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1EC418u;
    {
        const bool branch_taken_0x1ec418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec418) {
            ctx->pc = 0x1EC3ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec3ec;
        }
    }
    ctx->pc = 0x1EC420u;
    // 0x1ec420: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ec420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec424: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec428: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ec428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ec42c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC434u;
    // 0x1ec434: 0x0  nop
    ctx->pc = 0x1ec434u;
    // NOP
    // 0x1ec438: 0x0  nop
    ctx->pc = 0x1ec438u;
    // NOP
    // 0x1ec43c: 0x0  nop
    ctx->pc = 0x1ec43cu;
    // NOP
    ctx->pc = 0x1ec440u;
}
