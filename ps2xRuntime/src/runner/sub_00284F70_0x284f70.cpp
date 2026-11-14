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

// Function: sub_00284F70
// Address: 0x284f70 - 0x284fd0
void sub_00284F70_0x284f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284F70_0x284f70");
#endif

    switch (ctx->pc) {
        case 0x284f9cu: goto label_284f9c;
        case 0x284fbcu: goto label_284fbc;
        default: break;
    }

    ctx->pc = 0x284f70u;

    // 0x284f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284f74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x284f78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x284f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x284f7c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x284f7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x284f80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x284f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284f84: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x284F84u;
    {
        const bool branch_taken_0x284f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284f84) {
            ctx->pc = 0x284FBCu;
            goto label_284fbc;
        }
    }
    ctx->pc = 0x284F8Cu;
    // 0x284f8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x284f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284f90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x284f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284f94: 0xc0a13f4  jal         func_284FD0
    ctx->pc = 0x284F94u;
    SET_GPR_U32(ctx, 31, 0x284F9Cu);
    ctx->pc = 0x284FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284FD0u, 0x284F94u, 0x284F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284F9Cu;
label_284f9c:
    // 0x284f9c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x284f9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284fa0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x284fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x284fa4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x284fa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x284fa8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284FA8u;
    {
        const bool branch_taken_0x284fa8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x284fa8) {
            ctx->pc = 0x284FBCu;
            goto label_284fbc;
        }
    }
    ctx->pc = 0x284FB0u;
    // 0x284fb0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x284fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284fb4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x284FB4u;
    SET_GPR_U32(ctx, 31, 0x284FBCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x284FB4u, 0x284FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284FBCu;
label_284fbc:
    // 0x284fbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x284fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284fc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x284fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284fc4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x284fc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x284fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x284FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284FD0u;
}
