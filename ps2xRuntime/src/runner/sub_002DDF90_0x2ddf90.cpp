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

// Function: sub_002DDF90
// Address: 0x2ddf90 - 0x2ddfd0
void sub_002DDF90_0x2ddf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDF90_0x2ddf90");
#endif

    switch (ctx->pc) {
        case 0x2ddfacu: goto label_2ddfac;
        default: break;
    }

    ctx->pc = 0x2ddf90u;

    // 0x2ddf90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ddf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ddf94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ddf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ddf98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2ddf98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2ddf9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2ddf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2ddfa0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ddfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddfa4: 0xc0b77f4  jal         func_2DDFD0
    ctx->pc = 0x2DDFA4u;
    SET_GPR_U32(ctx, 31, 0x2DDFACu);
    ctx->pc = 0x2DDFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDFD0u, 0x2DDFA4u, 0x2DDFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDFACu;
label_2ddfac:
    // 0x2ddfac: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2ddfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ddfb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ddfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ddfb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ddfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ddfb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ddfb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddfbc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ddfbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ddfc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDFC8u;
    // 0x2ddfc8: 0x0  nop
    ctx->pc = 0x2ddfc8u;
    // NOP
    // 0x2ddfcc: 0x0  nop
    ctx->pc = 0x2ddfccu;
    // NOP
    ctx->pc = 0x2ddfd0u;
}
