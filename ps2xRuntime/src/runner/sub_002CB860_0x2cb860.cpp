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

// Function: sub_002CB860
// Address: 0x2cb860 - 0x2cb890
void sub_002CB860_0x2cb860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB860_0x2cb860");
#endif

    switch (ctx->pc) {
        case 0x2cb87cu: goto label_2cb87c;
        default: break;
    }

    ctx->pc = 0x2cb860u;

    // 0x2cb860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cb860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cb864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb868: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cb868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cb86c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cb86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb870: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cb870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cb874: 0xc0b3ecc  jal         func_2CFB30
    ctx->pc = 0x2CB874u;
    SET_GPR_U32(ctx, 31, 0x2CB87Cu);
    ctx->pc = 0x2CFB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFB30u, 0x2CB874u, 0x2CB87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB87Cu;
label_2cb87c:
    // 0x2cb87c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb880: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2cb880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cb884: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB88Cu;
    // 0x2cb88c: 0x0  nop
    ctx->pc = 0x2cb88cu;
    // NOP
    ctx->pc = 0x2cb890u;
}
