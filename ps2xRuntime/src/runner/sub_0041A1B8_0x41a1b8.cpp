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

// Function: sub_0041A1B8
// Address: 0x41a1b8 - 0x41a200
void sub_0041A1B8_0x41a1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041A1B8_0x41a1b8");
#endif

    switch (ctx->pc) {
        case 0x41a1ccu: goto label_41a1cc;
        case 0x41a1e8u: goto label_41a1e8;
        default: break;
    }

    ctx->pc = 0x41a1b8u;

    // 0x41a1b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41a1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41a1bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41a1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x41a1c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41a1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41a1c4: 0xc1064f0  jal         func_4193C0
    ctx->pc = 0x41A1C4u;
    SET_GPR_U32(ctx, 31, 0x41A1CCu);
    ctx->pc = 0x41A1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A1C4u;
    // 0x41a1c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4193C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4193C0u, 0x41A1C4u, 0x41A1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A1CCu;
label_41a1cc:
    // 0x41a1cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41a1ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a1d0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x41A1D0u;
    {
        const bool branch_taken_0x41a1d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A1D0u;
        // 0x41a1d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a1d0) {
            ctx->pc = 0x41A1E8u;
            goto label_41a1e8;
        }
    }
    ctx->pc = 0x41A1D8u;
    // 0x41a1d8: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x41a1d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x41a1dc: 0x304200fc  andi        $v0, $v0, 0xFC
    ctx->pc = 0x41a1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)252);
    // 0x41a1e0: 0xc106794  jal         func_419E50
    ctx->pc = 0x41A1E0u;
    SET_GPR_U32(ctx, 31, 0x41A1E8u);
    ctx->pc = 0x41A1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A1E0u;
    // 0x41a1e4: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x41A1E0u, 0x41A1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A1E8u;
label_41a1e8:
    // 0x41a1e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41a1e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a1ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41a1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41a1f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41a1f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41a1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x41A1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A1F4u;
        // 0x41a1f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41A1FCu;
    // 0x41a1fc: 0x0  nop
    ctx->pc = 0x41a1fcu;
    // NOP
    ctx->pc = 0x41a200u;
}
