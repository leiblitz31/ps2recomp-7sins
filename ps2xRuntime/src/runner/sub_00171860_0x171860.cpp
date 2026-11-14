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

// Function: sub_00171860
// Address: 0x171860 - 0x1718f0
void sub_00171860_0x171860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171860_0x171860");
#endif

    switch (ctx->pc) {
        case 0x17189cu: goto label_17189c;
        case 0x1718b0u: goto label_1718b0;
        default: break;
    }

    ctx->pc = 0x171860u;

    // 0x171860: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x171860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x171864: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x171864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x171868: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x171868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17186c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17186cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x171870: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x171870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x171874: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x171874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171878: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x171878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17187c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17187Cu;
    {
        const bool branch_taken_0x17187c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17187c) {
            ctx->pc = 0x171890u;
            goto label_171890;
        }
    }
    ctx->pc = 0x171884u;
    // 0x171884: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x171884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x171888: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x171888u;
    {
        const bool branch_taken_0x171888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171888) {
            ctx->pc = 0x1718D4u;
            goto label_1718d4;
        }
    }
    ctx->pc = 0x171890u;
label_171890:
    // 0x171890: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x171890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171894: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x171894u;
    SET_GPR_U32(ctx, 31, 0x17189Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x171894u, 0x17189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17189Cu;
label_17189c:
    // 0x17189c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17189cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1718a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1718a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1718a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1718a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1718a8: 0xc119290  jal         func_464A40
    ctx->pc = 0x1718A8u;
    SET_GPR_U32(ctx, 31, 0x1718B0u);
    ctx->pc = 0x464A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464A40u, 0x1718A8u, 0x1718B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1718B0u;
label_1718b0:
    // 0x1718b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1718b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1718b4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1718B4u;
    {
        const bool branch_taken_0x1718b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1718b4) {
            ctx->pc = 0x1718C8u;
            goto label_1718c8;
        }
    }
    ctx->pc = 0x1718BCu;
    // 0x1718bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1718bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1718c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1718C0u;
    {
        const bool branch_taken_0x1718c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1718c0) {
            ctx->pc = 0x1718D4u;
            goto label_1718d4;
        }
    }
    ctx->pc = 0x1718C8u;
label_1718c8:
    // 0x1718c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1718c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1718cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1718ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1718d0: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1718d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1718d4:
    // 0x1718d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1718d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1718d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1718d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1718dc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1718dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1718e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1718E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1718E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1718E8u;
    // 0x1718e8: 0x0  nop
    ctx->pc = 0x1718e8u;
    // NOP
    // 0x1718ec: 0x0  nop
    ctx->pc = 0x1718ecu;
    // NOP
    ctx->pc = 0x1718f0u;
}
