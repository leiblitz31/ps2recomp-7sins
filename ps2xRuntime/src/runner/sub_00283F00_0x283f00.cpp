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

// Function: sub_00283F00
// Address: 0x283f00 - 0x283f60
void sub_00283F00_0x283f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283F00_0x283f00");
#endif

    switch (ctx->pc) {
        case 0x283f28u: goto label_283f28;
        case 0x283f3cu: goto label_283f3c;
        default: break;
    }

    ctx->pc = 0x283f00u;

    // 0x283f00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x283f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x283f04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x283f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x283f08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x283f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x283f0c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x283f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x283f10: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x283f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x283f14: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x283f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283f18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x283f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283f1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x283f1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283f20: 0xc0a0764  jal         func_281D90
    ctx->pc = 0x283F20u;
    SET_GPR_U32(ctx, 31, 0x283F28u);
    ctx->pc = 0x281D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281D90u, 0x283F20u, 0x283F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283F28u;
label_283f28:
    // 0x283f28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x283f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283f2c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x283f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x283f30: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x283f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283f34: 0xc0a0fd8  jal         func_283F60
    ctx->pc = 0x283F34u;
    SET_GPR_U32(ctx, 31, 0x283F3Cu);
    ctx->pc = 0x283F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283F60u, 0x283F34u, 0x283F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283F3Cu;
label_283f3c:
    // 0x283f3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x283f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283f40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x283f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283f44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283f48: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x283f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x283f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x283F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283F54u;
    // 0x283f54: 0x0  nop
    ctx->pc = 0x283f54u;
    // NOP
    // 0x283f58: 0x0  nop
    ctx->pc = 0x283f58u;
    // NOP
    // 0x283f5c: 0x0  nop
    ctx->pc = 0x283f5cu;
    // NOP
    ctx->pc = 0x283f60u;
}
