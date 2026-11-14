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

// Function: sub_001892C0
// Address: 0x1892c0 - 0x1892f0
void sub_001892C0_0x1892c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001892C0_0x1892c0");
#endif

    switch (ctx->pc) {
        case 0x1892dcu: goto label_1892dc;
        default: break;
    }

    ctx->pc = 0x1892c0u;

    // 0x1892c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1892c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1892c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1892c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1892c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1892c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1892cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1892ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1892d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1892d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1892d4: 0xc0624bc  jal         func_1892F0
    ctx->pc = 0x1892D4u;
    SET_GPR_U32(ctx, 31, 0x1892DCu);
    ctx->pc = 0x1892F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892F0u, 0x1892D4u, 0x1892DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1892DCu;
label_1892dc:
    // 0x1892dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1892dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1892e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1892e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1892e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1892E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1892E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1892ECu;
    // 0x1892ec: 0x0  nop
    ctx->pc = 0x1892ecu;
    // NOP
    ctx->pc = 0x1892f0u;
}
