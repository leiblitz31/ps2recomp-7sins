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

// Function: sub_001B9280
// Address: 0x1b9280 - 0x1b9320
void sub_001B9280_0x1b9280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9280_0x1b9280");
#endif

    switch (ctx->pc) {
        case 0x1b92e4u: goto label_1b92e4;
        case 0x1b9304u: goto label_1b9304;
        default: break;
    }

    ctx->pc = 0x1b9280u;

    // 0x1b9280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b9284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9288: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b9288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b928c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1b928cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b9290: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9294: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B9294u;
    {
        const bool branch_taken_0x1b9294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9294) {
            ctx->pc = 0x1B9304u;
            goto label_1b9304;
        }
    }
    ctx->pc = 0x1B929Cu;
    // 0x1b929c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b929cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b92a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b92a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b92a4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B92A4u;
    {
        const bool branch_taken_0x1b92a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b92a4) {
            ctx->pc = 0x1B92E4u;
            goto label_1b92e4;
        }
    }
    ctx->pc = 0x1B92ACu;
    // 0x1b92ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b92acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b92b0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1b92b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b92b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b92b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b92b8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b92b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b92bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b92bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b92c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b92c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b92c4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b92c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b92c8: 0x240200d0  addiu       $v0, $zero, 0xD0
    ctx->pc = 0x1b92c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x1b92cc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b92ccu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b92d0: 0x3012  mflo        $a2
    ctx->pc = 0x1b92d0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1b92d4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1b92d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1b92d8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1b92d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b92dc: 0xc070e30  jal         func_1C38C0
    ctx->pc = 0x1B92DCu;
    SET_GPR_U32(ctx, 31, 0x1B92E4u);
    ctx->pc = 0x1C38C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38C0u, 0x1B92DCu, 0x1B92E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B92E4u;
label_1b92e4:
    // 0x1b92e4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1b92e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b92e8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b92e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b92ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b92ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b92f0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B92F0u;
    {
        const bool branch_taken_0x1b92f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b92f0) {
            ctx->pc = 0x1B9304u;
            goto label_1b9304;
        }
    }
    ctx->pc = 0x1B92F8u;
    // 0x1b92f8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b92f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b92fc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1B92FCu;
    SET_GPR_U32(ctx, 31, 0x1B9304u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1B92FCu, 0x1B9304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9304u;
label_1b9304:
    // 0x1b9304: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b930c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b930cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b9310: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9318u;
    // 0x1b9318: 0x0  nop
    ctx->pc = 0x1b9318u;
    // NOP
    // 0x1b931c: 0x0  nop
    ctx->pc = 0x1b931cu;
    // NOP
    ctx->pc = 0x1b9320u;
}
