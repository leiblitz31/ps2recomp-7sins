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

// Function: sub_00208020
// Address: 0x208020 - 0x2080c0
void sub_00208020_0x208020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208020_0x208020");
#endif

    switch (ctx->pc) {
        case 0x208084u: goto label_208084;
        case 0x2080a4u: goto label_2080a4;
        default: break;
    }

    ctx->pc = 0x208020u;

    // 0x208020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x208020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x208024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208028: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x208028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x20802c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x20802cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x208030: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x208030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208034: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x208034u;
    {
        const bool branch_taken_0x208034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208034) {
            ctx->pc = 0x2080A4u;
            goto label_2080a4;
        }
    }
    ctx->pc = 0x20803Cu;
    // 0x20803c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x20803cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208040: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x208040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x208044: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x208044u;
    {
        const bool branch_taken_0x208044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208044) {
            ctx->pc = 0x208084u;
            goto label_208084;
        }
    }
    ctx->pc = 0x20804Cu;
    // 0x20804c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x20804cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208050: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x208050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208054: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x208054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208058: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x208058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20805c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x20805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208060: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x208060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x208064: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x208064u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208068: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x208068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x20806c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x20806cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x208070: 0x3012  mflo        $a2
    ctx->pc = 0x208070u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x208074: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x208074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x208078: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x208078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20807c: 0xc084040  jal         func_210100
    ctx->pc = 0x20807Cu;
    SET_GPR_U32(ctx, 31, 0x208084u);
    ctx->pc = 0x210100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210100u, 0x20807Cu, 0x208084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208084u;
label_208084:
    // 0x208084: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x208084u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208088: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x208088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20808c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20808cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x208090: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x208090u;
    {
        const bool branch_taken_0x208090 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x208090) {
            ctx->pc = 0x2080A4u;
            goto label_2080a4;
        }
    }
    ctx->pc = 0x208098u;
    // 0x208098: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x208098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20809c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x20809Cu;
    SET_GPR_U32(ctx, 31, 0x2080A4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x20809Cu, 0x2080A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2080A4u;
label_2080a4:
    // 0x2080a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2080a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2080a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2080a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2080ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2080acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2080b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2080B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2080B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2080B8u;
    // 0x2080b8: 0x0  nop
    ctx->pc = 0x2080b8u;
    // NOP
    // 0x2080bc: 0x0  nop
    ctx->pc = 0x2080bcu;
    // NOP
    ctx->pc = 0x2080c0u;
}
