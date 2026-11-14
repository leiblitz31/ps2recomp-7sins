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

// Function: sub_002E19C0
// Address: 0x2e19c0 - 0x2e1a00
void sub_002E19C0_0x2e19c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E19C0_0x2e19c0");
#endif

    switch (ctx->pc) {
        case 0x2e19dcu: goto label_2e19dc;
        default: break;
    }

    ctx->pc = 0x2e19c0u;

    // 0x2e19c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e19c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e19c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e19c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e19c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e19c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e19cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2e19ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2e19d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e19d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e19d4: 0xc0b7f04  jal         func_2DFC10
    ctx->pc = 0x2E19D4u;
    SET_GPR_U32(ctx, 31, 0x2E19DCu);
    ctx->pc = 0x2DFC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFC10u, 0x2E19D4u, 0x2E19DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E19DCu;
label_2e19dc:
    // 0x2e19dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e19dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e19e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e19e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e19e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e19e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e19e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e19e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e19ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e19ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e19f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E19F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E19F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E19F8u;
    // 0x2e19f8: 0x0  nop
    ctx->pc = 0x2e19f8u;
    // NOP
    // 0x2e19fc: 0x0  nop
    ctx->pc = 0x2e19fcu;
    // NOP
    ctx->pc = 0x2e1a00u;
}
