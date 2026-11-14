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

// Function: sub_002CB960
// Address: 0x2cb960 - 0x2cb9a0
void sub_002CB960_0x2cb960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB960_0x2cb960");
#endif

    switch (ctx->pc) {
        case 0x2cb984u: goto label_2cb984;
        default: break;
    }

    ctx->pc = 0x2cb960u;

    // 0x2cb960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb968: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cb968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cb96c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2cb96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2cb970: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cb970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb974: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2cb974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb978: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cb978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb97c: 0xc0b2e68  jal         func_2CB9A0
    ctx->pc = 0x2CB97Cu;
    SET_GPR_U32(ctx, 31, 0x2CB984u);
    ctx->pc = 0x2CB9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB9A0u, 0x2CB97Cu, 0x2CB984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB984u;
label_2cb984:
    // 0x2cb984: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb988: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cb988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cb98c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB994u;
    // 0x2cb994: 0x0  nop
    ctx->pc = 0x2cb994u;
    // NOP
    // 0x2cb998: 0x0  nop
    ctx->pc = 0x2cb998u;
    // NOP
    // 0x2cb99c: 0x0  nop
    ctx->pc = 0x2cb99cu;
    // NOP
    ctx->pc = 0x2cb9a0u;
}
