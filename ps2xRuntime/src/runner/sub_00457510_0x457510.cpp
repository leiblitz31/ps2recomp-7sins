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

// Function: sub_00457510
// Address: 0x457510 - 0x457590
void sub_00457510_0x457510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00457510_0x457510");
#endif

    switch (ctx->pc) {
        case 0x45753cu: goto label_45753c;
        case 0x457550u: goto label_457550;
        case 0x457570u: goto label_457570;
        default: break;
    }

    ctx->pc = 0x457510u;

    // 0x457510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x457510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x457514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x457514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x457518: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x457518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45751c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x45751cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x457520: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x457520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457524: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x457524u;
    {
        const bool branch_taken_0x457524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x457524) {
            ctx->pc = 0x457570u;
            goto label_457570;
        }
    }
    ctx->pc = 0x45752Cu;
    // 0x45752c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45752cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457530: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x457530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x457534: 0xc115d64  jal         func_457590
    ctx->pc = 0x457534u;
    SET_GPR_U32(ctx, 31, 0x45753Cu);
    ctx->pc = 0x457590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457590u, 0x457534u, 0x45753Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45753Cu;
label_45753c:
    // 0x45753c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45753cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457540: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x457540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x457544: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x457544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x457548: 0xc115c6c  jal         func_4571B0
    ctx->pc = 0x457548u;
    SET_GPR_U32(ctx, 31, 0x457550u);
    ctx->pc = 0x4571B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4571B0u, 0x457548u, 0x457550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457550u;
label_457550:
    // 0x457550: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x457550u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x457554: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x457554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x457558: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x457558u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x45755c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45755Cu;
    {
        const bool branch_taken_0x45755c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x45755c) {
            ctx->pc = 0x457570u;
            goto label_457570;
        }
    }
    ctx->pc = 0x457564u;
    // 0x457564: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x457564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457568: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x457568u;
    SET_GPR_U32(ctx, 31, 0x457570u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x457568u, 0x457570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457570u;
label_457570:
    // 0x457570: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x457570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x457574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x457578: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x457578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x45757c: 0x3e00008  jr          $ra
    ctx->pc = 0x45757Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45757Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x457584u;
    // 0x457584: 0x0  nop
    ctx->pc = 0x457584u;
    // NOP
    // 0x457588: 0x0  nop
    ctx->pc = 0x457588u;
    // NOP
    // 0x45758c: 0x0  nop
    ctx->pc = 0x45758cu;
    // NOP
    ctx->pc = 0x457590u;
}
