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

// Function: sub_00227F00
// Address: 0x227f00 - 0x227fa0
void sub_00227F00_0x227f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227F00_0x227f00");
#endif

    switch (ctx->pc) {
        case 0x227f64u: goto label_227f64;
        case 0x227f84u: goto label_227f84;
        default: break;
    }

    ctx->pc = 0x227f00u;

    // 0x227f00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x227f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227f08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x227f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x227f0c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x227f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x227f10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x227f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227f14: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x227F14u;
    {
        const bool branch_taken_0x227f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227f14) {
            ctx->pc = 0x227F84u;
            goto label_227f84;
        }
    }
    ctx->pc = 0x227F1Cu;
    // 0x227f1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x227f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227f20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x227f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227f24: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x227F24u;
    {
        const bool branch_taken_0x227f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227f24) {
            ctx->pc = 0x227F64u;
            goto label_227f64;
        }
    }
    ctx->pc = 0x227F2Cu;
    // 0x227f2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x227f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227f30: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x227f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227f34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x227f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227f38: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x227f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x227f3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x227f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227f40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x227f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227f44: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x227f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227f48: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x227f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x227f4c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x227f4cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x227f50: 0x3012  mflo        $a2
    ctx->pc = 0x227f50u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x227f54: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x227f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x227f58: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x227f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x227f5c: 0xc08ab78  jal         func_22ADE0
    ctx->pc = 0x227F5Cu;
    SET_GPR_U32(ctx, 31, 0x227F64u);
    ctx->pc = 0x22ADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ADE0u, 0x227F5Cu, 0x227F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227F64u;
label_227f64:
    // 0x227f64: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x227f64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227f68: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x227f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x227f6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x227f6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x227f70: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227F70u;
    {
        const bool branch_taken_0x227f70 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x227f70) {
            ctx->pc = 0x227F84u;
            goto label_227f84;
        }
    }
    ctx->pc = 0x227F78u;
    // 0x227f78: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x227f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227f7c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x227F7Cu;
    SET_GPR_U32(ctx, 31, 0x227F84u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x227F7Cu, 0x227F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227F84u;
label_227f84:
    // 0x227f84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x227f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227f88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227f8c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x227f8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x227f90: 0x3e00008  jr          $ra
    ctx->pc = 0x227F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227F98u;
    // 0x227f98: 0x0  nop
    ctx->pc = 0x227f98u;
    // NOP
    // 0x227f9c: 0x0  nop
    ctx->pc = 0x227f9cu;
    // NOP
    ctx->pc = 0x227fa0u;
}
