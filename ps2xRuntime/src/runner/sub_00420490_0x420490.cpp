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

// Function: sub_00420490
// Address: 0x420490 - 0x420570
void sub_00420490_0x420490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420490_0x420490");
#endif

    switch (ctx->pc) {
        case 0x420490u: goto label_420490;
        case 0x420494u: goto label_420494;
        case 0x420498u: goto label_420498;
        case 0x42049cu: goto label_42049c;
        case 0x4204a0u: goto label_4204a0;
        case 0x4204a4u: goto label_4204a4;
        case 0x4204a8u: goto label_4204a8;
        case 0x4204acu: goto label_4204ac;
        case 0x4204b0u: goto label_4204b0;
        case 0x4204b4u: goto label_4204b4;
        case 0x4204b8u: goto label_4204b8;
        case 0x4204bcu: goto label_4204bc;
        case 0x4204c0u: goto label_4204c0;
        case 0x4204c4u: goto label_4204c4;
        case 0x4204c8u: goto label_4204c8;
        case 0x4204ccu: goto label_4204cc;
        case 0x4204d0u: goto label_4204d0;
        case 0x4204d4u: goto label_4204d4;
        case 0x4204d8u: goto label_4204d8;
        case 0x4204dcu: goto label_4204dc;
        case 0x4204e0u: goto label_4204e0;
        case 0x4204e4u: goto label_4204e4;
        case 0x4204e8u: goto label_4204e8;
        case 0x4204ecu: goto label_4204ec;
        case 0x4204f0u: goto label_4204f0;
        case 0x4204f4u: goto label_4204f4;
        case 0x4204f8u: goto label_4204f8;
        case 0x4204fcu: goto label_4204fc;
        case 0x420500u: goto label_420500;
        case 0x420504u: goto label_420504;
        case 0x420508u: goto label_420508;
        case 0x42050cu: goto label_42050c;
        case 0x420510u: goto label_420510;
        case 0x420514u: goto label_420514;
        case 0x420518u: goto label_420518;
        case 0x42051cu: goto label_42051c;
        case 0x420520u: goto label_420520;
        case 0x420524u: goto label_420524;
        case 0x420528u: goto label_420528;
        case 0x42052cu: goto label_42052c;
        case 0x420530u: goto label_420530;
        case 0x420534u: goto label_420534;
        case 0x420538u: goto label_420538;
        case 0x42053cu: goto label_42053c;
        case 0x420540u: goto label_420540;
        case 0x420544u: goto label_420544;
        case 0x420548u: goto label_420548;
        case 0x42054cu: goto label_42054c;
        case 0x420550u: goto label_420550;
        case 0x420554u: goto label_420554;
        case 0x420558u: goto label_420558;
        case 0x42055cu: goto label_42055c;
        case 0x420560u: goto label_420560;
        case 0x420564u: goto label_420564;
        case 0x420568u: goto label_420568;
        case 0x42056cu: goto label_42056c;
        default: break;
    }

    ctx->pc = 0x420490u;

label_420490:
    // 0x420490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x420490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_420494:
    // 0x420494: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x420494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_420498:
    // 0x420498: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x420498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_42049c:
    // 0x42049c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42049cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4204a0:
    // 0x4204a0: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x4204a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_4204a4:
    // 0x4204a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4204a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4204a8:
    // 0x4204a8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x4204a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_4204ac:
    // 0x4204ac: 0x40f809  jalr        $v0
label_4204b0:
    if (ctx->pc == 0x4204B0u) {
        ctx->pc = 0x4204B4u;
        goto label_4204b4;
    }
    ctx->pc = 0x4204ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4204B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4204ACu, 0x4204B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4204B4u;
label_4204b4:
    // 0x4204b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4204b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4204b8:
    // 0x4204b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4204b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4204bc:
    // 0x4204bc: 0x3e00008  jr          $ra
label_4204c0:
    if (ctx->pc == 0x4204C0u) {
        ctx->pc = 0x4204C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4204BCu;
        // 0x4204c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4204C4u;
        goto label_4204c4;
    }
    ctx->pc = 0x4204BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4204C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4204BCu;
        // 0x4204c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4204BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4204C4u;
label_4204c4:
    // 0x4204c4: 0x0  nop
    ctx->pc = 0x4204c4u;
    // NOP
label_4204c8:
    // 0x4204c8: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x4204c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_4204cc:
    // 0x4204cc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4204ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4204d0:
    // 0x4204d0: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x4204d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_4204d4:
    // 0x4204d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4204d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4204d8:
    // 0x4204d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4204d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4204dc:
    // 0x4204dc: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x4204dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
label_4204e0:
    // 0x4204e0: 0x3e00008  jr          $ra
label_4204e4:
    if (ctx->pc == 0x4204E4u) {
        ctx->pc = 0x4204E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4204E0u;
        // 0x4204e4: 0xac64001c  sw          $a0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4204E8u;
        goto label_4204e8;
    }
    ctx->pc = 0x4204E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4204E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4204E0u;
        // 0x4204e4: 0xac64001c  sw          $a0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4204E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4204E8u;
label_4204e8:
    // 0x4204e8: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x4204e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_4204ec:
    // 0x4204ec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4204ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4204f0:
    // 0x4204f0: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x4204f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_4204f4:
    // 0x4204f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4204f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4204f8:
    // 0x4204f8: 0x3e00008  jr          $ra
label_4204fc:
    if (ctx->pc == 0x4204FCu) {
        ctx->pc = 0x4204FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4204F8u;
        // 0x4204fc: 0x8c620020  lw          $v0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420500u;
        goto label_420500;
    }
    ctx->pc = 0x4204F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4204FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4204F8u;
        // 0x4204fc: 0x8c620020  lw          $v0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4204F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420500u;
label_420500:
    // 0x420500: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x420500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_420504:
    // 0x420504: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x420504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_420508:
    // 0x420508: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x420508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_42050c:
    // 0x42050c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x42050cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_420510:
    // 0x420510: 0x3e00008  jr          $ra
label_420514:
    if (ctx->pc == 0x420514u) {
        ctx->pc = 0x420514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420510u;
        // 0x420514: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420518u;
        goto label_420518;
    }
    ctx->pc = 0x420510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420510u;
        // 0x420514: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420518u;
label_420518:
    // 0x420518: 0x8f85be18  lw          $a1, -0x41E8($gp)
    ctx->pc = 0x420518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_42051c:
    // 0x42051c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x42051cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_420520:
    // 0x420520: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x420520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_420524:
    // 0x420524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x420524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_420528:
    // 0x420528: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x420528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_42052c:
    // 0x42052c: 0x3e00008  jr          $ra
label_420530:
    if (ctx->pc == 0x420530u) {
        ctx->pc = 0x420530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42052Cu;
        // 0x420530: 0xaca40014  sw          $a0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420534u;
        goto label_420534;
    }
    ctx->pc = 0x42052Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42052Cu;
        // 0x420530: 0xaca40014  sw          $a0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42052Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420534u;
label_420534:
    // 0x420534: 0x0  nop
    ctx->pc = 0x420534u;
    // NOP
label_420538:
    // 0x420538: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x420538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_42053c:
    // 0x42053c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x42053cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_420540:
    // 0x420540: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x420540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_420544:
    // 0x420544: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x420544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_420548:
    // 0x420548: 0x3e00008  jr          $ra
label_42054c:
    if (ctx->pc == 0x42054Cu) {
        ctx->pc = 0x42054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420548u;
        // 0x42054c: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420550u;
        goto label_420550;
    }
    ctx->pc = 0x420548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420548u;
        // 0x42054c: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420550u;
label_420550:
    // 0x420550: 0x8f85be18  lw          $a1, -0x41E8($gp)
    ctx->pc = 0x420550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_420554:
    // 0x420554: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x420554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_420558:
    // 0x420558: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x420558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_42055c:
    // 0x42055c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42055cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_420560:
    // 0x420560: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x420560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_420564:
    // 0x420564: 0x3e00008  jr          $ra
label_420568:
    if (ctx->pc == 0x420568u) {
        ctx->pc = 0x420568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420564u;
        // 0x420568: 0xaca40018  sw          $a0, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42056Cu;
        goto label_42056c;
    }
    ctx->pc = 0x420564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420564u;
        // 0x420568: 0xaca40018  sw          $a0, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42056Cu;
label_42056c:
    // 0x42056c: 0x0  nop
    ctx->pc = 0x42056cu;
    // NOP
    ctx->pc = 0x420570u;
}
