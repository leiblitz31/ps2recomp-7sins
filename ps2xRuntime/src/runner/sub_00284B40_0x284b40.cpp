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

// Function: sub_00284B40
// Address: 0x284b40 - 0x284be0
void sub_00284B40_0x284b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284B40_0x284b40");
#endif

    switch (ctx->pc) {
        case 0x284ba4u: goto label_284ba4;
        case 0x284bc4u: goto label_284bc4;
        default: break;
    }

    ctx->pc = 0x284b40u;

    // 0x284b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x284b48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x284b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x284b4c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x284b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x284b50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x284b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284b54: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x284B54u;
    {
        const bool branch_taken_0x284b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284b54) {
            ctx->pc = 0x284BC4u;
            goto label_284bc4;
        }
    }
    ctx->pc = 0x284B5Cu;
    // 0x284b5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x284b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284b60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x284b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284b64: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x284B64u;
    {
        const bool branch_taken_0x284b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284b64) {
            ctx->pc = 0x284BA4u;
            goto label_284ba4;
        }
    }
    ctx->pc = 0x284B6Cu;
    // 0x284b6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x284b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284b70: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x284b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284b74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x284b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284b78: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x284b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x284b7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x284b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284b80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x284b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284b84: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x284b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x284b88: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x284b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x284b8c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x284b8cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x284b90: 0x3012  mflo        $a2
    ctx->pc = 0x284b90u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x284b94: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x284b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x284b98: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x284b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x284b9c: 0xc0a37b4  jal         func_28DED0
    ctx->pc = 0x284B9Cu;
    SET_GPR_U32(ctx, 31, 0x284BA4u);
    ctx->pc = 0x28DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DED0u, 0x284B9Cu, 0x284BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BA4u;
label_284ba4:
    // 0x284ba4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x284ba4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284ba8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x284ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x284bac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x284bacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x284bb0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284BB0u;
    {
        const bool branch_taken_0x284bb0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x284bb0) {
            ctx->pc = 0x284BC4u;
            goto label_284bc4;
        }
    }
    ctx->pc = 0x284BB8u;
    // 0x284bb8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x284bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284bbc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x284BBCu;
    SET_GPR_U32(ctx, 31, 0x284BC4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x284BBCu, 0x284BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BC4u;
label_284bc4:
    // 0x284bc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x284bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284bc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x284bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284bcc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x284bccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x284bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x284BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284BD8u;
    // 0x284bd8: 0x0  nop
    ctx->pc = 0x284bd8u;
    // NOP
    // 0x284bdc: 0x0  nop
    ctx->pc = 0x284bdcu;
    // NOP
    ctx->pc = 0x284be0u;
}
