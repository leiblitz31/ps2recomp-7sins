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

// Function: sub_00228480
// Address: 0x228480 - 0x228510
void sub_00228480_0x228480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228480_0x228480");
#endif

    switch (ctx->pc) {
        case 0x2284a8u: goto label_2284a8;
        case 0x2284d4u: goto label_2284d4;
        case 0x2284f4u: goto label_2284f4;
        default: break;
    }

    ctx->pc = 0x228480u;

    // 0x228480: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x228480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x228484: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x228484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x228488: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x228488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22848c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x22848cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x228490: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x228490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x228494: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x228494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228498: 0x2450002c  addiu       $s0, $v0, 0x2C
    ctx->pc = 0x228498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x22849c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x22849cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2284a0: 0xc08a118  jal         func_228460
    ctx->pc = 0x2284A0u;
    SET_GPR_U32(ctx, 31, 0x2284A8u);
    ctx->pc = 0x228460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228460u, 0x2284A0u, 0x2284A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2284A8u;
label_2284a8:
    // 0x2284a8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2284A8u;
    {
        const bool branch_taken_0x2284a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2284a8) {
            ctx->pc = 0x2284D4u;
            goto label_2284d4;
        }
    }
    ctx->pc = 0x2284B0u;
    // 0x2284b0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2284b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2284b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2284b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2284b8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2284b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2284bc: 0x2464002c  addiu       $a0, $v1, 0x2C
    ctx->pc = 0x2284bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x2284c0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2284c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2284c4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2284c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2284c8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2284c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2284cc: 0xc08a144  jal         func_228510
    ctx->pc = 0x2284CCu;
    SET_GPR_U32(ctx, 31, 0x2284D4u);
    ctx->pc = 0x228510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228510u, 0x2284CCu, 0x2284D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2284D4u;
label_2284d4:
    // 0x2284d4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2284d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2284d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2284d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2284dc: 0x2442ffd4  addiu       $v0, $v0, -0x2C
    ctx->pc = 0x2284dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967252));
    // 0x2284e0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2284e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2284e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2284e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2284e8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2284e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2284ec: 0xc08a01c  jal         func_228070
    ctx->pc = 0x2284ECu;
    SET_GPR_U32(ctx, 31, 0x2284F4u);
    ctx->pc = 0x228070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228070u, 0x2284ECu, 0x2284F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2284F4u;
label_2284f4:
    // 0x2284f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2284f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2284f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2284f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2284fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2284fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228500: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x228500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x228504: 0x3e00008  jr          $ra
    ctx->pc = 0x228504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22850Cu;
    // 0x22850c: 0x0  nop
    ctx->pc = 0x22850cu;
    // NOP
    ctx->pc = 0x228510u;
}
