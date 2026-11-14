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

// Function: sub_003FD288
// Address: 0x3fd288 - 0x3fd2e0
void sub_003FD288_0x3fd288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FD288_0x3fd288");
#endif

    switch (ctx->pc) {
        case 0x3fd2bcu: goto label_3fd2bc;
        case 0x3fd2ccu: goto label_3fd2cc;
        default: break;
    }

    ctx->pc = 0x3fd288u;

    // 0x3fd288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3fd288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3fd28c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3fd28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3fd290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3fd290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3fd294: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3fd294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd298: 0xae0500e4  sw          $a1, 0xE4($s0)
    ctx->pc = 0x3fd298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 5));
    // 0x3fd29c: 0x8e0200e0  lw          $v0, 0xE0($s0)
    ctx->pc = 0x3fd29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x3fd2a0: 0xae0600dc  sw          $a2, 0xDC($s0)
    ctx->pc = 0x3fd2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 6));
    // 0x3fd2a4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3FD2A4u;
    {
        const bool branch_taken_0x3fd2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD2A4u;
        // 0x3fd2a8: 0xae070230  sw          $a3, 0x230($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd2a4) {
            ctx->pc = 0x3FD2CCu;
            goto label_3fd2cc;
        }
    }
    ctx->pc = 0x3FD2ACu;
    // 0x3fd2ac: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x3fd2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x3fd2b0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fd2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3fd2b4: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3FD2B4u;
    SET_GPR_U32(ctx, 31, 0x3FD2BCu);
    ctx->pc = 0x3FD2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD2B4u;
    // 0x3fd2b8: 0x24a5f990  addiu       $a1, $a1, -0x670 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3FD2B4u, 0x3FD2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD2BCu;
label_3fd2bc:
    // 0x3fd2bc: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fd2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3fd2c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fd2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd2c4: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3FD2C4u;
    SET_GPR_U32(ctx, 31, 0x3FD2CCu);
    ctx->pc = 0x3FD2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD2C4u;
    // 0x3fd2c8: 0x24a5f9c8  addiu       $a1, $a1, -0x638 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3FD2C4u, 0x3FD2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD2CCu;
label_3fd2cc:
    // 0x3fd2cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3fd2ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fd2d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fd2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fd2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3FD2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FD2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD2D4u;
        // 0x3fd2d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FD2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FD2DCu;
    // 0x3fd2dc: 0x0  nop
    ctx->pc = 0x3fd2dcu;
    // NOP
    ctx->pc = 0x3fd2e0u;
}
