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

// Function: sub_00294110
// Address: 0x294110 - 0x294170
void sub_00294110_0x294110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294110_0x294110");
#endif

    switch (ctx->pc) {
        case 0x294134u: goto label_294134;
        case 0x29414cu: goto label_29414c;
        default: break;
    }

    ctx->pc = 0x294110u;

    // 0x294110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x294110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x294114: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x294114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x294118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x294118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29411c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29411cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x294120: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x294120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x294124: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x294124u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294128: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x294128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29412c: 0xc0e1570  jal         func_3855C0
    ctx->pc = 0x29412Cu;
    SET_GPR_U32(ctx, 31, 0x294134u);
    ctx->pc = 0x3855C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3855C0u, 0x29412Cu, 0x294134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294134u;
label_294134:
    // 0x294134: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x294134u;
    {
        const bool branch_taken_0x294134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294134) {
            ctx->pc = 0x29414Cu;
            goto label_29414c;
        }
    }
    ctx->pc = 0x29413Cu;
    // 0x29413c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29413cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294140: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x294140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x294144: 0xc0a505c  jal         func_294170
    ctx->pc = 0x294144u;
    SET_GPR_U32(ctx, 31, 0x29414Cu);
    ctx->pc = 0x294170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294170u, 0x294144u, 0x29414Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29414Cu;
label_29414c:
    // 0x29414c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29414cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294150: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x294150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294154: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x294154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294158: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x294158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29415c: 0x3e00008  jr          $ra
    ctx->pc = 0x29415Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29415Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294164u;
    // 0x294164: 0x0  nop
    ctx->pc = 0x294164u;
    // NOP
    // 0x294168: 0x0  nop
    ctx->pc = 0x294168u;
    // NOP
    // 0x29416c: 0x0  nop
    ctx->pc = 0x29416cu;
    // NOP
    ctx->pc = 0x294170u;
}
