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

// Function: sub_0025FE30
// Address: 0x25fe30 - 0x25fe90
void sub_0025FE30_0x25fe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FE30_0x25fe30");
#endif

    switch (ctx->pc) {
        case 0x25fe4cu: goto label_25fe4c;
        case 0x25fe5cu: goto label_25fe5c;
        case 0x25fe70u: goto label_25fe70;
        default: break;
    }

    ctx->pc = 0x25fe30u;

    // 0x25fe30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25fe30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25fe34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25fe34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25fe38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25fe38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25fe3c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25fe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25fe40: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25fe40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25fe44: 0xc040aa0  jal         func_102A80
    ctx->pc = 0x25FE44u;
    SET_GPR_U32(ctx, 31, 0x25FE4Cu);
    ctx->pc = 0x102A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A80u, 0x25FE44u, 0x25FE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE4Cu;
label_25fe4c:
    // 0x25fe4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25fe4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fe50: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25fe50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25fe54: 0xc097fd0  jal         func_25FF40
    ctx->pc = 0x25FE54u;
    SET_GPR_U32(ctx, 31, 0x25FE5Cu);
    ctx->pc = 0x25FF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF40u, 0x25FE54u, 0x25FE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE5Cu;
label_25fe5c:
    // 0x25fe5c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25fe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25fe60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25fe60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fe64: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x25fe64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fe68: 0xc097fa4  jal         func_25FE90
    ctx->pc = 0x25FE68u;
    SET_GPR_U32(ctx, 31, 0x25FE70u);
    ctx->pc = 0x25FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE90u, 0x25FE68u, 0x25FE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE70u;
label_25fe70:
    // 0x25fe70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25fe70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fe74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25fe74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fe78: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25fe78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25fe7c: 0x3e00008  jr          $ra
    ctx->pc = 0x25FE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FE7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FE84u;
    // 0x25fe84: 0x0  nop
    ctx->pc = 0x25fe84u;
    // NOP
    // 0x25fe88: 0x0  nop
    ctx->pc = 0x25fe88u;
    // NOP
    // 0x25fe8c: 0x0  nop
    ctx->pc = 0x25fe8cu;
    // NOP
    ctx->pc = 0x25fe90u;
}
