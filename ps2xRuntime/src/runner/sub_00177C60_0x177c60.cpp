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

// Function: sub_00177C60
// Address: 0x177c60 - 0x177cb0
void sub_00177C60_0x177c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177C60_0x177c60");
#endif

    switch (ctx->pc) {
        case 0x177c7cu: goto label_177c7c;
        case 0x177c90u: goto label_177c90;
        case 0x177ca0u: goto label_177ca0;
        default: break;
    }

    ctx->pc = 0x177c60u;

    // 0x177c60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x177c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x177c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177c68: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x177c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x177c6c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x177c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x177c70: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x177c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x177c74: 0xc0495d4  jal         func_125750
    ctx->pc = 0x177C74u;
    SET_GPR_U32(ctx, 31, 0x177C7Cu);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x177C74u, 0x177C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177C7Cu;
label_177c7c:
    // 0x177c7c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x177c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177c80: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x177c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177c84: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x177c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x177c88: 0xc05df2c  jal         func_177CB0
    ctx->pc = 0x177C88u;
    SET_GPR_U32(ctx, 31, 0x177C90u);
    ctx->pc = 0x177CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177CB0u, 0x177C88u, 0x177C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177C90u;
label_177c90:
    // 0x177c90: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x177c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x177c94: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x177c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x177c98: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x177C98u;
    SET_GPR_U32(ctx, 31, 0x177CA0u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x177C98u, 0x177CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CA0u;
label_177ca0:
    // 0x177ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177ca4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x177ca4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x177ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x177CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177CB0u;
}
