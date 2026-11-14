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

// Function: sub_00233430
// Address: 0x233430 - 0x2334a0
void sub_00233430_0x233430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233430_0x233430");
#endif

    switch (ctx->pc) {
        case 0x23346cu: goto label_23346c;
        case 0x23348cu: goto label_23348c;
        default: break;
    }

    ctx->pc = 0x233430u;

    // 0x233430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x233430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x233434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233438: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x233438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23343c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x23343cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x233440: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233444: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x233444u;
    {
        const bool branch_taken_0x233444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233444) {
            ctx->pc = 0x23348Cu;
            goto label_23348c;
        }
    }
    ctx->pc = 0x23344Cu;
    // 0x23344c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x23344cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x233450: 0x246353b0  addiu       $v1, $v1, 0x53B0
    ctx->pc = 0x233450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21424));
    // 0x233454: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233458: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x233458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23345c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23345cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233460: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x233460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233464: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x233464u;
    SET_GPR_U32(ctx, 31, 0x23346Cu);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x233464u, 0x23346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23346Cu;
label_23346c:
    // 0x23346c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x23346cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233470: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x233470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x233474: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x233474u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x233478: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x233478u;
    {
        const bool branch_taken_0x233478 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x233478) {
            ctx->pc = 0x23348Cu;
            goto label_23348c;
        }
    }
    ctx->pc = 0x233480u;
    // 0x233480: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x233480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233484: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x233484u;
    SET_GPR_U32(ctx, 31, 0x23348Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x233484u, 0x23348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23348Cu;
label_23348c:
    // 0x23348c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23348cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233494: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x233494u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x233498: 0x3e00008  jr          $ra
    ctx->pc = 0x233498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2334A0u;
}
