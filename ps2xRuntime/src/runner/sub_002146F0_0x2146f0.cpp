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

// Function: sub_002146F0
// Address: 0x2146f0 - 0x214730
void sub_002146F0_0x2146f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002146F0_0x2146f0");
#endif

    switch (ctx->pc) {
        case 0x214710u: goto label_214710;
        default: break;
    }

    ctx->pc = 0x2146f0u;

    // 0x2146f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2146f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2146f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2146f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2146f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2146f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2146fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2146fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x214700: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x214700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214704: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x214704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214708: 0xc0851cc  jal         func_214730
    ctx->pc = 0x214708u;
    SET_GPR_U32(ctx, 31, 0x214710u);
    ctx->pc = 0x214730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214730u, 0x214708u, 0x214710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214710u;
label_214710:
    // 0x214710: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214718: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x214718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21471c: 0x3e00008  jr          $ra
    ctx->pc = 0x21471Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21471Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214724u;
    // 0x214724: 0x0  nop
    ctx->pc = 0x214724u;
    // NOP
    // 0x214728: 0x0  nop
    ctx->pc = 0x214728u;
    // NOP
    // 0x21472c: 0x0  nop
    ctx->pc = 0x21472cu;
    // NOP
    ctx->pc = 0x214730u;
}
