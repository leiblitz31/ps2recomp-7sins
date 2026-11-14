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

// Function: sub_00258940
// Address: 0x258940 - 0x2589e0
void sub_00258940_0x258940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258940_0x258940");
#endif

    switch (ctx->pc) {
        case 0x2589a4u: goto label_2589a4;
        case 0x2589c4u: goto label_2589c4;
        default: break;
    }

    ctx->pc = 0x258940u;

    // 0x258940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258948: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x258948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25894c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x25894cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x258950: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x258950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258954: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x258954u;
    {
        const bool branch_taken_0x258954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258954) {
            ctx->pc = 0x2589C4u;
            goto label_2589c4;
        }
    }
    ctx->pc = 0x25895Cu;
    // 0x25895c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25895cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258960: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x258960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x258964: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x258964u;
    {
        const bool branch_taken_0x258964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258964) {
            ctx->pc = 0x2589A4u;
            goto label_2589a4;
        }
    }
    ctx->pc = 0x25896Cu;
    // 0x25896c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25896cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258970: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x258970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258974: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x258974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258978: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x258978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25897c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25897cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258980: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x258980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x258984: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x258984u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x258988: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x258988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25898c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x25898cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x258990: 0x3012  mflo        $a2
    ctx->pc = 0x258990u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x258994: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x258994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x258998: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x258998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25899c: 0xc0971d0  jal         func_25C740
    ctx->pc = 0x25899Cu;
    SET_GPR_U32(ctx, 31, 0x2589A4u);
    ctx->pc = 0x25C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C740u, 0x25899Cu, 0x2589A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2589A4u;
label_2589a4:
    // 0x2589a4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2589a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2589a8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2589a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2589ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2589acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2589b0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2589B0u;
    {
        const bool branch_taken_0x2589b0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2589b0) {
            ctx->pc = 0x2589C4u;
            goto label_2589c4;
        }
    }
    ctx->pc = 0x2589B8u;
    // 0x2589b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2589b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2589bc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2589BCu;
    SET_GPR_U32(ctx, 31, 0x2589C4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2589BCu, 0x2589C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2589C4u;
label_2589c4:
    // 0x2589c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2589c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2589c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2589c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2589cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2589ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2589d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2589D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2589D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2589D8u;
    // 0x2589d8: 0x0  nop
    ctx->pc = 0x2589d8u;
    // NOP
    // 0x2589dc: 0x0  nop
    ctx->pc = 0x2589dcu;
    // NOP
    ctx->pc = 0x2589e0u;
}
