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

// Function: sub_00211040
// Address: 0x211040 - 0x211080
void sub_00211040_0x211040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211040_0x211040");
#endif

    switch (ctx->pc) {
        case 0x211064u: goto label_211064;
        default: break;
    }

    ctx->pc = 0x211040u;

    // 0x211040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x211040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x211044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211048: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x211048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21104c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x21104cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x211050: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x211050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211054: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x211054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x211058: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x211058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21105c: 0xc05db24  jal         func_176C90
    ctx->pc = 0x21105Cu;
    SET_GPR_U32(ctx, 31, 0x211064u);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x21105Cu, 0x211064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211064u;
label_211064:
    // 0x211064: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211068: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x211068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21106c: 0x3e00008  jr          $ra
    ctx->pc = 0x21106Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21106Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211074u;
    // 0x211074: 0x0  nop
    ctx->pc = 0x211074u;
    // NOP
    // 0x211078: 0x0  nop
    ctx->pc = 0x211078u;
    // NOP
    // 0x21107c: 0x0  nop
    ctx->pc = 0x21107cu;
    // NOP
    ctx->pc = 0x211080u;
}
