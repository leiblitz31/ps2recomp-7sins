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

// Function: sub_001D6370
// Address: 0x1d6370 - 0x1d6410
void sub_001D6370_0x1d6370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6370_0x1d6370");
#endif

    switch (ctx->pc) {
        case 0x1d63d4u: goto label_1d63d4;
        case 0x1d63f4u: goto label_1d63f4;
        default: break;
    }

    ctx->pc = 0x1d6370u;

    // 0x1d6370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6378: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d6378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d637c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1d637cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d6380: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6384: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D6384u;
    {
        const bool branch_taken_0x1d6384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6384) {
            ctx->pc = 0x1D63F4u;
            goto label_1d63f4;
        }
    }
    ctx->pc = 0x1D638Cu;
    // 0x1d638c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d638cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6390: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6394: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D6394u;
    {
        const bool branch_taken_0x1d6394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6394) {
            ctx->pc = 0x1D63D4u;
            goto label_1d63d4;
        }
    }
    ctx->pc = 0x1D639Cu;
    // 0x1d639c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d639cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d63a0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1d63a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d63a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d63a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d63a8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1d63a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d63ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d63acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d63b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d63b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d63b4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1d63b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d63b8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d63b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d63bc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d63bcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d63c0: 0x3012  mflo        $a2
    ctx->pc = 0x1d63c0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1d63c4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1d63c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1d63c8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1d63c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d63cc: 0xc079c60  jal         func_1E7180
    ctx->pc = 0x1D63CCu;
    SET_GPR_U32(ctx, 31, 0x1D63D4u);
    ctx->pc = 0x1E7180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7180u, 0x1D63CCu, 0x1D63D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D63D4u;
label_1d63d4:
    // 0x1d63d4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1d63d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d63d8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d63d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d63dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d63dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d63e0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D63E0u;
    {
        const bool branch_taken_0x1d63e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d63e0) {
            ctx->pc = 0x1D63F4u;
            goto label_1d63f4;
        }
    }
    ctx->pc = 0x1D63E8u;
    // 0x1d63e8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d63e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d63ec: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1D63ECu;
    SET_GPR_U32(ctx, 31, 0x1D63F4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1D63ECu, 0x1D63F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D63F4u;
label_1d63f4:
    // 0x1d63f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d63f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d63f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d63f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d63fc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d63fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d6400: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6408u;
    // 0x1d6408: 0x0  nop
    ctx->pc = 0x1d6408u;
    // NOP
    // 0x1d640c: 0x0  nop
    ctx->pc = 0x1d640cu;
    // NOP
    ctx->pc = 0x1d6410u;
}
