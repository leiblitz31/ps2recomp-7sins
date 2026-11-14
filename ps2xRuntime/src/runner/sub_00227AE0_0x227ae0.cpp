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

// Function: sub_00227AE0
// Address: 0x227ae0 - 0x227b20
void sub_00227AE0_0x227ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227AE0_0x227ae0");
#endif

    switch (ctx->pc) {
        case 0x227af8u: goto label_227af8;
        case 0x227b0cu: goto label_227b0c;
        default: break;
    }

    ctx->pc = 0x227ae0u;

    // 0x227ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x227ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227ae8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x227ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x227aec: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x227aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x227af0: 0xc089f48  jal         func_227D20
    ctx->pc = 0x227AF0u;
    SET_GPR_U32(ctx, 31, 0x227AF8u);
    ctx->pc = 0x227D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D20u, 0x227AF0u, 0x227AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227AF8u;
label_227af8:
    // 0x227af8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x227af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227afc: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x227afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x227b00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x227b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b04: 0xc089ec8  jal         func_227B20
    ctx->pc = 0x227B04u;
    SET_GPR_U32(ctx, 31, 0x227B0Cu);
    ctx->pc = 0x227B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B20u, 0x227B04u, 0x227B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B0Cu;
label_227b0c:
    // 0x227b0c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x227b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227b10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227b14: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x227b14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x227b18: 0x3e00008  jr          $ra
    ctx->pc = 0x227B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227B20u;
}
