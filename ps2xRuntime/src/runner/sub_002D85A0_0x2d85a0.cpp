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

// Function: sub_002D85A0
// Address: 0x2d85a0 - 0x2d8630
void sub_002D85A0_0x2d85a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D85A0_0x2d85a0");
#endif

    switch (ctx->pc) {
        case 0x2d85c8u: goto label_2d85c8;
        case 0x2d85f4u: goto label_2d85f4;
        case 0x2d8614u: goto label_2d8614;
        default: break;
    }

    ctx->pc = 0x2d85a0u;

    // 0x2d85a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d85a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d85a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d85a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d85a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d85a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d85ac: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2d85acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2d85b0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2d85b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2d85b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d85b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d85b8: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2d85b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d85bc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2d85bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d85c0: 0xc0b4338  jal         func_2D0CE0
    ctx->pc = 0x2D85C0u;
    SET_GPR_U32(ctx, 31, 0x2D85C8u);
    ctx->pc = 0x2D0CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0CE0u, 0x2D85C0u, 0x2D85C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D85C8u;
label_2d85c8:
    // 0x2d85c8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D85C8u;
    {
        const bool branch_taken_0x2d85c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d85c8) {
            ctx->pc = 0x2D85F4u;
            goto label_2d85f4;
        }
    }
    ctx->pc = 0x2D85D0u;
    // 0x2d85d0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2d85d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d85d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d85d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d85d8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2d85d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d85dc: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x2d85dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2d85e0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2d85e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d85e4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2d85e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d85e8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2d85e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2d85ec: 0xc0b4328  jal         func_2D0CA0
    ctx->pc = 0x2D85ECu;
    SET_GPR_U32(ctx, 31, 0x2D85F4u);
    ctx->pc = 0x2D0CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0CA0u, 0x2D85ECu, 0x2D85F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D85F4u;
label_2d85f4:
    // 0x2d85f4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2d85f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d85f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2d85f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d85fc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2d85fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2d8600: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2d8600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2d8604: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d8604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8608: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2d8608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d860c: 0xc0b618c  jal         func_2D8630
    ctx->pc = 0x2D860Cu;
    SET_GPR_U32(ctx, 31, 0x2D8614u);
    ctx->pc = 0x2D8630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8630u, 0x2D860Cu, 0x2D8614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8614u;
label_2d8614:
    // 0x2d8614: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d8614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d8618: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d8618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d861c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d861cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8620: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2d8620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d8624: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D862Cu;
    // 0x2d862c: 0x0  nop
    ctx->pc = 0x2d862cu;
    // NOP
    ctx->pc = 0x2d8630u;
}
