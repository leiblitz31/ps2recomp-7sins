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

// Function: sub_004B16A8
// Address: 0x4b16a8 - 0x4b1758
void sub_004B16A8_0x4b16a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B16A8_0x4b16a8");
#endif

    switch (ctx->pc) {
        case 0x4b16bcu: goto label_4b16bc;
        case 0x4b16d0u: goto label_4b16d0;
        case 0x4b1724u: goto label_4b1724;
        default: break;
    }

    ctx->pc = 0x4b16a8u;

    // 0x4b16a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b16a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b16ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b16acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4b16b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b16b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b16b4: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x4B16B4u;
    SET_GPR_U32(ctx, 31, 0x4B16BCu);
    ctx->pc = 0x4B16B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B16B4u;
    // 0x4b16b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x4B16B4u, 0x4B16BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B16BCu;
label_4b16bc:
    // 0x4b16bc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b16bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4b16c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4b16c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b16c4: 0x2445eb80  addiu       $a1, $v0, -0x1480
    ctx->pc = 0x4b16c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962048));
    // 0x4b16c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b16c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b16cc: 0x0  nop
    ctx->pc = 0x4b16ccu;
    // NOP
label_4b16d0:
    // 0x4b16d0: 0x2c820018  sltiu       $v0, $a0, 0x18
    ctx->pc = 0x4b16d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x4b16d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B16D4u;
    {
        const bool branch_taken_0x4b16d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B16D4u;
        // 0x4b16d8: 0x861804  sllv        $v1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b16d4) {
            ctx->pc = 0x4B16F4u;
            goto label_4b16f4;
        }
    }
    ctx->pc = 0x4B16DCu;
    // 0x4b16dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b16dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b16e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b16e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b16e4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4B16E4u;
    {
        const bool branch_taken_0x4b16e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b16e4) {
            ctx->pc = 0x4B16E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B16E4u;
            // 0x4b16e8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1710u;
            goto label_4b1710;
        }
    }
    ctx->pc = 0x4B16ECu;
    // 0x4b16ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4B16ECu;
    {
        const bool branch_taken_0x4b16ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B16F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B16ECu;
        // 0x4b16f0: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b16ec) {
            ctx->pc = 0x4B170Cu;
            goto label_4b170c;
        }
    }
    ctx->pc = 0x4B16F4u;
label_4b16f4:
    // 0x4b16f4: 0x2482ffe8  addiu       $v0, $a0, -0x18
    ctx->pc = 0x4b16f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967272));
    // 0x4b16f8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4b16f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4b16fc: 0x461004  sllv        $v0, $a2, $v0
    ctx->pc = 0x4b16fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x4b1700: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b1700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b1704: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4B1704u;
    {
        const bool branch_taken_0x4b1704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1704) {
            ctx->pc = 0x4B1708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1704u;
            // 0x4b1708: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B170Cu;
            goto label_4b170c;
        }
    }
    ctx->pc = 0x4B170Cu;
label_4b170c:
    // 0x4b170c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4b170cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4b1710:
    // 0x4b1710: 0x2c820030  sltiu       $v0, $a0, 0x30
    ctx->pc = 0x4b1710u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x4b1714: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x4B1714u;
    {
        const bool branch_taken_0x4b1714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1714u;
        // 0x4b1718: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1714) {
            ctx->pc = 0x4B16D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b16d0;
        }
    }
    ctx->pc = 0x4B171Cu;
    // 0x4b171c: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x4B171Cu;
    SET_GPR_U32(ctx, 31, 0x4B1724u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x4B171Cu, 0x4B1724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1724u;
label_4b1724:
    // 0x4b1724: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b1724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b1728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b172c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B172Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B172Cu;
        // 0x4b1730: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B172Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1734u;
    // 0x4b1734: 0x0  nop
    ctx->pc = 0x4b1734u;
    // NOP
    // 0x4b1738: 0x8f83b90c  lw          $v1, -0x46F4($gp)
    ctx->pc = 0x4b1738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949132)));
    // 0x4b173c: 0x8c621380  lw          $v0, 0x1380($v1)
    ctx->pc = 0x4b173cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4992)));
    // 0x4b1740: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B1740u;
    {
        const bool branch_taken_0x4b1740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b1740) {
            ctx->pc = 0x4B1750u;
            goto label_4b1750;
        }
    }
    ctx->pc = 0x4B1748u;
    // 0x4b1748: 0xac65139c  sw          $a1, 0x139C($v1)
    ctx->pc = 0x4b1748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5020), GPR_U32(ctx, 5));
    // 0x4b174c: 0xac641398  sw          $a0, 0x1398($v1)
    ctx->pc = 0x4b174cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5016), GPR_U32(ctx, 4));
label_4b1750:
    // 0x4b1750: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1758u;
}
