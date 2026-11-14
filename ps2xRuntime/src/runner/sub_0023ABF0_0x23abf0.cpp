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

// Function: sub_0023ABF0
// Address: 0x23abf0 - 0x23ac90
void sub_0023ABF0_0x23abf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023ABF0_0x23abf0");
#endif

    switch (ctx->pc) {
        case 0x23ac54u: goto label_23ac54;
        case 0x23ac74u: goto label_23ac74;
        default: break;
    }

    ctx->pc = 0x23abf0u;

    // 0x23abf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23abf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23abf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23abf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23abf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23abf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23abfc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x23abfcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x23ac00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ac04: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x23AC04u;
    {
        const bool branch_taken_0x23ac04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ac04) {
            ctx->pc = 0x23AC74u;
            goto label_23ac74;
        }
    }
    ctx->pc = 0x23AC0Cu;
    // 0x23ac0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ac10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ac14: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23AC14u;
    {
        const bool branch_taken_0x23ac14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ac14) {
            ctx->pc = 0x23AC54u;
            goto label_23ac54;
        }
    }
    ctx->pc = 0x23AC1Cu;
    // 0x23ac1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23ac1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ac20: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x23ac20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ac24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ac28: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x23ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23ac2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ac30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ac34: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x23ac34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ac38: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x23ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x23ac3c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x23ac3cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x23ac40: 0x3012  mflo        $a2
    ctx->pc = 0x23ac40u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x23ac44: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x23ac44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x23ac48: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x23ac48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23ac4c: 0xc08ebfc  jal         func_23AFF0
    ctx->pc = 0x23AC4Cu;
    SET_GPR_U32(ctx, 31, 0x23AC54u);
    ctx->pc = 0x23AFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AFF0u, 0x23AC4Cu, 0x23AC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AC54u;
label_23ac54:
    // 0x23ac54: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x23ac54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ac58: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23ac58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23ac5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23ac5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23ac60: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23AC60u;
    {
        const bool branch_taken_0x23ac60 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23ac60) {
            ctx->pc = 0x23AC74u;
            goto label_23ac74;
        }
    }
    ctx->pc = 0x23AC68u;
    // 0x23ac68: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23ac68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ac6c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x23AC6Cu;
    SET_GPR_U32(ctx, 31, 0x23AC74u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x23AC6Cu, 0x23AC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AC74u;
label_23ac74:
    // 0x23ac74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ac78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23ac78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ac7c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23ac7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23ac80: 0x3e00008  jr          $ra
    ctx->pc = 0x23AC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AC88u;
    // 0x23ac88: 0x0  nop
    ctx->pc = 0x23ac88u;
    // NOP
    // 0x23ac8c: 0x0  nop
    ctx->pc = 0x23ac8cu;
    // NOP
    ctx->pc = 0x23ac90u;
}
