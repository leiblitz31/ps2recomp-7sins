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

// Function: sub_00234EE0
// Address: 0x234ee0 - 0x234f80
void sub_00234EE0_0x234ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234EE0_0x234ee0");
#endif

    switch (ctx->pc) {
        case 0x234f44u: goto label_234f44;
        case 0x234f64u: goto label_234f64;
        default: break;
    }

    ctx->pc = 0x234ee0u;

    // 0x234ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x234ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x234ee8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x234ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x234eec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x234eecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x234ef0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x234ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234ef4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x234EF4u;
    {
        const bool branch_taken_0x234ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234ef4) {
            ctx->pc = 0x234F64u;
            goto label_234f64;
        }
    }
    ctx->pc = 0x234EFCu;
    // 0x234efc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x234efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234f00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x234f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x234f04: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x234F04u;
    {
        const bool branch_taken_0x234f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234f04) {
            ctx->pc = 0x234F44u;
            goto label_234f44;
        }
    }
    ctx->pc = 0x234F0Cu;
    // 0x234f0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x234f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234f10: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x234f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234f14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x234f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234f18: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x234f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x234f1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x234f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234f20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x234f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x234f24: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x234f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x234f28: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x234f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x234f2c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x234f2cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x234f30: 0x3012  mflo        $a2
    ctx->pc = 0x234f30u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x234f34: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x234f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x234f38: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x234f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x234f3c: 0xc0519ac  jal         func_1466B0
    ctx->pc = 0x234F3Cu;
    SET_GPR_U32(ctx, 31, 0x234F44u);
    ctx->pc = 0x1466B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1466B0u, 0x234F3Cu, 0x234F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234F44u;
label_234f44:
    // 0x234f44: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x234f44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234f48: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x234f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x234f4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x234f4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x234f50: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x234F50u;
    {
        const bool branch_taken_0x234f50 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x234f50) {
            ctx->pc = 0x234F64u;
            goto label_234f64;
        }
    }
    ctx->pc = 0x234F58u;
    // 0x234f58: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x234f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234f5c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x234F5Cu;
    SET_GPR_U32(ctx, 31, 0x234F64u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x234F5Cu, 0x234F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234F64u;
label_234f64:
    // 0x234f64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x234f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234f6c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x234f6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x234f70: 0x3e00008  jr          $ra
    ctx->pc = 0x234F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234F78u;
    // 0x234f78: 0x0  nop
    ctx->pc = 0x234f78u;
    // NOP
    // 0x234f7c: 0x0  nop
    ctx->pc = 0x234f7cu;
    // NOP
    ctx->pc = 0x234f80u;
}
