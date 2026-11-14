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

// Function: sub_0029BF70
// Address: 0x29bf70 - 0x29bfb0
void sub_0029BF70_0x29bf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BF70_0x29bf70");
#endif

    switch (ctx->pc) {
        case 0x29bfa0u: goto label_29bfa0;
        default: break;
    }

    ctx->pc = 0x29bf70u;

    // 0x29bf70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29bf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29bf74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29bf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29bf78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x29bf78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29bf7c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x29bf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29bf80: 0x10030007  beq         $zero, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x29BF80u;
    {
        const bool branch_taken_0x29bf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x29bf80) {
            ctx->pc = 0x29BFA0u;
            goto label_29bfa0;
        }
    }
    ctx->pc = 0x29BF88u;
    // 0x29bf88: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29bf88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29bf8c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x29bf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x29bf90: 0x24a5b830  addiu       $a1, $a1, -0x47D0
    ctx->pc = 0x29bf90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948912));
    // 0x29bf94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29bf94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bf98: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x29BF98u;
    SET_GPR_U32(ctx, 31, 0x29BFA0u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x29BF98u, 0x29BFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BFA0u;
label_29bfa0:
    // 0x29bfa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29bfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29bfa4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29bfa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29bfa8: 0x3e00008  jr          $ra
    ctx->pc = 0x29BFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BFB0u;
}
