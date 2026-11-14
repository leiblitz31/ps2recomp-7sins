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

// Function: sub_00296F10
// Address: 0x296f10 - 0x296f60
void sub_00296F10_0x296f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296F10_0x296f10");
#endif

    switch (ctx->pc) {
        case 0x296f40u: goto label_296f40;
        default: break;
    }

    ctx->pc = 0x296f10u;

    // 0x296f10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x296f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x296f14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296f18: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x296f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x296f1c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x296f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296f20: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x296F20u;
    {
        const bool branch_taken_0x296f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296f20) {
            ctx->pc = 0x296F44u;
            goto label_296f44;
        }
    }
    ctx->pc = 0x296F28u;
    // 0x296f28: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x296f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296f2c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x296F2Cu;
    {
        const bool branch_taken_0x296f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296f2c) {
            ctx->pc = 0x296F44u;
            goto label_296f44;
        }
    }
    ctx->pc = 0x296F34u;
    // 0x296f34: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x296f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296f38: 0xc119c5c  jal         func_467170
    ctx->pc = 0x296F38u;
    SET_GPR_U32(ctx, 31, 0x296F40u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x296F38u, 0x296F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296F40u;
label_296f40:
    // 0x296f40: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x296f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_296f44:
    // 0x296f44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296f48: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x296f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x296f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x296F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296F54u;
    // 0x296f54: 0x0  nop
    ctx->pc = 0x296f54u;
    // NOP
    // 0x296f58: 0x0  nop
    ctx->pc = 0x296f58u;
    // NOP
    // 0x296f5c: 0x0  nop
    ctx->pc = 0x296f5cu;
    // NOP
    ctx->pc = 0x296f60u;
}
