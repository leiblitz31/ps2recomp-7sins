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

// Function: sub_003C13F0
// Address: 0x3c13f0 - 0x3c1440
void sub_003C13F0_0x3c13f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C13F0_0x3c13f0");
#endif

    switch (ctx->pc) {
        case 0x3c1414u: goto label_3c1414;
        default: break;
    }

    ctx->pc = 0x3c13f0u;

    // 0x3c13f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c13f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c13f4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3c13f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3c13f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c13f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3c13fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c13fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c1400: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c1400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1404: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3c1404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3c1408: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3c1408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3c140c: 0xc103642  jal         func_40D908
    ctx->pc = 0x3C140Cu;
    SET_GPR_U32(ctx, 31, 0x3C1414u);
    ctx->pc = 0x3C1410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C140Cu;
    // 0x3c1410: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3C140Cu, 0x3C1414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1414u;
label_3c1414:
    // 0x3c1414: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C1414u;
    {
        const bool branch_taken_0x3c1414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1414u;
        // 0x3c1418: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1414) {
            ctx->pc = 0x3C1428u;
            goto label_3c1428;
        }
    }
    ctx->pc = 0x3C141Cu;
    // 0x3c141c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3c141cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1420: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C1420u;
    {
        const bool branch_taken_0x3c1420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1420u;
        // 0x3c1424: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1420) {
            ctx->pc = 0x3C142Cu;
            goto label_3c142c;
        }
    }
    ctx->pc = 0x3C1428u;
label_3c1428:
    // 0x3c1428: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c1428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c142c:
    // 0x3c142c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c142cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c1430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c1430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c1434: 0x3e00008  jr          $ra
    ctx->pc = 0x3C1434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1434u;
        // 0x3c1438: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C143Cu;
    // 0x3c143c: 0x0  nop
    ctx->pc = 0x3c143cu;
    // NOP
    ctx->pc = 0x3c1440u;
}
