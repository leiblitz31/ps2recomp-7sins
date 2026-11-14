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

// Function: sub_00156CF0
// Address: 0x156cf0 - 0x156d40
void sub_00156CF0_0x156cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156CF0_0x156cf0");
#endif

    switch (ctx->pc) {
        case 0x156cf0u: goto label_156cf0;
        case 0x156cf4u: goto label_156cf4;
        case 0x156cf8u: goto label_156cf8;
        case 0x156cfcu: goto label_156cfc;
        case 0x156d00u: goto label_156d00;
        case 0x156d04u: goto label_156d04;
        case 0x156d08u: goto label_156d08;
        case 0x156d0cu: goto label_156d0c;
        case 0x156d10u: goto label_156d10;
        case 0x156d14u: goto label_156d14;
        case 0x156d18u: goto label_156d18;
        case 0x156d1cu: goto label_156d1c;
        case 0x156d20u: goto label_156d20;
        case 0x156d24u: goto label_156d24;
        case 0x156d28u: goto label_156d28;
        case 0x156d2cu: goto label_156d2c;
        case 0x156d30u: goto label_156d30;
        case 0x156d34u: goto label_156d34;
        case 0x156d38u: goto label_156d38;
        case 0x156d3cu: goto label_156d3c;
        default: break;
    }

    ctx->pc = 0x156cf0u;

label_156cf0:
    // 0x156cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x156cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_156cf4:
    // 0x156cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_156cf8:
    // 0x156cf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x156cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_156cfc:
    // 0x156cfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x156cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_156d00:
    // 0x156d00: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x156d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_156d04:
    // 0x156d04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x156d04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_156d08:
    // 0x156d08: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x156d08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_156d0c:
    // 0x156d0c: 0x320f809  jalr        $t9
label_156d10:
    if (ctx->pc == 0x156D10u) {
        ctx->pc = 0x156D14u;
        goto label_156d14;
    }
    ctx->pc = 0x156D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x156D14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156D0Cu, 0x156D14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156D14u;
label_156d14:
    // 0x156d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_156d18:
    // 0x156d18: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x156d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_156d1c:
    // 0x156d1c: 0x3e00008  jr          $ra
label_156d20:
    if (ctx->pc == 0x156D20u) {
        ctx->pc = 0x156D24u;
        goto label_156d24;
    }
    ctx->pc = 0x156D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156D24u;
label_156d24:
    // 0x156d24: 0x0  nop
    ctx->pc = 0x156d24u;
    // NOP
label_156d28:
    // 0x156d28: 0x0  nop
    ctx->pc = 0x156d28u;
    // NOP
label_156d2c:
    // 0x156d2c: 0x0  nop
    ctx->pc = 0x156d2cu;
    // NOP
label_156d30:
    // 0x156d30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x156d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_156d34:
    // 0x156d34: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x156d34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_156d38:
    // 0x156d38: 0x3e00008  jr          $ra
label_156d3c:
    if (ctx->pc == 0x156D3Cu) {
        ctx->pc = 0x156D40u;
        goto label_fallthrough_0x156d38;
    }
    ctx->pc = 0x156D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x156d38:
    ctx->pc = 0x156D40u;
}
