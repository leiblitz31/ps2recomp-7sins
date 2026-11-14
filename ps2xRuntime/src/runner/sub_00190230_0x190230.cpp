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

// Function: sub_00190230
// Address: 0x190230 - 0x190290
void sub_00190230_0x190230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190230_0x190230");
#endif

    switch (ctx->pc) {
        case 0x19025cu: goto label_19025c;
        case 0x19027cu: goto label_19027c;
        default: break;
    }

    ctx->pc = 0x190230u;

    // 0x190230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x190230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x190234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190238: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x190238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19023c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x19023cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x190240: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x190240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190244: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x190244u;
    {
        const bool branch_taken_0x190244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190244) {
            ctx->pc = 0x19027Cu;
            goto label_19027c;
        }
    }
    ctx->pc = 0x19024Cu;
    // 0x19024c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19024cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190250: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x190250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190254: 0xc0640a4  jal         func_190290
    ctx->pc = 0x190254u;
    SET_GPR_U32(ctx, 31, 0x19025Cu);
    ctx->pc = 0x190290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190290u, 0x190254u, 0x19025Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19025Cu;
label_19025c:
    // 0x19025c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x19025cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190260: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x190260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x190264: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x190264u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x190268: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x190268u;
    {
        const bool branch_taken_0x190268 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x190268) {
            ctx->pc = 0x19027Cu;
            goto label_19027c;
        }
    }
    ctx->pc = 0x190270u;
    // 0x190270: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x190270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190274: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x190274u;
    SET_GPR_U32(ctx, 31, 0x19027Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x190274u, 0x19027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19027Cu;
label_19027c:
    // 0x19027c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19027cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190280: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190284: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x190284u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x190288: 0x3e00008  jr          $ra
    ctx->pc = 0x190288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190290u;
}
