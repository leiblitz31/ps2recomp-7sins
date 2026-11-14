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

// Function: sub_0015BCB0
// Address: 0x15bcb0 - 0x15bd50
void sub_0015BCB0_0x15bcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BCB0_0x15bcb0");
#endif

    switch (ctx->pc) {
        case 0x15bd14u: goto label_15bd14;
        case 0x15bd34u: goto label_15bd34;
        default: break;
    }

    ctx->pc = 0x15bcb0u;

    // 0x15bcb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15bcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15bcb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15bcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15bcb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x15bcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15bcbc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x15bcbcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x15bcc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bcc4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x15BCC4u;
    {
        const bool branch_taken_0x15bcc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bcc4) {
            ctx->pc = 0x15BD34u;
            goto label_15bd34;
        }
    }
    ctx->pc = 0x15BCCCu;
    // 0x15bccc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bcd0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15bcd4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15BCD4u;
    {
        const bool branch_taken_0x15bcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bcd4) {
            ctx->pc = 0x15BD14u;
            goto label_15bd14;
        }
    }
    ctx->pc = 0x15BCDCu;
    // 0x15bcdc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15bcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bce0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x15bce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bce4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bce8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x15bce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15bcec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bcf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15bcf4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x15bcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15bcf8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x15bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15bcfc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x15bcfcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15bd00: 0x3012  mflo        $a2
    ctx->pc = 0x15bd00u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x15bd04: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x15bd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x15bd08: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x15bd08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15bd0c: 0xc058b3c  jal         func_162CF0
    ctx->pc = 0x15BD0Cu;
    SET_GPR_U32(ctx, 31, 0x15BD14u);
    ctx->pc = 0x162CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162CF0u, 0x15BD0Cu, 0x15BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BD14u;
label_15bd14:
    // 0x15bd14: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x15bd14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bd18: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15bd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15bd1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15bd1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15bd20: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BD20u;
    {
        const bool branch_taken_0x15bd20 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15bd20) {
            ctx->pc = 0x15BD34u;
            goto label_15bd34;
        }
    }
    ctx->pc = 0x15BD28u;
    // 0x15bd28: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15bd28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bd2c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x15BD2Cu;
    SET_GPR_U32(ctx, 31, 0x15BD34u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x15BD2Cu, 0x15BD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BD34u;
label_15bd34:
    // 0x15bd34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bd38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15bd38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bd3c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15bd3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15bd40: 0x3e00008  jr          $ra
    ctx->pc = 0x15BD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BD40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BD48u;
    // 0x15bd48: 0x0  nop
    ctx->pc = 0x15bd48u;
    // NOP
    // 0x15bd4c: 0x0  nop
    ctx->pc = 0x15bd4cu;
    // NOP
    ctx->pc = 0x15bd50u;
}
