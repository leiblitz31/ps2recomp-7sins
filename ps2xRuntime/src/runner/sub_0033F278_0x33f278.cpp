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

// Function: sub_0033F278
// Address: 0x33f278 - 0x33f360
void sub_0033F278_0x33f278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F278_0x33f278");
#endif

    switch (ctx->pc) {
        case 0x33f2a4u: goto label_33f2a4;
        case 0x33f2c4u: goto label_33f2c4;
        case 0x33f2e4u: goto label_33f2e4;
        default: break;
    }

    ctx->pc = 0x33f278u;

    // 0x33f278: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33f278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33f27c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33f27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33f280: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x33f280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x33f284: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33f284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f288: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x33f288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x33f28c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33f28cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33f290: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33f290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33f294: 0x34a50004  ori         $a1, $a1, 0x4
    ctx->pc = 0x33f294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x33f298: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x33f298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x33f29c: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33F29Cu;
    SET_GPR_U32(ctx, 31, 0x33F2A4u);
    ctx->pc = 0x33F2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F29Cu;
    // 0x33f2a0: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33F29Cu, 0x33F2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F2A4u;
label_33f2a4:
    // 0x33f2a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x33f2a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f2a8: 0x18600025  blez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x33F2A8u;
    {
        const bool branch_taken_0x33f2a8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x33F2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F2A8u;
        // 0x33f2ac: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f2a8) {
            ctx->pc = 0x33F340u;
            goto label_33f340;
        }
    }
    ctx->pc = 0x33F2B0u;
    // 0x33f2b0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x33f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x33f2b4: 0x2438821  addu        $s1, $s2, $v1
    ctx->pc = 0x33f2b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x33f2b8: 0x34a50004  ori         $a1, $a1, 0x4
    ctx->pc = 0x33f2b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x33f2bc: 0xc0d1228  jal         func_3448A0
    ctx->pc = 0x33F2BCu;
    SET_GPR_U32(ctx, 31, 0x33F2C4u);
    ctx->pc = 0x33F2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F2BCu;
    // 0x33f2c0: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448A0u, 0x33F2BCu, 0x33F2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F2C4u;
label_33f2c4:
    // 0x33f2c4: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x33f2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x33f2c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33f2c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f2cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33f2ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f2d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33f2d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f2d4: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x33f2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x33f2d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33f2d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f2dc: 0xc0d11fa  jal         func_3447E8
    ctx->pc = 0x33F2DCu;
    SET_GPR_U32(ctx, 31, 0x33F2E4u);
    ctx->pc = 0x33F2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F2DCu;
    // 0x33f2e0: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3447E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3447E8u, 0x33F2DCu, 0x33F2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F2E4u;
label_33f2e4:
    // 0x33f2e4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x33f2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f2e8: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x33f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x33f2ec: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x33f2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x33f2f0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33F2F0u;
    {
        const bool branch_taken_0x33f2f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f2f0) {
            ctx->pc = 0x33F2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F2F0u;
            // 0x33f2f4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F2F8u;
            goto label_33f2f8;
        }
    }
    ctx->pc = 0x33F2F8u;
label_33f2f8:
    // 0x33f2f8: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x33f2f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x33f2fc: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x33f2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x33f300: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33f300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33f304: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x33f304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33f308: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x33f308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x33f30c: 0x2442ffe4  addiu       $v0, $v0, -0x1C
    ctx->pc = 0x33f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x33f310: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x33f310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x33f314: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x33f314u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x33f318: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x33f318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x33f31c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x33f31cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x33f320: 0x1012  mflo        $v0
    ctx->pc = 0x33f320u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x33f324: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x33f324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33f328: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x33f328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33f32c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x33f32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x33f330: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x33f330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x33f334: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x33f334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33f338: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x33f338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x33f33c: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x33f33cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
label_33f340:
    // 0x33f340: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x33f340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f344: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x33f344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33f348: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x33f348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33f34c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33f34cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33f350: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33f350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f354: 0x3e00008  jr          $ra
    ctx->pc = 0x33F354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F354u;
        // 0x33f358: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F35Cu;
    // 0x33f35c: 0x0  nop
    ctx->pc = 0x33f35cu;
    // NOP
    ctx->pc = 0x33f360u;
}
