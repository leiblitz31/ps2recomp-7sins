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

// Function: sub_002674B0
// Address: 0x2674b0 - 0x267510
void sub_002674B0_0x2674b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002674B0_0x2674b0");
#endif

    switch (ctx->pc) {
        case 0x2674f4u: goto label_2674f4;
        default: break;
    }

    ctx->pc = 0x2674b0u;

    // 0x2674b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2674b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2674b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2674b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2674b8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2674b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2674bc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2674bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2674c0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2674c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2674c4: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x2674c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x2674c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2674c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2674cc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2674ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2674d0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2674d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2674d4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2674d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2674d8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2674d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2674dc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2674dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2674e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2674e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2674e4: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2674e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2674e8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2674e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2674ec: 0xc099d44  jal         func_267510
    ctx->pc = 0x2674ECu;
    SET_GPR_U32(ctx, 31, 0x2674F4u);
    ctx->pc = 0x267510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267510u, 0x2674ECu, 0x2674F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2674F4u;
label_2674f4:
    // 0x2674f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2674f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2674f8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2674f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2674fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2674FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2674FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267504u;
    // 0x267504: 0x0  nop
    ctx->pc = 0x267504u;
    // NOP
    // 0x267508: 0x0  nop
    ctx->pc = 0x267508u;
    // NOP
    // 0x26750c: 0x0  nop
    ctx->pc = 0x26750cu;
    // NOP
    ctx->pc = 0x267510u;
}
