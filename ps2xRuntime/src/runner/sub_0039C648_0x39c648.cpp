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

// Function: sub_0039C648
// Address: 0x39c648 - 0x39c6b8
void sub_0039C648_0x39c648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C648_0x39c648");
#endif

    switch (ctx->pc) {
        case 0x39c648u: goto label_39c648;
        case 0x39c64cu: goto label_39c64c;
        case 0x39c650u: goto label_39c650;
        case 0x39c654u: goto label_39c654;
        case 0x39c658u: goto label_39c658;
        case 0x39c65cu: goto label_39c65c;
        case 0x39c660u: goto label_39c660;
        case 0x39c664u: goto label_39c664;
        case 0x39c668u: goto label_39c668;
        case 0x39c66cu: goto label_39c66c;
        case 0x39c670u: goto label_39c670;
        case 0x39c674u: goto label_39c674;
        case 0x39c678u: goto label_39c678;
        case 0x39c67cu: goto label_39c67c;
        case 0x39c680u: goto label_39c680;
        case 0x39c684u: goto label_39c684;
        case 0x39c688u: goto label_39c688;
        case 0x39c68cu: goto label_39c68c;
        case 0x39c690u: goto label_39c690;
        case 0x39c694u: goto label_39c694;
        case 0x39c698u: goto label_39c698;
        case 0x39c69cu: goto label_39c69c;
        case 0x39c6a0u: goto label_39c6a0;
        case 0x39c6a4u: goto label_39c6a4;
        case 0x39c6a8u: goto label_39c6a8;
        case 0x39c6acu: goto label_39c6ac;
        case 0x39c6b0u: goto label_39c6b0;
        case 0x39c6b4u: goto label_39c6b4;
        default: break;
    }

    ctx->pc = 0x39c648u;

label_39c648:
    // 0x39c648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39c648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_39c64c:
    // 0x39c64c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x39c64cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39c650:
    // 0x39c650: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39c650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39c654:
    // 0x39c654: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x39c654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_39c658:
    // 0x39c658: 0x8f88bd68  lw          $t0, -0x4298($gp)
    ctx->pc = 0x39c658u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950248)));
label_39c65c:
    // 0x39c65c: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x39c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_39c660:
    // 0x39c660: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x39c660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_39c664:
    // 0x39c664: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x39c664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_39c668:
    // 0x39c668: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x39c668u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_39c66c:
    // 0x39c66c: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x39c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_39c670:
    // 0x39c670: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x39c670u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_39c674:
    // 0x39c674: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x39c674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_39c678:
    // 0x39c678: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x39c678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39c67c:
    // 0x39c67c: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x39c67cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_39c680:
    // 0x39c680: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x39c680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_39c684:
    // 0x39c684: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x39c684u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
label_39c688:
    // 0x39c688: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x39c688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39c68c:
    // 0x39c68c: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x39c68cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_39c690:
    // 0x39c690: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x39c690u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_39c694:
    // 0x39c694: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x39c694u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39c698:
    // 0x39c698: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x39c698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_39c69c:
    // 0x39c69c: 0x40f809  jalr        $v0
label_39c6a0:
    if (ctx->pc == 0x39C6A0u) {
        ctx->pc = 0x39C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C69Cu;
        // 0x39c6a0: 0xace30004  sw          $v1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C6A4u;
        goto label_39c6a4;
    }
    ctx->pc = 0x39C69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39C6A4u);
        ctx->pc = 0x39C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C69Cu;
        // 0x39c6a0: 0xace30004  sw          $v1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C69Cu, 0x39C6A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C6A4u;
label_39c6a4:
    // 0x39c6a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39c6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39c6a8:
    // 0x39c6a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39c6ac:
    // 0x39c6ac: 0x3e00008  jr          $ra
label_39c6b0:
    if (ctx->pc == 0x39C6B0u) {
        ctx->pc = 0x39C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C6ACu;
        // 0x39c6b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C6B4u;
        goto label_39c6b4;
    }
    ctx->pc = 0x39C6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C6ACu;
        // 0x39c6b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C6B4u;
label_39c6b4:
    // 0x39c6b4: 0x0  nop
    ctx->pc = 0x39c6b4u;
    // NOP
    ctx->pc = 0x39c6b8u;
}
