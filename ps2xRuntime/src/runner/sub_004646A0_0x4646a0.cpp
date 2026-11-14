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

// Function: sub_004646A0
// Address: 0x4646a0 - 0x464710
void sub_004646A0_0x4646a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004646A0_0x4646a0");
#endif

    switch (ctx->pc) {
        case 0x4646b8u: goto label_4646b8;
        default: break;
    }

    ctx->pc = 0x4646a0u;

    // 0x4646a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4646a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4646a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4646a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4646a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4646a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4646ac: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x4646acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4646b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4646B0u;
    {
        const bool branch_taken_0x4646b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4646b0) {
            ctx->pc = 0x4646C4u;
            goto label_4646c4;
        }
    }
    ctx->pc = 0x4646B8u;
label_4646b8:
    // 0x4646b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4646b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4646bc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4646bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4646c0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4646c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_4646c4:
    // 0x4646c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4646c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4646c8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x4646c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4646cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4646ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4646d0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4646D0u;
    {
        const bool branch_taken_0x4646d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4646d0) {
            ctx->pc = 0x4646B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4646b8;
        }
    }
    ctx->pc = 0x4646D8u;
    // 0x4646d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4646d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4646dc: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x4646dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4646e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4646e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4646e4: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x4646e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x4646e8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4646E8u;
    {
        const bool branch_taken_0x4646e8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x4646e8) {
            ctx->pc = 0x4646F8u;
            goto label_4646f8;
        }
    }
    ctx->pc = 0x4646F0u;
    // 0x4646f0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x4646f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4646f4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4646f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_4646f8:
    // 0x4646f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4646f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4646fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4646fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x464700: 0x3e00008  jr          $ra
    ctx->pc = 0x464700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x464700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x464708u;
    // 0x464708: 0x0  nop
    ctx->pc = 0x464708u;
    // NOP
    // 0x46470c: 0x0  nop
    ctx->pc = 0x46470cu;
    // NOP
    ctx->pc = 0x464710u;
}
