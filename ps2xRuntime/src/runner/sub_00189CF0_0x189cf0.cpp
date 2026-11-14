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

// Function: sub_00189CF0
// Address: 0x189cf0 - 0x189d40
void sub_00189CF0_0x189cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189CF0_0x189cf0");
#endif

    switch (ctx->pc) {
        case 0x189d08u: goto label_189d08;
        case 0x189d18u: goto label_189d18;
        case 0x189d28u: goto label_189d28;
        default: break;
    }

    ctx->pc = 0x189cf0u;

    // 0x189cf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x189cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x189cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189cf8: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x189cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x189cfc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x189cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x189d00: 0xc06287c  jal         func_18A1F0
    ctx->pc = 0x189D00u;
    SET_GPR_U32(ctx, 31, 0x189D08u);
    ctx->pc = 0x18A1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A1F0u, 0x189D00u, 0x189D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D08u;
label_189d08:
    // 0x189d08: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x189d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189d0c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x189d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x189d10: 0xc062750  jal         func_189D40
    ctx->pc = 0x189D10u;
    SET_GPR_U32(ctx, 31, 0x189D18u);
    ctx->pc = 0x189D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189D40u, 0x189D10u, 0x189D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D18u;
label_189d18:
    // 0x189d18: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x189d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x189d1c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x189d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x189d20: 0xc0624bc  jal         func_1892F0
    ctx->pc = 0x189D20u;
    SET_GPR_U32(ctx, 31, 0x189D28u);
    ctx->pc = 0x1892F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892F0u, 0x189D20u, 0x189D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D28u;
label_189d28:
    // 0x189d28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189d2c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x189d2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x189d30: 0x3e00008  jr          $ra
    ctx->pc = 0x189D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189D38u;
    // 0x189d38: 0x0  nop
    ctx->pc = 0x189d38u;
    // NOP
    // 0x189d3c: 0x0  nop
    ctx->pc = 0x189d3cu;
    // NOP
    ctx->pc = 0x189d40u;
}
