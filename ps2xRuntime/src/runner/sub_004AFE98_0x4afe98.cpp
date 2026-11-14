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

// Function: sub_004AFE98
// Address: 0x4afe98 - 0x4afef0
void sub_004AFE98_0x4afe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFE98_0x4afe98");
#endif

    switch (ctx->pc) {
        case 0x4afeacu: goto label_4afeac;
        case 0x4afed4u: goto label_4afed4;
        case 0x4afedcu: goto label_4afedc;
        default: break;
    }

    ctx->pc = 0x4afe98u;

    // 0x4afe98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4afe98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4afe9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4afe9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4afea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4afea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4afea4: 0xc0bf694  jal         func_2FDA50
    ctx->pc = 0x4AFEA4u;
    SET_GPR_U32(ctx, 31, 0x4AFEACu);
    ctx->pc = 0x4AFEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFEA4u;
    // 0x4afea8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA50u, 0x4AFEA4u, 0x4AFEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFEACu;
label_4afeac:
    // 0x4afeac: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x4afeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x4afeb0: 0x260a1040  addiu       $t2, $s0, 0x1040
    ctx->pc = 0x4afeb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4160));
    // 0x4afeb4: 0x8c6b1004  lw          $t3, 0x1004($v1)
    ctx->pc = 0x4afeb4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    // 0x4afeb8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4afeb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afebc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4afebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4afec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afec4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4afec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afec8: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x4afec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x4afecc: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4AFECCu;
    SET_GPR_U32(ctx, 31, 0x4AFED4u);
    ctx->pc = 0x4AFED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFECCu;
    // 0x4afed0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4AFECCu, 0x4AFED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFED4u;
label_4afed4:
    // 0x4afed4: 0xc0bf6a0  jal         func_2FDA80
    ctx->pc = 0x4AFED4u;
    SET_GPR_U32(ctx, 31, 0x4AFEDCu);
    ctx->pc = 0x2FDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA80u, 0x4AFED4u, 0x4AFEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFEDCu;
label_4afedc:
    // 0x4afedc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4afedcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4afee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4afee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afee4: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFEE4u;
        // 0x4afee8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFEECu;
    // 0x4afeec: 0x0  nop
    ctx->pc = 0x4afeecu;
    // NOP
    ctx->pc = 0x4afef0u;
}
