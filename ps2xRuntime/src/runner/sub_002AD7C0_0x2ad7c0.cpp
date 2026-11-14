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

// Function: sub_002AD7C0
// Address: 0x2ad7c0 - 0x2ad800
void sub_002AD7C0_0x2ad7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD7C0_0x2ad7c0");
#endif

    switch (ctx->pc) {
        case 0x2ad7e4u: goto label_2ad7e4;
        default: break;
    }

    ctx->pc = 0x2ad7c0u;

    // 0x2ad7c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ad7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ad7c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ad7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ad7c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2ad7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2ad7cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2ad7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2ad7d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ad7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad7d4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2ad7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad7d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ad7d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad7dc: 0xc0ab600  jal         func_2AD800
    ctx->pc = 0x2AD7DCu;
    SET_GPR_U32(ctx, 31, 0x2AD7E4u);
    ctx->pc = 0x2AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD800u, 0x2AD7DCu, 0x2AD7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD7E4u;
label_2ad7e4:
    // 0x2ad7e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad7e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ad7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ad7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD7F4u;
    // 0x2ad7f4: 0x0  nop
    ctx->pc = 0x2ad7f4u;
    // NOP
    // 0x2ad7f8: 0x0  nop
    ctx->pc = 0x2ad7f8u;
    // NOP
    // 0x2ad7fc: 0x0  nop
    ctx->pc = 0x2ad7fcu;
    // NOP
    ctx->pc = 0x2ad800u;
}
