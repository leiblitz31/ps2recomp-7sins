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

// Function: sub_0041C460
// Address: 0x41c460 - 0x41c540
void sub_0041C460_0x41c460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041C460_0x41c460");
#endif

    switch (ctx->pc) {
        case 0x41c460u: goto label_41c460;
        case 0x41c464u: goto label_41c464;
        case 0x41c468u: goto label_41c468;
        case 0x41c46cu: goto label_41c46c;
        case 0x41c470u: goto label_41c470;
        case 0x41c474u: goto label_41c474;
        case 0x41c478u: goto label_41c478;
        case 0x41c47cu: goto label_41c47c;
        case 0x41c480u: goto label_41c480;
        case 0x41c484u: goto label_41c484;
        case 0x41c488u: goto label_41c488;
        case 0x41c48cu: goto label_41c48c;
        case 0x41c490u: goto label_41c490;
        case 0x41c494u: goto label_41c494;
        case 0x41c498u: goto label_41c498;
        case 0x41c49cu: goto label_41c49c;
        case 0x41c4a0u: goto label_41c4a0;
        case 0x41c4a4u: goto label_41c4a4;
        case 0x41c4a8u: goto label_41c4a8;
        case 0x41c4acu: goto label_41c4ac;
        case 0x41c4b0u: goto label_41c4b0;
        case 0x41c4b4u: goto label_41c4b4;
        case 0x41c4b8u: goto label_41c4b8;
        case 0x41c4bcu: goto label_41c4bc;
        case 0x41c4c0u: goto label_41c4c0;
        case 0x41c4c4u: goto label_41c4c4;
        case 0x41c4c8u: goto label_41c4c8;
        case 0x41c4ccu: goto label_41c4cc;
        case 0x41c4d0u: goto label_41c4d0;
        case 0x41c4d4u: goto label_41c4d4;
        case 0x41c4d8u: goto label_41c4d8;
        case 0x41c4dcu: goto label_41c4dc;
        case 0x41c4e0u: goto label_41c4e0;
        case 0x41c4e4u: goto label_41c4e4;
        case 0x41c4e8u: goto label_41c4e8;
        case 0x41c4ecu: goto label_41c4ec;
        case 0x41c4f0u: goto label_41c4f0;
        case 0x41c4f4u: goto label_41c4f4;
        case 0x41c4f8u: goto label_41c4f8;
        case 0x41c4fcu: goto label_41c4fc;
        case 0x41c500u: goto label_41c500;
        case 0x41c504u: goto label_41c504;
        case 0x41c508u: goto label_41c508;
        case 0x41c50cu: goto label_41c50c;
        case 0x41c510u: goto label_41c510;
        case 0x41c514u: goto label_41c514;
        case 0x41c518u: goto label_41c518;
        case 0x41c51cu: goto label_41c51c;
        case 0x41c520u: goto label_41c520;
        case 0x41c524u: goto label_41c524;
        case 0x41c528u: goto label_41c528;
        case 0x41c52cu: goto label_41c52c;
        case 0x41c530u: goto label_41c530;
        case 0x41c534u: goto label_41c534;
        case 0x41c538u: goto label_41c538;
        case 0x41c53cu: goto label_41c53c;
        default: break;
    }

    ctx->pc = 0x41c460u;

label_41c460:
    // 0x41c460: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x41c460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_41c464:
    // 0x41c464: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41c464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_41c468:
    // 0x41c468: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x41c468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_41c46c:
    // 0x41c46c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x41c46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_41c470:
    // 0x41c470: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x41c470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_41c474:
    // 0x41c474: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x41c474u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_41c478:
    // 0x41c478: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x41c478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_41c47c:
    // 0x41c47c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x41c47cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41c480:
    // 0x41c480: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x41c480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_41c484:
    // 0x41c484: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x41c484u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41c488:
    // 0x41c488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41c488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41c48c:
    // 0x41c48c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x41c48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41c490:
    // 0x41c490: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x41c490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_41c494:
    // 0x41c494: 0x40f809  jalr        $v0
label_41c498:
    if (ctx->pc == 0x41C498u) {
        ctx->pc = 0x41C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C494u;
        // 0x41c498: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C49Cu;
        goto label_41c49c;
    }
    ctx->pc = 0x41C494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41C49Cu);
        ctx->pc = 0x41C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C494u;
        // 0x41c498: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C494u, 0x41C49Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41C49Cu;
label_41c49c:
    // 0x41c49c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x41c49cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41c4a0:
    // 0x41c4a0: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_41c4a4:
    if (ctx->pc == 0x41C4A4u) {
        ctx->pc = 0x41C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C4A0u;
        // 0x41c4a4: 0x8f82be08  lw          $v0, -0x41F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C4A8u;
        goto label_41c4a8;
    }
    ctx->pc = 0x41C4A0u;
    {
        const bool branch_taken_0x41c4a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C4A0u;
        // 0x41c4a4: 0x8f82be08  lw          $v0, -0x41F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c4a0) {
            ctx->pc = 0x41C518u;
            goto label_41c518;
        }
    }
    ctx->pc = 0x41C4A8u;
label_41c4a8:
    // 0x41c4a8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x41c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_41c4ac:
    // 0x41c4ac: 0x8c50021c  lw          $s0, 0x21C($v0)
    ctx->pc = 0x41c4acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
label_41c4b0:
    // 0x41c4b0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_41c4b4:
    if (ctx->pc == 0x41C4B4u) {
        ctx->pc = 0x41C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C4B0u;
        // 0x41c4b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C4B8u;
        goto label_41c4b8;
    }
    ctx->pc = 0x41C4B0u;
    {
        const bool branch_taken_0x41c4b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C4B0u;
        // 0x41c4b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c4b0) {
            ctx->pc = 0x41C51Cu;
            goto label_41c51c;
        }
    }
    ctx->pc = 0x41C4B8u;
label_41c4b8:
    // 0x41c4b8: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x41c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_41c4bc:
    // 0x41c4bc: 0x0  nop
    ctx->pc = 0x41c4bcu;
    // NOP
label_41c4c0:
    // 0x41c4c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41c4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41c4c4:
    // 0x41c4c4: 0x40f809  jalr        $v0
label_41c4c8:
    if (ctx->pc == 0x41C4C8u) {
        ctx->pc = 0x41C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C4C4u;
        // 0x41c4c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C4CCu;
        goto label_41c4cc;
    }
    ctx->pc = 0x41C4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41C4CCu);
        ctx->pc = 0x41C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C4C4u;
        // 0x41c4c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C4C4u, 0x41C4CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41C4CCu;
label_41c4cc:
    // 0x41c4cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_41c4d0:
    if (ctx->pc == 0x41C4D0u) {
        ctx->pc = 0x41C4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C4CCu;
        // 0x41c4d0: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C4D4u;
        goto label_41c4d4;
    }
    ctx->pc = 0x41C4CCu;
    {
        const bool branch_taken_0x41c4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C4CCu;
        // 0x41c4d0: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c4cc) {
            ctx->pc = 0x41C4E8u;
            goto label_41c4e8;
        }
    }
    ctx->pc = 0x41C4D4u;
label_41c4d4:
    // 0x41c4d4: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x41c4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_41c4d8:
    // 0x41c4d8: 0x40f809  jalr        $v0
label_41c4dc:
    if (ctx->pc == 0x41C4DCu) {
        ctx->pc = 0x41C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C4D8u;
        // 0x41c4dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C4E0u;
        goto label_41c4e0;
    }
    ctx->pc = 0x41C4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41C4E0u);
        ctx->pc = 0x41C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C4D8u;
        // 0x41c4dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C4D8u, 0x41C4E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41C4E0u;
label_41c4e0:
    // 0x41c4e0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_41c4e4:
    if (ctx->pc == 0x41C4E4u) {
        ctx->pc = 0x41C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C4E0u;
        // 0x41c4e4: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C4E8u;
        goto label_41c4e8;
    }
    ctx->pc = 0x41C4E0u;
    {
        const bool branch_taken_0x41c4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41c4e0) {
            ctx->pc = 0x41C4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41C4E0u;
            // 0x41c4e4: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41C4F8u;
            goto label_41c4f8;
        }
    }
    ctx->pc = 0x41C4E8u;
label_41c4e8:
    // 0x41c4e8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x41c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_41c4ec:
    // 0x41c4ec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_41c4f0:
    if (ctx->pc == 0x41C4F0u) {
        ctx->pc = 0x41C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C4ECu;
        // 0x41c4f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C4F4u;
        goto label_41c4f4;
    }
    ctx->pc = 0x41C4ECu;
    {
        const bool branch_taken_0x41c4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C4ECu;
        // 0x41c4f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c4ec) {
            ctx->pc = 0x41C508u;
            goto label_41c508;
        }
    }
    ctx->pc = 0x41C4F4u;
label_41c4f4:
    // 0x41c4f4: 0x8e100030  lw          $s0, 0x30($s0)
    ctx->pc = 0x41c4f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_41c4f8:
    // 0x41c4f8: 0x5600fff1  bnel        $s0, $zero, . + 4 + (-0xF << 2)
label_41c4fc:
    if (ctx->pc == 0x41C4FCu) {
        ctx->pc = 0x41C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C4F8u;
        // 0x41c4fc: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C500u;
        goto label_41c500;
    }
    ctx->pc = 0x41C4F8u;
    {
        const bool branch_taken_0x41c4f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x41c4f8) {
            ctx->pc = 0x41C4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41C4F8u;
            // 0x41c4fc: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41C4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41c4c0;
        }
    }
    ctx->pc = 0x41C500u;
label_41c500:
    // 0x41c500: 0x10000006  b           . + 4 + (0x6 << 2)
label_41c504:
    if (ctx->pc == 0x41C504u) {
        ctx->pc = 0x41C504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C500u;
        // 0x41c504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C508u;
        goto label_41c508;
    }
    ctx->pc = 0x41C500u;
    {
        const bool branch_taken_0x41c500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C500u;
        // 0x41c504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c500) {
            ctx->pc = 0x41C51Cu;
            goto label_41c51c;
        }
    }
    ctx->pc = 0x41C508u;
label_41c508:
    // 0x41c508: 0x40f809  jalr        $v0
label_41c50c:
    if (ctx->pc == 0x41C50Cu) {
        ctx->pc = 0x41C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C508u;
        // 0x41c50c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C510u;
        goto label_41c510;
    }
    ctx->pc = 0x41C508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41C510u);
        ctx->pc = 0x41C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C508u;
        // 0x41c50c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C508u, 0x41C510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41C510u;
label_41c510:
    // 0x41c510: 0x10000003  b           . + 4 + (0x3 << 2)
label_41c514:
    if (ctx->pc == 0x41C514u) {
        ctx->pc = 0x41C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C510u;
        // 0x41c514: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C518u;
        goto label_41c518;
    }
    ctx->pc = 0x41C510u;
    {
        const bool branch_taken_0x41c510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C510u;
        // 0x41c514: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c510) {
            ctx->pc = 0x41C520u;
            goto label_41c520;
        }
    }
    ctx->pc = 0x41C518u;
label_41c518:
    // 0x41c518: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x41c518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41c51c:
    // 0x41c51c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x41c51cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41c520:
    // 0x41c520: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x41c520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41c524:
    // 0x41c524: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x41c524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41c528:
    // 0x41c528: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x41c528u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41c52c:
    // 0x41c52c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x41c52cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41c530:
    // 0x41c530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41c530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41c534:
    // 0x41c534: 0x3e00008  jr          $ra
label_41c538:
    if (ctx->pc == 0x41C538u) {
        ctx->pc = 0x41C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C534u;
        // 0x41c538: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C53Cu;
        goto label_41c53c;
    }
    ctx->pc = 0x41C534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C534u;
        // 0x41c538: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41C53Cu;
label_41c53c:
    // 0x41c53c: 0x0  nop
    ctx->pc = 0x41c53cu;
    // NOP
    ctx->pc = 0x41c540u;
}
