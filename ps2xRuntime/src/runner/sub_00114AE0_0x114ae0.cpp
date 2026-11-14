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

// Function: sub_00114AE0
// Address: 0x114ae0 - 0x114b80
void sub_00114AE0_0x114ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114AE0_0x114ae0");
#endif

    switch (ctx->pc) {
        case 0x114b44u: goto label_114b44;
        case 0x114b64u: goto label_114b64;
        default: break;
    }

    ctx->pc = 0x114ae0u;

    // 0x114ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x114ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x114ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114ae8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x114ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x114aec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x114aecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x114af0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x114af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114af4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x114AF4u;
    {
        const bool branch_taken_0x114af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114af4) {
            ctx->pc = 0x114B64u;
            goto label_114b64;
        }
    }
    ctx->pc = 0x114AFCu;
    // 0x114afc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x114afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114b00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x114b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114b04: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x114B04u;
    {
        const bool branch_taken_0x114b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114b04) {
            ctx->pc = 0x114B44u;
            goto label_114b44;
        }
    }
    ctx->pc = 0x114B0Cu;
    // 0x114b0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x114b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114b10: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x114b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114b14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x114b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114b18: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x114b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x114b1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x114b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114b20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x114b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114b24: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x114b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x114b28: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x114b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x114b2c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x114b2cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x114b30: 0x3012  mflo        $a2
    ctx->pc = 0x114b30u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x114b34: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x114b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x114b38: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x114b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x114b3c: 0xc0459f4  jal         func_1167D0
    ctx->pc = 0x114B3Cu;
    SET_GPR_U32(ctx, 31, 0x114B44u);
    ctx->pc = 0x1167D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1167D0u, 0x114B3Cu, 0x114B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114B44u;
label_114b44:
    // 0x114b44: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x114b44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114b48: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x114b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x114b4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x114b4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x114b50: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114B50u;
    {
        const bool branch_taken_0x114b50 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x114b50) {
            ctx->pc = 0x114B64u;
            goto label_114b64;
        }
    }
    ctx->pc = 0x114B58u;
    // 0x114b58: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x114b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114b5c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x114B5Cu;
    SET_GPR_U32(ctx, 31, 0x114B64u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x114B5Cu, 0x114B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114B64u;
label_114b64:
    // 0x114b64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x114b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114b6c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x114b6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114b70: 0x3e00008  jr          $ra
    ctx->pc = 0x114B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114B78u;
    // 0x114b78: 0x0  nop
    ctx->pc = 0x114b78u;
    // NOP
    // 0x114b7c: 0x0  nop
    ctx->pc = 0x114b7cu;
    // NOP
    ctx->pc = 0x114b80u;
}
