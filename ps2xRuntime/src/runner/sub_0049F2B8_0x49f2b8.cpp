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

// Function: sub_0049F2B8
// Address: 0x49f2b8 - 0x49f308
void sub_0049F2B8_0x49f2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F2B8_0x49f2b8");
#endif

    switch (ctx->pc) {
        case 0x49f2b8u: goto label_49f2b8;
        case 0x49f2bcu: goto label_49f2bc;
        case 0x49f2c0u: goto label_49f2c0;
        case 0x49f2c4u: goto label_49f2c4;
        case 0x49f2c8u: goto label_49f2c8;
        case 0x49f2ccu: goto label_49f2cc;
        case 0x49f2d0u: goto label_49f2d0;
        case 0x49f2d4u: goto label_49f2d4;
        case 0x49f2d8u: goto label_49f2d8;
        case 0x49f2dcu: goto label_49f2dc;
        case 0x49f2e0u: goto label_49f2e0;
        case 0x49f2e4u: goto label_49f2e4;
        case 0x49f2e8u: goto label_49f2e8;
        case 0x49f2ecu: goto label_49f2ec;
        case 0x49f2f0u: goto label_49f2f0;
        case 0x49f2f4u: goto label_49f2f4;
        case 0x49f2f8u: goto label_49f2f8;
        case 0x49f2fcu: goto label_49f2fc;
        case 0x49f300u: goto label_49f300;
        case 0x49f304u: goto label_49f304;
        default: break;
    }

    ctx->pc = 0x49f2b8u;

label_49f2b8:
    // 0x49f2b8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x49f2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_49f2bc:
    // 0x49f2bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49f2bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_49f2c0:
    // 0x49f2c0: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x49f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_49f2c4:
    // 0x49f2c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49f2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49f2c8:
    // 0x49f2c8: 0x40f809  jalr        $v0
label_49f2cc:
    if (ctx->pc == 0x49F2CCu) {
        ctx->pc = 0x49F2D0u;
        goto label_49f2d0;
    }
    ctx->pc = 0x49F2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49F2D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F2C8u, 0x49F2D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49F2D0u;
label_49f2d0:
    // 0x49f2d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49f2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49f2d4:
    // 0x49f2d4: 0x3e00008  jr          $ra
label_49f2d8:
    if (ctx->pc == 0x49F2D8u) {
        ctx->pc = 0x49F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F2D4u;
        // 0x49f2d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F2DCu;
        goto label_49f2dc;
    }
    ctx->pc = 0x49F2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F2D4u;
        // 0x49f2d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F2DCu;
label_49f2dc:
    // 0x49f2dc: 0x0  nop
    ctx->pc = 0x49f2dcu;
    // NOP
label_49f2e0:
    // 0x49f2e0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x49f2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_49f2e4:
    // 0x49f2e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49f2e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_49f2e8:
    // 0x49f2e8: 0x8c62e990  lw          $v0, -0x1670($v1)
    ctx->pc = 0x49f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961552)));
label_49f2ec:
    // 0x49f2ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49f2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49f2f0:
    // 0x49f2f0: 0x40f809  jalr        $v0
label_49f2f4:
    if (ctx->pc == 0x49F2F4u) {
        ctx->pc = 0x49F2F8u;
        goto label_49f2f8;
    }
    ctx->pc = 0x49F2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49F2F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F2F0u, 0x49F2F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49F2F8u;
label_49f2f8:
    // 0x49f2f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49f2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49f2fc:
    // 0x49f2fc: 0x3e00008  jr          $ra
label_49f300:
    if (ctx->pc == 0x49F300u) {
        ctx->pc = 0x49F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F2FCu;
        // 0x49f300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F304u;
        goto label_49f304;
    }
    ctx->pc = 0x49F2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F2FCu;
        // 0x49f300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F304u;
label_49f304:
    // 0x49f304: 0x0  nop
    ctx->pc = 0x49f304u;
    // NOP
    ctx->pc = 0x49f308u;
}
