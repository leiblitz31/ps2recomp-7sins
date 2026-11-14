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

// Function: sub_0032AA00
// Address: 0x32aa00 - 0x32aa48
void sub_0032AA00_0x32aa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032AA00_0x32aa00");
#endif

    switch (ctx->pc) {
        case 0x32aa30u: goto label_32aa30;
        default: break;
    }

    ctx->pc = 0x32aa00u;

    // 0x32aa00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32aa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32aa04: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x32aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x32aa08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32aa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32aa0c: 0x24632368  addiu       $v1, $v1, 0x2368
    ctx->pc = 0x32aa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9064));
    // 0x32aa10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32aa10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32aa14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32aa14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32aa18: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x32aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F2370u));
    // 0x32aa1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32aa20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32AA20u;
    {
        const bool branch_taken_0x32aa20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32aa20) {
            ctx->pc = 0x32AA30u;
            goto label_32aa30;
        }
    }
    ctx->pc = 0x32AA28u;
    // 0x32aa28: 0xc0caba8  jal         func_32AEA0
    ctx->pc = 0x32AA28u;
    SET_GPR_U32(ctx, 31, 0x32AA30u);
    ctx->pc = 0x32AA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AA28u;
    // 0x32aa2c: 0x2464000c  addiu       $a0, $v1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AEA0u, 0x32AA28u, 0x32AA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AA30u;
label_32aa30:
    // 0x32aa30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32aa30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32aa34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32aa34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32aa38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32aa38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32aa3c: 0x3e00008  jr          $ra
    ctx->pc = 0x32AA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA3Cu;
        // 0x32aa40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AA44u;
    // 0x32aa44: 0x0  nop
    ctx->pc = 0x32aa44u;
    // NOP
    ctx->pc = 0x32aa48u;
}
