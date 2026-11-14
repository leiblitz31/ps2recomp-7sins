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

// Function: sub_002BC1E0
// Address: 0x2bc1e0 - 0x2bc290
void sub_002BC1E0_0x2bc1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC1E0_0x2bc1e0");
#endif

    switch (ctx->pc) {
        case 0x2bc220u: goto label_2bc220;
        case 0x2bc234u: goto label_2bc234;
        case 0x2bc258u: goto label_2bc258;
        case 0x2bc280u: goto label_2bc280;
        default: break;
    }

    ctx->pc = 0x2bc1e0u;

    // 0x2bc1e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2bc1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2bc1e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bc1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bc1e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bc1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2bc1ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2bc1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2bc1f0: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x2bc1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
    // 0x2bc1f4: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x2bc1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x2bc1f8: 0xa3a80050  sb          $t0, 0x50($sp)
    ctx->pc = 0x2bc1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 8));
    // 0x2bc1fc: 0xa3a90060  sb          $t1, 0x60($sp)
    ctx->pc = 0x2bc1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 9));
    // 0x2bc200: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2bc200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc204: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2bc204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2bc208: 0x1003001d  beq         $zero, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2BC208u;
    {
        const bool branch_taken_0x2bc208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x2bc208) {
            ctx->pc = 0x2BC280u;
            goto label_2bc280;
        }
    }
    ctx->pc = 0x2BC210u;
    // 0x2bc210: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2bc210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc214: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2bc214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bc218: 0xc048094  jal         func_120250
    ctx->pc = 0x2BC218u;
    SET_GPR_U32(ctx, 31, 0x2BC220u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2BC218u, 0x2BC220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC220u;
label_2bc220:
    // 0x2bc220: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bc220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc224: 0x2405047b  addiu       $a1, $zero, 0x47B
    ctx->pc = 0x2bc224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1147));
    // 0x2bc228: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bc228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc22c: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x2BC22Cu;
    SET_GPR_U32(ctx, 31, 0x2BC234u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2BC22Cu, 0x2BC234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC234u;
label_2bc234:
    // 0x2bc234: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BC234u;
    {
        const bool branch_taken_0x2bc234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc234) {
            ctx->pc = 0x2BC260u;
            goto label_2bc260;
        }
    }
    ctx->pc = 0x2BC23Cu;
    // 0x2bc23c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bc23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc240: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2bc240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc244: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2bc244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bc248: 0x93a70050  lbu         $a3, 0x50($sp)
    ctx->pc = 0x2bc248u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bc24c: 0x93a80060  lbu         $t0, 0x60($sp)
    ctx->pc = 0x2bc24cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bc250: 0xc0af204  jal         func_2BC810
    ctx->pc = 0x2BC250u;
    SET_GPR_U32(ctx, 31, 0x2BC258u);
    ctx->pc = 0x2BC810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC810u, 0x2BC250u, 0x2BC258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC258u;
label_2bc258:
    // 0x2bc258: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2BC258u;
    {
        const bool branch_taken_0x2bc258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc258) {
            ctx->pc = 0x2BC280u;
            goto label_2bc280;
        }
    }
    ctx->pc = 0x2BC260u;
label_2bc260:
    // 0x2bc260: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bc260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc264: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2bc264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc268: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x2bc268u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bc26c: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x2bc26cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bc270: 0x93a80050  lbu         $t0, 0x50($sp)
    ctx->pc = 0x2bc270u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bc274: 0x93a90060  lbu         $t1, 0x60($sp)
    ctx->pc = 0x2bc274u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bc278: 0xc0af0a4  jal         func_2BC290
    ctx->pc = 0x2BC278u;
    SET_GPR_U32(ctx, 31, 0x2BC280u);
    ctx->pc = 0x2BC290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC290u, 0x2BC278u, 0x2BC280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC280u;
label_2bc280:
    // 0x2bc280: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bc280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc284: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2bc284u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2bc288: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC290u;
}
