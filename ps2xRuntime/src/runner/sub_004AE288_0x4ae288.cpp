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

// Function: sub_004AE288
// Address: 0x4ae288 - 0x4ae2c8
void sub_004AE288_0x4ae288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE288_0x4ae288");
#endif

    switch (ctx->pc) {
        case 0x4ae2b0u: goto label_4ae2b0;
        default: break;
    }

    ctx->pc = 0x4ae288u;

    // 0x4ae288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ae288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ae28c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ae28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4ae290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ae294: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ae294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae298: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4ae298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae29c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4ae29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4ae2a0: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x4ae2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x4ae2a4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4ae2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4ae2a8: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x4AE2A8u;
    SET_GPR_U32(ctx, 31, 0x4AE2B0u);
    ctx->pc = 0x4AE2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE2A8u;
    // 0x4ae2ac: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x4AE2A8u, 0x4AE2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE2B0u;
label_4ae2b0:
    // 0x4ae2b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ae2b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae2b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ae2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae2b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ae2b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ae2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE2BCu;
        // 0x4ae2c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE2C4u;
    // 0x4ae2c4: 0x0  nop
    ctx->pc = 0x4ae2c4u;
    // NOP
    ctx->pc = 0x4ae2c8u;
}
