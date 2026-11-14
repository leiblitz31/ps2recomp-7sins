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

// Function: sub_00189930
// Address: 0x189930 - 0x189990
void sub_00189930_0x189930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189930_0x189930");
#endif

    switch (ctx->pc) {
        case 0x18994cu: goto label_18994c;
        case 0x18995cu: goto label_18995c;
        case 0x189970u: goto label_189970;
        default: break;
    }

    ctx->pc = 0x189930u;

    // 0x189930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x189930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x189934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x189934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x189938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18993c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x18993cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x189940: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x189940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189944: 0xc0626d4  jal         func_189B50
    ctx->pc = 0x189944u;
    SET_GPR_U32(ctx, 31, 0x18994Cu);
    ctx->pc = 0x189B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189B50u, 0x189944u, 0x18994Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18994Cu;
label_18994c:
    // 0x18994c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18994cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189950: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x189950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189954: 0xc0626cc  jal         func_189B30
    ctx->pc = 0x189954u;
    SET_GPR_U32(ctx, 31, 0x18995Cu);
    ctx->pc = 0x189B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189B30u, 0x189954u, 0x18995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18995Cu;
label_18995c:
    // 0x18995c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18995cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189960: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189964: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x189964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189968: 0xc062664  jal         func_189990
    ctx->pc = 0x189968u;
    SET_GPR_U32(ctx, 31, 0x189970u);
    ctx->pc = 0x189990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189990u, 0x189968u, 0x189970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189970u;
label_189970:
    // 0x189970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x189970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189978: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x189978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18997c: 0x3e00008  jr          $ra
    ctx->pc = 0x18997Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18997Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189984u;
    // 0x189984: 0x0  nop
    ctx->pc = 0x189984u;
    // NOP
    // 0x189988: 0x0  nop
    ctx->pc = 0x189988u;
    // NOP
    // 0x18998c: 0x0  nop
    ctx->pc = 0x18998cu;
    // NOP
    ctx->pc = 0x189990u;
}
