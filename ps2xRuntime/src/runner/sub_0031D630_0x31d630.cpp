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

// Function: sub_0031D630
// Address: 0x31d630 - 0x31d728
void sub_0031D630_0x31d630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D630_0x31d630");
#endif

    switch (ctx->pc) {
        case 0x31d630u: goto label_31d630;
        case 0x31d634u: goto label_31d634;
        case 0x31d638u: goto label_31d638;
        case 0x31d63cu: goto label_31d63c;
        case 0x31d640u: goto label_31d640;
        case 0x31d644u: goto label_31d644;
        case 0x31d648u: goto label_31d648;
        case 0x31d64cu: goto label_31d64c;
        case 0x31d650u: goto label_31d650;
        case 0x31d654u: goto label_31d654;
        case 0x31d658u: goto label_31d658;
        case 0x31d65cu: goto label_31d65c;
        case 0x31d660u: goto label_31d660;
        case 0x31d664u: goto label_31d664;
        case 0x31d668u: goto label_31d668;
        case 0x31d66cu: goto label_31d66c;
        case 0x31d670u: goto label_31d670;
        case 0x31d674u: goto label_31d674;
        case 0x31d678u: goto label_31d678;
        case 0x31d67cu: goto label_31d67c;
        case 0x31d680u: goto label_31d680;
        case 0x31d684u: goto label_31d684;
        case 0x31d688u: goto label_31d688;
        case 0x31d68cu: goto label_31d68c;
        case 0x31d690u: goto label_31d690;
        case 0x31d694u: goto label_31d694;
        case 0x31d698u: goto label_31d698;
        case 0x31d69cu: goto label_31d69c;
        case 0x31d6a0u: goto label_31d6a0;
        case 0x31d6a4u: goto label_31d6a4;
        case 0x31d6a8u: goto label_31d6a8;
        case 0x31d6acu: goto label_31d6ac;
        case 0x31d6b0u: goto label_31d6b0;
        case 0x31d6b4u: goto label_31d6b4;
        case 0x31d6b8u: goto label_31d6b8;
        case 0x31d6bcu: goto label_31d6bc;
        case 0x31d6c0u: goto label_31d6c0;
        case 0x31d6c4u: goto label_31d6c4;
        case 0x31d6c8u: goto label_31d6c8;
        case 0x31d6ccu: goto label_31d6cc;
        case 0x31d6d0u: goto label_31d6d0;
        case 0x31d6d4u: goto label_31d6d4;
        case 0x31d6d8u: goto label_31d6d8;
        case 0x31d6dcu: goto label_31d6dc;
        case 0x31d6e0u: goto label_31d6e0;
        case 0x31d6e4u: goto label_31d6e4;
        case 0x31d6e8u: goto label_31d6e8;
        case 0x31d6ecu: goto label_31d6ec;
        case 0x31d6f0u: goto label_31d6f0;
        case 0x31d6f4u: goto label_31d6f4;
        case 0x31d6f8u: goto label_31d6f8;
        case 0x31d6fcu: goto label_31d6fc;
        case 0x31d700u: goto label_31d700;
        case 0x31d704u: goto label_31d704;
        case 0x31d708u: goto label_31d708;
        case 0x31d70cu: goto label_31d70c;
        case 0x31d710u: goto label_31d710;
        case 0x31d714u: goto label_31d714;
        case 0x31d718u: goto label_31d718;
        case 0x31d71cu: goto label_31d71c;
        case 0x31d720u: goto label_31d720;
        case 0x31d724u: goto label_31d724;
        default: break;
    }

    ctx->pc = 0x31d630u;

label_31d630:
    // 0x31d630: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x31d630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_31d634:
    // 0x31d634: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x31d634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_31d638:
    // 0x31d638: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x31d638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_31d63c:
    // 0x31d63c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x31d63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_31d640:
    // 0x31d640: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x31d640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_31d644:
    // 0x31d644: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x31d644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_31d648:
    // 0x31d648: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x31d648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_31d64c:
    // 0x31d64c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x31d64cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31d650:
    // 0x31d650: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x31d650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_31d654:
    // 0x31d654: 0x2455e880  addiu       $s5, $v0, -0x1780
    ctx->pc = 0x31d654u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_31d658:
    // 0x31d658: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x31d658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_31d65c:
    // 0x31d65c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x31d65cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31d660:
    // 0x31d660: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31d660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31d664:
    // 0x31d664: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x31d664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_31d668:
    // 0x31d668: 0x8f90a5c0  lw          $s0, -0x5A40($gp)
    ctx->pc = 0x31d668u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944192)));
label_31d66c:
    // 0x31d66c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x31d66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_31d670:
    // 0x31d670: 0x8ea20108  lw          $v0, 0x108($s5)
    ctx->pc = 0x31d670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 264)));
label_31d674:
    // 0x31d674: 0x34a50122  ori         $a1, $a1, 0x122
    ctx->pc = 0x31d674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
label_31d678:
    // 0x31d678: 0x40f809  jalr        $v0
label_31d67c:
    if (ctx->pc == 0x31D67Cu) {
        ctx->pc = 0x31D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D678u;
        // 0x31d67c: 0x2d08021  addu        $s0, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D680u;
        goto label_31d680;
    }
    ctx->pc = 0x31D678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31D680u);
        ctx->pc = 0x31D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D678u;
        // 0x31d67c: 0x2d08021  addu        $s0, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D678u, 0x31D680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D680u;
label_31d680:
    // 0x31d680: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31d680u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31d684:
    // 0x31d684: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x31d684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31d688:
    // 0x31d688: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_31d68c:
    if (ctx->pc == 0x31D68Cu) {
        ctx->pc = 0x31D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D688u;
        // 0x31d68c: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D690u;
        goto label_31d690;
    }
    ctx->pc = 0x31D688u;
    {
        const bool branch_taken_0x31d688 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D688u;
        // 0x31d68c: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d688) {
            ctx->pc = 0x31D6FCu;
            goto label_31d6fc;
        }
    }
    ctx->pc = 0x31D690u;
label_31d690:
    // 0x31d690: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31d690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31d694:
    // 0x31d694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31d694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31d698:
    // 0x31d698: 0xc0bb7e6  jal         func_2EDF98
label_31d69c:
    if (ctx->pc == 0x31D69Cu) {
        ctx->pc = 0x31D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D698u;
        // 0x31d69c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D6A0u;
        goto label_31d6a0;
    }
    ctx->pc = 0x31D698u;
    SET_GPR_U32(ctx, 31, 0x31D6A0u);
    ctx->pc = 0x31D69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D698u;
    // 0x31d69c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x31D698u, 0x31D6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D6A0u;
label_31d6a0:
    // 0x31d6a0: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x31d6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_31d6a4:
    // 0x31d6a4: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x31d6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
label_31d6a8:
    // 0x31d6a8: 0x2839818  mult        $s3, $s4, $v1
    ctx->pc = 0x31d6a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_31d6ac:
    // 0x31d6ac: 0x8ea20108  lw          $v0, 0x108($s5)
    ctx->pc = 0x31d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 264)));
label_31d6b0:
    // 0x31d6b0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x31d6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_31d6b4:
    // 0x31d6b4: 0x34a50122  ori         $a1, $a1, 0x122
    ctx->pc = 0x31d6b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
label_31d6b8:
    // 0x31d6b8: 0x40f809  jalr        $v0
label_31d6bc:
    if (ctx->pc == 0x31D6BCu) {
        ctx->pc = 0x31D6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6B8u;
        // 0x31d6bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D6C0u;
        goto label_31d6c0;
    }
    ctx->pc = 0x31D6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31D6C0u);
        ctx->pc = 0x31D6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6B8u;
        // 0x31d6bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D6B8u, 0x31D6C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D6C0u;
label_31d6c0:
    // 0x31d6c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31d6c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31d6c4:
    // 0x31d6c4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_31d6c8:
    if (ctx->pc == 0x31D6C8u) {
        ctx->pc = 0x31D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6C4u;
        // 0x31d6c8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D6CCu;
        goto label_31d6cc;
    }
    ctx->pc = 0x31D6C4u;
    {
        const bool branch_taken_0x31d6c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6C4u;
        // 0x31d6c8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d6c4) {
            ctx->pc = 0x31D6F0u;
            goto label_31d6f0;
        }
    }
    ctx->pc = 0x31D6CCu;
label_31d6cc:
    // 0x31d6cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31d6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31d6d0:
    // 0x31d6d0: 0xc0bb7e6  jal         func_2EDF98
label_31d6d4:
    if (ctx->pc == 0x31D6D4u) {
        ctx->pc = 0x31D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6D0u;
        // 0x31d6d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D6D8u;
        goto label_31d6d8;
    }
    ctx->pc = 0x31D6D0u;
    SET_GPR_U32(ctx, 31, 0x31D6D8u);
    ctx->pc = 0x31D6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D6D0u;
    // 0x31d6d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x31D6D0u, 0x31D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D6D8u;
label_31d6d8:
    // 0x31d6d8: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x31d6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
label_31d6dc:
    // 0x31d6dc: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x31d6dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_31d6e0:
    // 0x31d6e0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x31d6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_31d6e4:
    // 0x31d6e4: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x31d6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_31d6e8:
    // 0x31d6e8: 0x10000005  b           . + 4 + (0x5 << 2)
label_31d6ec:
    if (ctx->pc == 0x31D6ECu) {
        ctx->pc = 0x31D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6E8u;
        // 0x31d6ec: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D6F0u;
        goto label_31d6f0;
    }
    ctx->pc = 0x31D6E8u;
    {
        const bool branch_taken_0x31d6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6E8u;
        // 0x31d6ec: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d6e8) {
            ctx->pc = 0x31D700u;
            goto label_31d700;
        }
    }
    ctx->pc = 0x31D6F0u;
label_31d6f0:
    // 0x31d6f0: 0x8ea2010c  lw          $v0, 0x10C($s5)
    ctx->pc = 0x31d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 268)));
label_31d6f4:
    // 0x31d6f4: 0x40f809  jalr        $v0
label_31d6f8:
    if (ctx->pc == 0x31D6F8u) {
        ctx->pc = 0x31D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6F4u;
        // 0x31d6f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D6FCu;
        goto label_31d6fc;
    }
    ctx->pc = 0x31D6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31D6FCu);
        ctx->pc = 0x31D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6F4u;
        // 0x31d6f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D6F4u, 0x31D6FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D6FCu;
label_31d6fc:
    // 0x31d6fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31d6fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31d700:
    // 0x31d700: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x31d700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_31d704:
    // 0x31d704: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x31d704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31d708:
    // 0x31d708: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x31d708u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31d70c:
    // 0x31d70c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x31d70cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31d710:
    // 0x31d710: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x31d710u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31d714:
    // 0x31d714: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x31d714u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31d718:
    // 0x31d718: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x31d718u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31d71c:
    // 0x31d71c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31d71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31d720:
    // 0x31d720: 0x3e00008  jr          $ra
label_31d724:
    if (ctx->pc == 0x31D724u) {
        ctx->pc = 0x31D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D720u;
        // 0x31d724: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D728u;
        goto label_fallthrough_0x31d720;
    }
    ctx->pc = 0x31D720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D720u;
        // 0x31d724: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31d720:
    ctx->pc = 0x31D728u;
}
