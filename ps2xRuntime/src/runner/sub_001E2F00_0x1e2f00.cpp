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

// Function: sub_001E2F00
// Address: 0x1e2f00 - 0x1e2f60
void sub_001E2F00_0x1e2f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2F00_0x1e2f00");
#endif

    switch (ctx->pc) {
        case 0x1e2f28u: goto label_1e2f28;
        case 0x1e2f3cu: goto label_1e2f3c;
        case 0x1e2f4cu: goto label_1e2f4c;
        default: break;
    }

    ctx->pc = 0x1e2f00u;

    // 0x1e2f00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e2f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e2f04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e2f08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2f0c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e2f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e2f10: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e2f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2f14: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x1e2f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1e2f18: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1e2f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e2f1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e2f1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2f20: 0xc078bd8  jal         func_1E2F60
    ctx->pc = 0x1E2F20u;
    SET_GPR_U32(ctx, 31, 0x1E2F28u);
    ctx->pc = 0x1E2F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2F60u, 0x1E2F20u, 0x1E2F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2F28u;
label_1e2f28:
    // 0x1e2f28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e2f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2f2c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e2f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e2f30: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e2f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2f34: 0xc077f64  jal         func_1DFD90
    ctx->pc = 0x1E2F34u;
    SET_GPR_U32(ctx, 31, 0x1E2F3Cu);
    ctx->pc = 0x1DFD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFD90u, 0x1E2F34u, 0x1E2F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2F3Cu;
label_1e2f3c:
    // 0x1e2f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2f40: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1e2f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e2f44: 0xc077f40  jal         func_1DFD00
    ctx->pc = 0x1E2F44u;
    SET_GPR_U32(ctx, 31, 0x1E2F4Cu);
    ctx->pc = 0x1DFD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFD00u, 0x1E2F44u, 0x1E2F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2F4Cu;
label_1e2f4c:
    // 0x1e2f4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2f50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2f54: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e2f54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e2f58: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2F60u;
}
