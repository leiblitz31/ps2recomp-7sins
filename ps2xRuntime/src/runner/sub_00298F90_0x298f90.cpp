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

// Function: sub_00298F90
// Address: 0x298f90 - 0x298ff0
void sub_00298F90_0x298f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298F90_0x298f90");
#endif

    switch (ctx->pc) {
        case 0x298fc8u: goto label_298fc8;
        default: break;
    }

    ctx->pc = 0x298f90u;

    // 0x298f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298f98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x298f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x298f9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x298f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x298fa0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x298fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298fa4: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x298fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x298fa8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x298FA8u;
    {
        const bool branch_taken_0x298fa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x298fa8) {
            ctx->pc = 0x298FC8u;
            goto label_298fc8;
        }
    }
    ctx->pc = 0x298FB0u;
    // 0x298fb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x298fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298fb4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x298fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x298fb8: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x298fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x298fbc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x298fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298fc0: 0xc08f71c  jal         func_23DC70
    ctx->pc = 0x298FC0u;
    SET_GPR_U32(ctx, 31, 0x298FC8u);
    ctx->pc = 0x23DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC70u, 0x298FC0u, 0x298FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298FC8u;
label_298fc8:
    // 0x298fc8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x298fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298fcc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x298fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298fd0: 0xac640050  sw          $a0, 0x50($v1)
    ctx->pc = 0x298fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 4));
    // 0x298fd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298fd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x298fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x298fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x298FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298FE4u;
    // 0x298fe4: 0x0  nop
    ctx->pc = 0x298fe4u;
    // NOP
    // 0x298fe8: 0x0  nop
    ctx->pc = 0x298fe8u;
    // NOP
    // 0x298fec: 0x0  nop
    ctx->pc = 0x298fecu;
    // NOP
    ctx->pc = 0x298ff0u;
}
