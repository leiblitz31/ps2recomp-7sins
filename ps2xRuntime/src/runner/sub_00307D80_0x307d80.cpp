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

// Function: sub_00307D80
// Address: 0x307d80 - 0x307dc8
void sub_00307D80_0x307d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307D80_0x307d80");
#endif

    switch (ctx->pc) {
        case 0x307d88u: goto label_307d88;
        case 0x307d90u: goto label_307d90;
        case 0x307db4u: goto label_307db4;
        default: break;
    }

    ctx->pc = 0x307d80u;

    // 0x307d80: 0x24030083  addiu       $v1, $zero, 0x83
    ctx->pc = 0x307d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x307d84: 0xc  syscall     0
    ctx->pc = 0x307d84u;
    ctx->pc = 0x307D88u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_307d88:
    // 0x307d88: 0x3e00008  jr          $ra
    ctx->pc = 0x307D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307D90u;
label_307d90:
    // 0x307d90: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x307d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x307d94: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x307d94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x307d98: 0x8c451298  lw          $a1, 0x1298($v0)
    ctx->pc = 0x307d98u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4F1298u));
    // 0x307d9c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x307d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x307da0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x307da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x307da4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x307da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307da8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x307da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x307dac: 0xc0c1f3e  jal         func_307CF8
    ctx->pc = 0x307DACu;
    SET_GPR_U32(ctx, 31, 0x307DB4u);
    ctx->pc = 0x307DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307DACu;
    // 0x307db0: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307CF8u, 0x307DACu, 0x307DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307DB4u;
label_307db4:
    // 0x307db4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x307db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307db8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x307db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x307dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x307DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307DBCu;
        // 0x307dc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307DC4u;
    // 0x307dc4: 0x0  nop
    ctx->pc = 0x307dc4u;
    // NOP
    ctx->pc = 0x307dc8u;
}
