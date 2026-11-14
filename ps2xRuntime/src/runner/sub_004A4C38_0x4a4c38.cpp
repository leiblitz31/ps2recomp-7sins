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

// Function: sub_004A4C38
// Address: 0x4a4c38 - 0x4a4c68
void sub_004A4C38_0x4a4c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4C38_0x4a4c38");
#endif

    switch (ctx->pc) {
        case 0x4a4c54u: goto label_4a4c54;
        default: break;
    }

    ctx->pc = 0x4a4c38u;

    // 0x4a4c38: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x4a4c38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4c3c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a4c3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a4c40: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x4a4c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4c44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a4c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a4c48: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4a4c48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4c4c: 0xc1285cc  jal         func_4A1730
    ctx->pc = 0x4A4C4Cu;
    SET_GPR_U32(ctx, 31, 0x4A4C54u);
    ctx->pc = 0x4A4C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4C4Cu;
    // 0x4a4c50: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1730u, 0x4A4C4Cu, 0x4A4C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4C54u;
label_4a4c54:
    // 0x4a4c54: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a4c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a4c58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a4c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a4c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A4C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A4C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4C5Cu;
        // 0x4a4c60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A4C64u;
    // 0x4a4c64: 0x0  nop
    ctx->pc = 0x4a4c64u;
    // NOP
    ctx->pc = 0x4a4c68u;
}
