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

// Function: sub_0048DDF0
// Address: 0x48ddf0 - 0x48de50
void sub_0048DDF0_0x48ddf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048DDF0_0x48ddf0");
#endif

    switch (ctx->pc) {
        case 0x48de1cu: goto label_48de1c;
        case 0x48de3cu: goto label_48de3c;
        default: break;
    }

    ctx->pc = 0x48ddf0u;

    // 0x48ddf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48ddf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48ddf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48ddf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48ddf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48ddf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48ddfc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x48ddfcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x48de00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48de00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48de04: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x48DE04u;
    {
        const bool branch_taken_0x48de04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48de04) {
            ctx->pc = 0x48DE3Cu;
            goto label_48de3c;
        }
    }
    ctx->pc = 0x48DE0Cu;
    // 0x48de0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48de0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48de10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48de10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48de14: 0xc123794  jal         func_48DE50
    ctx->pc = 0x48DE14u;
    SET_GPR_U32(ctx, 31, 0x48DE1Cu);
    ctx->pc = 0x48DE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DE50u, 0x48DE14u, 0x48DE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DE1Cu;
label_48de1c:
    // 0x48de1c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x48de1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48de20: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x48de20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x48de24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x48de24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x48de28: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48DE28u;
    {
        const bool branch_taken_0x48de28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x48de28) {
            ctx->pc = 0x48DE3Cu;
            goto label_48de3c;
        }
    }
    ctx->pc = 0x48DE30u;
    // 0x48de30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48de30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48de34: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x48DE34u;
    SET_GPR_U32(ctx, 31, 0x48DE3Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x48DE34u, 0x48DE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DE3Cu;
label_48de3c:
    // 0x48de3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48de40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48de40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48de44: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48de44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48de48: 0x3e00008  jr          $ra
    ctx->pc = 0x48DE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48DE50u;
}
