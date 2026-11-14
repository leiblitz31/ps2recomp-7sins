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

// Function: sub_00177F20
// Address: 0x177f20 - 0x177f80
void sub_00177F20_0x177f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177F20_0x177f20");
#endif

    switch (ctx->pc) {
        case 0x177f3cu: goto label_177f3c;
        case 0x177f4cu: goto label_177f4c;
        case 0x177f60u: goto label_177f60;
        default: break;
    }

    ctx->pc = 0x177f20u;

    // 0x177f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x177f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x177f24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x177f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x177f28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x177f2c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x177f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x177f30: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x177f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177f34: 0xc05dee4  jal         func_177B90
    ctx->pc = 0x177F34u;
    SET_GPR_U32(ctx, 31, 0x177F3Cu);
    ctx->pc = 0x177B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B90u, 0x177F34u, 0x177F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F3Cu;
label_177f3c:
    // 0x177f3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x177f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177f40: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x177f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177f44: 0xc05dfc0  jal         func_177F00
    ctx->pc = 0x177F44u;
    SET_GPR_U32(ctx, 31, 0x177F4Cu);
    ctx->pc = 0x177F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177F00u, 0x177F44u, 0x177F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F4Cu;
label_177f4c:
    // 0x177f4c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x177f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177f50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x177f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177f54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x177f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177f58: 0xc05df70  jal         func_177DC0
    ctx->pc = 0x177F58u;
    SET_GPR_U32(ctx, 31, 0x177F60u);
    ctx->pc = 0x177DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177DC0u, 0x177F58u, 0x177F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F60u;
label_177f60:
    // 0x177f60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x177f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177f64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177f68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x177f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x177f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x177F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177F74u;
    // 0x177f74: 0x0  nop
    ctx->pc = 0x177f74u;
    // NOP
    // 0x177f78: 0x0  nop
    ctx->pc = 0x177f78u;
    // NOP
    // 0x177f7c: 0x0  nop
    ctx->pc = 0x177f7cu;
    // NOP
    ctx->pc = 0x177f80u;
}
