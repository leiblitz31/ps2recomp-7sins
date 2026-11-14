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

// Function: sub_0022BF60
// Address: 0x22bf60 - 0x22c000
void sub_0022BF60_0x22bf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BF60_0x22bf60");
#endif

    switch (ctx->pc) {
        case 0x22bfc4u: goto label_22bfc4;
        case 0x22bfe4u: goto label_22bfe4;
        default: break;
    }

    ctx->pc = 0x22bf60u;

    // 0x22bf60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22bf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22bf64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22bf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22bf68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22bf68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22bf6c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x22bf6cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x22bf70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22bf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bf74: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x22BF74u;
    {
        const bool branch_taken_0x22bf74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bf74) {
            ctx->pc = 0x22BFE4u;
            goto label_22bfe4;
        }
    }
    ctx->pc = 0x22BF7Cu;
    // 0x22bf7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bf80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22bf84: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22BF84u;
    {
        const bool branch_taken_0x22bf84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bf84) {
            ctx->pc = 0x22BFC4u;
            goto label_22bfc4;
        }
    }
    ctx->pc = 0x22BF8Cu;
    // 0x22bf8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22bf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bf90: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x22bf90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bf94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bf98: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x22bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22bf9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bfa0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22bfa4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x22bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22bfa8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x22bfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x22bfac: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x22bfacu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22bfb0: 0x3012  mflo        $a2
    ctx->pc = 0x22bfb0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x22bfb4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x22bfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x22bfb8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x22bfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22bfbc: 0xc08ca38  jal         func_2328E0
    ctx->pc = 0x22BFBCu;
    SET_GPR_U32(ctx, 31, 0x22BFC4u);
    ctx->pc = 0x2328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2328E0u, 0x22BFBCu, 0x22BFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BFC4u;
label_22bfc4:
    // 0x22bfc4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x22bfc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22bfc8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22bfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22bfcc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22bfccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x22bfd0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22BFD0u;
    {
        const bool branch_taken_0x22bfd0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22bfd0) {
            ctx->pc = 0x22BFE4u;
            goto label_22bfe4;
        }
    }
    ctx->pc = 0x22BFD8u;
    // 0x22bfd8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22bfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bfdc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x22BFDCu;
    SET_GPR_U32(ctx, 31, 0x22BFE4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x22BFDCu, 0x22BFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BFE4u;
label_22bfe4:
    // 0x22bfe4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bfe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22bfe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bfec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22bfecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22bff0: 0x3e00008  jr          $ra
    ctx->pc = 0x22BFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BFF8u;
    // 0x22bff8: 0x0  nop
    ctx->pc = 0x22bff8u;
    // NOP
    // 0x22bffc: 0x0  nop
    ctx->pc = 0x22bffcu;
    // NOP
    ctx->pc = 0x22c000u;
}
