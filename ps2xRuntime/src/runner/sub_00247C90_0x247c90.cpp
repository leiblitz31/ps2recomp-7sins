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

// Function: sub_00247C90
// Address: 0x247c90 - 0x247d10
void sub_00247C90_0x247c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247C90_0x247c90");
#endif

    switch (ctx->pc) {
        case 0x247cb0u: goto label_247cb0;
        case 0x247cc0u: goto label_247cc0;
        case 0x247cd8u: goto label_247cd8;
        case 0x247cf0u: goto label_247cf0;
        default: break;
    }

    ctx->pc = 0x247c90u;

    // 0x247c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x247c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x247c94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x247c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x247c98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x247c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x247c9c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x247c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x247ca0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x247ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247ca4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x247ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247ca8: 0xc091f44  jal         func_247D10
    ctx->pc = 0x247CA8u;
    SET_GPR_U32(ctx, 31, 0x247CB0u);
    ctx->pc = 0x247D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247D10u, 0x247CA8u, 0x247CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247CB0u;
label_247cb0:
    // 0x247cb0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x247cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x247cb4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x247cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247cb8: 0xc091e50  jal         func_247940
    ctx->pc = 0x247CB8u;
    SET_GPR_U32(ctx, 31, 0x247CC0u);
    ctx->pc = 0x247940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247940u, 0x247CB8u, 0x247CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247CC0u;
label_247cc0:
    // 0x247cc0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x247cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x247cc4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x247cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247cc8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x247cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247ccc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x247cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247cd0: 0xc064198  jal         func_190660
    ctx->pc = 0x247CD0u;
    SET_GPR_U32(ctx, 31, 0x247CD8u);
    ctx->pc = 0x190660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190660u, 0x247CD0u, 0x247CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247CD8u;
label_247cd8:
    // 0x247cd8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x247cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x247cdc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x247cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247ce0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x247ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247ce4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x247ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247ce8: 0xc091e48  jal         func_247920
    ctx->pc = 0x247CE8u;
    SET_GPR_U32(ctx, 31, 0x247CF0u);
    ctx->pc = 0x247920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247920u, 0x247CE8u, 0x247CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247CF0u;
label_247cf0:
    // 0x247cf0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x247cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x247cf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x247cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247cf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x247cf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247cfc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x247cfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x247d00: 0x3e00008  jr          $ra
    ctx->pc = 0x247D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247D08u;
    // 0x247d08: 0x0  nop
    ctx->pc = 0x247d08u;
    // NOP
    // 0x247d0c: 0x0  nop
    ctx->pc = 0x247d0cu;
    // NOP
    ctx->pc = 0x247d10u;
}
