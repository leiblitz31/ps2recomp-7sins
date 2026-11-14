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

// Function: sub_003803D0
// Address: 0x3803d0 - 0x380670
void sub_003803D0_0x3803d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003803D0_0x3803d0");
#endif

    switch (ctx->pc) {
        case 0x380428u: goto label_380428;
        case 0x380470u: goto label_380470;
        case 0x3804bcu: goto label_3804bc;
        case 0x3804e8u: goto label_3804e8;
        case 0x380570u: goto label_380570;
        case 0x3805a8u: goto label_3805a8;
        case 0x38063cu: goto label_38063c;
        default: break;
    }

    ctx->pc = 0x3803d0u;

    // 0x3803d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3803d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3803d4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3803d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3803d8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3803d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3803dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3803dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3803e0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3803e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3803e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3803e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3803e8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3803e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x3803ec: 0x26320028  addiu       $s2, $s1, 0x28
    ctx->pc = 0x3803ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x3803f0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3803f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x3803f4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3803f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3803f8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3803f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3803fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3803fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x380400: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x380400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x380404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x380404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x380408: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x380408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x38040c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x38040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x380410: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x380410u;
    {
        const bool branch_taken_0x380410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x380414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380410u;
        // 0x380414: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380410) {
            ctx->pc = 0x380490u;
            goto label_380490;
        }
    }
    ctx->pc = 0x380418u;
    // 0x380418: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x380418u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38041c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x38041cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380420: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x380420u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380424: 0x0  nop
    ctx->pc = 0x380424u;
    // NOP
label_380428:
    // 0x380428: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x380428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x38042c: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x38042cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x380430: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x380430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x380434: 0x54770010  bnel        $v1, $s7, . + 4 + (0x10 << 2)
    ctx->pc = 0x380434u;
    {
        const bool branch_taken_0x380434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        if (branch_taken_0x380434) {
            ctx->pc = 0x380438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380434u;
            // 0x380438: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380478u;
            goto label_380478;
        }
    }
    ctx->pc = 0x38043Cu;
    // 0x38043c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x38043cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x380440: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x380440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x380444: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x380444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x380448: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x380448u;
    {
        const bool branch_taken_0x380448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x380448) {
            ctx->pc = 0x38044Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380448u;
            // 0x38044c: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38045Cu;
            goto label_38045c;
        }
    }
    ctx->pc = 0x380450u;
    // 0x380450: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x380450u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x380454: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x380454u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x380458: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x380458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_38045c:
    // 0x38045c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x38045Cu;
    {
        const bool branch_taken_0x38045c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38045c) {
            ctx->pc = 0x380460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38045Cu;
            // 0x380460: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380478u;
            goto label_380478;
        }
    }
    ctx->pc = 0x380464u;
    // 0x380464: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x380464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x380468: 0xc0de61a  jal         func_379868
    ctx->pc = 0x380468u;
    SET_GPR_U32(ctx, 31, 0x380470u);
    ctx->pc = 0x38046Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380468u;
    // 0x38046c: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379868u, 0x380468u, 0x380470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380470u;
label_380470:
    // 0x380470: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x380470u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x380474: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x380474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_380478:
    // 0x380478: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x380478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x38047c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x38047cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x380480: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x380480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x380484: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x380484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x380488: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x380488u;
    {
        const bool branch_taken_0x380488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380488u;
        // 0x38048c: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380488) {
            ctx->pc = 0x380428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380428;
        }
    }
    ctx->pc = 0x380490u;
label_380490:
    // 0x380490: 0x56c00003  bnel        $s6, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x380490u;
    {
        const bool branch_taken_0x380490 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x380490) {
            ctx->pc = 0x380494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380490u;
            // 0x380494: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3804A0u;
            goto label_3804a0;
        }
    }
    ctx->pc = 0x380498u;
    // 0x380498: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x380498u;
    {
        const bool branch_taken_0x380498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380498u;
        // 0x38049c: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380498) {
            ctx->pc = 0x380628u;
            goto label_380628;
        }
    }
    ctx->pc = 0x3804A0u;
label_3804a0:
    // 0x3804a0: 0x158100  sll         $s0, $s5, 4
    ctx->pc = 0x3804a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x3804a4: 0x1630c0  sll         $a2, $s6, 3
    ctx->pc = 0x3804a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x3804a8: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x3804a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3804ac: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x3804acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3804b0: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x3804b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x3804b4: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x3804B4u;
    SET_GPR_U32(ctx, 31, 0x3804BCu);
    ctx->pc = 0x3804B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3804B4u;
    // 0x3804b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3804B4u, 0x3804BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3804BCu;
label_3804bc:
    // 0x3804bc: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3804bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3804c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3804c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3804c4: 0xae550004  sw          $s5, 0x4($s2)
    ctx->pc = 0x3804c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 21));
    // 0x3804c8: 0x703821  addu        $a3, $v1, $s0
    ctx->pc = 0x3804c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3804cc: 0x12a0001f  beqz        $s5, . + 4 + (0x1F << 2)
    ctx->pc = 0x3804CCu;
    {
        const bool branch_taken_0x3804cc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3804D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3804CCu;
        // 0x3804d0: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3804cc) {
            ctx->pc = 0x38054Cu;
            goto label_38054c;
        }
    }
    ctx->pc = 0x3804D4u;
    // 0x3804d4: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x3804d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3804d8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3804d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3804dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3804dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3804e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3804e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3804e4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3804e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3804e8:
    // 0x3804e8: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x3804e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x3804ec: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3804ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x3804f0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x3804f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3804f4: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x3804f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3804f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3804f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3804fc: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x3804fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x380500: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x380500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x380504: 0x144c000b  bne         $v0, $t4, . + 4 + (0xB << 2)
    ctx->pc = 0x380504u;
    {
        const bool branch_taken_0x380504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        ctx->pc = 0x380508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380504u;
        // 0x380508: 0xacc90000  sw          $t1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380504) {
            ctx->pc = 0x380534u;
            goto label_380534;
        }
    }
    ctx->pc = 0x38050Cu;
    // 0x38050c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x38050Cu;
    {
        const bool branch_taken_0x38050c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x380510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38050Cu;
        // 0x380510: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38050c) {
            ctx->pc = 0x380534u;
            goto label_380534;
        }
    }
    ctx->pc = 0x380514u;
    // 0x380514: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x380514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x380518: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x380518u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x38051c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x38051cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x380520: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x380520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x380524: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x380524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x380528: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x380528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x38052c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x38052cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x380530: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x380530u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_380534:
    // 0x380534: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x380534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x380538: 0x256b0024  addiu       $t3, $t3, 0x24
    ctx->pc = 0x380538u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 36));
    // 0x38053c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x38053cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x380540: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x380540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x380544: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x380544u;
    {
        const bool branch_taken_0x380544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380544u;
        // 0x380548: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380544) {
            ctx->pc = 0x3804E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3804e8;
        }
    }
    ctx->pc = 0x38054Cu;
label_38054c:
    // 0x38054c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x38054cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x380550: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x380550u;
    {
        const bool branch_taken_0x380550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x380554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380550u;
        // 0x380554: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380550) {
            ctx->pc = 0x380628u;
            goto label_380628;
        }
    }
    ctx->pc = 0x380558u;
    // 0x380558: 0x240e0120  addiu       $t6, $zero, 0x120
    ctx->pc = 0x380558u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x38055c: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x38055cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x380560: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x380560u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x380564: 0x35ad0001  ori         $t5, $t5, 0x1
    ctx->pc = 0x380564u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)1);
    // 0x380568: 0x20e2018  mult        $a0, $s0, $t6
    ctx->pc = 0x380568u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x38056c: 0x0  nop
    ctx->pc = 0x38056cu;
    // NOP
label_380570:
    // 0x380570: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x380570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x380574: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x380574u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x380578: 0xdd0200f0  ld          $v0, 0xF0($t0)
    ctx->pc = 0x380578u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 240)));
    // 0x38057c: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x38057cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x380580: 0x144d0024  bne         $v0, $t5, . + 4 + (0x24 << 2)
    ctx->pc = 0x380580u;
    {
        const bool branch_taken_0x380580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 13));
        ctx->pc = 0x380584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380580u;
        // 0x380584: 0x260a0001  addiu       $t2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380580) {
            ctx->pc = 0x380614u;
            goto label_380614;
        }
    }
    ctx->pc = 0x380588u;
    // 0x380588: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x380588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x38058c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x38058Cu;
    {
        const bool branch_taken_0x38058c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x380590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38058Cu;
        // 0x380590: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38058c) {
            ctx->pc = 0x380614u;
            goto label_380614;
        }
    }
    ctx->pc = 0x380594u;
    // 0x380594: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x380594u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x380598: 0x8d060104  lw          $a2, 0x104($t0)
    ctx->pc = 0x380598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 260)));
    // 0x38059c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x38059cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x3805a0: 0x240c0024  addiu       $t4, $zero, 0x24
    ctx->pc = 0x3805a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3805a4: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x3805a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3805a8:
    // 0x3805a8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x3805a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3805ac: 0x10a70014  beq         $a1, $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x3805ACu;
    {
        const bool branch_taken_0x3805ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x3805B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3805ACu;
        // 0x3805b0: 0xac2018  mult        $a0, $a1, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3805ac) {
            ctx->pc = 0x380600u;
            goto label_380600;
        }
    }
    ctx->pc = 0x3805B4u;
    // 0x3805b4: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x3805b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x3805b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3805b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3805bc: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x3805bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3805c0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x3805c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x3805c4: 0x546b000f  bnel        $v1, $t3, . + 4 + (0xF << 2)
    ctx->pc = 0x3805C4u;
    {
        const bool branch_taken_0x3805c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 11));
        if (branch_taken_0x3805c4) {
            ctx->pc = 0x3805C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3805C4u;
            // 0x3805c8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380604u;
            goto label_380604;
        }
    }
    ctx->pc = 0x3805CCu;
    // 0x3805cc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x3805ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3805d0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x3805d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3805d4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3805d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3805d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3805d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3805dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3805dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3805e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3805e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3805e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3805e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3805e8: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x3805e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3805ec: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x3805ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3805f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3805f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3805f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3805f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3805f8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3805f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x3805fc: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x3805fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_380600:
    // 0x380600: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x380600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_380604:
    // 0x380604: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x380604u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x380608: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x380608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x38060c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x38060Cu;
    {
        const bool branch_taken_0x38060c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38060Cu;
        // 0x380610: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38060c) {
            ctx->pc = 0x3805A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3805a8;
        }
    }
    ctx->pc = 0x380614u;
label_380614:
    // 0x380614: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x380614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x380618: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x380618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38061c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x38061cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x380620: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x380620u;
    {
        const bool branch_taken_0x380620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380620u;
        // 0x380624: 0x20e2018  mult        $a0, $s0, $t6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x380620) {
            ctx->pc = 0x380570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380570;
        }
    }
    ctx->pc = 0x380628u;
label_380628:
    // 0x380628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x380628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38062c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x38062cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x380630: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x380630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380634: 0xc0e01f4  jal         func_3807D0
    ctx->pc = 0x380634u;
    SET_GPR_U32(ctx, 31, 0x38063Cu);
    ctx->pc = 0x380638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380634u;
    // 0x380638: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3807D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3807D0u, 0x380634u, 0x38063Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38063Cu;
label_38063c:
    // 0x38063c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38063cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380640: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x380640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x380644: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x380644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x380648: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x380648u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38064c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x38064cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x380650: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x380650u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x380654: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x380654u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x380658: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x380658u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38065c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x38065cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x380660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380664: 0x3e00008  jr          $ra
    ctx->pc = 0x380664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380664u;
        // 0x380668: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38066Cu;
    // 0x38066c: 0x0  nop
    ctx->pc = 0x38066cu;
    // NOP
    ctx->pc = 0x380670u;
}
