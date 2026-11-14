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

// Function: sub_00111FF0
// Address: 0x111ff0 - 0x112030
void sub_00111FF0_0x111ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111FF0_0x111ff0");
#endif

    switch (ctx->pc) {
        case 0x112010u: goto label_112010;
        default: break;
    }

    ctx->pc = 0x111ff0u;

    // 0x111ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x111ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x111ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111ff8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x111ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x111ffc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x111ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x112000: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x112000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112004: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x112004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112008: 0xc04480c  jal         func_112030
    ctx->pc = 0x112008u;
    SET_GPR_U32(ctx, 31, 0x112010u);
    ctx->pc = 0x112030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112030u, 0x112008u, 0x112010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112010u;
label_112010:
    // 0x112010: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x112010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112018: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x112018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11201c: 0x3e00008  jr          $ra
    ctx->pc = 0x11201Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11201Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112024u;
    // 0x112024: 0x0  nop
    ctx->pc = 0x112024u;
    // NOP
    // 0x112028: 0x0  nop
    ctx->pc = 0x112028u;
    // NOP
    // 0x11202c: 0x0  nop
    ctx->pc = 0x11202cu;
    // NOP
    ctx->pc = 0x112030u;
}
