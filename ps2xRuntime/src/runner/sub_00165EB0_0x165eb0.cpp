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

// Function: sub_00165EB0
// Address: 0x165eb0 - 0x165f50
void sub_00165EB0_0x165eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165EB0_0x165eb0");
#endif

    switch (ctx->pc) {
        case 0x165f14u: goto label_165f14;
        case 0x165f34u: goto label_165f34;
        default: break;
    }

    ctx->pc = 0x165eb0u;

    // 0x165eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x165eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x165eb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165eb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x165eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x165ebc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x165ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x165ec0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x165ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165ec4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x165EC4u;
    {
        const bool branch_taken_0x165ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165ec4) {
            ctx->pc = 0x165F34u;
            goto label_165f34;
        }
    }
    ctx->pc = 0x165ECCu;
    // 0x165ecc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x165eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165ed0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x165ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165ed4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x165ED4u;
    {
        const bool branch_taken_0x165ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165ed4) {
            ctx->pc = 0x165F14u;
            goto label_165f14;
        }
    }
    ctx->pc = 0x165EDCu;
    // 0x165edc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x165edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165ee0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x165ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165ee4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x165ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165ee8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x165ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x165eec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x165eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165ef0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x165ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165ef4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x165ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x165ef8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x165ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x165efc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x165efcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x165f00: 0x3012  mflo        $a2
    ctx->pc = 0x165f00u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x165f04: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x165f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x165f08: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x165f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x165f0c: 0xc059d0c  jal         func_167430
    ctx->pc = 0x165F0Cu;
    SET_GPR_U32(ctx, 31, 0x165F14u);
    ctx->pc = 0x167430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167430u, 0x165F0Cu, 0x165F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165F14u;
label_165f14:
    // 0x165f14: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x165f14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165f18: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x165f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x165f1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x165f1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x165f20: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165F20u;
    {
        const bool branch_taken_0x165f20 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x165f20) {
            ctx->pc = 0x165F34u;
            goto label_165f34;
        }
    }
    ctx->pc = 0x165F28u;
    // 0x165f28: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x165f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165f2c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x165F2Cu;
    SET_GPR_U32(ctx, 31, 0x165F34u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x165F2Cu, 0x165F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165F34u;
label_165f34:
    // 0x165f34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x165f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165f38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165f3c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x165f3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x165f40: 0x3e00008  jr          $ra
    ctx->pc = 0x165F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165F48u;
    // 0x165f48: 0x0  nop
    ctx->pc = 0x165f48u;
    // NOP
    // 0x165f4c: 0x0  nop
    ctx->pc = 0x165f4cu;
    // NOP
    ctx->pc = 0x165f50u;
}
