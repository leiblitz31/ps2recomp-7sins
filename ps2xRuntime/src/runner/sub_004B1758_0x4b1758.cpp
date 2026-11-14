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

// Function: sub_004B1758
// Address: 0x4b1758 - 0x4b17c8
void sub_004B1758_0x4b1758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1758_0x4b1758");
#endif

    switch (ctx->pc) {
        case 0x4b1784u: goto label_4b1784;
        case 0x4b17b8u: goto label_4b17b8;
        default: break;
    }

    ctx->pc = 0x4b1758u;

    // 0x4b1758: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b1758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b175c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4b175cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b1760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b1764: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x4b1764u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1768: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4b1768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b176c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4b176cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4b1770: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b1770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b1774: 0x2484ecc0  addiu       $a0, $a0, -0x1340
    ctx->pc = 0x4b1774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962368));
    // 0x4b1778: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4b1778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b177c: 0xc126b7e  jal         func_49ADF8
    ctx->pc = 0x4B177Cu;
    SET_GPR_U32(ctx, 31, 0x4B1784u);
    ctx->pc = 0x4B1780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B177Cu;
    // 0x4b1780: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49ADF8u, 0x4B177Cu, 0x4B1784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1784u;
label_4b1784:
    // 0x4b1784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1788: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1788u;
        // 0x4b178c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1790u;
    // 0x4b1790: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b1790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1794: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b1794u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b1798: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4b1798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b179c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x4b179cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b17a0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4b17a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4b17a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b17a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b17a8: 0x2484ecc0  addiu       $a0, $a0, -0x1340
    ctx->pc = 0x4b17a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962368));
    // 0x4b17ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4b17acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b17b0: 0xc12609a  jal         func_498268
    ctx->pc = 0x4B17B0u;
    SET_GPR_U32(ctx, 31, 0x4B17B8u);
    ctx->pc = 0x4B17B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B17B0u;
    // 0x4b17b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498268u, 0x4B17B0u, 0x4B17B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B17B8u;
label_4b17b8:
    // 0x4b17b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b17b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b17bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B17BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B17C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B17BCu;
        // 0x4b17c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B17BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B17C4u;
    // 0x4b17c4: 0x0  nop
    ctx->pc = 0x4b17c4u;
    // NOP
    ctx->pc = 0x4b17c8u;
}
