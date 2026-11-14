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

// Function: sub_0046B940
// Address: 0x46b940 - 0x46b990
void sub_0046B940_0x46b940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046B940_0x46b940");
#endif

    switch (ctx->pc) {
        case 0x46b968u: goto label_46b968;
        case 0x46b97cu: goto label_46b97c;
        default: break;
    }

    ctx->pc = 0x46b940u;

    // 0x46b940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x46b940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46b944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46b944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46b948: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46b948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46b94c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46b94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46b950: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x46b950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x46b954: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46b954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46b958: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x46b958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x46b95c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46b95cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46b960: 0xc11a67c  jal         func_4699F0
    ctx->pc = 0x46B960u;
    SET_GPR_U32(ctx, 31, 0x46B968u);
    ctx->pc = 0x4699F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4699F0u, 0x46B960u, 0x46B968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B968u;
label_46b968:
    // 0x46b968: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46b968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46b96c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46b96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b970: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x46b970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46b974: 0xc11a66c  jal         func_4699B0
    ctx->pc = 0x46B974u;
    SET_GPR_U32(ctx, 31, 0x46B97Cu);
    ctx->pc = 0x4699B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4699B0u, 0x46B974u, 0x46B97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B97Cu;
label_46b97c:
    // 0x46b97c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46b97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46b980: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46b980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46b984: 0x3e00008  jr          $ra
    ctx->pc = 0x46B984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46B98Cu;
    // 0x46b98c: 0x0  nop
    ctx->pc = 0x46b98cu;
    // NOP
    ctx->pc = 0x46b990u;
}
