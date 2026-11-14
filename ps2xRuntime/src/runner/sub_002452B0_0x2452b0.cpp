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

// Function: sub_002452B0
// Address: 0x2452b0 - 0x2452f0
void sub_002452B0_0x2452b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002452B0_0x2452b0");
#endif

    switch (ctx->pc) {
        case 0x2452c8u: goto label_2452c8;
        case 0x2452d8u: goto label_2452d8;
        default: break;
    }

    ctx->pc = 0x2452b0u;

    // 0x2452b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2452b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2452b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2452b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2452b8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2452b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2452bc: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2452bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2452c0: 0xc0914fc  jal         func_2453F0
    ctx->pc = 0x2452C0u;
    SET_GPR_U32(ctx, 31, 0x2452C8u);
    ctx->pc = 0x2453F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2453F0u, 0x2452C0u, 0x2452C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2452C8u;
label_2452c8:
    // 0x2452c8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2452c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2452cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2452ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2452d0: 0xc0914bc  jal         func_2452F0
    ctx->pc = 0x2452D0u;
    SET_GPR_U32(ctx, 31, 0x2452D8u);
    ctx->pc = 0x2452F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2452F0u, 0x2452D0u, 0x2452D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2452D8u;
label_2452d8:
    // 0x2452d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2452d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2452dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2452dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2452e0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2452e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2452e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2452E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2452E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2452ECu;
    // 0x2452ec: 0x0  nop
    ctx->pc = 0x2452ecu;
    // NOP
    ctx->pc = 0x2452f0u;
}
