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

// Function: sub_0015BA30
// Address: 0x15ba30 - 0x15bad0
void sub_0015BA30_0x15ba30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BA30_0x15ba30");
#endif

    switch (ctx->pc) {
        case 0x15ba94u: goto label_15ba94;
        case 0x15bab4u: goto label_15bab4;
        default: break;
    }

    ctx->pc = 0x15ba30u;

    // 0x15ba30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15ba30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15ba34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15ba34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15ba38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x15ba38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15ba3c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x15ba3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x15ba40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ba44: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x15BA44u;
    {
        const bool branch_taken_0x15ba44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ba44) {
            ctx->pc = 0x15BAB4u;
            goto label_15bab4;
        }
    }
    ctx->pc = 0x15BA4Cu;
    // 0x15ba4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ba50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ba54: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15BA54u;
    {
        const bool branch_taken_0x15ba54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ba54) {
            ctx->pc = 0x15BA94u;
            goto label_15ba94;
        }
    }
    ctx->pc = 0x15BA5Cu;
    // 0x15ba5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15ba5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ba60: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x15ba60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ba64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ba68: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x15ba68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15ba6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ba70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ba74: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x15ba74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15ba78: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x15ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x15ba7c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x15ba7cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15ba80: 0x3012  mflo        $a2
    ctx->pc = 0x15ba80u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x15ba84: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x15ba84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x15ba88: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x15ba88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15ba8c: 0xc058afc  jal         func_162BF0
    ctx->pc = 0x15BA8Cu;
    SET_GPR_U32(ctx, 31, 0x15BA94u);
    ctx->pc = 0x162BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162BF0u, 0x15BA8Cu, 0x15BA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BA94u;
label_15ba94:
    // 0x15ba94: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x15ba94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ba98: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15ba98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15ba9c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15ba9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15baa0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BAA0u;
    {
        const bool branch_taken_0x15baa0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15baa0) {
            ctx->pc = 0x15BAB4u;
            goto label_15bab4;
        }
    }
    ctx->pc = 0x15BAA8u;
    // 0x15baa8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15baa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15baac: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x15BAACu;
    SET_GPR_U32(ctx, 31, 0x15BAB4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x15BAACu, 0x15BAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BAB4u;
label_15bab4:
    // 0x15bab4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15bab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15babc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15babcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15bac0: 0x3e00008  jr          $ra
    ctx->pc = 0x15BAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BAC8u;
    // 0x15bac8: 0x0  nop
    ctx->pc = 0x15bac8u;
    // NOP
    // 0x15bacc: 0x0  nop
    ctx->pc = 0x15baccu;
    // NOP
    ctx->pc = 0x15bad0u;
}
