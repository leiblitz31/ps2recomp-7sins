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

// Function: sub_002834F0
// Address: 0x2834f0 - 0x283540
void sub_002834F0_0x2834f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002834F0_0x2834f0");
#endif

    switch (ctx->pc) {
        case 0x283514u: goto label_283514;
        default: break;
    }

    ctx->pc = 0x2834f0u;

    // 0x2834f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2834f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2834f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2834f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2834f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2834f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2834fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2834fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x283500: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x283500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x283504: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x283504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283508: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x283508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28350c: 0xc0a0d50  jal         func_283540
    ctx->pc = 0x28350Cu;
    SET_GPR_U32(ctx, 31, 0x283514u);
    ctx->pc = 0x283540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283540u, 0x28350Cu, 0x283514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283514u;
label_283514:
    // 0x283514: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x283514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283518: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x283518u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28351c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28351cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283520: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x283520u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x283524: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x283524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28352c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28352cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x283530: 0x3e00008  jr          $ra
    ctx->pc = 0x283530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283538u;
    // 0x283538: 0x0  nop
    ctx->pc = 0x283538u;
    // NOP
    // 0x28353c: 0x0  nop
    ctx->pc = 0x28353cu;
    // NOP
    ctx->pc = 0x283540u;
}
