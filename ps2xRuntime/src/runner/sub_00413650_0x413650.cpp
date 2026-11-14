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

// Function: sub_00413650
// Address: 0x413650 - 0x413690
void sub_00413650_0x413650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413650_0x413650");
#endif

    switch (ctx->pc) {
        case 0x413650u: goto label_413650;
        case 0x413654u: goto label_413654;
        case 0x413658u: goto label_413658;
        case 0x41365cu: goto label_41365c;
        case 0x413660u: goto label_413660;
        case 0x413664u: goto label_413664;
        case 0x413668u: goto label_413668;
        case 0x41366cu: goto label_41366c;
        case 0x413670u: goto label_413670;
        case 0x413674u: goto label_413674;
        case 0x413678u: goto label_413678;
        case 0x41367cu: goto label_41367c;
        case 0x413680u: goto label_413680;
        case 0x413684u: goto label_413684;
        case 0x413688u: goto label_413688;
        case 0x41368cu: goto label_41368c;
        default: break;
    }

    ctx->pc = 0x413650u;

label_413650:
    // 0x413650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x413650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_413654:
    // 0x413654: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x413654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_413658:
    // 0x413658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x413658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41365c:
    // 0x41365c: 0x8f83bde8  lw          $v1, -0x4218($gp)
    ctx->pc = 0x41365cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950376)));
label_413660:
    // 0x413660: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x413660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_413664:
    // 0x413664: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x413664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_413668:
    // 0x413668: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x413668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_41366c:
    // 0x41366c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x41366cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_413670:
    // 0x413670: 0x40f809  jalr        $v0
label_413674:
    if (ctx->pc == 0x413674u) {
        ctx->pc = 0x413674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413670u;
        // 0x413674: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413678u;
        goto label_413678;
    }
    ctx->pc = 0x413670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x413678u);
        ctx->pc = 0x413674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413670u;
        // 0x413674: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413670u, 0x413678u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x413678u;
label_413678:
    // 0x413678: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x413678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41367c:
    // 0x41367c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41367cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_413680:
    // 0x413680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x413680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_413684:
    // 0x413684: 0x3e00008  jr          $ra
label_413688:
    if (ctx->pc == 0x413688u) {
        ctx->pc = 0x413688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413684u;
        // 0x413688: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41368Cu;
        goto label_41368c;
    }
    ctx->pc = 0x413684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413684u;
        // 0x413688: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41368Cu;
label_41368c:
    // 0x41368c: 0x0  nop
    ctx->pc = 0x41368cu;
    // NOP
    ctx->pc = 0x413690u;
}
