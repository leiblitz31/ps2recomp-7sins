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

// Function: sub_0015BAD0
// Address: 0x15bad0 - 0x15bb10
void sub_0015BAD0_0x15bad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BAD0_0x15bad0");
#endif

    switch (ctx->pc) {
        case 0x15baf4u: goto label_15baf4;
        default: break;
    }

    ctx->pc = 0x15bad0u;

    // 0x15bad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15bad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15bad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15bad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15bad8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x15bad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15badc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x15badcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x15bae0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15bae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bae4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x15bae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bae8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15bae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15baec: 0xc056ec4  jal         func_15BB10
    ctx->pc = 0x15BAECu;
    SET_GPR_U32(ctx, 31, 0x15BAF4u);
    ctx->pc = 0x15BB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BB10u, 0x15BAECu, 0x15BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BAF4u;
label_15baf4:
    // 0x15baf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15baf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15baf8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15baf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15bafc: 0x3e00008  jr          $ra
    ctx->pc = 0x15BAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BB04u;
    // 0x15bb04: 0x0  nop
    ctx->pc = 0x15bb04u;
    // NOP
    // 0x15bb08: 0x0  nop
    ctx->pc = 0x15bb08u;
    // NOP
    // 0x15bb0c: 0x0  nop
    ctx->pc = 0x15bb0cu;
    // NOP
    ctx->pc = 0x15bb10u;
}
