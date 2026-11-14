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

// Function: sub_00307C88
// Address: 0x307c88 - 0x307cf8
void sub_00307C88_0x307c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307C88_0x307c88");
#endif

    switch (ctx->pc) {
        case 0x307cc4u: goto label_307cc4;
        case 0x307cd4u: goto label_307cd4;
        default: break;
    }

    ctx->pc = 0x307c88u;

    // 0x307c88: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x307c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x307c8c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x307c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x307c90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x307c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x307c94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x307c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307c98: 0x2442ad90  addiu       $v0, $v0, -0x5270
    ctx->pc = 0x307c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946192));
    // 0x307c9c: 0x24a5ada0  addiu       $a1, $a1, -0x5260
    ctx->pc = 0x307c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946208));
    // 0x307ca0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x307ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x307ca4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x307ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307ca8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x307ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x307cac: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x307cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x307cb0: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x307cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x307cb4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x307cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x307cb8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x307cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x307cbc: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x307CBCu;
    SET_GPR_U32(ctx, 31, 0x307CC4u);
    ctx->pc = 0x307CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307CBCu;
    // 0x307cc0: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x307CBCu, 0x307CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307CC4u;
label_307cc4:
    // 0x307cc4: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x307cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x307cc8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x307cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x307ccc: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x307CCCu;
    SET_GPR_U32(ctx, 31, 0x307CD4u);
    ctx->pc = 0x307CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307CCCu;
    // 0x307cd0: 0xac6212b0  sw          $v0, 0x12B0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4784), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x307CCCu, 0x307CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307CD4u;
label_307cd4:
    // 0x307cd4: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x307cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x307cd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x307cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x307cdc: 0xac6212b4  sw          $v0, 0x12B4($v1)
    ctx->pc = 0x307cdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4F12B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4F12B4u, _value); } while (0);
    // 0x307ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x307CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307CE0u;
        // 0x307ce4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307CE8u;
    // 0x307ce8: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x307ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x307cec: 0x3e00008  jr          $ra
    ctx->pc = 0x307CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307CECu;
        // 0x307cf0: 0x8c6212b4  lw          $v0, 0x12B4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4788)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307CF4u;
    // 0x307cf4: 0x0  nop
    ctx->pc = 0x307cf4u;
    // NOP
    ctx->pc = 0x307cf8u;
}
