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

// Function: sub_00218F10
// Address: 0x218f10 - 0x218f60
void sub_00218F10_0x218f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218F10_0x218f10");
#endif

    switch (ctx->pc) {
        case 0x218f34u: goto label_218f34;
        case 0x218f44u: goto label_218f44;
        default: break;
    }

    ctx->pc = 0x218f10u;

    // 0x218f10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x218f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x218f14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218f18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x218f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x218f1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x218f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x218f20: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x218f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x218f24: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x218f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218f28: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x218f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218f2c: 0xc0863d8  jal         func_218F60
    ctx->pc = 0x218F2Cu;
    SET_GPR_U32(ctx, 31, 0x218F34u);
    ctx->pc = 0x218F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218F60u, 0x218F2Cu, 0x218F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218F34u;
label_218f34:
    // 0x218f34: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x218f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218f38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x218f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f3c: 0xc0861d8  jal         func_218760
    ctx->pc = 0x218F3Cu;
    SET_GPR_U32(ctx, 31, 0x218F44u);
    ctx->pc = 0x218760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218760u, 0x218F3Cu, 0x218F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218F44u;
label_218f44:
    // 0x218f44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218f48: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x218f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x218f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x218F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218F54u;
    // 0x218f54: 0x0  nop
    ctx->pc = 0x218f54u;
    // NOP
    // 0x218f58: 0x0  nop
    ctx->pc = 0x218f58u;
    // NOP
    // 0x218f5c: 0x0  nop
    ctx->pc = 0x218f5cu;
    // NOP
    ctx->pc = 0x218f60u;
}
