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

// Function: sub_001F3960
// Address: 0x1f3960 - 0x1f3a30
void sub_001F3960_0x1f3960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3960_0x1f3960");
#endif

    switch (ctx->pc) {
        case 0x1f3988u: goto label_1f3988;
        case 0x1f39a0u: goto label_1f39a0;
        case 0x1f39c0u: goto label_1f39c0;
        case 0x1f39d4u: goto label_1f39d4;
        case 0x1f39e8u: goto label_1f39e8;
        case 0x1f39f8u: goto label_1f39f8;
        case 0x1f3a14u: goto label_1f3a14;
        default: break;
    }

    ctx->pc = 0x1f3960u;

    // 0x1f3960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f3960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f3964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f3964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f3968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f3968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f396c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1f396cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1f3970: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1f3970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1f3974: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1f3974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1f3978: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1f3978u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f397c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f397cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3980: 0xc07cec0  jal         func_1F3B00
    ctx->pc = 0x1F3980u;
    SET_GPR_U32(ctx, 31, 0x1F3988u);
    ctx->pc = 0x1F3B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3B00u, 0x1F3980u, 0x1F3988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3988u;
label_1f3988:
    // 0x1f3988: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1f3988u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f398c: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F398Cu;
    {
        const bool branch_taken_0x1f398c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f398c) {
            ctx->pc = 0x1F39DCu;
            goto label_1f39dc;
        }
    }
    ctx->pc = 0x1F3994u;
    // 0x1f3994: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f3994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3998: 0xc07ce3c  jal         func_1F38F0
    ctx->pc = 0x1F3998u;
    SET_GPR_U32(ctx, 31, 0x1F39A0u);
    ctx->pc = 0x1F38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38F0u, 0x1F3998u, 0x1F39A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F39A0u;
label_1f39a0:
    // 0x1f39a0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f39a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f39a4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1f39a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1f39a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f39a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f39ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f39acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f39b0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1f39b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f39b4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f39b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f39b8: 0xc07ceb8  jal         func_1F3AE0
    ctx->pc = 0x1F39B8u;
    SET_GPR_U32(ctx, 31, 0x1F39C0u);
    ctx->pc = 0x1F3AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3AE0u, 0x1F39B8u, 0x1F39C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F39C0u;
label_1f39c0:
    // 0x1f39c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f39c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f39c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f39c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f39c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f39c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f39cc: 0xc07ce9c  jal         func_1F3A70
    ctx->pc = 0x1F39CCu;
    SET_GPR_U32(ctx, 31, 0x1F39D4u);
    ctx->pc = 0x1F3A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3A70u, 0x1F39CCu, 0x1F39D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F39D4u;
label_1f39d4:
    // 0x1f39d4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F39D4u;
    {
        const bool branch_taken_0x1f39d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f39d4) {
            ctx->pc = 0x1F3A14u;
            goto label_1f3a14;
        }
    }
    ctx->pc = 0x1F39DCu;
label_1f39dc:
    // 0x1f39dc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f39dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f39e0: 0xc07ceb8  jal         func_1F3AE0
    ctx->pc = 0x1F39E0u;
    SET_GPR_U32(ctx, 31, 0x1F39E8u);
    ctx->pc = 0x1F3AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3AE0u, 0x1F39E0u, 0x1F39E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F39E8u;
label_1f39e8:
    // 0x1f39e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f39e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f39ec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f39ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f39f0: 0xc07cec0  jal         func_1F3B00
    ctx->pc = 0x1F39F0u;
    SET_GPR_U32(ctx, 31, 0x1F39F8u);
    ctx->pc = 0x1F3B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3B00u, 0x1F39F0u, 0x1F39F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F39F8u;
label_1f39f8:
    // 0x1f39f8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f39f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f39fc: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x1f39fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f3a00: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f3a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3a04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f3a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3a08: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x1f3a08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f3a0c: 0xc07ce8c  jal         func_1F3A30
    ctx->pc = 0x1F3A0Cu;
    SET_GPR_U32(ctx, 31, 0x1F3A14u);
    ctx->pc = 0x1F3A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3A30u, 0x1F3A0Cu, 0x1F3A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3A14u;
label_1f3a14:
    // 0x1f3a14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f3a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f3a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3a1c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1f3a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f3a20: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3A28u;
    // 0x1f3a28: 0x0  nop
    ctx->pc = 0x1f3a28u;
    // NOP
    // 0x1f3a2c: 0x0  nop
    ctx->pc = 0x1f3a2cu;
    // NOP
    ctx->pc = 0x1f3a30u;
}
