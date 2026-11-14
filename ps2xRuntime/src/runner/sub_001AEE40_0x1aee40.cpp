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

// Function: sub_001AEE40
// Address: 0x1aee40 - 0x1aeee0
void sub_001AEE40_0x1aee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEE40_0x1aee40");
#endif

    switch (ctx->pc) {
        case 0x1aeea4u: goto label_1aeea4;
        case 0x1aeec4u: goto label_1aeec4;
        default: break;
    }

    ctx->pc = 0x1aee40u;

    // 0x1aee40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aee40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aee44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aee44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aee48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1aee48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1aee4c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1aee4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1aee50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aee50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aee54: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1AEE54u;
    {
        const bool branch_taken_0x1aee54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aee54) {
            ctx->pc = 0x1AEEC4u;
            goto label_1aeec4;
        }
    }
    ctx->pc = 0x1AEE5Cu;
    // 0x1aee5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aee60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1aee60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aee64: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1AEE64u;
    {
        const bool branch_taken_0x1aee64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aee64) {
            ctx->pc = 0x1AEEA4u;
            goto label_1aeea4;
        }
    }
    ctx->pc = 0x1AEE6Cu;
    // 0x1aee6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1aee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aee70: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1aee70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aee74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aee74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aee78: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1aee78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1aee7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aee80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1aee80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aee84: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1aee84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aee88: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1aee88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1aee8c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1aee8cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1aee90: 0x3012  mflo        $a2
    ctx->pc = 0x1aee90u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1aee94: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1aee94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1aee98: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1aee98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1aee9c: 0xc06de98  jal         func_1B7A60
    ctx->pc = 0x1AEE9Cu;
    SET_GPR_U32(ctx, 31, 0x1AEEA4u);
    ctx->pc = 0x1B7A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A60u, 0x1AEE9Cu, 0x1AEEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEEA4u;
label_1aeea4:
    // 0x1aeea4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1aeea4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aeea8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1aeea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1aeeac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1aeeacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1aeeb0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AEEB0u;
    {
        const bool branch_taken_0x1aeeb0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1aeeb0) {
            ctx->pc = 0x1AEEC4u;
            goto label_1aeec4;
        }
    }
    ctx->pc = 0x1AEEB8u;
    // 0x1aeeb8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1aeeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aeebc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1AEEBCu;
    SET_GPR_U32(ctx, 31, 0x1AEEC4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1AEEBCu, 0x1AEEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEEC4u;
label_1aeec4:
    // 0x1aeec4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aeec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aeec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aeec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aeecc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1aeeccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1aeed0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEED8u;
    // 0x1aeed8: 0x0  nop
    ctx->pc = 0x1aeed8u;
    // NOP
    // 0x1aeedc: 0x0  nop
    ctx->pc = 0x1aeedcu;
    // NOP
    ctx->pc = 0x1aeee0u;
}
