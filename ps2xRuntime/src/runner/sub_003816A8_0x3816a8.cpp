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

// Function: sub_003816A8
// Address: 0x3816a8 - 0x381728
void sub_003816A8_0x3816a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003816A8_0x3816a8");
#endif

    switch (ctx->pc) {
        case 0x3816e0u: goto label_3816e0;
        case 0x3816e8u: goto label_3816e8;
        case 0x3816f0u: goto label_3816f0;
        case 0x3816f8u: goto label_3816f8;
        default: break;
    }

    ctx->pc = 0x3816a8u;

    // 0x3816a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3816a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3816ac: 0x8f82a914  lw          $v0, -0x56EC($gp)
    ctx->pc = 0x3816acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945044)));
    // 0x3816b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3816b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3816b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3816b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3816b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3816b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3816bc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3816BCu;
    {
        const bool branch_taken_0x3816bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3816C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3816BCu;
        // 0x3816c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3816bc) {
            ctx->pc = 0x381700u;
            goto label_381700;
        }
    }
    ctx->pc = 0x3816C4u;
    // 0x3816c4: 0x8f90a918  lw          $s0, -0x56E8($gp)
    ctx->pc = 0x3816c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945048)));
    // 0x3816c8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3816c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3816cc: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x3816ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x3816d0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3816d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3816d4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3816d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3816d8: 0xc0e0716  jal         func_381C58
    ctx->pc = 0x3816D8u;
    SET_GPR_U32(ctx, 31, 0x3816E0u);
    ctx->pc = 0x3816DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3816D8u;
    // 0x3816dc: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381C58u, 0x3816D8u, 0x3816E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3816E0u;
label_3816e0:
    // 0x3816e0: 0xc0e07c0  jal         func_381F00
    ctx->pc = 0x3816E0u;
    SET_GPR_U32(ctx, 31, 0x3816E8u);
    ctx->pc = 0x381F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381F00u, 0x3816E0u, 0x3816E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3816E8u;
label_3816e8:
    // 0x3816e8: 0xc0e06fe  jal         func_381BF8
    ctx->pc = 0x3816E8u;
    SET_GPR_U32(ctx, 31, 0x3816F0u);
    ctx->pc = 0x381BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381BF8u, 0x3816E8u, 0x3816F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3816F0u;
label_3816f0:
    // 0x3816f0: 0xc0e070a  jal         func_381C28
    ctx->pc = 0x3816F0u;
    SET_GPR_U32(ctx, 31, 0x3816F8u);
    ctx->pc = 0x381C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381C28u, 0x3816F0u, 0x3816F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3816F8u;
label_3816f8:
    // 0x3816f8: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x3816f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x3816fc: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x3816fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
label_381700:
    // 0x381700: 0x8f83a914  lw          $v1, -0x56EC($gp)
    ctx->pc = 0x381700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945044)));
    // 0x381704: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x381704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381708: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x381708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38170c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38170cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x381710: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x381710u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x381714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x381714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x381718: 0xaf83a914  sw          $v1, -0x56EC($gp)
    ctx->pc = 0x381718u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945044), GPR_U32(ctx, 3));
    // 0x38171c: 0x3e00008  jr          $ra
    ctx->pc = 0x38171Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38171Cu;
        // 0x381720: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38171Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381724u;
    // 0x381724: 0x0  nop
    ctx->pc = 0x381724u;
    // NOP
    ctx->pc = 0x381728u;
}
