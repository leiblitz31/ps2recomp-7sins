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

// Function: sub_0013D6F0
// Address: 0x13d6f0 - 0x13d760
void sub_0013D6F0_0x13d6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D6F0_0x13d6f0");
#endif

    switch (ctx->pc) {
        case 0x13d72cu: goto label_13d72c;
        case 0x13d74cu: goto label_13d74c;
        default: break;
    }

    ctx->pc = 0x13d6f0u;

    // 0x13d6f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d6f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d6f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13d6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13d6fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x13d6fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x13d700: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d704: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13D704u;
    {
        const bool branch_taken_0x13d704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d704) {
            ctx->pc = 0x13D74Cu;
            goto label_13d74c;
        }
    }
    ctx->pc = 0x13D70Cu;
    // 0x13d70c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x13d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x13d710: 0x246337c0  addiu       $v1, $v1, 0x37C0
    ctx->pc = 0x13d710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14272));
    // 0x13d714: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d718: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13d718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13d71c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13d71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d720: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13d720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d724: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x13D724u;
    SET_GPR_U32(ctx, 31, 0x13D72Cu);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x13D724u, 0x13D72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D72Cu;
label_13d72c:
    // 0x13d72c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x13d72cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d730: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x13d730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13d734: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13d734u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13d738: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D738u;
    {
        const bool branch_taken_0x13d738 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13d738) {
            ctx->pc = 0x13D74Cu;
            goto label_13d74c;
        }
    }
    ctx->pc = 0x13D740u;
    // 0x13d740: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13d740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d744: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x13D744u;
    SET_GPR_U32(ctx, 31, 0x13D74Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x13D744u, 0x13D74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D74Cu;
label_13d74c:
    // 0x13d74c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d754: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13d754u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13d758: 0x3e00008  jr          $ra
    ctx->pc = 0x13D758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D760u;
}
