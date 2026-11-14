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

// Function: sub_001D65F0
// Address: 0x1d65f0 - 0x1d6690
void sub_001D65F0_0x1d65f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D65F0_0x1d65f0");
#endif

    switch (ctx->pc) {
        case 0x1d6654u: goto label_1d6654;
        case 0x1d6674u: goto label_1d6674;
        default: break;
    }

    ctx->pc = 0x1d65f0u;

    // 0x1d65f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d65f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d65f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d65f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d65f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d65f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d65fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1d65fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d6600: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6604: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D6604u;
    {
        const bool branch_taken_0x1d6604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6604) {
            ctx->pc = 0x1D6674u;
            goto label_1d6674;
        }
    }
    ctx->pc = 0x1D660Cu;
    // 0x1d660c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d660cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6610: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6614: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D6614u;
    {
        const bool branch_taken_0x1d6614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6614) {
            ctx->pc = 0x1D6654u;
            goto label_1d6654;
        }
    }
    ctx->pc = 0x1D661Cu;
    // 0x1d661c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d661cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6620: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1d6620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6624: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6628: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1d6628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d662c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d662cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6630: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6634: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1d6634u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d6638: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d6638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d663c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d663cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d6640: 0x3012  mflo        $a2
    ctx->pc = 0x1d6640u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1d6644: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1d6644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1d6648: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1d6648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d664c: 0xc079c4c  jal         func_1E7130
    ctx->pc = 0x1D664Cu;
    SET_GPR_U32(ctx, 31, 0x1D6654u);
    ctx->pc = 0x1E7130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7130u, 0x1D664Cu, 0x1D6654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6654u;
label_1d6654:
    // 0x1d6654: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1d6654u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6658: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d6658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d665c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d665cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d6660: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6660u;
    {
        const bool branch_taken_0x1d6660 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d6660) {
            ctx->pc = 0x1D6674u;
            goto label_1d6674;
        }
    }
    ctx->pc = 0x1D6668u;
    // 0x1d6668: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d6668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d666c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1D666Cu;
    SET_GPR_U32(ctx, 31, 0x1D6674u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1D666Cu, 0x1D6674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6674u;
label_1d6674:
    // 0x1d6674: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d667c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d667cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d6680: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6688u;
    // 0x1d6688: 0x0  nop
    ctx->pc = 0x1d6688u;
    // NOP
    // 0x1d668c: 0x0  nop
    ctx->pc = 0x1d668cu;
    // NOP
    ctx->pc = 0x1d6690u;
}
