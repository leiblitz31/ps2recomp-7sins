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

// Function: sub_001B9200
// Address: 0x1b9200 - 0x1b9280
void sub_001B9200_0x1b9200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9200_0x1b9200");
#endif

    switch (ctx->pc) {
        case 0x1b9234u: goto label_1b9234;
        case 0x1b9244u: goto label_1b9244;
        case 0x1b9264u: goto label_1b9264;
        default: break;
    }

    ctx->pc = 0x1b9200u;

    // 0x1b9200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b9204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9208: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b9208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b920c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1b920cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b9210: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9214: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B9214u;
    {
        const bool branch_taken_0x1b9214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9214) {
            ctx->pc = 0x1B9264u;
            goto label_1b9264;
        }
    }
    ctx->pc = 0x1B921Cu;
    // 0x1b921c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1b921cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9220: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9224: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b9224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b9228: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1b9228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b922c: 0xc06e4c8  jal         func_1B9320
    ctx->pc = 0x1B922Cu;
    SET_GPR_U32(ctx, 31, 0x1B9234u);
    ctx->pc = 0x1B9320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9320u, 0x1B922Cu, 0x1B9234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9234u;
label_1b9234:
    // 0x1b9234: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b9234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9238: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b9238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b923c: 0xc06e4a0  jal         func_1B9280
    ctx->pc = 0x1B923Cu;
    SET_GPR_U32(ctx, 31, 0x1B9244u);
    ctx->pc = 0x1B9280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9280u, 0x1B923Cu, 0x1B9244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9244u;
label_1b9244:
    // 0x1b9244: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1b9244u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9248: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b9248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b924c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b924cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b9250: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9250u;
    {
        const bool branch_taken_0x1b9250 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b9250) {
            ctx->pc = 0x1B9264u;
            goto label_1b9264;
        }
    }
    ctx->pc = 0x1B9258u;
    // 0x1b9258: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b9258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b925c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1B925Cu;
    SET_GPR_U32(ctx, 31, 0x1B9264u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1B925Cu, 0x1B9264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9264u;
label_1b9264:
    // 0x1b9264: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b926c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b926cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b9270: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9278u;
    // 0x1b9278: 0x0  nop
    ctx->pc = 0x1b9278u;
    // NOP
    // 0x1b927c: 0x0  nop
    ctx->pc = 0x1b927cu;
    // NOP
    ctx->pc = 0x1b9280u;
}
