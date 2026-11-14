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

// Function: sub_00132630
// Address: 0x132630 - 0x1326d0
void sub_00132630_0x132630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132630_0x132630");
#endif

    switch (ctx->pc) {
        case 0x132694u: goto label_132694;
        case 0x1326b4u: goto label_1326b4;
        default: break;
    }

    ctx->pc = 0x132630u;

    // 0x132630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x132630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x132634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x132634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132638: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x132638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13263c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x13263cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x132640: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x132640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132644: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x132644u;
    {
        const bool branch_taken_0x132644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132644) {
            ctx->pc = 0x1326B4u;
            goto label_1326b4;
        }
    }
    ctx->pc = 0x13264Cu;
    // 0x13264c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13264cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132650: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x132650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x132654: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x132654u;
    {
        const bool branch_taken_0x132654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132654) {
            ctx->pc = 0x132694u;
            goto label_132694;
        }
    }
    ctx->pc = 0x13265Cu;
    // 0x13265c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13265cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132660: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x132660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132664: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x132664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132668: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x132668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13266c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13266cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132670: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x132670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x132674: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x132674u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x132678: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x132678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x13267c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x13267cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x132680: 0x3012  mflo        $a2
    ctx->pc = 0x132680u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x132684: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x132684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x132688: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x132688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13268c: 0xc04d67c  jal         func_1359F0
    ctx->pc = 0x13268Cu;
    SET_GPR_U32(ctx, 31, 0x132694u);
    ctx->pc = 0x1359F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1359F0u, 0x13268Cu, 0x132694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132694u;
label_132694:
    // 0x132694: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x132694u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132698: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x132698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13269c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13269cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1326a0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1326A0u;
    {
        const bool branch_taken_0x1326a0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1326a0) {
            ctx->pc = 0x1326B4u;
            goto label_1326b4;
        }
    }
    ctx->pc = 0x1326A8u;
    // 0x1326a8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1326a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1326ac: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1326ACu;
    SET_GPR_U32(ctx, 31, 0x1326B4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1326ACu, 0x1326B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1326B4u;
label_1326b4:
    // 0x1326b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1326b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1326b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1326b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1326bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1326bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1326c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1326C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1326C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1326C8u;
    // 0x1326c8: 0x0  nop
    ctx->pc = 0x1326c8u;
    // NOP
    // 0x1326cc: 0x0  nop
    ctx->pc = 0x1326ccu;
    // NOP
    ctx->pc = 0x1326d0u;
}
