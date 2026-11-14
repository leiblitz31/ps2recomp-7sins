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

// Function: sub_00270FC0
// Address: 0x270fc0 - 0x271020
void sub_00270FC0_0x270fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270FC0_0x270fc0");
#endif

    ctx->pc = 0x270fc0u;

    // 0x270fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x270fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x270fc4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x270fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x270fc8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x270fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x270fcc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x270fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270fd0: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x270fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x270fd4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x270FD4u;
    {
        const bool branch_taken_0x270fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x270fd4) {
            ctx->pc = 0x270FFCu;
            goto label_270ffc;
        }
    }
    ctx->pc = 0x270FDCu;
    // 0x270fdc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x270fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270fe0: 0x8c640050  lw          $a0, 0x50($v1)
    ctx->pc = 0x270fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x270fe4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x270fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270fe8: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x270FE8u;
    {
        const bool branch_taken_0x270fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x270fe8) {
            ctx->pc = 0x270FFCu;
            goto label_270ffc;
        }
    }
    ctx->pc = 0x270FF0u;
    // 0x270ff0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x270ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270ff4: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x270ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x270ff8: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x270ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
label_270ffc:
    // 0x270ffc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x270ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271000: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x271000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271004: 0xac640050  sw          $a0, 0x50($v1)
    ctx->pc = 0x271004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 4));
    // 0x271008: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x271008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27100c: 0x3e00008  jr          $ra
    ctx->pc = 0x27100Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27100Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271014u;
    // 0x271014: 0x0  nop
    ctx->pc = 0x271014u;
    // NOP
    // 0x271018: 0x0  nop
    ctx->pc = 0x271018u;
    // NOP
    // 0x27101c: 0x0  nop
    ctx->pc = 0x27101cu;
    // NOP
    ctx->pc = 0x271020u;
}
