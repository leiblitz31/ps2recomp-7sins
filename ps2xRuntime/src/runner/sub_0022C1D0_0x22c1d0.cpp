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

// Function: sub_0022C1D0
// Address: 0x22c1d0 - 0x22c270
void sub_0022C1D0_0x22c1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C1D0_0x22c1d0");
#endif

    switch (ctx->pc) {
        case 0x22c234u: goto label_22c234;
        case 0x22c254u: goto label_22c254;
        default: break;
    }

    ctx->pc = 0x22c1d0u;

    // 0x22c1d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22c1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22c1d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c1d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22c1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22c1dc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x22c1dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x22c1e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c1e4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x22C1E4u;
    {
        const bool branch_taken_0x22c1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c1e4) {
            ctx->pc = 0x22C254u;
            goto label_22c254;
        }
    }
    ctx->pc = 0x22C1ECu;
    // 0x22c1ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c1f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22c1f4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22C1F4u;
    {
        const bool branch_taken_0x22c1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c1f4) {
            ctx->pc = 0x22C234u;
            goto label_22c234;
        }
    }
    ctx->pc = 0x22C1FCu;
    // 0x22c1fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22c1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c200: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x22c200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c204: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c208: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x22c208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22c20c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c210: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22c210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22c214: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x22c214u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22c218: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x22c218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22c21c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x22c21cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22c220: 0x3012  mflo        $a2
    ctx->pc = 0x22c220u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x22c224: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x22c224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x22c228: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x22c228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22c22c: 0xc08ca78  jal         func_2329E0
    ctx->pc = 0x22C22Cu;
    SET_GPR_U32(ctx, 31, 0x22C234u);
    ctx->pc = 0x2329E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2329E0u, 0x22C22Cu, 0x22C234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C234u;
label_22c234:
    // 0x22c234: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x22c234u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c238: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22c238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22c23c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22c23cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x22c240: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C240u;
    {
        const bool branch_taken_0x22c240 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22c240) {
            ctx->pc = 0x22C254u;
            goto label_22c254;
        }
    }
    ctx->pc = 0x22C248u;
    // 0x22c248: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22c248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c24c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x22C24Cu;
    SET_GPR_U32(ctx, 31, 0x22C254u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x22C24Cu, 0x22C254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C254u;
label_22c254:
    // 0x22c254: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c25c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22c25cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22c260: 0x3e00008  jr          $ra
    ctx->pc = 0x22C260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C268u;
    // 0x22c268: 0x0  nop
    ctx->pc = 0x22c268u;
    // NOP
    // 0x22c26c: 0x0  nop
    ctx->pc = 0x22c26cu;
    // NOP
    ctx->pc = 0x22c270u;
}
