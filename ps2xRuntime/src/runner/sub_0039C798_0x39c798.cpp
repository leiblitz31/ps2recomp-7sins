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

// Function: sub_0039C798
// Address: 0x39c798 - 0x39c828
void sub_0039C798_0x39c798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C798_0x39c798");
#endif

    switch (ctx->pc) {
        case 0x39c7d0u: goto label_39c7d0;
        case 0x39c7f8u: goto label_39c7f8;
        default: break;
    }

    ctx->pc = 0x39c798u;

    // 0x39c798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39c798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39c79c: 0x8f83bd68  lw          $v1, -0x4298($gp)
    ctx->pc = 0x39c79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950248)));
    // 0x39c7a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x39c7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x39c7a4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x39c7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x39c7a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39c7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39c7ac: 0x2450e880  addiu       $s0, $v0, -0x1780
    ctx->pc = 0x39c7acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x39c7b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39c7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39c7b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39c7b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c7b8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x39c7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x39c7bc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x39c7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x39c7c0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39C7C0u;
    {
        const bool branch_taken_0x39c7c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C7C0u;
        // 0x39c7c4: 0x8f82bd68  lw          $v0, -0x4298($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c7c0) {
            ctx->pc = 0x39C7E0u;
            goto label_39c7e0;
        }
    }
    ctx->pc = 0x39C7C8u;
    // 0x39c7c8: 0xc104284  jal         func_410A10
    ctx->pc = 0x39C7C8u;
    SET_GPR_U32(ctx, 31, 0x39C7D0u);
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x39C7C8u, 0x39C7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C7D0u;
label_39c7d0:
    // 0x39c7d0: 0x8f83bd68  lw          $v1, -0x4298($gp)
    ctx->pc = 0x39c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950248)));
    // 0x39c7d4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x39c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x39c7d8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x39c7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x39c7dc: 0x8f82bd68  lw          $v0, -0x4298($gp)
    ctx->pc = 0x39c7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950248)));
label_39c7e0:
    // 0x39c7e0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x39c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x39c7e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x39c7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39c7e8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39C7E8u;
    {
        const bool branch_taken_0x39c7e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c7e8) {
            ctx->pc = 0x39C804u;
            goto label_39c804;
        }
    }
    ctx->pc = 0x39C7F0u;
    // 0x39c7f0: 0xc104284  jal         func_410A10
    ctx->pc = 0x39C7F0u;
    SET_GPR_U32(ctx, 31, 0x39C7F8u);
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x39C7F0u, 0x39C7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C7F8u;
label_39c7f8:
    // 0x39c7f8: 0x8f83bd68  lw          $v1, -0x4298($gp)
    ctx->pc = 0x39c7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950248)));
    // 0x39c7fc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x39c7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x39c800: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x39c800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_39c804:
    // 0x39c804: 0x8f83bd6c  lw          $v1, -0x4294($gp)
    ctx->pc = 0x39c804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950252)));
    // 0x39c808: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x39c808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c80c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x39c80cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39c810: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x39c810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x39c814: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39c814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39c818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39c818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c81c: 0xaf83bd6c  sw          $v1, -0x4294($gp)
    ctx->pc = 0x39c81cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950252), GPR_U32(ctx, 3));
    // 0x39c820: 0x3e00008  jr          $ra
    ctx->pc = 0x39C820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C820u;
        // 0x39c824: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C828u;
}
