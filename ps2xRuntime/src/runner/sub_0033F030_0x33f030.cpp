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

// Function: sub_0033F030
// Address: 0x33f030 - 0x33f0c8
void sub_0033F030_0x33f030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F030_0x33f030");
#endif

    switch (ctx->pc) {
        case 0x33f060u: goto label_33f060;
        case 0x33f078u: goto label_33f078;
        case 0x33f0a4u: goto label_33f0a4;
        default: break;
    }

    ctx->pc = 0x33f030u;

    // 0x33f030: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33f030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33f034: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x33f034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x33f038: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x33f038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x33f03c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x33f03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x33f040: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33f040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33f044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33f048: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33f048u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f04c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33f04cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33f050: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x33f050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x33f054: 0x34a50004  ori         $a1, $a1, 0x4
    ctx->pc = 0x33f054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x33f058: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33F058u;
    SET_GPR_U32(ctx, 31, 0x33F060u);
    ctx->pc = 0x33F05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F058u;
    // 0x33f05c: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33F058u, 0x33F060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F060u;
label_33f060:
    // 0x33f060: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33f060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f064: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33f064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33f068: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x33f068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x33f06c: 0x34a50004  ori         $a1, $a1, 0x4
    ctx->pc = 0x33f06cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x33f070: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33F070u;
    SET_GPR_U32(ctx, 31, 0x33F078u);
    ctx->pc = 0x33F074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F070u;
    // 0x33f074: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33F070u, 0x33F078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F078u;
label_33f078:
    // 0x33f078: 0x600000c  bltz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x33F078u;
    {
        const bool branch_taken_0x33f078 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F078u;
        // 0x33f07c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f078) {
            ctx->pc = 0x33F0ACu;
            goto label_33f0ac;
        }
    }
    ctx->pc = 0x33F080u;
    // 0x33f080: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x33F080u;
    {
        const bool branch_taken_0x33f080 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x33F084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F080u;
        // 0x33f084: 0x2502821  addu        $a1, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f080) {
            ctx->pc = 0x33F0ACu;
            goto label_33f0ac;
        }
    }
    ctx->pc = 0x33F088u;
    // 0x33f088: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x33f088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x33f08c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x33f08cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33f090: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x33f090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x33f094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33f094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f098: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x33f098u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x33f09c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x33F09Cu;
    SET_GPR_U32(ctx, 31, 0x33F0A4u);
    ctx->pc = 0x33F0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F09Cu;
    // 0x33f0a0: 0x24c6001c  addiu       $a2, $a2, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x33F09Cu, 0x33F0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F0A4u;
label_33f0a4:
    // 0x33f0a4: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x33f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x33f0a8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x33f0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_33f0ac:
    // 0x33f0ac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33f0acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f0b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x33f0b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33f0b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x33f0b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33f0b8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x33f0b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f0bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33f0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x33F0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F0C0u;
        // 0x33f0c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F0C8u;
}
