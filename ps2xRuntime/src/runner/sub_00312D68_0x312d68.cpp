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

// Function: sub_00312D68
// Address: 0x312d68 - 0x312d90
void sub_00312D68_0x312d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312D68_0x312d68");
#endif

    switch (ctx->pc) {
        case 0x312d68u: goto label_312d68;
        case 0x312d6cu: goto label_312d6c;
        case 0x312d70u: goto label_312d70;
        case 0x312d74u: goto label_312d74;
        case 0x312d78u: goto label_312d78;
        case 0x312d7cu: goto label_312d7c;
        case 0x312d80u: goto label_312d80;
        case 0x312d84u: goto label_312d84;
        case 0x312d88u: goto label_312d88;
        case 0x312d8cu: goto label_312d8c;
        default: break;
    }

    ctx->pc = 0x312d68u;

label_312d68:
    // 0x312d68: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x312d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_312d6c:
    // 0x312d6c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x312d6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_312d70:
    // 0x312d70: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x312d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_312d74:
    // 0x312d74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x312d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_312d78:
    // 0x312d78: 0x40f809  jalr        $v0
label_312d7c:
    if (ctx->pc == 0x312D7Cu) {
        ctx->pc = 0x312D80u;
        goto label_312d80;
    }
    ctx->pc = 0x312D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x312D80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312D78u, 0x312D80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x312D80u;
label_312d80:
    // 0x312d80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_312d84:
    // 0x312d84: 0x3e00008  jr          $ra
label_312d88:
    if (ctx->pc == 0x312D88u) {
        ctx->pc = 0x312D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312D84u;
        // 0x312d88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312D8Cu;
        goto label_312d8c;
    }
    ctx->pc = 0x312D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312D84u;
        // 0x312d88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312D8Cu;
label_312d8c:
    // 0x312d8c: 0x0  nop
    ctx->pc = 0x312d8cu;
    // NOP
    ctx->pc = 0x312d90u;
}
