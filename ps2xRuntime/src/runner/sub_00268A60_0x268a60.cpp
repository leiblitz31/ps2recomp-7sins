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

// Function: sub_00268A60
// Address: 0x268a60 - 0x268ab0
void sub_00268A60_0x268a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268A60_0x268a60");
#endif

    switch (ctx->pc) {
        case 0x268a84u: goto label_268a84;
        default: break;
    }

    ctx->pc = 0x268a60u;

    // 0x268a60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x268a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x268a64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x268a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x268a68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x268a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x268a6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x268a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x268a70: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x268a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x268a74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x268a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268a78: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x268a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268a7c: 0xc09a2ac  jal         func_268AB0
    ctx->pc = 0x268A7Cu;
    SET_GPR_U32(ctx, 31, 0x268A84u);
    ctx->pc = 0x268AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268AB0u, 0x268A7Cu, 0x268A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268A84u;
label_268a84:
    // 0x268a84: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x268a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x268a88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x268a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268a8c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x268a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x268a90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x268a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268a94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x268a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268a98: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x268a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x268a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x268A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268AA4u;
    // 0x268aa4: 0x0  nop
    ctx->pc = 0x268aa4u;
    // NOP
    // 0x268aa8: 0x0  nop
    ctx->pc = 0x268aa8u;
    // NOP
    // 0x268aac: 0x0  nop
    ctx->pc = 0x268aacu;
    // NOP
    ctx->pc = 0x268ab0u;
}
