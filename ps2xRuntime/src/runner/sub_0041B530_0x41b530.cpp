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

// Function: sub_0041B530
// Address: 0x41b530 - 0x41b6c0
void sub_0041B530_0x41b530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041B530_0x41b530");
#endif

    switch (ctx->pc) {
        case 0x41b530u: goto label_41b530;
        case 0x41b534u: goto label_41b534;
        case 0x41b538u: goto label_41b538;
        case 0x41b53cu: goto label_41b53c;
        case 0x41b540u: goto label_41b540;
        case 0x41b544u: goto label_41b544;
        case 0x41b548u: goto label_41b548;
        case 0x41b54cu: goto label_41b54c;
        case 0x41b550u: goto label_41b550;
        case 0x41b554u: goto label_41b554;
        case 0x41b558u: goto label_41b558;
        case 0x41b55cu: goto label_41b55c;
        case 0x41b560u: goto label_41b560;
        case 0x41b564u: goto label_41b564;
        case 0x41b568u: goto label_41b568;
        case 0x41b56cu: goto label_41b56c;
        case 0x41b570u: goto label_41b570;
        case 0x41b574u: goto label_41b574;
        case 0x41b578u: goto label_41b578;
        case 0x41b57cu: goto label_41b57c;
        case 0x41b580u: goto label_41b580;
        case 0x41b584u: goto label_41b584;
        case 0x41b588u: goto label_41b588;
        case 0x41b58cu: goto label_41b58c;
        case 0x41b590u: goto label_41b590;
        case 0x41b594u: goto label_41b594;
        case 0x41b598u: goto label_41b598;
        case 0x41b59cu: goto label_41b59c;
        case 0x41b5a0u: goto label_41b5a0;
        case 0x41b5a4u: goto label_41b5a4;
        case 0x41b5a8u: goto label_41b5a8;
        case 0x41b5acu: goto label_41b5ac;
        case 0x41b5b0u: goto label_41b5b0;
        case 0x41b5b4u: goto label_41b5b4;
        case 0x41b5b8u: goto label_41b5b8;
        case 0x41b5bcu: goto label_41b5bc;
        case 0x41b5c0u: goto label_41b5c0;
        case 0x41b5c4u: goto label_41b5c4;
        case 0x41b5c8u: goto label_41b5c8;
        case 0x41b5ccu: goto label_41b5cc;
        case 0x41b5d0u: goto label_41b5d0;
        case 0x41b5d4u: goto label_41b5d4;
        case 0x41b5d8u: goto label_41b5d8;
        case 0x41b5dcu: goto label_41b5dc;
        case 0x41b5e0u: goto label_41b5e0;
        case 0x41b5e4u: goto label_41b5e4;
        case 0x41b5e8u: goto label_41b5e8;
        case 0x41b5ecu: goto label_41b5ec;
        case 0x41b5f0u: goto label_41b5f0;
        case 0x41b5f4u: goto label_41b5f4;
        case 0x41b5f8u: goto label_41b5f8;
        case 0x41b5fcu: goto label_41b5fc;
        case 0x41b600u: goto label_41b600;
        case 0x41b604u: goto label_41b604;
        case 0x41b608u: goto label_41b608;
        case 0x41b60cu: goto label_41b60c;
        case 0x41b610u: goto label_41b610;
        case 0x41b614u: goto label_41b614;
        case 0x41b618u: goto label_41b618;
        case 0x41b61cu: goto label_41b61c;
        case 0x41b620u: goto label_41b620;
        case 0x41b624u: goto label_41b624;
        case 0x41b628u: goto label_41b628;
        case 0x41b62cu: goto label_41b62c;
        case 0x41b630u: goto label_41b630;
        case 0x41b634u: goto label_41b634;
        case 0x41b638u: goto label_41b638;
        case 0x41b63cu: goto label_41b63c;
        case 0x41b640u: goto label_41b640;
        case 0x41b644u: goto label_41b644;
        case 0x41b648u: goto label_41b648;
        case 0x41b64cu: goto label_41b64c;
        case 0x41b650u: goto label_41b650;
        case 0x41b654u: goto label_41b654;
        case 0x41b658u: goto label_41b658;
        case 0x41b65cu: goto label_41b65c;
        case 0x41b660u: goto label_41b660;
        case 0x41b664u: goto label_41b664;
        case 0x41b668u: goto label_41b668;
        case 0x41b66cu: goto label_41b66c;
        case 0x41b670u: goto label_41b670;
        case 0x41b674u: goto label_41b674;
        case 0x41b678u: goto label_41b678;
        case 0x41b67cu: goto label_41b67c;
        case 0x41b680u: goto label_41b680;
        case 0x41b684u: goto label_41b684;
        case 0x41b688u: goto label_41b688;
        case 0x41b68cu: goto label_41b68c;
        case 0x41b690u: goto label_41b690;
        case 0x41b694u: goto label_41b694;
        case 0x41b698u: goto label_41b698;
        case 0x41b69cu: goto label_41b69c;
        case 0x41b6a0u: goto label_41b6a0;
        case 0x41b6a4u: goto label_41b6a4;
        case 0x41b6a8u: goto label_41b6a8;
        case 0x41b6acu: goto label_41b6ac;
        case 0x41b6b0u: goto label_41b6b0;
        case 0x41b6b4u: goto label_41b6b4;
        case 0x41b6b8u: goto label_41b6b8;
        case 0x41b6bcu: goto label_41b6bc;
        default: break;
    }

    ctx->pc = 0x41b530u;

label_41b530:
    // 0x41b530: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x41b530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_41b534:
    // 0x41b534: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41b534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_41b538:
    // 0x41b538: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x41b538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_41b53c:
    // 0x41b53c: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x41b53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_41b540:
    // 0x41b540: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x41b540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_41b544:
    // 0x41b544: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x41b544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_41b548:
    // 0x41b548: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x41b548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41b54c:
    // 0x41b54c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x41b54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_41b550:
    // 0x41b550: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x41b550u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_41b554:
    // 0x41b554: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x41b554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_41b558:
    // 0x41b558: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x41b558u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41b55c:
    // 0x41b55c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x41b55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_41b560:
    // 0x41b560: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x41b560u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41b564:
    // 0x41b564: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x41b564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_41b568:
    // 0x41b568: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x41b568u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_41b56c:
    // 0x41b56c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41b56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_41b570:
    // 0x41b570: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x41b570u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41b574:
    // 0x41b574: 0x37a40001  ori         $a0, $sp, 0x1
    ctx->pc = 0x41b574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)1);
label_41b578:
    // 0x41b578: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x41b578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41b57c:
    // 0x41b57c: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x41b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_41b580:
    // 0x41b580: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x41b580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_41b584:
    // 0x41b584: 0x40f809  jalr        $v0
label_41b588:
    if (ctx->pc == 0x41B588u) {
        ctx->pc = 0x41B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B584u;
        // 0x41b588: 0xa3a30000  sb          $v1, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B58Cu;
        goto label_41b58c;
    }
    ctx->pc = 0x41B584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B58Cu);
        ctx->pc = 0x41B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B584u;
        // 0x41b588: 0xa3a30000  sb          $v1, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B584u, 0x41B58Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B58Cu;
label_41b58c:
    // 0x41b58c: 0x8e4200fc  lw          $v0, 0xFC($s2)
    ctx->pc = 0x41b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 252)));
label_41b590:
    // 0x41b590: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41b590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41b594:
    // 0x41b594: 0x40f809  jalr        $v0
label_41b598:
    if (ctx->pc == 0x41B598u) {
        ctx->pc = 0x41B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B594u;
        // 0x41b598: 0xa3a00013  sb          $zero, 0x13($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B59Cu;
        goto label_41b59c;
    }
    ctx->pc = 0x41B594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B59Cu);
        ctx->pc = 0x41B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B594u;
        // 0x41b598: 0xa3a00013  sb          $zero, 0x13($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B594u, 0x41B59Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B59Cu;
label_41b59c:
    // 0x41b59c: 0x8f83be08  lw          $v1, -0x41F8($gp)
    ctx->pc = 0x41b59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41b5a0:
    // 0x41b5a0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x41b5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_41b5a4:
    // 0x41b5a4: 0x8c70021c  lw          $s0, 0x21C($v1)
    ctx->pc = 0x41b5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_41b5a8:
    // 0x41b5a8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_41b5ac:
    if (ctx->pc == 0x41B5ACu) {
        ctx->pc = 0x41B5B0u;
        goto label_41b5b0;
    }
    ctx->pc = 0x41B5A8u;
    {
        const bool branch_taken_0x41b5a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b5a8) {
            ctx->pc = 0x41B5E0u;
            goto label_41b5e0;
        }
    }
    ctx->pc = 0x41B5B0u;
label_41b5b0:
    // 0x41b5b0: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x41b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_41b5b4:
    // 0x41b5b4: 0x0  nop
    ctx->pc = 0x41b5b4u;
    // NOP
label_41b5b8:
    // 0x41b5b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41b5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41b5bc:
    // 0x41b5bc: 0x40f809  jalr        $v0
label_41b5c0:
    if (ctx->pc == 0x41B5C0u) {
        ctx->pc = 0x41B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B5BCu;
        // 0x41b5c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B5C4u;
        goto label_41b5c4;
    }
    ctx->pc = 0x41B5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B5C4u);
        ctx->pc = 0x41B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B5BCu;
        // 0x41b5c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B5BCu, 0x41B5C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B5C4u;
label_41b5c4:
    // 0x41b5c4: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
label_41b5c8:
    if (ctx->pc == 0x41B5C8u) {
        ctx->pc = 0x41B5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B5C4u;
        // 0x41b5c8: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B5CCu;
        goto label_41b5cc;
    }
    ctx->pc = 0x41B5C4u;
    {
        const bool branch_taken_0x41b5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41b5c4) {
            ctx->pc = 0x41B5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41B5C4u;
            // 0x41b5c8: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41B5D0u;
            goto label_41b5d0;
        }
    }
    ctx->pc = 0x41B5CCu;
label_41b5cc:
    // 0x41b5cc: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x41b5ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41b5d0:
    // 0x41b5d0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_41b5d4:
    if (ctx->pc == 0x41B5D4u) {
        ctx->pc = 0x41B5D8u;
        goto label_41b5d8;
    }
    ctx->pc = 0x41B5D0u;
    {
        const bool branch_taken_0x41b5d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b5d0) {
            ctx->pc = 0x41B5E0u;
            goto label_41b5e0;
        }
    }
    ctx->pc = 0x41B5D8u;
label_41b5d8:
    // 0x41b5d8: 0x5220fff7  beql        $s1, $zero, . + 4 + (-0x9 << 2)
label_41b5dc:
    if (ctx->pc == 0x41B5DCu) {
        ctx->pc = 0x41B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B5D8u;
        // 0x41b5dc: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B5E0u;
        goto label_41b5e0;
    }
    ctx->pc = 0x41B5D8u;
    {
        const bool branch_taken_0x41b5d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b5d8) {
            ctx->pc = 0x41B5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41B5D8u;
            // 0x41b5dc: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41B5B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41b5b8;
        }
    }
    ctx->pc = 0x41B5E0u;
label_41b5e0:
    // 0x41b5e0: 0x16200028  bnez        $s1, . + 4 + (0x28 << 2)
label_41b5e4:
    if (ctx->pc == 0x41B5E4u) {
        ctx->pc = 0x41B5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B5E0u;
        // 0x41b5e4: 0x8f83be08  lw          $v1, -0x41F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B5E8u;
        goto label_41b5e8;
    }
    ctx->pc = 0x41B5E0u;
    {
        const bool branch_taken_0x41b5e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x41B5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B5E0u;
        // 0x41b5e4: 0x8f83be08  lw          $v1, -0x41F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b5e0) {
            ctx->pc = 0x41B684u;
            goto label_41b684;
        }
    }
    ctx->pc = 0x41B5E8u;
label_41b5e8:
    // 0x41b5e8: 0x26d0e880  addiu       $s0, $s6, -0x1780
    ctx->pc = 0x41b5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
label_41b5ec:
    // 0x41b5ec: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x41b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_41b5f0:
    // 0x41b5f0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x41b5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_41b5f4:
    // 0x41b5f4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x41b5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_41b5f8:
    // 0x41b5f8: 0x34a50406  ori         $a1, $a1, 0x406
    ctx->pc = 0x41b5f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1030);
label_41b5fc:
    // 0x41b5fc: 0x40f809  jalr        $v0
label_41b600:
    if (ctx->pc == 0x41B600u) {
        ctx->pc = 0x41B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B5FCu;
        // 0x41b600: 0x8c640218  lw          $a0, 0x218($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B604u;
        goto label_41b604;
    }
    ctx->pc = 0x41B5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B604u);
        ctx->pc = 0x41B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B5FCu;
        // 0x41b600: 0x8c640218  lw          $a0, 0x218($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B5FCu, 0x41B604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B604u;
label_41b604:
    // 0x41b604: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x41b604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41b608:
    // 0x41b608: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_41b60c:
    if (ctx->pc == 0x41B60Cu) {
        ctx->pc = 0x41B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B608u;
        // 0x41b60c: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B610u;
        goto label_41b610;
    }
    ctx->pc = 0x41B608u;
    {
        const bool branch_taken_0x41b608 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x41B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B608u;
        // 0x41b60c: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b608) {
            ctx->pc = 0x41B618u;
            goto label_41b618;
        }
    }
    ctx->pc = 0x41B610u;
label_41b610:
    // 0x41b610: 0x10000021  b           . + 4 + (0x21 << 2)
label_41b614:
    if (ctx->pc == 0x41B614u) {
        ctx->pc = 0x41B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B610u;
        // 0x41b614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B618u;
        goto label_41b618;
    }
    ctx->pc = 0x41B610u;
    {
        const bool branch_taken_0x41b610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B610u;
        // 0x41b614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b610) {
            ctx->pc = 0x41B698u;
            goto label_41b698;
        }
    }
    ctx->pc = 0x41B618u;
label_41b618:
    // 0x41b618: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x41b618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_41b61c:
    // 0x41b61c: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x41b61cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_41b620:
    // 0x41b620: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x41b620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_41b624:
    // 0x41b624: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x41b624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_41b628:
    // 0x41b628: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x41b628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_41b62c:
    // 0x41b62c: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x41b62cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_41b630:
    // 0x41b630: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x41b630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_41b634:
    // 0x41b634: 0xb224000f  sdl         $a0, 0xF($s1)
    ctx->pc = 0x41b634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_41b638:
    // 0x41b638: 0xb6240008  sdr         $a0, 0x8($s1)
    ctx->pc = 0x41b638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_41b63c:
    // 0x41b63c: 0xae250010  sw          $a1, 0x10($s1)
    ctx->pc = 0x41b63cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
label_41b640:
    // 0x41b640: 0xa2220014  sb          $v0, 0x14($s1)
    ctx->pc = 0x41b640u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 2));
label_41b644:
    // 0x41b644: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x41b644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41b648:
    // 0x41b648: 0x26240015  addiu       $a0, $s1, 0x15
    ctx->pc = 0x41b648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 21));
label_41b64c:
    // 0x41b64c: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x41b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_41b650:
    // 0x41b650: 0x40f809  jalr        $v0
label_41b654:
    if (ctx->pc == 0x41B654u) {
        ctx->pc = 0x41B654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B650u;
        // 0x41b654: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B658u;
        goto label_41b658;
    }
    ctx->pc = 0x41B650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B658u);
        ctx->pc = 0x41B654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B650u;
        // 0x41b654: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B650u, 0x41B658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B658u;
label_41b658:
    // 0x41b658: 0xa2200027  sb          $zero, 0x27($s1)
    ctx->pc = 0x41b658u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 39), (uint8_t)GPR_U32(ctx, 0));
label_41b65c:
    // 0x41b65c: 0x8e0200f8  lw          $v0, 0xF8($s0)
    ctx->pc = 0x41b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_41b660:
    // 0x41b660: 0x40f809  jalr        $v0
label_41b664:
    if (ctx->pc == 0x41B664u) {
        ctx->pc = 0x41B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B660u;
        // 0x41b664: 0x26240014  addiu       $a0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B668u;
        goto label_41b668;
    }
    ctx->pc = 0x41B660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B668u);
        ctx->pc = 0x41B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B660u;
        // 0x41b664: 0x26240014  addiu       $a0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B660u, 0x41B668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B668u;
label_41b668:
    // 0x41b668: 0x8f83be08  lw          $v1, -0x41F8($gp)
    ctx->pc = 0x41b668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41b66c:
    // 0x41b66c: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x41b66cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_41b670:
    // 0x41b670: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x41b670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_41b674:
    // 0x41b674: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x41b674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_41b678:
    // 0x41b678: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x41b678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_41b67c:
    // 0x41b67c: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x41b67cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_41b680:
    // 0x41b680: 0xac71021c  sw          $s1, 0x21C($v1)
    ctx->pc = 0x41b680u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 17));
label_41b684:
    // 0x41b684: 0x56800001  bnel        $s4, $zero, . + 4 + (0x1 << 2)
label_41b688:
    if (ctx->pc == 0x41B688u) {
        ctx->pc = 0x41B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B684u;
        // 0x41b688: 0xae340028  sw          $s4, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B68Cu;
        goto label_41b68c;
    }
    ctx->pc = 0x41B684u;
    {
        const bool branch_taken_0x41b684 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x41b684) {
            ctx->pc = 0x41B688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41B684u;
            // 0x41b688: 0xae340028  sw          $s4, 0x28($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41B68Cu;
            goto label_41b68c;
        }
    }
    ctx->pc = 0x41B68Cu;
label_41b68c:
    // 0x41b68c: 0x56a00001  bnel        $s5, $zero, . + 4 + (0x1 << 2)
label_41b690:
    if (ctx->pc == 0x41B690u) {
        ctx->pc = 0x41B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B68Cu;
        // 0x41b690: 0xae35002c  sw          $s5, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B694u;
        goto label_41b694;
    }
    ctx->pc = 0x41B68Cu;
    {
        const bool branch_taken_0x41b68c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x41b68c) {
            ctx->pc = 0x41B690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41B68Cu;
            // 0x41b690: 0xae35002c  sw          $s5, 0x2C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41B694u;
            goto label_41b694;
        }
    }
    ctx->pc = 0x41B694u;
label_41b694:
    // 0x41b694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41b694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41b698:
    // 0x41b698: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x41b698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_41b69c:
    // 0x41b69c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x41b69cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_41b6a0:
    // 0x41b6a0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x41b6a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41b6a4:
    // 0x41b6a4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x41b6a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_41b6a8:
    // 0x41b6a8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x41b6a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41b6ac:
    // 0x41b6ac: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x41b6acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41b6b0:
    // 0x41b6b0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x41b6b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41b6b4:
    // 0x41b6b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41b6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_41b6b8:
    // 0x41b6b8: 0x3e00008  jr          $ra
label_41b6bc:
    if (ctx->pc == 0x41B6BCu) {
        ctx->pc = 0x41B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B6B8u;
        // 0x41b6bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B6C0u;
        goto label_fallthrough_0x41b6b8;
    }
    ctx->pc = 0x41B6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B6B8u;
        // 0x41b6bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41b6b8:
    ctx->pc = 0x41B6C0u;
}
