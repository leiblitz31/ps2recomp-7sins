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

// Function: sub_00143B80
// Address: 0x143b80 - 0x143be0
void sub_00143B80_0x143b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143B80_0x143b80");
#endif

    ctx->pc = 0x143b80u;

    // 0x143b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x143b84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143b88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x143b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x143b8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143b90: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x143b90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x143b94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x143b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143b98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x143b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x143b9c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x143B9Cu;
    {
        const bool branch_taken_0x143b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143b9c) {
            ctx->pc = 0x143BC4u;
            goto label_143bc4;
        }
    }
    ctx->pc = 0x143BA4u;
    // 0x143ba4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x143ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143ba8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x143ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x143bac: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x143bacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x143bb0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x143bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x143bb4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x143bb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x143bb8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x143BB8u;
    {
        const bool branch_taken_0x143bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143bb8) {
            ctx->pc = 0x143BC4u;
            goto label_143bc4;
        }
    }
    ctx->pc = 0x143BC0u;
    // 0x143bc0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x143bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143bc4:
    // 0x143bc4: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x143bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x143bc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143bcc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x143bccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x143bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x143BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143BD8u;
    // 0x143bd8: 0x0  nop
    ctx->pc = 0x143bd8u;
    // NOP
    // 0x143bdc: 0x0  nop
    ctx->pc = 0x143bdcu;
    // NOP
    ctx->pc = 0x143be0u;
}
