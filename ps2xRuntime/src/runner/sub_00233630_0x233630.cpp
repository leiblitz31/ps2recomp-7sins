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

// Function: sub_00233630
// Address: 0x233630 - 0x233690
void sub_00233630_0x233630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233630_0x233630");
#endif

    switch (ctx->pc) {
        case 0x23365cu: goto label_23365c;
        case 0x23367cu: goto label_23367c;
        default: break;
    }

    ctx->pc = 0x233630u;

    // 0x233630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x233630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x233634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233638: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x233638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23363c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x23363cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x233640: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233644: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x233644u;
    {
        const bool branch_taken_0x233644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233644) {
            ctx->pc = 0x23367Cu;
            goto label_23367c;
        }
    }
    ctx->pc = 0x23364Cu;
    // 0x23364c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23364cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233650: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x233650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233654: 0xc08cda4  jal         func_233690
    ctx->pc = 0x233654u;
    SET_GPR_U32(ctx, 31, 0x23365Cu);
    ctx->pc = 0x233690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233690u, 0x233654u, 0x23365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23365Cu;
label_23365c:
    // 0x23365c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x23365cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233660: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x233660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x233664: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x233664u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x233668: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x233668u;
    {
        const bool branch_taken_0x233668 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x233668) {
            ctx->pc = 0x23367Cu;
            goto label_23367c;
        }
    }
    ctx->pc = 0x233670u;
    // 0x233670: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x233670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233674: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x233674u;
    SET_GPR_U32(ctx, 31, 0x23367Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x233674u, 0x23367Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23367Cu;
label_23367c:
    // 0x23367c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23367cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233684: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x233684u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x233688: 0x3e00008  jr          $ra
    ctx->pc = 0x233688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233690u;
}
