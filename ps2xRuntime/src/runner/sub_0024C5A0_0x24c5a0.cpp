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

// Function: sub_0024C5A0
// Address: 0x24c5a0 - 0x24c5d0
void sub_0024C5A0_0x24c5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C5A0_0x24c5a0");
#endif

    switch (ctx->pc) {
        case 0x24c5bcu: goto label_24c5bc;
        default: break;
    }

    ctx->pc = 0x24c5a0u;

    // 0x24c5a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24c5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24c5a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24c5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24c5a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x24c5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24c5ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24c5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c5b0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x24c5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24c5b4: 0xc094b64  jal         func_252D90
    ctx->pc = 0x24C5B4u;
    SET_GPR_U32(ctx, 31, 0x24C5BCu);
    ctx->pc = 0x252D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252D90u, 0x24C5B4u, 0x24C5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C5BCu;
label_24c5bc:
    // 0x24c5bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24c5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c5c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24c5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24c5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x24C5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C5CCu;
    // 0x24c5cc: 0x0  nop
    ctx->pc = 0x24c5ccu;
    // NOP
    ctx->pc = 0x24c5d0u;
}
