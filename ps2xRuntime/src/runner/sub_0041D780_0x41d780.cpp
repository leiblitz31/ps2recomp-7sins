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

// Function: sub_0041D780
// Address: 0x41d780 - 0x41d7b8
void sub_0041D780_0x41d780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D780_0x41d780");
#endif

    switch (ctx->pc) {
        case 0x41d780u: goto label_41d780;
        case 0x41d784u: goto label_41d784;
        case 0x41d788u: goto label_41d788;
        case 0x41d78cu: goto label_41d78c;
        case 0x41d790u: goto label_41d790;
        case 0x41d794u: goto label_41d794;
        case 0x41d798u: goto label_41d798;
        case 0x41d79cu: goto label_41d79c;
        case 0x41d7a0u: goto label_41d7a0;
        case 0x41d7a4u: goto label_41d7a4;
        case 0x41d7a8u: goto label_41d7a8;
        case 0x41d7acu: goto label_41d7ac;
        case 0x41d7b0u: goto label_41d7b0;
        case 0x41d7b4u: goto label_41d7b4;
        default: break;
    }

    ctx->pc = 0x41d780u;

label_41d780:
    // 0x41d780: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41d780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41d784:
    // 0x41d784: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x41d784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41d788:
    // 0x41d788: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41d788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41d78c:
    // 0x41d78c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x41d78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41d790:
    // 0x41d790: 0x8c62e924  lw          $v0, -0x16DC($v1)
    ctx->pc = 0x41d790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961444)));
label_41d794:
    // 0x41d794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41d794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41d798:
    // 0x41d798: 0x40f809  jalr        $v0
label_41d79c:
    if (ctx->pc == 0x41D79Cu) {
        ctx->pc = 0x41D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D798u;
        // 0x41d79c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D7A0u;
        goto label_41d7a0;
    }
    ctx->pc = 0x41D798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41D7A0u);
        ctx->pc = 0x41D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D798u;
        // 0x41d79c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D798u, 0x41D7A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41D7A0u;
label_41d7a0:
    // 0x41d7a0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_41d7a4:
    if (ctx->pc == 0x41D7A4u) {
        ctx->pc = 0x41D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D7A0u;
        // 0x41d7a4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D7A8u;
        goto label_41d7a8;
    }
    ctx->pc = 0x41D7A0u;
    {
        const bool branch_taken_0x41d7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D7A0u;
        // 0x41d7a4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d7a0) {
            ctx->pc = 0x41D7ACu;
            goto label_41d7ac;
        }
    }
    ctx->pc = 0x41D7A8u;
label_41d7a8:
    // 0x41d7a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x41d7a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41d7ac:
    // 0x41d7ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41d7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41d7b0:
    // 0x41d7b0: 0x3e00008  jr          $ra
label_41d7b4:
    if (ctx->pc == 0x41D7B4u) {
        ctx->pc = 0x41D7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D7B0u;
        // 0x41d7b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D7B8u;
        goto label_fallthrough_0x41d7b0;
    }
    ctx->pc = 0x41D7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D7B0u;
        // 0x41d7b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41d7b0:
    ctx->pc = 0x41D7B8u;
}
