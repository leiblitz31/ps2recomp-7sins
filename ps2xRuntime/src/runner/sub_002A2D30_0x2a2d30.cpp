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

// Function: sub_002A2D30
// Address: 0x2a2d30 - 0x2a2da0
void sub_002A2D30_0x2a2d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2D30_0x2a2d30");
#endif

    switch (ctx->pc) {
        case 0x2a2d50u: goto label_2a2d50;
        case 0x2a2d70u: goto label_2a2d70;
        default: break;
    }

    ctx->pc = 0x2a2d30u;

    // 0x2a2d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a2d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a2d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a2d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a2d38: 0x8f82bc40  lw          $v0, -0x43C0($gp)
    ctx->pc = 0x2a2d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949952)));
    // 0x2a2d3c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A2D3Cu;
    {
        const bool branch_taken_0x2a2d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2d3c) {
            ctx->pc = 0x2A2D84u;
            goto label_2a2d84;
        }
    }
    ctx->pc = 0x2A2D44u;
    // 0x2a2d44: 0x8f84bc40  lw          $a0, -0x43C0($gp)
    ctx->pc = 0x2a2d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949952)));
    // 0x2a2d48: 0xc041968  jal         func_1065A0
    ctx->pc = 0x2A2D48u;
    SET_GPR_U32(ctx, 31, 0x2A2D50u);
    ctx->pc = 0x1065A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1065A0u, 0x2A2D48u, 0x2A2D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2D50u;
label_2a2d50:
    // 0x2a2d50: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A2D50u;
    {
        const bool branch_taken_0x2a2d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2d50) {
            ctx->pc = 0x2A2D84u;
            goto label_2a2d84;
        }
    }
    ctx->pc = 0x2A2D58u;
    // 0x2a2d58: 0x8f82bc44  lw          $v0, -0x43BC($gp)
    ctx->pc = 0x2a2d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949956)));
    // 0x2a2d5c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A2D5Cu;
    {
        const bool branch_taken_0x2a2d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2d5c) {
            ctx->pc = 0x2A2D84u;
            goto label_2a2d84;
        }
    }
    ctx->pc = 0x2A2D64u;
    // 0x2a2d64: 0x8f84bc44  lw          $a0, -0x43BC($gp)
    ctx->pc = 0x2a2d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949956)));
    // 0x2a2d68: 0xc041968  jal         func_1065A0
    ctx->pc = 0x2A2D68u;
    SET_GPR_U32(ctx, 31, 0x2A2D70u);
    ctx->pc = 0x1065A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1065A0u, 0x2A2D68u, 0x2A2D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2D70u;
label_2a2d70:
    // 0x2a2d70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2D70u;
    {
        const bool branch_taken_0x2a2d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2d70) {
            ctx->pc = 0x2A2D84u;
            goto label_2a2d84;
        }
    }
    ctx->pc = 0x2A2D78u;
    // 0x2a2d78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a2d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2d7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A2D7Cu;
    {
        const bool branch_taken_0x2a2d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2d7c) {
            ctx->pc = 0x2A2D88u;
            goto label_2a2d88;
        }
    }
    ctx->pc = 0x2A2D84u;
label_2a2d84:
    // 0x2a2d84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a2d84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2d88:
    // 0x2a2d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a2d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2d8c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a2d8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a2d90: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2D98u;
    // 0x2a2d98: 0x0  nop
    ctx->pc = 0x2a2d98u;
    // NOP
    // 0x2a2d9c: 0x0  nop
    ctx->pc = 0x2a2d9cu;
    // NOP
    ctx->pc = 0x2a2da0u;
}
