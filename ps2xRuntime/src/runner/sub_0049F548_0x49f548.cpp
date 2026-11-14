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

// Function: sub_0049F548
// Address: 0x49f548 - 0x49f670
void sub_0049F548_0x49f548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F548_0x49f548");
#endif

    switch (ctx->pc) {
        case 0x49f548u: goto label_49f548;
        case 0x49f54cu: goto label_49f54c;
        case 0x49f550u: goto label_49f550;
        case 0x49f554u: goto label_49f554;
        case 0x49f558u: goto label_49f558;
        case 0x49f55cu: goto label_49f55c;
        case 0x49f560u: goto label_49f560;
        case 0x49f564u: goto label_49f564;
        case 0x49f568u: goto label_49f568;
        case 0x49f56cu: goto label_49f56c;
        case 0x49f570u: goto label_49f570;
        case 0x49f574u: goto label_49f574;
        case 0x49f578u: goto label_49f578;
        case 0x49f57cu: goto label_49f57c;
        case 0x49f580u: goto label_49f580;
        case 0x49f584u: goto label_49f584;
        case 0x49f588u: goto label_49f588;
        case 0x49f58cu: goto label_49f58c;
        case 0x49f590u: goto label_49f590;
        case 0x49f594u: goto label_49f594;
        case 0x49f598u: goto label_49f598;
        case 0x49f59cu: goto label_49f59c;
        case 0x49f5a0u: goto label_49f5a0;
        case 0x49f5a4u: goto label_49f5a4;
        case 0x49f5a8u: goto label_49f5a8;
        case 0x49f5acu: goto label_49f5ac;
        case 0x49f5b0u: goto label_49f5b0;
        case 0x49f5b4u: goto label_49f5b4;
        case 0x49f5b8u: goto label_49f5b8;
        case 0x49f5bcu: goto label_49f5bc;
        case 0x49f5c0u: goto label_49f5c0;
        case 0x49f5c4u: goto label_49f5c4;
        case 0x49f5c8u: goto label_49f5c8;
        case 0x49f5ccu: goto label_49f5cc;
        case 0x49f5d0u: goto label_49f5d0;
        case 0x49f5d4u: goto label_49f5d4;
        case 0x49f5d8u: goto label_49f5d8;
        case 0x49f5dcu: goto label_49f5dc;
        case 0x49f5e0u: goto label_49f5e0;
        case 0x49f5e4u: goto label_49f5e4;
        case 0x49f5e8u: goto label_49f5e8;
        case 0x49f5ecu: goto label_49f5ec;
        case 0x49f5f0u: goto label_49f5f0;
        case 0x49f5f4u: goto label_49f5f4;
        case 0x49f5f8u: goto label_49f5f8;
        case 0x49f5fcu: goto label_49f5fc;
        case 0x49f600u: goto label_49f600;
        case 0x49f604u: goto label_49f604;
        case 0x49f608u: goto label_49f608;
        case 0x49f60cu: goto label_49f60c;
        case 0x49f610u: goto label_49f610;
        case 0x49f614u: goto label_49f614;
        case 0x49f618u: goto label_49f618;
        case 0x49f61cu: goto label_49f61c;
        case 0x49f620u: goto label_49f620;
        case 0x49f624u: goto label_49f624;
        case 0x49f628u: goto label_49f628;
        case 0x49f62cu: goto label_49f62c;
        case 0x49f630u: goto label_49f630;
        case 0x49f634u: goto label_49f634;
        case 0x49f638u: goto label_49f638;
        case 0x49f63cu: goto label_49f63c;
        case 0x49f640u: goto label_49f640;
        case 0x49f644u: goto label_49f644;
        case 0x49f648u: goto label_49f648;
        case 0x49f64cu: goto label_49f64c;
        case 0x49f650u: goto label_49f650;
        case 0x49f654u: goto label_49f654;
        case 0x49f658u: goto label_49f658;
        case 0x49f65cu: goto label_49f65c;
        case 0x49f660u: goto label_49f660;
        case 0x49f664u: goto label_49f664;
        case 0x49f668u: goto label_49f668;
        case 0x49f66cu: goto label_49f66c;
        default: break;
    }

    ctx->pc = 0x49f548u;

label_49f548:
    // 0x49f548: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x49f548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_49f54c:
    // 0x49f54c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x49f54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_49f550:
    // 0x49f550: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49f550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49f554:
    // 0x49f554: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x49f554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_49f558:
    // 0x49f558: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x49f558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_49f55c:
    // 0x49f55c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x49f55cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49f560:
    // 0x49f560: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x49f560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_49f564:
    // 0x49f564: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x49f564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_49f568:
    // 0x49f568: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x49f568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_49f56c:
    // 0x49f56c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49f56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49f570:
    // 0x49f570: 0xc127e3e  jal         func_49F8F8
label_49f574:
    if (ctx->pc == 0x49F574u) {
        ctx->pc = 0x49F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F570u;
        // 0x49f574: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F578u;
        goto label_49f578;
    }
    ctx->pc = 0x49F570u;
    SET_GPR_U32(ctx, 31, 0x49F578u);
    ctx->pc = 0x49F574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49F570u;
    // 0x49f574: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F8F8u, 0x49F570u, 0x49F578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F578u;
label_49f578:
    // 0x49f578: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x49f578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_49f57c:
    // 0x49f57c: 0xaf91b818  sw          $s1, -0x47E8($gp)
    ctx->pc = 0x49f57cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948888), GPR_U32(ctx, 17));
label_49f580:
    // 0x49f580: 0x24535cf0  addiu       $s3, $v0, 0x5CF0
    ctx->pc = 0x49f580u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 23792));
label_49f584:
    // 0x49f584: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x49f584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
label_49f588:
    // 0x49f588: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x49f588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_49f58c:
    // 0x49f58c: 0xaf90b828  sw          $s0, -0x47D8($gp)
    ctx->pc = 0x49f58cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948904), GPR_U32(ctx, 16));
label_49f590:
    // 0x49f590: 0x2471f9d8  addiu       $s1, $v1, -0x628
    ctx->pc = 0x49f590u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965720));
label_49f594:
    // 0x49f594: 0x2454fa28  addiu       $s4, $v0, -0x5D8
    ctx->pc = 0x49f594u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965800));
label_49f598:
    // 0x49f598: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x49f598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_49f59c:
    // 0x49f59c: 0x0  nop
    ctx->pc = 0x49f59cu;
    // NOP
label_49f5a0:
    // 0x49f5a0: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x49f5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_49f5a4:
    // 0x49f5a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x49f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_49f5a8:
    // 0x49f5a8: 0x40f809  jalr        $v0
label_49f5ac:
    if (ctx->pc == 0x49F5ACu) {
        ctx->pc = 0x49F5B0u;
        goto label_49f5b0;
    }
    ctx->pc = 0x49F5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49F5B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F5A8u, 0x49F5B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49F5B0u;
label_49f5b0:
    // 0x49f5b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_49f5b4:
    if (ctx->pc == 0x49F5B4u) {
        ctx->pc = 0x49F5B8u;
        goto label_49f5b8;
    }
    ctx->pc = 0x49F5B0u;
    {
        const bool branch_taken_0x49f5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f5b0) {
            ctx->pc = 0x49F5D0u;
            goto label_49f5d0;
        }
    }
    ctx->pc = 0x49F5B8u;
label_49f5b8:
    // 0x49f5b8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_49f5bc:
    if (ctx->pc == 0x49F5BCu) {
        ctx->pc = 0x49F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F5B8u;
        // 0x49f5bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F5C0u;
        goto label_49f5c0;
    }
    ctx->pc = 0x49F5B8u;
    {
        const bool branch_taken_0x49f5b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F5B8u;
        // 0x49f5bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f5b8) {
            ctx->pc = 0x49F5C8u;
            goto label_49f5c8;
        }
    }
    ctx->pc = 0x49F5C0u;
label_49f5c0:
    // 0x49f5c0: 0x220f809  jalr        $s1
label_49f5c4:
    if (ctx->pc == 0x49F5C4u) {
        ctx->pc = 0x49F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F5C0u;
        // 0x49f5c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F5C8u;
        goto label_49f5c8;
    }
    ctx->pc = 0x49F5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x49F5C8u);
        ctx->pc = 0x49F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F5C0u;
        // 0x49f5c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F5C0u, 0x49F5C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49F5C8u;
label_49f5c8:
    // 0x49f5c8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_49f5cc:
    if (ctx->pc == 0x49F5CCu) {
        ctx->pc = 0x49F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F5C8u;
        // 0x49f5cc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F5D0u;
        goto label_49f5d0;
    }
    ctx->pc = 0x49F5C8u;
    {
        const bool branch_taken_0x49f5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F5C8u;
        // 0x49f5cc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f5c8) {
            ctx->pc = 0x49F618u;
            goto label_49f618;
        }
    }
    ctx->pc = 0x49F5D0u;
label_49f5d0:
    // 0x49f5d0: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
label_49f5d4:
    if (ctx->pc == 0x49F5D4u) {
        ctx->pc = 0x49F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F5D0u;
        // 0x49f5d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F5D8u;
        goto label_49f5d8;
    }
    ctx->pc = 0x49F5D0u;
    {
        const bool branch_taken_0x49f5d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F5D0u;
        // 0x49f5d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f5d0) {
            ctx->pc = 0x49F628u;
            goto label_49f628;
        }
    }
    ctx->pc = 0x49F5D8u;
label_49f5d8:
    // 0x49f5d8: 0x1280c0  sll         $s0, $s2, 3
    ctx->pc = 0x49f5d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_49f5dc:
    // 0x49f5dc: 0x0  nop
    ctx->pc = 0x49f5dcu;
    // NOP
label_49f5e0:
    // 0x49f5e0: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x49f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_49f5e4:
    // 0x49f5e4: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x49f5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_49f5e8:
    // 0x49f5e8: 0x60f809  jalr        $v1
label_49f5ec:
    if (ctx->pc == 0x49F5ECu) {
        ctx->pc = 0x49F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F5E8u;
        // 0x49f5ec: 0x2651ffff  addiu       $s1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F5F0u;
        goto label_49f5f0;
    }
    ctx->pc = 0x49F5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x49F5F0u);
        ctx->pc = 0x49F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F5E8u;
        // 0x49f5ec: 0x2651ffff  addiu       $s1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F5E8u, 0x49F5F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49F5F0u;
label_49f5f0:
    // 0x49f5f0: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_49f5f4:
    if (ctx->pc == 0x49F5F4u) {
        ctx->pc = 0x49F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F5F0u;
        // 0x49f5f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F5F8u;
        goto label_49f5f8;
    }
    ctx->pc = 0x49F5F0u;
    {
        const bool branch_taken_0x49f5f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F5F0u;
        // 0x49f5f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f5f0) {
            ctx->pc = 0x49F604u;
            goto label_49f604;
        }
    }
    ctx->pc = 0x49F5F8u;
label_49f5f8:
    // 0x49f5f8: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x49f5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_49f5fc:
    // 0x49f5fc: 0x280f809  jalr        $s4
label_49f600:
    if (ctx->pc == 0x49F600u) {
        ctx->pc = 0x49F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F5FCu;
        // 0x49f600: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F604u;
        goto label_49f604;
    }
    ctx->pc = 0x49F5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x49F604u);
        ctx->pc = 0x49F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F5FCu;
        // 0x49f600: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F5FCu, 0x49F604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49F604u;
label_49f604:
    // 0x49f604: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x49f604u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49f608:
    // 0x49f608: 0x1640fff5  bnez        $s2, . + 4 + (-0xB << 2)
label_49f60c:
    if (ctx->pc == 0x49F60Cu) {
        ctx->pc = 0x49F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F608u;
        // 0x49f60c: 0x1280c0  sll         $s0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F610u;
        goto label_49f610;
    }
    ctx->pc = 0x49F608u;
    {
        const bool branch_taken_0x49f608 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F608u;
        // 0x49f60c: 0x1280c0  sll         $s0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f608) {
            ctx->pc = 0x49F5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49f5e0;
        }
    }
    ctx->pc = 0x49F610u;
label_49f610:
    // 0x49f610: 0x10000005  b           . + 4 + (0x5 << 2)
label_49f614:
    if (ctx->pc == 0x49F614u) {
        ctx->pc = 0x49F614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F610u;
        // 0x49f614: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F618u;
        goto label_49f618;
    }
    ctx->pc = 0x49F610u;
    {
        const bool branch_taken_0x49f610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F610u;
        // 0x49f614: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f610) {
            ctx->pc = 0x49F628u;
            goto label_49f628;
        }
    }
    ctx->pc = 0x49F618u;
label_49f618:
    // 0x49f618: 0x2e42000f  sltiu       $v0, $s2, 0xF
    ctx->pc = 0x49f618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_49f61c:
    // 0x49f61c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_49f620:
    if (ctx->pc == 0x49F620u) {
        ctx->pc = 0x49F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F61Cu;
        // 0x49f620: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F624u;
        goto label_49f624;
    }
    ctx->pc = 0x49F61Cu;
    {
        const bool branch_taken_0x49f61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F61Cu;
        // 0x49f620: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f61c) {
            ctx->pc = 0x49F5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49f5a0;
        }
    }
    ctx->pc = 0x49F624u;
label_49f624:
    // 0x49f624: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49f624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49f628:
    // 0x49f628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49f628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49f62c:
    // 0x49f62c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_49f630:
    if (ctx->pc == 0x49F630u) {
        ctx->pc = 0x49F630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F62Cu;
        // 0x49f630: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F634u;
        goto label_49f634;
    }
    ctx->pc = 0x49F62Cu;
    {
        const bool branch_taken_0x49f62c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x49F630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F62Cu;
        // 0x49f630: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f62c) {
            ctx->pc = 0x49F644u;
            goto label_49f644;
        }
    }
    ctx->pc = 0x49F634u;
label_49f634:
    // 0x49f634: 0xaf83b810  sw          $v1, -0x47F0($gp)
    ctx->pc = 0x49f634u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948880), GPR_U32(ctx, 3));
label_49f638:
    // 0x49f638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49f638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49f63c:
    // 0x49f63c: 0xaf80b824  sw          $zero, -0x47DC($gp)
    ctx->pc = 0x49f63cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948900), GPR_U32(ctx, 0));
label_49f640:
    // 0x49f640: 0xaf80b820  sw          $zero, -0x47E0($gp)
    ctx->pc = 0x49f640u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948896), GPR_U32(ctx, 0));
label_49f644:
    // 0x49f644: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x49f644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_49f648:
    // 0x49f648: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x49f648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49f64c:
    // 0x49f64c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x49f64cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49f650:
    // 0x49f650: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x49f650u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49f654:
    // 0x49f654: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x49f654u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49f658:
    // 0x49f658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49f658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49f65c:
    // 0x49f65c: 0x3e00008  jr          $ra
label_49f660:
    if (ctx->pc == 0x49F660u) {
        ctx->pc = 0x49F660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F65Cu;
        // 0x49f660: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F664u;
        goto label_49f664;
    }
    ctx->pc = 0x49F65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F65Cu;
        // 0x49f660: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F664u;
label_49f664:
    // 0x49f664: 0x0  nop
    ctx->pc = 0x49f664u;
    // NOP
label_49f668:
    // 0x49f668: 0x3e00008  jr          $ra
label_49f66c:
    if (ctx->pc == 0x49F66Cu) {
        ctx->pc = 0x49F66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F668u;
        // 0x49f66c: 0x8f82b810  lw          $v0, -0x47F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948880)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F670u;
        goto label_fallthrough_0x49f668;
    }
    ctx->pc = 0x49F668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F668u;
        // 0x49f66c: 0x8f82b810  lw          $v0, -0x47F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948880)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x49f668:
    ctx->pc = 0x49F670u;
}
