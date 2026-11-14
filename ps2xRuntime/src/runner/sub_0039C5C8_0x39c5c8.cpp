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

// Function: sub_0039C5C8
// Address: 0x39c5c8 - 0x39c648
void sub_0039C5C8_0x39c5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C5C8_0x39c5c8");
#endif

    switch (ctx->pc) {
        case 0x39c5c8u: goto label_39c5c8;
        case 0x39c5ccu: goto label_39c5cc;
        case 0x39c5d0u: goto label_39c5d0;
        case 0x39c5d4u: goto label_39c5d4;
        case 0x39c5d8u: goto label_39c5d8;
        case 0x39c5dcu: goto label_39c5dc;
        case 0x39c5e0u: goto label_39c5e0;
        case 0x39c5e4u: goto label_39c5e4;
        case 0x39c5e8u: goto label_39c5e8;
        case 0x39c5ecu: goto label_39c5ec;
        case 0x39c5f0u: goto label_39c5f0;
        case 0x39c5f4u: goto label_39c5f4;
        case 0x39c5f8u: goto label_39c5f8;
        case 0x39c5fcu: goto label_39c5fc;
        case 0x39c600u: goto label_39c600;
        case 0x39c604u: goto label_39c604;
        case 0x39c608u: goto label_39c608;
        case 0x39c60cu: goto label_39c60c;
        case 0x39c610u: goto label_39c610;
        case 0x39c614u: goto label_39c614;
        case 0x39c618u: goto label_39c618;
        case 0x39c61cu: goto label_39c61c;
        case 0x39c620u: goto label_39c620;
        case 0x39c624u: goto label_39c624;
        case 0x39c628u: goto label_39c628;
        case 0x39c62cu: goto label_39c62c;
        case 0x39c630u: goto label_39c630;
        case 0x39c634u: goto label_39c634;
        case 0x39c638u: goto label_39c638;
        case 0x39c63cu: goto label_39c63c;
        case 0x39c640u: goto label_39c640;
        case 0x39c644u: goto label_39c644;
        default: break;
    }

    ctx->pc = 0x39c5c8u;

label_39c5c8:
    // 0x39c5c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39c5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_39c5cc:
    // 0x39c5cc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x39c5ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39c5d0:
    // 0x39c5d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39c5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39c5d4:
    // 0x39c5d4: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x39c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_39c5d8:
    // 0x39c5d8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_39c5dc:
    if (ctx->pc == 0x39C5DCu) {
        ctx->pc = 0x39C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C5D8u;
        // 0x39c5dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C5E0u;
        goto label_39c5e0;
    }
    ctx->pc = 0x39C5D8u;
    {
        const bool branch_taken_0x39c5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C5D8u;
        // 0x39c5dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c5d8) {
            ctx->pc = 0x39C63Cu;
            goto label_39c63c;
        }
    }
    ctx->pc = 0x39C5E0u;
label_39c5e0:
    // 0x39c5e0: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x39c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_39c5e4:
    // 0x39c5e4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_39c5e8:
    if (ctx->pc == 0x39C5E8u) {
        ctx->pc = 0x39C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C5E4u;
        // 0x39c5e8: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C5ECu;
        goto label_39c5ec;
    }
    ctx->pc = 0x39C5E4u;
    {
        const bool branch_taken_0x39c5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C5E4u;
        // 0x39c5e8: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c5e4) {
            ctx->pc = 0x39C63Cu;
            goto label_39c63c;
        }
    }
    ctx->pc = 0x39C5ECu;
label_39c5ec:
    // 0x39c5ec: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x39c5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_39c5f0:
    // 0x39c5f0: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x39c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_39c5f4:
    // 0x39c5f4: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x39c5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_39c5f8:
    // 0x39c5f8: 0x8f86bd68  lw          $a2, -0x4298($gp)
    ctx->pc = 0x39c5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950248)));
label_39c5fc:
    // 0x39c5fc: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x39c5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_39c600:
    // 0x39c600: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x39c600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_39c604:
    // 0x39c604: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x39c604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_39c608:
    // 0x39c608: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x39c608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_39c60c:
    // 0x39c60c: 0x8d07000c  lw          $a3, 0xC($t0)
    ctx->pc = 0x39c60cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_39c610:
    // 0x39c610: 0x8d030010  lw          $v1, 0x10($t0)
    ctx->pc = 0x39c610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_39c614:
    // 0x39c614: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x39c614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39c618:
    // 0x39c618: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x39c618u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
label_39c61c:
    // 0x39c61c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x39c61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_39c620:
    // 0x39c620: 0x8d060004  lw          $a2, 0x4($t0)
    ctx->pc = 0x39c620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_39c624:
    // 0x39c624: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x39c624u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_39c628:
    // 0x39c628: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x39c628u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_39c62c:
    // 0x39c62c: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x39c62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_39c630:
    // 0x39c630: 0x40f809  jalr        $v0
label_39c634:
    if (ctx->pc == 0x39C634u) {
        ctx->pc = 0x39C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C630u;
        // 0x39c634: 0xace30004  sw          $v1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C638u;
        goto label_39c638;
    }
    ctx->pc = 0x39C630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39C638u);
        ctx->pc = 0x39C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C630u;
        // 0x39c634: 0xace30004  sw          $v1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C630u, 0x39C638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C638u;
label_39c638:
    // 0x39c638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39c638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39c63c:
    // 0x39c63c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39c640:
    // 0x39c640: 0x3e00008  jr          $ra
label_39c644:
    if (ctx->pc == 0x39C644u) {
        ctx->pc = 0x39C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C640u;
        // 0x39c644: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C648u;
        goto label_fallthrough_0x39c640;
    }
    ctx->pc = 0x39C640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C640u;
        // 0x39c644: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39c640:
    ctx->pc = 0x39C648u;
}
