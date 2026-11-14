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

// Function: sub_00194E50
// Address: 0x194e50 - 0x194ef0
void sub_00194E50_0x194e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194E50_0x194e50");
#endif

    switch (ctx->pc) {
        case 0x194eb4u: goto label_194eb4;
        case 0x194ed4u: goto label_194ed4;
        default: break;
    }

    ctx->pc = 0x194e50u;

    // 0x194e50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x194e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x194e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194e58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x194e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x194e5c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x194e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x194e60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194e64: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x194E64u;
    {
        const bool branch_taken_0x194e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194e64) {
            ctx->pc = 0x194ED4u;
            goto label_194ed4;
        }
    }
    ctx->pc = 0x194E6Cu;
    // 0x194e6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194e70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x194e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194e74: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x194E74u;
    {
        const bool branch_taken_0x194e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194e74) {
            ctx->pc = 0x194EB4u;
            goto label_194eb4;
        }
    }
    ctx->pc = 0x194E7Cu;
    // 0x194e7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x194e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194e80: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x194e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194e84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194e88: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x194e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x194e8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194e90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x194e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194e94: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x194e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194e98: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x194e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x194e9c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x194e9cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x194ea0: 0x3012  mflo        $a2
    ctx->pc = 0x194ea0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x194ea4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x194ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x194ea8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x194ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x194eac: 0xc06732c  jal         func_19CCB0
    ctx->pc = 0x194EACu;
    SET_GPR_U32(ctx, 31, 0x194EB4u);
    ctx->pc = 0x19CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CCB0u, 0x194EACu, 0x194EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194EB4u;
label_194eb4:
    // 0x194eb4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x194eb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194eb8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x194eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x194ebc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x194ebcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x194ec0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194EC0u;
    {
        const bool branch_taken_0x194ec0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x194ec0) {
            ctx->pc = 0x194ED4u;
            goto label_194ed4;
        }
    }
    ctx->pc = 0x194EC8u;
    // 0x194ec8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x194ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194ecc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x194ECCu;
    SET_GPR_U32(ctx, 31, 0x194ED4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x194ECCu, 0x194ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194ED4u;
label_194ed4:
    // 0x194ed4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194ed8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194edc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x194edcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x194ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x194EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194EE8u;
    // 0x194ee8: 0x0  nop
    ctx->pc = 0x194ee8u;
    // NOP
    // 0x194eec: 0x0  nop
    ctx->pc = 0x194eecu;
    // NOP
    ctx->pc = 0x194ef0u;
}
