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

// Function: sub_0048BC10
// Address: 0x48bc10 - 0x48bcb0
void sub_0048BC10_0x48bc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048BC10_0x48bc10");
#endif

    switch (ctx->pc) {
        case 0x48bc74u: goto label_48bc74;
        case 0x48bc94u: goto label_48bc94;
        default: break;
    }

    ctx->pc = 0x48bc10u;

    // 0x48bc10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48bc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48bc14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48bc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48bc18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48bc18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48bc1c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x48bc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x48bc20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bc24: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x48BC24u;
    {
        const bool branch_taken_0x48bc24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48bc24) {
            ctx->pc = 0x48BC94u;
            goto label_48bc94;
        }
    }
    ctx->pc = 0x48BC2Cu;
    // 0x48bc2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bc30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48bc34: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x48BC34u;
    {
        const bool branch_taken_0x48bc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48bc34) {
            ctx->pc = 0x48BC74u;
            goto label_48bc74;
        }
    }
    ctx->pc = 0x48BC3Cu;
    // 0x48bc3c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48bc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bc40: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x48bc40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bc44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bc48: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x48bc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x48bc4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48bc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bc50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48bc54: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x48bc54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48bc58: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x48bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x48bc5c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x48bc5cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x48bc60: 0x3012  mflo        $a2
    ctx->pc = 0x48bc60u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x48bc64: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x48bc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x48bc68: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x48bc68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x48bc6c: 0xc12373c  jal         func_48DCF0
    ctx->pc = 0x48BC6Cu;
    SET_GPR_U32(ctx, 31, 0x48BC74u);
    ctx->pc = 0x48DCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DCF0u, 0x48BC6Cu, 0x48BC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BC74u;
label_48bc74:
    // 0x48bc74: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x48bc74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48bc78: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x48bc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x48bc7c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x48bc7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x48bc80: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48BC80u;
    {
        const bool branch_taken_0x48bc80 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x48bc80) {
            ctx->pc = 0x48BC94u;
            goto label_48bc94;
        }
    }
    ctx->pc = 0x48BC88u;
    // 0x48bc88: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48bc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bc8c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x48BC8Cu;
    SET_GPR_U32(ctx, 31, 0x48BC94u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x48BC8Cu, 0x48BC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BC94u;
label_48bc94:
    // 0x48bc94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bc98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48bc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48bc9c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48bc9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48bca0: 0x3e00008  jr          $ra
    ctx->pc = 0x48BCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48BCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48BCA8u;
    // 0x48bca8: 0x0  nop
    ctx->pc = 0x48bca8u;
    // NOP
    // 0x48bcac: 0x0  nop
    ctx->pc = 0x48bcacu;
    // NOP
    ctx->pc = 0x48bcb0u;
}
