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

// Function: sub_003B4BF8
// Address: 0x3b4bf8 - 0x3b4c28
void sub_003B4BF8_0x3b4bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4BF8_0x3b4bf8");
#endif

    switch (ctx->pc) {
        case 0x3b4bf8u: goto label_3b4bf8;
        case 0x3b4bfcu: goto label_3b4bfc;
        case 0x3b4c00u: goto label_3b4c00;
        case 0x3b4c04u: goto label_3b4c04;
        case 0x3b4c08u: goto label_3b4c08;
        case 0x3b4c0cu: goto label_3b4c0c;
        case 0x3b4c10u: goto label_3b4c10;
        case 0x3b4c14u: goto label_3b4c14;
        case 0x3b4c18u: goto label_3b4c18;
        case 0x3b4c1cu: goto label_3b4c1c;
        case 0x3b4c20u: goto label_3b4c20;
        case 0x3b4c24u: goto label_3b4c24;
        default: break;
    }

    ctx->pc = 0x3b4bf8u;

label_3b4bf8:
    // 0x3b4bf8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b4bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b4bfc:
    // 0x3b4bfc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b4bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3b4c00:
    // 0x3b4c00: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x3b4c00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_3b4c04:
    // 0x3b4c04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b4c04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3b4c08:
    // 0x3b4c08: 0x8c62e99c  lw          $v0, -0x1664($v1)
    ctx->pc = 0x3b4c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961564)));
label_3b4c0c:
    // 0x3b4c0c: 0x8cc4d3ac  lw          $a0, -0x2C54($a2)
    ctx->pc = 0x3b4c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294955948)));
label_3b4c10:
    // 0x3b4c10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b4c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b4c14:
    // 0x3b4c14: 0x40f809  jalr        $v0
label_3b4c18:
    if (ctx->pc == 0x3B4C18u) {
        ctx->pc = 0x3B4C1Cu;
        goto label_3b4c1c;
    }
    ctx->pc = 0x3B4C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B4C1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4C14u, 0x3B4C1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B4C1Cu;
label_3b4c1c:
    // 0x3b4c1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b4c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b4c20:
    // 0x3b4c20: 0x3e00008  jr          $ra
label_3b4c24:
    if (ctx->pc == 0x3B4C24u) {
        ctx->pc = 0x3B4C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4C20u;
        // 0x3b4c24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4C28u;
        goto label_fallthrough_0x3b4c20;
    }
    ctx->pc = 0x3B4C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4C20u;
        // 0x3b4c24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b4c20:
    ctx->pc = 0x3B4C28u;
}
