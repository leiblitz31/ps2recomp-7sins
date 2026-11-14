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

// Function: sub_001976C0
// Address: 0x1976c0 - 0x197730
void sub_001976C0_0x1976c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001976C0_0x1976c0");
#endif

    switch (ctx->pc) {
        case 0x1976f8u: goto label_1976f8;
        case 0x197710u: goto label_197710;
        default: break;
    }

    ctx->pc = 0x1976c0u;

    // 0x1976c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1976c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1976c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1976c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1976c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1976c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1976cc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1976ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1976d0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1976d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1976d4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1976d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1976d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1976d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1976dc: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x1976dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x1976e0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1976e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1976e4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1976e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1976e8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1976e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1976ec: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1976ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1976f0: 0xc065dcc  jal         func_197730
    ctx->pc = 0x1976F0u;
    SET_GPR_U32(ctx, 31, 0x1976F8u);
    ctx->pc = 0x197730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197730u, 0x1976F0u, 0x1976F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1976F8u;
label_1976f8:
    // 0x1976f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1976f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1976fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1976fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197704: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x197704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x197708: 0xc06531c  jal         func_194C70
    ctx->pc = 0x197708u;
    SET_GPR_U32(ctx, 31, 0x197710u);
    ctx->pc = 0x194C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194C70u, 0x197708u, 0x197710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197710u;
label_197710:
    // 0x197710: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x197710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197714: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x197714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x197718: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x197718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19771c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19771cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197720: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197724: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x197724u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x197728: 0x3e00008  jr          $ra
    ctx->pc = 0x197728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197730u;
}
