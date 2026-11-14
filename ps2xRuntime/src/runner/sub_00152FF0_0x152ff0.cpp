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

// Function: sub_00152FF0
// Address: 0x152ff0 - 0x153050
void sub_00152FF0_0x152ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152FF0_0x152ff0");
#endif

    switch (ctx->pc) {
        case 0x153018u: goto label_153018;
        case 0x15302cu: goto label_15302c;
        default: break;
    }

    ctx->pc = 0x152ff0u;

    // 0x152ff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x152ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x152ff4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x152ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x152ff8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152ffc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x152ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x153000: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x153000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x153004: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x153004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153008: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x153008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15300c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15300cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153010: 0xc0546dc  jal         func_151B70
    ctx->pc = 0x153010u;
    SET_GPR_U32(ctx, 31, 0x153018u);
    ctx->pc = 0x151B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151B70u, 0x153010u, 0x153018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153018u;
label_153018:
    // 0x153018: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x153018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15301c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x15301cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x153020: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x153020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153024: 0xc054c14  jal         func_153050
    ctx->pc = 0x153024u;
    SET_GPR_U32(ctx, 31, 0x15302Cu);
    ctx->pc = 0x153050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153050u, 0x153024u, 0x15302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15302Cu;
label_15302c:
    // 0x15302c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15302cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153030: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x153030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153038: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x153038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15303c: 0x3e00008  jr          $ra
    ctx->pc = 0x15303Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15303Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153044u;
    // 0x153044: 0x0  nop
    ctx->pc = 0x153044u;
    // NOP
    // 0x153048: 0x0  nop
    ctx->pc = 0x153048u;
    // NOP
    // 0x15304c: 0x0  nop
    ctx->pc = 0x15304cu;
    // NOP
    ctx->pc = 0x153050u;
}
