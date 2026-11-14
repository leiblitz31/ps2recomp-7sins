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

// Function: sub_00135FB0
// Address: 0x135fb0 - 0x136010
void sub_00135FB0_0x135fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135FB0_0x135fb0");
#endif

    switch (ctx->pc) {
        case 0x135fccu: goto label_135fcc;
        case 0x135fdcu: goto label_135fdc;
        default: break;
    }

    ctx->pc = 0x135fb0u;

    // 0x135fb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x135fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x135fb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x135fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x135fb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x135fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x135fbc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x135fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x135fc0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x135fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x135fc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x135FC4u;
    {
        const bool branch_taken_0x135fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135fc4) {
            ctx->pc = 0x135FE8u;
            goto label_135fe8;
        }
    }
    ctx->pc = 0x135FCCu;
label_135fcc:
    // 0x135fcc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x135fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135fd0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x135fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135fd4: 0xc04ccfc  jal         func_1333F0
    ctx->pc = 0x135FD4u;
    SET_GPR_U32(ctx, 31, 0x135FDCu);
    ctx->pc = 0x1333F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1333F0u, 0x135FD4u, 0x135FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135FDCu;
label_135fdc:
    // 0x135fdc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x135fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135fe0: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x135fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x135fe4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x135fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_135fe8:
    // 0x135fe8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x135fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135fec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x135fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135ff0: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x135FF0u;
    {
        const bool branch_taken_0x135ff0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x135ff0) {
            ctx->pc = 0x135FCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135fcc;
        }
    }
    ctx->pc = 0x135FF8u;
    // 0x135ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x135ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135ffc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x135ffcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x136000: 0x3e00008  jr          $ra
    ctx->pc = 0x136000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136008u;
    // 0x136008: 0x0  nop
    ctx->pc = 0x136008u;
    // NOP
    // 0x13600c: 0x0  nop
    ctx->pc = 0x13600cu;
    // NOP
    ctx->pc = 0x136010u;
}
