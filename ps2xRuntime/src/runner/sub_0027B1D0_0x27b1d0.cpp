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

// Function: sub_0027B1D0
// Address: 0x27b1d0 - 0x27b260
void sub_0027B1D0_0x27b1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B1D0_0x27b1d0");
#endif

    switch (ctx->pc) {
        case 0x27b1f8u: goto label_27b1f8;
        case 0x27b224u: goto label_27b224;
        case 0x27b244u: goto label_27b244;
        default: break;
    }

    ctx->pc = 0x27b1d0u;

    // 0x27b1d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27b1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27b1d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27b1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27b1d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27b1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27b1dc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x27b1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x27b1e0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x27b1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x27b1e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x27b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27b1e8: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x27b1e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x27b1ec: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x27b1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b1f0: 0xc09e7c8  jal         func_279F20
    ctx->pc = 0x27B1F0u;
    SET_GPR_U32(ctx, 31, 0x27B1F8u);
    ctx->pc = 0x279F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279F20u, 0x27B1F0u, 0x27B1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B1F8u;
label_27b1f8:
    // 0x27b1f8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27B1F8u;
    {
        const bool branch_taken_0x27b1f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b1f8) {
            ctx->pc = 0x27B224u;
            goto label_27b224;
        }
    }
    ctx->pc = 0x27B200u;
    // 0x27b200: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x27b200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27b204: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x27b204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b208: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x27b208u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b20c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x27b20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x27b210: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x27b210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27b214: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x27b214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27b218: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x27b218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x27b21c: 0xc09e7b8  jal         func_279EE0
    ctx->pc = 0x27B21Cu;
    SET_GPR_U32(ctx, 31, 0x27B224u);
    ctx->pc = 0x279EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279EE0u, 0x27B21Cu, 0x27B224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B224u;
label_27b224:
    // 0x27b224: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x27b224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b228: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x27b228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x27b22c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x27b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x27b230: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x27b230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x27b234: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x27b234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b238: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x27b238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27b23c: 0xc09ec98  jal         func_27B260
    ctx->pc = 0x27B23Cu;
    SET_GPR_U32(ctx, 31, 0x27B244u);
    ctx->pc = 0x27B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B260u, 0x27B23Cu, 0x27B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B244u;
label_27b244:
    // 0x27b244: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x27b244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27b248: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27b248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b24c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27b24cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b250: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x27b250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27b254: 0x3e00008  jr          $ra
    ctx->pc = 0x27B254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B25Cu;
    // 0x27b25c: 0x0  nop
    ctx->pc = 0x27b25cu;
    // NOP
    ctx->pc = 0x27b260u;
}
