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

// Function: sub_0013D7A0
// Address: 0x13d7a0 - 0x13d7e0
void sub_0013D7A0_0x13d7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D7A0_0x13d7a0");
#endif

    switch (ctx->pc) {
        case 0x13d7b8u: goto label_13d7b8;
        default: break;
    }

    ctx->pc = 0x13d7a0u;

    // 0x13d7a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13d7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d7a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d7a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13d7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13d7ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13d7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d7b0: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x13D7B0u;
    SET_GPR_U32(ctx, 31, 0x13D7B8u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x13D7B0u, 0x13D7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D7B8u;
label_13d7b8:
    // 0x13d7b8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x13d7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x13d7bc: 0x246337c0  addiu       $v1, $v1, 0x37C0
    ctx->pc = 0x13d7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14272));
    // 0x13d7c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d7c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13d7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13d7c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d7cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d7d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13d7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13d7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x13D7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D7DCu;
    // 0x13d7dc: 0x0  nop
    ctx->pc = 0x13d7dcu;
    // NOP
    ctx->pc = 0x13d7e0u;
}
