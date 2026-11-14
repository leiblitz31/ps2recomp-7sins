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

// Function: sub_00232C70
// Address: 0x232c70 - 0x232cd0
void sub_00232C70_0x232c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232C70_0x232c70");
#endif

    switch (ctx->pc) {
        case 0x232c9cu: goto label_232c9c;
        case 0x232cbcu: goto label_232cbc;
        default: break;
    }

    ctx->pc = 0x232c70u;

    // 0x232c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x232c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x232c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x232c78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x232c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x232c7c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x232c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x232c80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x232c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232c84: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x232C84u;
    {
        const bool branch_taken_0x232c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232c84) {
            ctx->pc = 0x232CBCu;
            goto label_232cbc;
        }
    }
    ctx->pc = 0x232C8Cu;
    // 0x232c8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x232c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232c90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232c94: 0xc08cb34  jal         func_232CD0
    ctx->pc = 0x232C94u;
    SET_GPR_U32(ctx, 31, 0x232C9Cu);
    ctx->pc = 0x232CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232CD0u, 0x232C94u, 0x232C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C9Cu;
label_232c9c:
    // 0x232c9c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x232c9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232ca0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x232ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x232ca4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x232ca4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x232ca8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x232CA8u;
    {
        const bool branch_taken_0x232ca8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x232ca8) {
            ctx->pc = 0x232CBCu;
            goto label_232cbc;
        }
    }
    ctx->pc = 0x232CB0u;
    // 0x232cb0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x232cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232cb4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x232CB4u;
    SET_GPR_U32(ctx, 31, 0x232CBCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x232CB4u, 0x232CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232CBCu;
label_232cbc:
    // 0x232cbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x232cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232cc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232cc4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x232cc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x232cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x232CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232CD0u;
}
