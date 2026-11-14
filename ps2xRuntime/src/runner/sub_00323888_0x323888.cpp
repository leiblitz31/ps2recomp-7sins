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

// Function: sub_00323888
// Address: 0x323888 - 0x3238c0
void sub_00323888_0x323888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323888_0x323888");
#endif

    switch (ctx->pc) {
        case 0x323888u: goto label_323888;
        case 0x32388cu: goto label_32388c;
        case 0x323890u: goto label_323890;
        case 0x323894u: goto label_323894;
        case 0x323898u: goto label_323898;
        case 0x32389cu: goto label_32389c;
        case 0x3238a0u: goto label_3238a0;
        case 0x3238a4u: goto label_3238a4;
        case 0x3238a8u: goto label_3238a8;
        case 0x3238acu: goto label_3238ac;
        case 0x3238b0u: goto label_3238b0;
        case 0x3238b4u: goto label_3238b4;
        case 0x3238b8u: goto label_3238b8;
        case 0x3238bcu: goto label_3238bc;
        default: break;
    }

    ctx->pc = 0x323888u;

label_323888:
    // 0x323888: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x323888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32388c:
    // 0x32388c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32388cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_323890:
    // 0x323890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_323894:
    // 0x323894: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x323894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_323898:
    // 0x323898: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_32389c:
    if (ctx->pc == 0x32389Cu) {
        ctx->pc = 0x32389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323898u;
        // 0x32389c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3238A0u;
        goto label_3238a0;
    }
    ctx->pc = 0x323898u;
    {
        const bool branch_taken_0x323898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323898u;
        // 0x32389c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323898) {
            ctx->pc = 0x3238B0u;
            goto label_3238b0;
        }
    }
    ctx->pc = 0x3238A0u;
label_3238a0:
    // 0x3238a0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3238a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3238a4:
    // 0x3238a4: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x3238a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_3238a8:
    // 0x3238a8: 0x40f809  jalr        $v0
label_3238ac:
    if (ctx->pc == 0x3238ACu) {
        ctx->pc = 0x3238B0u;
        goto label_3238b0;
    }
    ctx->pc = 0x3238A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3238B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3238A8u, 0x3238B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3238B0u;
label_3238b0:
    // 0x3238b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3238b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3238b4:
    // 0x3238b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3238b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3238b8:
    // 0x3238b8: 0x3e00008  jr          $ra
label_3238bc:
    if (ctx->pc == 0x3238BCu) {
        ctx->pc = 0x3238BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3238B8u;
        // 0x3238bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3238C0u;
        goto label_fallthrough_0x3238b8;
    }
    ctx->pc = 0x3238B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3238BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3238B8u;
        // 0x3238bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3238B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3238b8:
    ctx->pc = 0x3238C0u;
}
