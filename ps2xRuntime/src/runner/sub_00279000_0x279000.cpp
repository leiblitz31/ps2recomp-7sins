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

// Function: sub_00279000
// Address: 0x279000 - 0x279050
void sub_00279000_0x279000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279000_0x279000");
#endif

    switch (ctx->pc) {
        case 0x279024u: goto label_279024;
        default: break;
    }

    ctx->pc = 0x279000u;

    // 0x279000: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x279000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x279004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x279008: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x279008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27900c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x27900cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x279010: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x279010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x279014: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x279014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279018: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x279018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27901c: 0xc09e414  jal         func_279050
    ctx->pc = 0x27901Cu;
    SET_GPR_U32(ctx, 31, 0x279024u);
    ctx->pc = 0x279050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279050u, 0x27901Cu, 0x279024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279024u;
label_279024:
    // 0x279024: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x279024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279028: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x279028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27902c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x27902cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x279030: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x279030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279038: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x279038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27903c: 0x3e00008  jr          $ra
    ctx->pc = 0x27903Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27903Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279044u;
    // 0x279044: 0x0  nop
    ctx->pc = 0x279044u;
    // NOP
    // 0x279048: 0x0  nop
    ctx->pc = 0x279048u;
    // NOP
    // 0x27904c: 0x0  nop
    ctx->pc = 0x27904cu;
    // NOP
    ctx->pc = 0x279050u;
}
