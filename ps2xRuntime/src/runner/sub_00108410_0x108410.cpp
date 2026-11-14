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

// Function: sub_00108410
// Address: 0x108410 - 0x108450
void sub_00108410_0x108410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108410_0x108410");
#endif

    switch (ctx->pc) {
        case 0x108434u: goto label_108434;
        default: break;
    }

    ctx->pc = 0x108410u;

    // 0x108410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x108410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x108414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x108418: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x108418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10841c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10841cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x108420: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x108420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108424: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x108424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108428: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x108428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10842c: 0xc042114  jal         func_108450
    ctx->pc = 0x10842Cu;
    SET_GPR_U32(ctx, 31, 0x108434u);
    ctx->pc = 0x108450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108450u, 0x10842Cu, 0x108434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108434u;
label_108434:
    // 0x108434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108438: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x108438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10843c: 0x3e00008  jr          $ra
    ctx->pc = 0x10843Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10843Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108444u;
    // 0x108444: 0x0  nop
    ctx->pc = 0x108444u;
    // NOP
    // 0x108448: 0x0  nop
    ctx->pc = 0x108448u;
    // NOP
    // 0x10844c: 0x0  nop
    ctx->pc = 0x10844cu;
    // NOP
    ctx->pc = 0x108450u;
}
