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

// Function: sub_00211000
// Address: 0x211000 - 0x211040
void sub_00211000_0x211000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211000_0x211000");
#endif

    switch (ctx->pc) {
        case 0x211024u: goto label_211024;
        default: break;
    }

    ctx->pc = 0x211000u;

    // 0x211000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x211000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x211004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211008: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x211008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21100c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x21100cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x211010: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x211010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211014: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x211014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x211018: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x211018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21101c: 0xc05db24  jal         func_176C90
    ctx->pc = 0x21101Cu;
    SET_GPR_U32(ctx, 31, 0x211024u);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x21101Cu, 0x211024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211024u;
label_211024:
    // 0x211024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211028: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x211028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21102c: 0x3e00008  jr          $ra
    ctx->pc = 0x21102Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21102Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211034u;
    // 0x211034: 0x0  nop
    ctx->pc = 0x211034u;
    // NOP
    // 0x211038: 0x0  nop
    ctx->pc = 0x211038u;
    // NOP
    // 0x21103c: 0x0  nop
    ctx->pc = 0x21103cu;
    // NOP
    ctx->pc = 0x211040u;
}
