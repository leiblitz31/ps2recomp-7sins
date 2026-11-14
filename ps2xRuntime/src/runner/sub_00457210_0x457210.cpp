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

// Function: sub_00457210
// Address: 0x457210 - 0x457280
void sub_00457210_0x457210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00457210_0x457210");
#endif

    switch (ctx->pc) {
        case 0x457238u: goto label_457238;
        case 0x45724cu: goto label_45724c;
        case 0x45726cu: goto label_45726c;
        default: break;
    }

    ctx->pc = 0x457210u;

    // 0x457210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x457210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x457214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x457214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x457218: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x457218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45721c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x45721cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x457220: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x457220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457224: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x457224u;
    {
        const bool branch_taken_0x457224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x457224) {
            ctx->pc = 0x45726Cu;
            goto label_45726c;
        }
    }
    ctx->pc = 0x45722Cu;
    // 0x45722c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x45722cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457230: 0xc116214  jal         func_458850
    ctx->pc = 0x457230u;
    SET_GPR_U32(ctx, 31, 0x457238u);
    ctx->pc = 0x458850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458850u, 0x457230u, 0x457238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457238u;
label_457238:
    // 0x457238: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x457238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45723c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x45723cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x457240: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x457240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x457244: 0xc04dfd4  jal         func_137F50
    ctx->pc = 0x457244u;
    SET_GPR_U32(ctx, 31, 0x45724Cu);
    ctx->pc = 0x137F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F50u, 0x457244u, 0x45724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45724Cu;
label_45724c:
    // 0x45724c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x45724cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x457250: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x457250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x457254: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x457254u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x457258: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x457258u;
    {
        const bool branch_taken_0x457258 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x457258) {
            ctx->pc = 0x45726Cu;
            goto label_45726c;
        }
    }
    ctx->pc = 0x457260u;
    // 0x457260: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x457260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457264: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x457264u;
    SET_GPR_U32(ctx, 31, 0x45726Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x457264u, 0x45726Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45726Cu;
label_45726c:
    // 0x45726c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45726cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x457270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x457274: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x457274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x457278: 0x3e00008  jr          $ra
    ctx->pc = 0x457278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x457278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x457280u;
}
