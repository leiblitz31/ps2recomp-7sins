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

// Function: sub_001B94F0
// Address: 0x1b94f0 - 0x1b9590
void sub_001B94F0_0x1b94f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B94F0_0x1b94f0");
#endif

    switch (ctx->pc) {
        case 0x1b9554u: goto label_1b9554;
        case 0x1b9574u: goto label_1b9574;
        default: break;
    }

    ctx->pc = 0x1b94f0u;

    // 0x1b94f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b94f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b94f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b94f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b94f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b94f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b94fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1b94fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b9500: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9504: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B9504u;
    {
        const bool branch_taken_0x1b9504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9504) {
            ctx->pc = 0x1B9574u;
            goto label_1b9574;
        }
    }
    ctx->pc = 0x1B950Cu;
    // 0x1b950c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b950cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9510: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b9510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9514: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B9514u;
    {
        const bool branch_taken_0x1b9514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9514) {
            ctx->pc = 0x1B9554u;
            goto label_1b9554;
        }
    }
    ctx->pc = 0x1B951Cu;
    // 0x1b951c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b951cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9520: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1b9520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9524: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9528: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b9528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b952c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b952cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9530: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b9530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9534: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b9534u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b9538: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b9538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b953c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b953cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b9540: 0x3012  mflo        $a2
    ctx->pc = 0x1b9540u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1b9544: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1b9544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1b9548: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1b9548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b954c: 0xc070e44  jal         func_1C3910
    ctx->pc = 0x1B954Cu;
    SET_GPR_U32(ctx, 31, 0x1B9554u);
    ctx->pc = 0x1C3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3910u, 0x1B954Cu, 0x1B9554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9554u;
label_1b9554:
    // 0x1b9554: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1b9554u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9558: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b9558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b955c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b955cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b9560: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9560u;
    {
        const bool branch_taken_0x1b9560 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b9560) {
            ctx->pc = 0x1B9574u;
            goto label_1b9574;
        }
    }
    ctx->pc = 0x1B9568u;
    // 0x1b9568: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b9568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b956c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1B956Cu;
    SET_GPR_U32(ctx, 31, 0x1B9574u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1B956Cu, 0x1B9574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9574u;
label_1b9574:
    // 0x1b9574: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b957c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b957cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b9580: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9588u;
    // 0x1b9588: 0x0  nop
    ctx->pc = 0x1b9588u;
    // NOP
    // 0x1b958c: 0x0  nop
    ctx->pc = 0x1b958cu;
    // NOP
    ctx->pc = 0x1b9590u;
}
