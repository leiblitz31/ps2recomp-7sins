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

// Function: sub_00499588
// Address: 0x499588 - 0x4995d8
void sub_00499588_0x499588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499588_0x499588");
#endif

    switch (ctx->pc) {
        case 0x4995bcu: goto label_4995bc;
        default: break;
    }

    ctx->pc = 0x499588u;

    // 0x499588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x499588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49958c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49958cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x499590: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x499590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x499594: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x499594u;
    {
        const bool branch_taken_0x499594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x499598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499594u;
        // 0x499598: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499594) {
            ctx->pc = 0x4995A8u;
            goto label_4995a8;
        }
    }
    ctx->pc = 0x49959Cu;
    // 0x49959c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49959cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4995a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4995A0u;
    {
        const bool branch_taken_0x4995a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4995A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4995A0u;
        // 0x4995a4: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4995a0) {
            ctx->pc = 0x4995C4u;
            goto label_4995c4;
        }
    }
    ctx->pc = 0x4995A8u;
label_4995a8:
    // 0x4995a8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4995a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4995ac: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4995acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x4995b0: 0x248481b8  addiu       $a0, $a0, -0x7E48
    ctx->pc = 0x4995b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934968));
    // 0x4995b4: 0xc12a936  jal         func_4AA4D8
    ctx->pc = 0x4995B4u;
    SET_GPR_U32(ctx, 31, 0x4995BCu);
    ctx->pc = 0x4995B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4995B4u;
    // 0x4995b8: 0x34a5080b  ori         $a1, $a1, 0x80B (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2059);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA4D8u, 0x4995B4u, 0x4995BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4995BCu;
label_4995bc:
    // 0x4995bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4995bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4995c0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x4995c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_4995c4:
    // 0x4995c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4995c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4995c8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4995c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4995cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4995CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4995D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4995CCu;
        // 0x4995d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4995CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4995D4u;
    // 0x4995d4: 0x0  nop
    ctx->pc = 0x4995d4u;
    // NOP
    ctx->pc = 0x4995d8u;
}
