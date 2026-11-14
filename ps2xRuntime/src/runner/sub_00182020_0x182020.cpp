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

// Function: sub_00182020
// Address: 0x182020 - 0x1820c0
void sub_00182020_0x182020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182020_0x182020");
#endif

    switch (ctx->pc) {
        case 0x182084u: goto label_182084;
        case 0x1820a4u: goto label_1820a4;
        default: break;
    }

    ctx->pc = 0x182020u;

    // 0x182020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x182020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x182024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182028: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x182028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18202c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x18202cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x182030: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x182030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182034: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x182034u;
    {
        const bool branch_taken_0x182034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182034) {
            ctx->pc = 0x1820A4u;
            goto label_1820a4;
        }
    }
    ctx->pc = 0x18203Cu;
    // 0x18203c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18203cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182040: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x182040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182044: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x182044u;
    {
        const bool branch_taken_0x182044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182044) {
            ctx->pc = 0x182084u;
            goto label_182084;
        }
    }
    ctx->pc = 0x18204Cu;
    // 0x18204c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18204cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182050: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x182050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182054: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x182054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182058: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x182058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18205c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18205cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182060: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x182060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182064: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x182064u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x182068: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x182068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x18206c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x18206cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x182070: 0x3012  mflo        $a2
    ctx->pc = 0x182070u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x182074: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x182074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x182078: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x182078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18207c: 0xc060a4c  jal         func_182930
    ctx->pc = 0x18207Cu;
    SET_GPR_U32(ctx, 31, 0x182084u);
    ctx->pc = 0x182930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182930u, 0x18207Cu, 0x182084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182084u;
label_182084:
    // 0x182084: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x182084u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182088: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x182088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18208c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18208cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x182090: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x182090u;
    {
        const bool branch_taken_0x182090 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x182090) {
            ctx->pc = 0x1820A4u;
            goto label_1820a4;
        }
    }
    ctx->pc = 0x182098u;
    // 0x182098: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x182098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18209c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x18209Cu;
    SET_GPR_U32(ctx, 31, 0x1820A4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x18209Cu, 0x1820A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1820A4u;
label_1820a4:
    // 0x1820a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1820a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1820a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1820a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1820ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1820acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1820b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1820B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1820B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1820B8u;
    // 0x1820b8: 0x0  nop
    ctx->pc = 0x1820b8u;
    // NOP
    // 0x1820bc: 0x0  nop
    ctx->pc = 0x1820bcu;
    // NOP
    ctx->pc = 0x1820c0u;
}
