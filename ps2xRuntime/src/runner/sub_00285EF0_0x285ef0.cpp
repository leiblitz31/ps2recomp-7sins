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

// Function: sub_00285EF0
// Address: 0x285ef0 - 0x285f50
void sub_00285EF0_0x285ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285EF0_0x285ef0");
#endif

    switch (ctx->pc) {
        case 0x285f0cu: goto label_285f0c;
        case 0x285f1cu: goto label_285f1c;
        case 0x285f30u: goto label_285f30;
        default: break;
    }

    ctx->pc = 0x285ef0u;

    // 0x285ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x285ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x285ef4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x285ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x285ef8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x285ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x285efc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x285efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x285f00: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x285f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285f04: 0xc0a1848  jal         func_286120
    ctx->pc = 0x285F04u;
    SET_GPR_U32(ctx, 31, 0x285F0Cu);
    ctx->pc = 0x286120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286120u, 0x285F04u, 0x285F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285F0Cu;
label_285f0c:
    // 0x285f0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x285f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285f10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x285f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285f14: 0xc0a1840  jal         func_286100
    ctx->pc = 0x285F14u;
    SET_GPR_U32(ctx, 31, 0x285F1Cu);
    ctx->pc = 0x286100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286100u, 0x285F14u, 0x285F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285F1Cu;
label_285f1c:
    // 0x285f1c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x285f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285f20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x285f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285f24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x285f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285f28: 0xc0a17d4  jal         func_285F50
    ctx->pc = 0x285F28u;
    SET_GPR_U32(ctx, 31, 0x285F30u);
    ctx->pc = 0x285F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F50u, 0x285F28u, 0x285F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285F30u;
label_285f30:
    // 0x285f30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x285f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285f34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x285f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285f38: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x285f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x285f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x285F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285F44u;
    // 0x285f44: 0x0  nop
    ctx->pc = 0x285f44u;
    // NOP
    // 0x285f48: 0x0  nop
    ctx->pc = 0x285f48u;
    // NOP
    // 0x285f4c: 0x0  nop
    ctx->pc = 0x285f4cu;
    // NOP
    ctx->pc = 0x285f50u;
}
