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

// Function: sub_004B1820
// Address: 0x4b1820 - 0x4b1860
void sub_004B1820_0x4b1820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1820_0x4b1820");
#endif

    switch (ctx->pc) {
        case 0x4b1838u: goto label_4b1838;
        case 0x4b1854u: goto label_4b1854;
        default: break;
    }

    ctx->pc = 0x4b1820u;

    // 0x4b1820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b1820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b1824: 0x8f82b8e8  lw          $v0, -0x4718($gp)
    ctx->pc = 0x4b1824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949096)));
    // 0x4b1828: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B1828u;
    {
        const bool branch_taken_0x4b1828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1828u;
        // 0x4b182c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1828) {
            ctx->pc = 0x4B1848u;
            goto label_4b1848;
        }
    }
    ctx->pc = 0x4B1830u;
    // 0x4b1830: 0xc12c95e  jal         func_4B2578
    ctx->pc = 0x4B1830u;
    SET_GPR_U32(ctx, 31, 0x4B1838u);
    ctx->pc = 0x4B2578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2578u, 0x4B1830u, 0x4B1838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1838u;
label_4b1838:
    // 0x4b1838: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B1838u;
    {
        const bool branch_taken_0x4b1838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1838) {
            ctx->pc = 0x4B183Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1838u;
            // 0x4b183c: 0xaf80b8e8  sw          $zero, -0x4718($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294949096), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1848u;
            goto label_4b1848;
        }
    }
    ctx->pc = 0x4B1840u;
    // 0x4b1840: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B1840u;
    {
        const bool branch_taken_0x4b1840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1840u;
        // 0x4b1844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1840) {
            ctx->pc = 0x4B1854u;
            goto label_4b1854;
        }
    }
    ctx->pc = 0x4B1848u;
label_4b1848:
    // 0x4b1848: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4b1848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4b184c: 0xc126614  jal         func_499850
    ctx->pc = 0x4B184Cu;
    SET_GPR_U32(ctx, 31, 0x4B1854u);
    ctx->pc = 0x4B1850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B184Cu;
    // 0x4b1850: 0x2484ecc0  addiu       $a0, $a0, -0x1340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499850u, 0x4B184Cu, 0x4B1854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1854u;
label_4b1854:
    // 0x4b1854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1858: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1858u;
        // 0x4b185c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1860u;
}
