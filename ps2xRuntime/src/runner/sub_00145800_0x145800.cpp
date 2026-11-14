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

// Function: sub_00145800
// Address: 0x145800 - 0x145840
void sub_00145800_0x145800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145800_0x145800");
#endif

    switch (ctx->pc) {
        case 0x145828u: goto label_145828;
        default: break;
    }

    ctx->pc = 0x145800u;

    // 0x145800: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x145800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x145804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145808: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x145808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x14580c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x14580cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x145810: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x145810u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x145814: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x145814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145818: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x145818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14581c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x14581cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x145820: 0xc051610  jal         func_145840
    ctx->pc = 0x145820u;
    SET_GPR_U32(ctx, 31, 0x145828u);
    ctx->pc = 0x145840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145840u, 0x145820u, 0x145828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145828u;
label_145828:
    // 0x145828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14582c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x14582cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x145830: 0x3e00008  jr          $ra
    ctx->pc = 0x145830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145838u;
    // 0x145838: 0x0  nop
    ctx->pc = 0x145838u;
    // NOP
    // 0x14583c: 0x0  nop
    ctx->pc = 0x14583cu;
    // NOP
    ctx->pc = 0x145840u;
}
