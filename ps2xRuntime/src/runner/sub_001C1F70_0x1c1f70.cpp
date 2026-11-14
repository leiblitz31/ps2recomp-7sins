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

// Function: sub_001C1F70
// Address: 0x1c1f70 - 0x1c1fd0
void sub_001C1F70_0x1c1f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1F70_0x1c1f70");
#endif

    switch (ctx->pc) {
        case 0x1c1f9cu: goto label_1c1f9c;
        case 0x1c1fbcu: goto label_1c1fbc;
        default: break;
    }

    ctx->pc = 0x1c1f70u;

    // 0x1c1f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c1f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c1f74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c1f78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c1f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c1f7c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1c1f7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1c1f80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c1f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1f84: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C1F84u;
    {
        const bool branch_taken_0x1c1f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1f84) {
            ctx->pc = 0x1C1FBCu;
            goto label_1c1fbc;
        }
    }
    ctx->pc = 0x1C1F8Cu;
    // 0x1c1f8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c1f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1f90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1f94: 0xc0707f4  jal         func_1C1FD0
    ctx->pc = 0x1C1F94u;
    SET_GPR_U32(ctx, 31, 0x1C1F9Cu);
    ctx->pc = 0x1C1FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD0u, 0x1C1F94u, 0x1C1F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F9Cu;
label_1c1f9c:
    // 0x1c1f9c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1c1f9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1fa0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1c1fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c1fa4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c1fa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c1fa8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1FA8u;
    {
        const bool branch_taken_0x1c1fa8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c1fa8) {
            ctx->pc = 0x1C1FBCu;
            goto label_1c1fbc;
        }
    }
    ctx->pc = 0x1C1FB0u;
    // 0x1c1fb0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c1fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1fb4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1C1FB4u;
    SET_GPR_U32(ctx, 31, 0x1C1FBCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1C1FB4u, 0x1C1FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FBCu;
label_1c1fbc:
    // 0x1c1fbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c1fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1fc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1fc4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c1fc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c1fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1FD0u;
}
