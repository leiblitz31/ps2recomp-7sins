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

// Function: sub_004B1860
// Address: 0x4b1860 - 0x4b1918
void sub_004B1860_0x4b1860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1860_0x4b1860");
#endif

    switch (ctx->pc) {
        case 0x4b1894u: goto label_4b1894;
        case 0x4b18a8u: goto label_4b18a8;
        case 0x4b18c8u: goto label_4b18c8;
        case 0x4b18d8u: goto label_4b18d8;
        case 0x4b18e8u: goto label_4b18e8;
        case 0x4b1900u: goto label_4b1900;
        default: break;
    }

    ctx->pc = 0x4b1860u;

    // 0x4b1860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b1860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b1864: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4b1864u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x4b1868: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x4b1868u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x4b186c: 0x8f84c190  lw          $a0, -0x3E70($gp)
    ctx->pc = 0x4b186cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951312)));
    // 0x4b1870: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x4b1870u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x4b1874: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b1874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4b1878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b1878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b187c: 0x24c6ecc0  addiu       $a2, $a2, -0x1340
    ctx->pc = 0x4b187cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962368));
    // 0x4b1880: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x4b1880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
    // 0x4b1884: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x4b1884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4b1888: 0x2788c258  addiu       $t0, $gp, -0x3DA8
    ctx->pc = 0x4b1888u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951512));
    // 0x4b188c: 0xc12679e  jal         func_499E78
    ctx->pc = 0x4B188Cu;
    SET_GPR_U32(ctx, 31, 0x4B1894u);
    ctx->pc = 0x4B1890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B188Cu;
    // 0x4b1890: 0x3529080b  ori         $t1, $t1, 0x80B (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2059);
    ctx->in_delay_slot = false;
    ctx->pc = 0x499E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499E78u, 0x4B188Cu, 0x4B1894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1894u;
label_4b1894:
    // 0x4b1894: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b1894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1898: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4B1898u;
    {
        const bool branch_taken_0x4b1898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1898u;
        // 0x4b189c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1898) {
            ctx->pc = 0x4B1904u;
            goto label_4b1904;
        }
    }
    ctx->pc = 0x4B18A0u;
    // 0x4b18a0: 0xc12c21e  jal         func_4B0878
    ctx->pc = 0x4B18A0u;
    SET_GPR_U32(ctx, 31, 0x4B18A8u);
    ctx->pc = 0x4B18A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B18A0u;
    // 0x4b18a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0878u, 0x4B18A0u, 0x4B18A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B18A8u;
label_4b18a8:
    // 0x4b18a8: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4b18a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x4b18ac: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x4b18acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
    // 0x4b18b0: 0x24a575b8  addiu       $a1, $a1, 0x75B8
    ctx->pc = 0x4b18b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30136));
    // 0x4b18b4: 0x24e77660  addiu       $a3, $a3, 0x7660
    ctx->pc = 0x4b18b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30304));
    // 0x4b18b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b18b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b18bc: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x4b18bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4b18c0: 0xc12668c  jal         func_499A30
    ctx->pc = 0x4B18C0u;
    SET_GPR_U32(ctx, 31, 0x4B18C8u);
    ctx->pc = 0x4B18C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B18C0u;
    // 0x4b18c4: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499A30u, 0x4B18C0u, 0x4B18C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B18C8u;
label_4b18c8:
    // 0x4b18c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4B18C8u;
    {
        const bool branch_taken_0x4b18c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b18c8) {
            ctx->pc = 0x4B18F8u;
            goto label_4b18f8;
        }
    }
    ctx->pc = 0x4B18D0u;
    // 0x4b18d0: 0xc12c942  jal         func_4B2508
    ctx->pc = 0x4B18D0u;
    SET_GPR_U32(ctx, 31, 0x4B18D8u);
    ctx->pc = 0x4B2508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2508u, 0x4B18D0u, 0x4B18D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B18D8u;
label_4b18d8:
    // 0x4b18d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B18D8u;
    {
        const bool branch_taken_0x4b18d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B18DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B18D8u;
        // 0x4b18dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b18d8) {
            ctx->pc = 0x4B18F8u;
            goto label_4b18f8;
        }
    }
    ctx->pc = 0x4B18E0u;
    // 0x4b18e0: 0xc126804  jal         func_49A010
    ctx->pc = 0x4B18E0u;
    SET_GPR_U32(ctx, 31, 0x4B18E8u);
    ctx->pc = 0x4B18E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B18E0u;
    // 0x4b18e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A010u, 0x4B18E0u, 0x4B18E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B18E8u;
label_4b18e8:
    // 0x4b18e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b18e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b18ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b18ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b18f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B18F0u;
    {
        const bool branch_taken_0x4b18f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B18F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B18F0u;
        // 0x4b18f4: 0xaf83b8e8  sw          $v1, -0x4718($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949096), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b18f0) {
            ctx->pc = 0x4B1904u;
            goto label_4b1904;
        }
    }
    ctx->pc = 0x4B18F8u;
label_4b18f8:
    // 0x4b18f8: 0xc126614  jal         func_499850
    ctx->pc = 0x4B18F8u;
    SET_GPR_U32(ctx, 31, 0x4B1900u);
    ctx->pc = 0x4B18FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B18F8u;
    // 0x4b18fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499850u, 0x4B18F8u, 0x4B1900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1900u;
label_4b1900:
    // 0x4b1900: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b1900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b1904:
    // 0x4b1904: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b1904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b1908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b190c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B190Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B190Cu;
        // 0x4b1910: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B190Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1914u;
    // 0x4b1914: 0x0  nop
    ctx->pc = 0x4b1914u;
    // NOP
    ctx->pc = 0x4b1918u;
}
