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

// Function: sub_001BE8A0
// Address: 0x1be8a0 - 0x1be930
void sub_001BE8A0_0x1be8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE8A0_0x1be8a0");
#endif

    switch (ctx->pc) {
        case 0x1be8c8u: goto label_1be8c8;
        case 0x1be8f4u: goto label_1be8f4;
        case 0x1be914u: goto label_1be914;
        default: break;
    }

    ctx->pc = 0x1be8a0u;

    // 0x1be8a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1be8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1be8a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1be8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1be8a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1be8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1be8ac: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1be8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1be8b0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1be8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1be8b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1be8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be8b8: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x1be8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1be8bc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1be8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be8c0: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x1BE8C0u;
    SET_GPR_U32(ctx, 31, 0x1BE8C8u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x1BE8C0u, 0x1BE8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8C8u;
label_1be8c8:
    // 0x1be8c8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BE8C8u;
    {
        const bool branch_taken_0x1be8c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1be8c8) {
            ctx->pc = 0x1BE8F4u;
            goto label_1be8f4;
        }
    }
    ctx->pc = 0x1BE8D0u;
    // 0x1be8d0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1be8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be8d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1be8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be8d8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x1be8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be8dc: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x1be8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1be8e0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1be8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1be8e4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1be8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be8e8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1be8e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1be8ec: 0xc053d08  jal         func_14F420
    ctx->pc = 0x1BE8ECu;
    SET_GPR_U32(ctx, 31, 0x1BE8F4u);
    ctx->pc = 0x14F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F420u, 0x1BE8ECu, 0x1BE8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8F4u;
label_1be8f4:
    // 0x1be8f4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1be8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be8f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1be8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1be8fc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1be8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1be900: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1be900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1be904: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1be904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be908: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1be908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1be90c: 0xc06fa4c  jal         func_1BE930
    ctx->pc = 0x1BE90Cu;
    SET_GPR_U32(ctx, 31, 0x1BE914u);
    ctx->pc = 0x1BE930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE930u, 0x1BE90Cu, 0x1BE914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE914u;
label_1be914:
    // 0x1be914: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1be914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be918: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1be918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be91c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1be91cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be920: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1be920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1be924: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE92Cu;
    // 0x1be92c: 0x0  nop
    ctx->pc = 0x1be92cu;
    // NOP
    ctx->pc = 0x1be930u;
}
