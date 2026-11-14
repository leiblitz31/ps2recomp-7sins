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

// Function: sub_00232D50
// Address: 0x232d50 - 0x232df0
void sub_00232D50_0x232d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232D50_0x232d50");
#endif

    switch (ctx->pc) {
        case 0x232db4u: goto label_232db4;
        case 0x232dd4u: goto label_232dd4;
        default: break;
    }

    ctx->pc = 0x232d50u;

    // 0x232d50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x232d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x232d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x232d58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x232d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x232d5c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x232d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x232d60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x232d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232d64: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x232D64u;
    {
        const bool branch_taken_0x232d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232d64) {
            ctx->pc = 0x232DD4u;
            goto label_232dd4;
        }
    }
    ctx->pc = 0x232D6Cu;
    // 0x232d6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x232d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232d70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x232d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x232d74: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x232D74u;
    {
        const bool branch_taken_0x232d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232d74) {
            ctx->pc = 0x232DB4u;
            goto label_232db4;
        }
    }
    ctx->pc = 0x232D7Cu;
    // 0x232d7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x232d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232d80: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x232d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232d84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x232d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232d88: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x232d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x232d8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x232d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232d90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x232d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x232d94: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x232d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232d98: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x232d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x232d9c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x232d9cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x232da0: 0x3012  mflo        $a2
    ctx->pc = 0x232da0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x232da4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x232da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x232da8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x232da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x232dac: 0xc04df3c  jal         func_137CF0
    ctx->pc = 0x232DACu;
    SET_GPR_U32(ctx, 31, 0x232DB4u);
    ctx->pc = 0x137CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137CF0u, 0x232DACu, 0x232DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232DB4u;
label_232db4:
    // 0x232db4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x232db4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232db8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x232db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x232dbc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x232dbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x232dc0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x232DC0u;
    {
        const bool branch_taken_0x232dc0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x232dc0) {
            ctx->pc = 0x232DD4u;
            goto label_232dd4;
        }
    }
    ctx->pc = 0x232DC8u;
    // 0x232dc8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x232dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232dcc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x232DCCu;
    SET_GPR_U32(ctx, 31, 0x232DD4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x232DCCu, 0x232DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232DD4u;
label_232dd4:
    // 0x232dd4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x232dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232dd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232ddc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x232ddcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x232de0: 0x3e00008  jr          $ra
    ctx->pc = 0x232DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232DE8u;
    // 0x232de8: 0x0  nop
    ctx->pc = 0x232de8u;
    // NOP
    // 0x232dec: 0x0  nop
    ctx->pc = 0x232decu;
    // NOP
    ctx->pc = 0x232df0u;
}
