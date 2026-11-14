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

// Function: sub_00113130
// Address: 0x113130 - 0x113190
void sub_00113130_0x113130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113130_0x113130");
#endif

    switch (ctx->pc) {
        case 0x11315cu: goto label_11315c;
        case 0x11317cu: goto label_11317c;
        default: break;
    }

    ctx->pc = 0x113130u;

    // 0x113130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113138: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x113138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11313c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x11313cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x113140: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x113140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113144: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x113144u;
    {
        const bool branch_taken_0x113144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113144) {
            ctx->pc = 0x11317Cu;
            goto label_11317c;
        }
    }
    ctx->pc = 0x11314Cu;
    // 0x11314c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11314cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113150: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x113150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x113154: 0xc044c64  jal         func_113190
    ctx->pc = 0x113154u;
    SET_GPR_U32(ctx, 31, 0x11315Cu);
    ctx->pc = 0x113190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113190u, 0x113154u, 0x11315Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11315Cu;
label_11315c:
    // 0x11315c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x11315cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113160: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x113160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x113164: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x113164u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x113168: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113168u;
    {
        const bool branch_taken_0x113168 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x113168) {
            ctx->pc = 0x11317Cu;
            goto label_11317c;
        }
    }
    ctx->pc = 0x113170u;
    // 0x113170: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x113170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113174: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x113174u;
    SET_GPR_U32(ctx, 31, 0x11317Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x113174u, 0x11317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11317Cu;
label_11317c:
    // 0x11317c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11317cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113184: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x113184u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x113188: 0x3e00008  jr          $ra
    ctx->pc = 0x113188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113190u;
}
