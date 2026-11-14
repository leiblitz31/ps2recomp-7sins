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

// Function: sub_004799E0
// Address: 0x4799e0 - 0x479a20
void sub_004799E0_0x4799e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004799E0_0x4799e0");
#endif

    switch (ctx->pc) {
        case 0x479a10u: goto label_479a10;
        default: break;
    }

    ctx->pc = 0x4799e0u;

    // 0x4799e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4799e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4799e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4799e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4799e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4799e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4799ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x4799ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4799f0: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x4799f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
    // 0x4799f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4799f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4799f8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x4799f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4799fc: 0x83a60030  lb          $a2, 0x30($sp)
    ctx->pc = 0x4799fcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x479a00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x479a00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479a04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x479a04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479a08: 0xc11e688  jal         func_479A20
    ctx->pc = 0x479A08u;
    SET_GPR_U32(ctx, 31, 0x479A10u);
    ctx->pc = 0x479A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x479A20u, 0x479A08u, 0x479A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479A10u;
label_479a10:
    // 0x479a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x479a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x479a14: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x479a14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x479a18: 0x3e00008  jr          $ra
    ctx->pc = 0x479A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x479A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x479A20u;
}
