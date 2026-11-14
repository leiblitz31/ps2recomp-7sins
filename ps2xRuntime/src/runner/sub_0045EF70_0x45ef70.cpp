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

// Function: sub_0045EF70
// Address: 0x45ef70 - 0x45efc0
void sub_0045EF70_0x45ef70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045EF70_0x45ef70");
#endif

    switch (ctx->pc) {
        case 0x45efa8u: goto label_45efa8;
        default: break;
    }

    ctx->pc = 0x45ef70u;

    // 0x45ef70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x45ef70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x45ef74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x45ef74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x45ef78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x45ef78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45ef7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x45ef7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x45ef80: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x45ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45ef84: 0xaf83bfa8  sw          $v1, -0x4058($gp)
    ctx->pc = 0x45ef84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950824), GPR_U32(ctx, 3));
    // 0x45ef88: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x45ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45ef8c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x45EF8Cu;
    {
        const bool branch_taken_0x45ef8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ef8c) {
            ctx->pc = 0x45EFA8u;
            goto label_45efa8;
        }
    }
    ctx->pc = 0x45EF94u;
    // 0x45ef94: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x45ef94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x45ef98: 0x24844dd8  addiu       $a0, $a0, 0x4DD8
    ctx->pc = 0x45ef98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19928));
    // 0x45ef9c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x45ef9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45efa0: 0xc117bf0  jal         func_45EFC0
    ctx->pc = 0x45EFA0u;
    SET_GPR_U32(ctx, 31, 0x45EFA8u);
    ctx->pc = 0x45EFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45EFC0u, 0x45EFA0u, 0x45EFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EFA8u;
label_45efa8:
    // 0x45efa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45efa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45efac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x45efacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x45efb0: 0x3e00008  jr          $ra
    ctx->pc = 0x45EFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45EFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45EFB8u;
    // 0x45efb8: 0x0  nop
    ctx->pc = 0x45efb8u;
    // NOP
    // 0x45efbc: 0x0  nop
    ctx->pc = 0x45efbcu;
    // NOP
    ctx->pc = 0x45efc0u;
}
