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

// Function: sub_0015CB00
// Address: 0x15cb00 - 0x15cb60
void sub_0015CB00_0x15cb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CB00_0x15cb00");
#endif

    switch (ctx->pc) {
        case 0x15cb1cu: goto label_15cb1c;
        case 0x15cb2cu: goto label_15cb2c;
        case 0x15cb40u: goto label_15cb40;
        default: break;
    }

    ctx->pc = 0x15cb00u;

    // 0x15cb00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15cb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15cb04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15cb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15cb08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15cb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15cb0c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x15cb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x15cb10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15cb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cb14: 0xc057344  jal         func_15CD10
    ctx->pc = 0x15CB14u;
    SET_GPR_U32(ctx, 31, 0x15CB1Cu);
    ctx->pc = 0x15CD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CD10u, 0x15CB14u, 0x15CB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CB1Cu;
label_15cb1c:
    // 0x15cb1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15cb1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cb20: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15cb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cb24: 0xc05733c  jal         func_15CCF0
    ctx->pc = 0x15CB24u;
    SET_GPR_U32(ctx, 31, 0x15CB2Cu);
    ctx->pc = 0x15CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CCF0u, 0x15CB24u, 0x15CB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CB2Cu;
label_15cb2c:
    // 0x15cb2c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15cb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cb30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15cb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cb34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15cb34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cb38: 0xc0572d8  jal         func_15CB60
    ctx->pc = 0x15CB38u;
    SET_GPR_U32(ctx, 31, 0x15CB40u);
    ctx->pc = 0x15CB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CB60u, 0x15CB38u, 0x15CB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CB40u;
label_15cb40:
    // 0x15cb40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15cb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15cb44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15cb44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cb48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15cb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15cb4c: 0x3e00008  jr          $ra
    ctx->pc = 0x15CB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CB54u;
    // 0x15cb54: 0x0  nop
    ctx->pc = 0x15cb54u;
    // NOP
    // 0x15cb58: 0x0  nop
    ctx->pc = 0x15cb58u;
    // NOP
    // 0x15cb5c: 0x0  nop
    ctx->pc = 0x15cb5cu;
    // NOP
    ctx->pc = 0x15cb60u;
}
