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

// Function: sub_0027B120
// Address: 0x27b120 - 0x27b1b0
void sub_0027B120_0x27b120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B120_0x27b120");
#endif

    switch (ctx->pc) {
        case 0x27b148u: goto label_27b148;
        case 0x27b174u: goto label_27b174;
        case 0x27b194u: goto label_27b194;
        default: break;
    }

    ctx->pc = 0x27b120u;

    // 0x27b120: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27b120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27b124: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27b124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27b128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27b128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27b12c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x27b12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x27b130: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x27b130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x27b134: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x27b134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27b138: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x27b138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x27b13c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x27b13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b140: 0xc09e774  jal         func_279DD0
    ctx->pc = 0x27B140u;
    SET_GPR_U32(ctx, 31, 0x27B148u);
    ctx->pc = 0x279DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279DD0u, 0x27B140u, 0x27B148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B148u;
label_27b148:
    // 0x27b148: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27B148u;
    {
        const bool branch_taken_0x27b148 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b148) {
            ctx->pc = 0x27B174u;
            goto label_27b174;
        }
    }
    ctx->pc = 0x27B150u;
    // 0x27b150: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x27b150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27b154: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x27b154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b158: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x27b158u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b15c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x27b15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x27b160: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x27b160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27b164: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x27b164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27b168: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x27b168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x27b16c: 0xc09e764  jal         func_279D90
    ctx->pc = 0x27B16Cu;
    SET_GPR_U32(ctx, 31, 0x27B174u);
    ctx->pc = 0x279D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279D90u, 0x27B16Cu, 0x27B174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B174u;
label_27b174:
    // 0x27b174: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x27b174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b178: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x27b178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x27b17c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x27b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x27b180: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x27b180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x27b184: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x27b184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b188: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x27b188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27b18c: 0xc09ec6c  jal         func_27B1B0
    ctx->pc = 0x27B18Cu;
    SET_GPR_U32(ctx, 31, 0x27B194u);
    ctx->pc = 0x27B1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B1B0u, 0x27B18Cu, 0x27B194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B194u;
label_27b194:
    // 0x27b194: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x27b194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27b198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27b198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b19c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27b19cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b1a0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x27b1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27b1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x27B1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B1ACu;
    // 0x27b1ac: 0x0  nop
    ctx->pc = 0x27b1acu;
    // NOP
    ctx->pc = 0x27b1b0u;
}
