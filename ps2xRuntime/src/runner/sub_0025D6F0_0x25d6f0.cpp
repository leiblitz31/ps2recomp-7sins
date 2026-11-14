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

// Function: sub_0025D6F0
// Address: 0x25d6f0 - 0x25d790
void sub_0025D6F0_0x25d6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D6F0_0x25d6f0");
#endif

    switch (ctx->pc) {
        case 0x25d754u: goto label_25d754;
        case 0x25d774u: goto label_25d774;
        default: break;
    }

    ctx->pc = 0x25d6f0u;

    // 0x25d6f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25d6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25d6f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25d6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25d6f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25d6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25d6fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x25d6fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x25d700: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25d700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d704: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x25D704u;
    {
        const bool branch_taken_0x25d704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d704) {
            ctx->pc = 0x25D774u;
            goto label_25d774;
        }
    }
    ctx->pc = 0x25D70Cu;
    // 0x25d70c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d710: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25d710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25d714: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25D714u;
    {
        const bool branch_taken_0x25d714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d714) {
            ctx->pc = 0x25D754u;
            goto label_25d754;
        }
    }
    ctx->pc = 0x25D71Cu;
    // 0x25d71c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25d71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d720: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x25d720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d724: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25d724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d728: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x25d728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25d72c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d730: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25d730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25d734: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x25d734u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25d738: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x25d738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x25d73c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x25d73cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x25d740: 0x3012  mflo        $a2
    ctx->pc = 0x25d740u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x25d744: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x25d744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x25d748: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x25d748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25d74c: 0xc097be4  jal         func_25EF90
    ctx->pc = 0x25D74Cu;
    SET_GPR_U32(ctx, 31, 0x25D754u);
    ctx->pc = 0x25EF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EF90u, 0x25D74Cu, 0x25D754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D754u;
label_25d754:
    // 0x25d754: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x25d754u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d758: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x25d758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x25d75c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25d75cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x25d760: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25D760u;
    {
        const bool branch_taken_0x25d760 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25d760) {
            ctx->pc = 0x25D774u;
            goto label_25d774;
        }
    }
    ctx->pc = 0x25D768u;
    // 0x25d768: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25d768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d76c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x25D76Cu;
    SET_GPR_U32(ctx, 31, 0x25D774u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x25D76Cu, 0x25D774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D774u;
label_25d774:
    // 0x25d774: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25d774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d77c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25d77cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25d780: 0x3e00008  jr          $ra
    ctx->pc = 0x25D780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D788u;
    // 0x25d788: 0x0  nop
    ctx->pc = 0x25d788u;
    // NOP
    // 0x25d78c: 0x0  nop
    ctx->pc = 0x25d78cu;
    // NOP
    ctx->pc = 0x25d790u;
}
