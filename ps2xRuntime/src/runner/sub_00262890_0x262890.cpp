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

// Function: sub_00262890
// Address: 0x262890 - 0x262930
void sub_00262890_0x262890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262890_0x262890");
#endif

    switch (ctx->pc) {
        case 0x2628f4u: goto label_2628f4;
        case 0x262914u: goto label_262914;
        default: break;
    }

    ctx->pc = 0x262890u;

    // 0x262890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x262890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x262894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x262894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x262898: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x262898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26289c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x26289cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2628a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2628a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2628a4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2628A4u;
    {
        const bool branch_taken_0x2628a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2628a4) {
            ctx->pc = 0x262914u;
            goto label_262914;
        }
    }
    ctx->pc = 0x2628ACu;
    // 0x2628ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2628acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2628b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2628b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2628b4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2628B4u;
    {
        const bool branch_taken_0x2628b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2628b4) {
            ctx->pc = 0x2628F4u;
            goto label_2628f4;
        }
    }
    ctx->pc = 0x2628BCu;
    // 0x2628bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2628bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2628c0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2628c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2628c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2628c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2628c8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2628c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2628cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2628ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2628d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2628d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2628d4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2628d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2628d8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2628d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2628dc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2628dcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2628e0: 0x3012  mflo        $a2
    ctx->pc = 0x2628e0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2628e4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2628e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2628e8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2628e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2628ec: 0xc0995bc  jal         func_2656F0
    ctx->pc = 0x2628ECu;
    SET_GPR_U32(ctx, 31, 0x2628F4u);
    ctx->pc = 0x2656F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2656F0u, 0x2628ECu, 0x2628F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2628F4u;
label_2628f4:
    // 0x2628f4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2628f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2628f8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2628f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2628fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2628fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x262900: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x262900u;
    {
        const bool branch_taken_0x262900 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x262900) {
            ctx->pc = 0x262914u;
            goto label_262914;
        }
    }
    ctx->pc = 0x262908u;
    // 0x262908: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x262908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26290c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x26290Cu;
    SET_GPR_U32(ctx, 31, 0x262914u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x26290Cu, 0x262914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262914u;
label_262914:
    // 0x262914: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x262914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x262918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26291c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26291cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262920: 0x3e00008  jr          $ra
    ctx->pc = 0x262920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262928u;
    // 0x262928: 0x0  nop
    ctx->pc = 0x262928u;
    // NOP
    // 0x26292c: 0x0  nop
    ctx->pc = 0x26292cu;
    // NOP
    ctx->pc = 0x262930u;
}
