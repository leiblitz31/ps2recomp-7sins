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

// Function: sub_002350E0
// Address: 0x2350e0 - 0x235170
void sub_002350E0_0x2350e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002350E0_0x2350e0");
#endif

    switch (ctx->pc) {
        case 0x235124u: goto label_235124;
        case 0x235134u: goto label_235134;
        case 0x235154u: goto label_235154;
        default: break;
    }

    ctx->pc = 0x2350e0u;

    // 0x2350e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2350e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2350e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2350e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2350e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2350e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2350ec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2350ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2350f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2350f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2350f4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2350F4u;
    {
        const bool branch_taken_0x2350f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2350f4) {
            ctx->pc = 0x235154u;
            goto label_235154;
        }
    }
    ctx->pc = 0x2350FCu;
    // 0x2350fc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2350fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x235100: 0x24635410  addiu       $v1, $v1, 0x5410
    ctx->pc = 0x235100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21520));
    // 0x235104: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235108: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x235108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23510c: 0xaf80bbac  sw          $zero, -0x4454($gp)
    ctx->pc = 0x23510cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949804), GPR_U32(ctx, 0));
    // 0x235110: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235114: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x235114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x235118: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x235118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23511c: 0xc08d380  jal         func_234E00
    ctx->pc = 0x23511Cu;
    SET_GPR_U32(ctx, 31, 0x235124u);
    ctx->pc = 0x234E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234E00u, 0x23511Cu, 0x235124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235124u;
label_235124:
    // 0x235124: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x235124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235128: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x235128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23512c: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x23512Cu;
    SET_GPR_U32(ctx, 31, 0x235134u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x23512Cu, 0x235134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235134u;
label_235134:
    // 0x235134: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x235134u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235138: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x235138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23513c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23513cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x235140: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x235140u;
    {
        const bool branch_taken_0x235140 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x235140) {
            ctx->pc = 0x235154u;
            goto label_235154;
        }
    }
    ctx->pc = 0x235148u;
    // 0x235148: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x235148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23514c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x23514Cu;
    SET_GPR_U32(ctx, 31, 0x235154u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x23514Cu, 0x235154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235154u;
label_235154:
    // 0x235154: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23515c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23515cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x235160: 0x3e00008  jr          $ra
    ctx->pc = 0x235160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235168u;
    // 0x235168: 0x0  nop
    ctx->pc = 0x235168u;
    // NOP
    // 0x23516c: 0x0  nop
    ctx->pc = 0x23516cu;
    // NOP
    ctx->pc = 0x235170u;
}
