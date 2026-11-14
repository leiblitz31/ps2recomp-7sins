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

// Function: sub_002BD980
// Address: 0x2bd980 - 0x2bda20
void sub_002BD980_0x2bd980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD980_0x2bd980");
#endif

    switch (ctx->pc) {
        case 0x2bd9e4u: goto label_2bd9e4;
        case 0x2bda04u: goto label_2bda04;
        default: break;
    }

    ctx->pc = 0x2bd980u;

    // 0x2bd980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bd980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bd984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bd984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bd988: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bd988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2bd98c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2bd98cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2bd990: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bd990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd994: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2BD994u;
    {
        const bool branch_taken_0x2bd994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd994) {
            ctx->pc = 0x2BDA04u;
            goto label_2bda04;
        }
    }
    ctx->pc = 0x2BD99Cu;
    // 0x2bd99c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bd99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd9a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bd9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bd9a4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2BD9A4u;
    {
        const bool branch_taken_0x2bd9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd9a4) {
            ctx->pc = 0x2BD9E4u;
            goto label_2bd9e4;
        }
    }
    ctx->pc = 0x2BD9ACu;
    // 0x2bd9ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bd9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd9b0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2bd9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd9b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bd9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd9b8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2bd9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bd9bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bd9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd9c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bd9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bd9c4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2bd9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bd9c8: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x2bd9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x2bd9cc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2bd9ccu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2bd9d0: 0x3012  mflo        $a2
    ctx->pc = 0x2bd9d0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2bd9d4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2bd9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2bd9d8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2bd9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bd9dc: 0xc0b2a3c  jal         func_2CA8F0
    ctx->pc = 0x2BD9DCu;
    SET_GPR_U32(ctx, 31, 0x2BD9E4u);
    ctx->pc = 0x2CA8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA8F0u, 0x2BD9DCu, 0x2BD9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD9E4u;
label_2bd9e4:
    // 0x2bd9e4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2bd9e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd9e8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2bd9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2bd9ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bd9ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bd9f0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD9F0u;
    {
        const bool branch_taken_0x2bd9f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bd9f0) {
            ctx->pc = 0x2BDA04u;
            goto label_2bda04;
        }
    }
    ctx->pc = 0x2BD9F8u;
    // 0x2bd9f8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bd9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd9fc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2BD9FCu;
    SET_GPR_U32(ctx, 31, 0x2BDA04u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2BD9FCu, 0x2BDA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDA04u;
label_2bda04:
    // 0x2bda04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bda04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bda08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bda08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bda0c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2bda0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bda10: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDA18u;
    // 0x2bda18: 0x0  nop
    ctx->pc = 0x2bda18u;
    // NOP
    // 0x2bda1c: 0x0  nop
    ctx->pc = 0x2bda1cu;
    // NOP
    ctx->pc = 0x2bda20u;
}
