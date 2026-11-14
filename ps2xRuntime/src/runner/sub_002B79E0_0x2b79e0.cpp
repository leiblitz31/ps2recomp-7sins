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

// Function: sub_002B79E0
// Address: 0x2b79e0 - 0x2b7a40
void sub_002B79E0_0x2b79e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B79E0_0x2b79e0");
#endif

    switch (ctx->pc) {
        case 0x2b79fcu: goto label_2b79fc;
        case 0x2b7a0cu: goto label_2b7a0c;
        case 0x2b7a20u: goto label_2b7a20;
        default: break;
    }

    ctx->pc = 0x2b79e0u;

    // 0x2b79e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b79e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b79e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b79e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b79e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b79e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b79ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b79ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2b79f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b79f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b79f4: 0xc042290  jal         func_108A40
    ctx->pc = 0x2B79F4u;
    SET_GPR_U32(ctx, 31, 0x2B79FCu);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x2B79F4u, 0x2B79FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B79FCu;
label_2b79fc:
    // 0x2b79fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b79fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7a00: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b7a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7a04: 0xc042288  jal         func_108A20
    ctx->pc = 0x2B7A04u;
    SET_GPR_U32(ctx, 31, 0x2B7A0Cu);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x2B7A04u, 0x2B7A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7A0Cu;
label_2b7a0c:
    // 0x2b7a0c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b7a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7a10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b7a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7a14: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b7a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7a18: 0xc0ade90  jal         func_2B7A40
    ctx->pc = 0x2B7A18u;
    SET_GPR_U32(ctx, 31, 0x2B7A20u);
    ctx->pc = 0x2B7A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7A40u, 0x2B7A18u, 0x2B7A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7A20u;
label_2b7a20:
    // 0x2b7a20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b7a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7a24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b7a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7a28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b7a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b7a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7A34u;
    // 0x2b7a34: 0x0  nop
    ctx->pc = 0x2b7a34u;
    // NOP
    // 0x2b7a38: 0x0  nop
    ctx->pc = 0x2b7a38u;
    // NOP
    // 0x2b7a3c: 0x0  nop
    ctx->pc = 0x2b7a3cu;
    // NOP
    ctx->pc = 0x2b7a40u;
}
