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

// Function: sub_00123350
// Address: 0x123350 - 0x1233f0
void sub_00123350_0x123350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123350_0x123350");
#endif

    switch (ctx->pc) {
        case 0x1233b4u: goto label_1233b4;
        case 0x1233d4u: goto label_1233d4;
        default: break;
    }

    ctx->pc = 0x123350u;

    // 0x123350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x123350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x123354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x123358: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x123358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12335c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x12335cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x123360: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x123360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123364: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x123364u;
    {
        const bool branch_taken_0x123364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123364) {
            ctx->pc = 0x1233D4u;
            goto label_1233d4;
        }
    }
    ctx->pc = 0x12336Cu;
    // 0x12336c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12336cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123370: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x123370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x123374: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x123374u;
    {
        const bool branch_taken_0x123374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123374) {
            ctx->pc = 0x1233B4u;
            goto label_1233b4;
        }
    }
    ctx->pc = 0x12337Cu;
    // 0x12337c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12337cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123380: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x123380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123384: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x123384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123388: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x123388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12338c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12338cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123390: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x123390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x123394: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x123394u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x123398: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x123398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12339c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x12339cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1233a0: 0x3012  mflo        $a2
    ctx->pc = 0x1233a0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1233a4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1233a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1233a8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1233a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1233ac: 0xc04aaf0  jal         func_12ABC0
    ctx->pc = 0x1233ACu;
    SET_GPR_U32(ctx, 31, 0x1233B4u);
    ctx->pc = 0x12ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ABC0u, 0x1233ACu, 0x1233B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1233B4u;
label_1233b4:
    // 0x1233b4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1233b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1233b8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1233b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1233bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1233bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1233c0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1233C0u;
    {
        const bool branch_taken_0x1233c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1233c0) {
            ctx->pc = 0x1233D4u;
            goto label_1233d4;
        }
    }
    ctx->pc = 0x1233C8u;
    // 0x1233c8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1233c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1233cc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1233CCu;
    SET_GPR_U32(ctx, 31, 0x1233D4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1233CCu, 0x1233D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1233D4u;
label_1233d4:
    // 0x1233d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1233d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1233d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1233d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1233dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1233dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1233e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1233E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1233E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1233E8u;
    // 0x1233e8: 0x0  nop
    ctx->pc = 0x1233e8u;
    // NOP
    // 0x1233ec: 0x0  nop
    ctx->pc = 0x1233ecu;
    // NOP
    ctx->pc = 0x1233f0u;
}
