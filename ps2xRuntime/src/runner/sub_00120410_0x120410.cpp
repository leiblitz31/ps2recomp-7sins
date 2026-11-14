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

// Function: sub_00120410
// Address: 0x120410 - 0x120460
void sub_00120410_0x120410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120410_0x120410");
#endif

    switch (ctx->pc) {
        case 0x120440u: goto label_120440;
        default: break;
    }

    ctx->pc = 0x120410u;

    // 0x120410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x120410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x120414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x120414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x120418: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x120418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x12041c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x12041cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120420: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x120420u;
    {
        const bool branch_taken_0x120420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x120420) {
            ctx->pc = 0x120444u;
            goto label_120444;
        }
    }
    ctx->pc = 0x120428u;
    // 0x120428: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x120428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12042c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12042Cu;
    {
        const bool branch_taken_0x12042c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12042c) {
            ctx->pc = 0x120444u;
            goto label_120444;
        }
    }
    ctx->pc = 0x120434u;
    // 0x120434: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x120434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120438: 0xc119c5c  jal         func_467170
    ctx->pc = 0x120438u;
    SET_GPR_U32(ctx, 31, 0x120440u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x120438u, 0x120440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120440u;
label_120440:
    // 0x120440: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x120440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_120444:
    // 0x120444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x120444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120448: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x120448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12044c: 0x3e00008  jr          $ra
    ctx->pc = 0x12044Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12044Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120454u;
    // 0x120454: 0x0  nop
    ctx->pc = 0x120454u;
    // NOP
    // 0x120458: 0x0  nop
    ctx->pc = 0x120458u;
    // NOP
    // 0x12045c: 0x0  nop
    ctx->pc = 0x12045cu;
    // NOP
    ctx->pc = 0x120460u;
}
