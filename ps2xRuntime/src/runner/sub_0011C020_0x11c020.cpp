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

// Function: sub_0011C020
// Address: 0x11c020 - 0x11c050
void sub_0011C020_0x11c020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C020_0x11c020");
#endif

    switch (ctx->pc) {
        case 0x11c038u: goto label_11c038;
        default: break;
    }

    ctx->pc = 0x11c020u;

    // 0x11c020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11c020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11c024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c028: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11c028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11c02c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11c02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c030: 0xc047014  jal         func_11C050
    ctx->pc = 0x11C030u;
    SET_GPR_U32(ctx, 31, 0x11C038u);
    ctx->pc = 0x11C050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C050u, 0x11C030u, 0x11C038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C038u;
label_11c038:
    // 0x11c038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c03c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x11c03cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11c040: 0x3e00008  jr          $ra
    ctx->pc = 0x11C040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C048u;
    // 0x11c048: 0x0  nop
    ctx->pc = 0x11c048u;
    // NOP
    // 0x11c04c: 0x0  nop
    ctx->pc = 0x11c04cu;
    // NOP
    ctx->pc = 0x11c050u;
}
