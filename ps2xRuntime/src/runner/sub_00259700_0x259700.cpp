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

// Function: sub_00259700
// Address: 0x259700 - 0x259750
void sub_00259700_0x259700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259700_0x259700");
#endif

    switch (ctx->pc) {
        case 0x259738u: goto label_259738;
        default: break;
    }

    ctx->pc = 0x259700u;

    // 0x259700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259708: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x259708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25970c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25970cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x259710: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x259710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259714: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x259714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x259718: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x259718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25971c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x25971cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x259720: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x259720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259724: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x259724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x259728: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x259728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25972c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25972cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259730: 0xc0965d4  jal         func_259750
    ctx->pc = 0x259730u;
    SET_GPR_U32(ctx, 31, 0x259738u);
    ctx->pc = 0x259750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259750u, 0x259730u, 0x259738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259738u;
label_259738:
    // 0x259738: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x259738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25973c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25973cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259740: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x259740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x259744: 0x3e00008  jr          $ra
    ctx->pc = 0x259744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25974Cu;
    // 0x25974c: 0x0  nop
    ctx->pc = 0x25974cu;
    // NOP
    ctx->pc = 0x259750u;
}
