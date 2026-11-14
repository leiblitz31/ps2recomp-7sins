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

// Function: sub_004789A0
// Address: 0x4789a0 - 0x4789f0
void sub_004789A0_0x4789a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004789A0_0x4789a0");
#endif

    switch (ctx->pc) {
        case 0x4789b8u: goto label_4789b8;
        default: break;
    }

    ctx->pc = 0x4789a0u;

    // 0x4789a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4789a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4789a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4789a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4789a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4789a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4789ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4789acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4789b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4789B0u;
    {
        const bool branch_taken_0x4789b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4789b0) {
            ctx->pc = 0x4789C8u;
            goto label_4789c8;
        }
    }
    ctx->pc = 0x4789B8u;
label_4789b8:
    // 0x4789b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4789b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4789bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4789bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4789c0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4789c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4789c4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4789c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_4789c8:
    // 0x4789c8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4789c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4789cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4789ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4789d0: 0x1462fff9  bne         $v1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4789D0u;
    {
        const bool branch_taken_0x4789d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4789d0) {
            ctx->pc = 0x4789B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4789b8;
        }
    }
    ctx->pc = 0x4789D8u;
    // 0x4789d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4789d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4789dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4789dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4789e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4789e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4789e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4789E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4789E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4789ECu;
    // 0x4789ec: 0x0  nop
    ctx->pc = 0x4789ecu;
    // NOP
    ctx->pc = 0x4789f0u;
}
