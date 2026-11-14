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

// Function: sub_004540D0
// Address: 0x4540d0 - 0x454150
void sub_004540D0_0x4540d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004540D0_0x4540d0");
#endif

    switch (ctx->pc) {
        case 0x4540f0u: goto label_4540f0;
        case 0x454100u: goto label_454100;
        case 0x45411cu: goto label_45411c;
        default: break;
    }

    ctx->pc = 0x4540d0u;

    // 0x4540d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4540d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4540d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4540d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4540d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4540d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4540dc: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x4540dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x4540e0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4540e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4540e4: 0x2785b038  addiu       $a1, $gp, -0x4FC8
    ctx->pc = 0x4540e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946872));
    // 0x4540e8: 0xc040304  jal         func_100C10
    ctx->pc = 0x4540E8u;
    SET_GPR_U32(ctx, 31, 0x4540F0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x4540E8u, 0x4540F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4540F0u;
label_4540f0:
    // 0x4540f0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x4540f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4540f4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4540f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4540f8: 0xc05c618  jal         func_171860
    ctx->pc = 0x4540F8u;
    SET_GPR_U32(ctx, 31, 0x454100u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x4540F8u, 0x454100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454100u;
label_454100:
    // 0x454100: 0x401027  not         $v0, $v0
    ctx->pc = 0x454100u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x454104: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x454104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x454108: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x454108u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x45410c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x45410cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x454110: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x454110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x454114: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x454114u;
    SET_GPR_U32(ctx, 31, 0x45411Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x454114u, 0x45411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45411Cu;
label_45411c:
    // 0x45411c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45411Cu;
    {
        const bool branch_taken_0x45411c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x45411c) {
            ctx->pc = 0x454130u;
            goto label_454130;
        }
    }
    ctx->pc = 0x454124u;
    // 0x454124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x454124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x454128: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x454128u;
    {
        const bool branch_taken_0x454128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x454128) {
            ctx->pc = 0x454134u;
            goto label_454134;
        }
    }
    ctx->pc = 0x454130u;
label_454130:
    // 0x454130: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x454130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_454134:
    // 0x454134: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x454134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x454138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x454138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45413c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x45413cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x454140: 0x3e00008  jr          $ra
    ctx->pc = 0x454140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x454140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x454148u;
    // 0x454148: 0x0  nop
    ctx->pc = 0x454148u;
    // NOP
    // 0x45414c: 0x0  nop
    ctx->pc = 0x45414cu;
    // NOP
    ctx->pc = 0x454150u;
}
