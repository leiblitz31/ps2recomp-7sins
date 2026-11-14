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

// Function: sub_003E16A8
// Address: 0x3e16a8 - 0x3e1758
void sub_003E16A8_0x3e16a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E16A8_0x3e16a8");
#endif

    switch (ctx->pc) {
        case 0x3e16e0u: goto label_3e16e0;
        case 0x3e1704u: goto label_3e1704;
        case 0x3e171cu: goto label_3e171c;
        case 0x3e1738u: goto label_3e1738;
        default: break;
    }

    ctx->pc = 0x3e16a8u;

    // 0x3e16a8: 0xa60019  multu       $a1, $a2
    ctx->pc = 0x3e16a8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3e16ac: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e16acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e16b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e16b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3e16b4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3e16b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3e16b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3e16b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3e16bc: 0x1012  mflo        $v0
    ctx->pc = 0x3e16bcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3e16c0: 0x8810  mfhi        $s1
    ctx->pc = 0x3e16c0u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x3e16c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3e16c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3e16c8: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x3e16c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3e16cc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3e16ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3e16d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e16d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e16d4: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x3e16d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x3e16d8: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3E16D8u;
    SET_GPR_U32(ctx, 31, 0x3E16E0u);
    ctx->pc = 0x3E16DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E16D8u;
    // 0x3e16dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3E16D8u, 0x3E16E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E16E0u;
label_3e16e0:
    // 0x3e16e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e16e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e16e4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x3e16e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3e16e8: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x3e16e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3e16ec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3E16ECu;
    {
        const bool branch_taken_0x3e16ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E16F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E16ECu;
        // 0x3e16f0: 0x34068000  ori         $a2, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e16ec) {
            ctx->pc = 0x3E1724u;
            goto label_3e1724;
        }
    }
    ctx->pc = 0x3E16F4u;
    // 0x3e16f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e16f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e16f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e16f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e16fc: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x3E16FCu;
    SET_GPR_U32(ctx, 31, 0x3E1704u);
    ctx->pc = 0x3E1700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E16FCu;
    // 0x3e1700: 0x34108000  ori         $s0, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3E16FCu, 0x3E1704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1704u;
label_3e1704:
    // 0x3e1704: 0x66268000  daddiu      $a2, $s1, -0x8000
    ctx->pc = 0x3e1704u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)4294934528);
    // 0x3e1708: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x3e1708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x3e170c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x3e170cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3e1710: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3e1710u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3e1714: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x3E1714u;
    SET_GPR_U32(ctx, 31, 0x3E171Cu);
    ctx->pc = 0x3E1718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1714u;
    // 0x3e1718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3E1714u, 0x3E171Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E171Cu;
label_3e171c:
    // 0x3e171c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E171Cu;
    {
        const bool branch_taken_0x3e171c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E171Cu;
        // 0x3e1720: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e171c) {
            ctx->pc = 0x3E173Cu;
            goto label_3e173c;
        }
    }
    ctx->pc = 0x3E1724u;
label_3e1724:
    // 0x3e1724: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x3e1724u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3e1728: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3e1728u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3e172c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e172cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1730: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x3E1730u;
    SET_GPR_U32(ctx, 31, 0x3E1738u);
    ctx->pc = 0x3E1734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1730u;
    // 0x3e1734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3E1730u, 0x3E1738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1738u;
label_3e1738:
    // 0x3e1738: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3e1738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e173c:
    // 0x3e173c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3e173cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e1740: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e1740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e1744: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3e1744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e1748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e1748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e174c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E174Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E174Cu;
        // 0x3e1750: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E174Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1754u;
    // 0x3e1754: 0x0  nop
    ctx->pc = 0x3e1754u;
    // NOP
    ctx->pc = 0x3e1758u;
}
