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

// Function: sub_0017D780
// Address: 0x17d780 - 0x17d7c0
void sub_0017D780_0x17d780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D780_0x17d780");
#endif

    switch (ctx->pc) {
        case 0x17d79cu: goto label_17d79c;
        default: break;
    }

    ctx->pc = 0x17d780u;

    // 0x17d780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17d780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17d784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d788: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17d788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17d78c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x17d78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x17d790: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17d790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d794: 0xc05f5f0  jal         func_17D7C0
    ctx->pc = 0x17D794u;
    SET_GPR_U32(ctx, 31, 0x17D79Cu);
    ctx->pc = 0x17D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D7C0u, 0x17D794u, 0x17D79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D79Cu;
label_17d79c:
    // 0x17d79c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17d79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d7a0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x17d7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x17d7a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17d7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17d7a8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17d7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17d7ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d7b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d7b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17d7b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17d7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x17D7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D7C0u;
}
