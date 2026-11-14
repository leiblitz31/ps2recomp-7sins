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

// Function: sub_003B1B10
// Address: 0x3b1b10 - 0x3b1b58
void sub_003B1B10_0x3b1b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1B10_0x3b1b10");
#endif

    switch (ctx->pc) {
        case 0x3b1b28u: goto label_3b1b28;
        case 0x3b1b34u: goto label_3b1b34;
        default: break;
    }

    ctx->pc = 0x3b1b10u;

    // 0x3b1b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b1b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b1b14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b1b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b1b18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b1b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b1b1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b1b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1b20: 0xc0ec620  jal         func_3B1880
    ctx->pc = 0x3B1B20u;
    SET_GPR_U32(ctx, 31, 0x3B1B28u);
    ctx->pc = 0x3B1B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1B20u;
    // 0x3b1b24: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3B1B20u, 0x3B1B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1B28u;
label_3b1b28:
    // 0x3b1b28: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b1b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b1b2c: 0xc1036d0  jal         func_40DB40
    ctx->pc = 0x3B1B2Cu;
    SET_GPR_U32(ctx, 31, 0x3B1B34u);
    ctx->pc = 0x3B1B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1B2Cu;
    // 0x3b1b30: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB40u, 0x3B1B2Cu, 0x3B1B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1B34u;
label_3b1b34:
    // 0x3b1b34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b1b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b1b38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b1b38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1b3c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x3b1b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x3b1b40: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3b1b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3b1b44: 0xae100018  sw          $s0, 0x18($s0)
    ctx->pc = 0x3b1b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 16));
    // 0x3b1b48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b1b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b1b4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b1b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b1b50: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1B50u;
        // 0x3b1b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1B58u;
}
