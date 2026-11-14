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

// Function: sub_003C3F78
// Address: 0x3c3f78 - 0x3c3fa0
void sub_003C3F78_0x3c3f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3F78_0x3c3f78");
#endif

    switch (ctx->pc) {
        case 0x3c3f78u: goto label_3c3f78;
        case 0x3c3f7cu: goto label_3c3f7c;
        case 0x3c3f80u: goto label_3c3f80;
        case 0x3c3f84u: goto label_3c3f84;
        case 0x3c3f88u: goto label_3c3f88;
        case 0x3c3f8cu: goto label_3c3f8c;
        case 0x3c3f90u: goto label_3c3f90;
        case 0x3c3f94u: goto label_3c3f94;
        case 0x3c3f98u: goto label_3c3f98;
        case 0x3c3f9cu: goto label_3c3f9c;
        default: break;
    }

    ctx->pc = 0x3c3f78u;

label_3c3f78:
    // 0x3c3f78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c3f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3c3f7c:
    // 0x3c3f7c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3c3f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3c3f80:
    // 0x3c3f80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c3f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c3f84:
    // 0x3c3f84: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x3c3f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_3c3f88:
    // 0x3c3f88: 0x40f809  jalr        $v0
label_3c3f8c:
    if (ctx->pc == 0x3C3F8Cu) {
        ctx->pc = 0x3C3F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3F88u;
        // 0x3c3f8c: 0x8c840058  lw          $a0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3F90u;
        goto label_3c3f90;
    }
    ctx->pc = 0x3C3F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C3F90u);
        ctx->pc = 0x3C3F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3F88u;
        // 0x3c3f8c: 0x8c840058  lw          $a0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3F88u, 0x3C3F90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C3F90u;
label_3c3f90:
    // 0x3c3f90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c3f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c3f94:
    // 0x3c3f94: 0x3e00008  jr          $ra
label_3c3f98:
    if (ctx->pc == 0x3C3F98u) {
        ctx->pc = 0x3C3F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3F94u;
        // 0x3c3f98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3F9Cu;
        goto label_3c3f9c;
    }
    ctx->pc = 0x3C3F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3F94u;
        // 0x3c3f98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C3F9Cu;
label_3c3f9c:
    // 0x3c3f9c: 0x0  nop
    ctx->pc = 0x3c3f9cu;
    // NOP
    ctx->pc = 0x3c3fa0u;
}
