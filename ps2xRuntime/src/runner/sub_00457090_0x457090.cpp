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

// Function: sub_00457090
// Address: 0x457090 - 0x457140
void sub_00457090_0x457090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00457090_0x457090");
#endif

    switch (ctx->pc) {
        case 0x457124u: goto label_457124;
        default: break;
    }

    ctx->pc = 0x457090u;

    // 0x457090: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x457090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x457094: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x457094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x457098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x457098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45709c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45709cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4570a0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x4570a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x4570a4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x4570a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x4570a8: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x4570a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
    // 0x4570ac: 0xffa70058  sd          $a3, 0x58($sp)
    ctx->pc = 0x4570acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
    // 0x4570b0: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x4570b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x4570b4: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x4570b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x4570b8: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x4570b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x4570bc: 0xffab0078  sd          $t3, 0x78($sp)
    ctx->pc = 0x4570bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    // 0x4570c0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x4570c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4570c4: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x4570C4u;
    {
        const bool branch_taken_0x4570c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4570c4) {
            ctx->pc = 0x457124u;
            goto label_457124;
        }
    }
    ctx->pc = 0x4570CCu;
    // 0x4570cc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4570ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4570d0: 0xa0400117  sb          $zero, 0x117($v0)
    ctx->pc = 0x4570d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 279), (uint8_t)GPR_U32(ctx, 0));
    // 0x4570d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4570d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4570d8: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x4570d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x4570dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4570DCu;
    {
        const bool branch_taken_0x4570dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4570dc) {
            ctx->pc = 0x4570F0u;
            goto label_4570f0;
        }
    }
    ctx->pc = 0x4570E4u;
    // 0x4570e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4570e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4570e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4570E8u;
    {
        const bool branch_taken_0x4570e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4570e8) {
            ctx->pc = 0x457100u;
            goto label_457100;
        }
    }
    ctx->pc = 0x4570F0u;
label_4570f0:
    // 0x4570f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4570f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4570f4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4570f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4570f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4570f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4570fc: 0x280c0  sll         $s0, $v0, 3
    ctx->pc = 0x4570fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_457100:
    // 0x457100: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x457100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x457104: 0x508823  subu        $s1, $v0, $s0
    ctx->pc = 0x457104u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x457108: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x457108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45710c: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x45710cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x457110: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x457110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x457114: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x457114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x457118: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x457118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45711c: 0xc0bd84a  jal         func_2F6128
    ctx->pc = 0x45711Cu;
    SET_GPR_U32(ctx, 31, 0x457124u);
    ctx->pc = 0x2F6128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6128u, 0x45711Cu, 0x457124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457124u;
label_457124:
    // 0x457124: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x457124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x457128: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x457128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45712c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45712cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x457130: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x457130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x457134: 0x3e00008  jr          $ra
    ctx->pc = 0x457134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x457134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45713Cu;
    // 0x45713c: 0x0  nop
    ctx->pc = 0x45713cu;
    // NOP
    ctx->pc = 0x457140u;
}
