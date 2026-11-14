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

// Function: sub_0026EAF0
// Address: 0x26eaf0 - 0x26eb40
void sub_0026EAF0_0x26eaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026EAF0_0x26eaf0");
#endif

    ctx->pc = 0x26eaf0u;

    // 0x26eaf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26eaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26eaf4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26eaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26eaf8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26eafc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26eafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26eb00: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26EB00u;
    {
        const bool branch_taken_0x26eb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eb00) {
            ctx->pc = 0x26EB24u;
            goto label_26eb24;
        }
    }
    ctx->pc = 0x26EB08u;
    // 0x26eb08: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26eb0c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x26eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26eb10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26EB10u;
    {
        const bool branch_taken_0x26eb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eb10) {
            ctx->pc = 0x26EB24u;
            goto label_26eb24;
        }
    }
    ctx->pc = 0x26EB18u;
    // 0x26eb18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26eb1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26EB1Cu;
    {
        const bool branch_taken_0x26eb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eb1c) {
            ctx->pc = 0x26EB28u;
            goto label_26eb28;
        }
    }
    ctx->pc = 0x26EB24u;
label_26eb24:
    // 0x26eb24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26eb24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26eb28:
    // 0x26eb28: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26eb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26eb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x26EB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EB34u;
    // 0x26eb34: 0x0  nop
    ctx->pc = 0x26eb34u;
    // NOP
    // 0x26eb38: 0x0  nop
    ctx->pc = 0x26eb38u;
    // NOP
    // 0x26eb3c: 0x0  nop
    ctx->pc = 0x26eb3cu;
    // NOP
    ctx->pc = 0x26eb40u;
}
