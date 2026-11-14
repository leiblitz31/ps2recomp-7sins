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

// Function: sub_0011E120
// Address: 0x11e120 - 0x11e1d0
void sub_0011E120_0x11e120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E120_0x11e120");
#endif

    switch (ctx->pc) {
        case 0x11e148u: goto label_11e148;
        case 0x11e158u: goto label_11e158;
        default: break;
    }

    ctx->pc = 0x11e120u;

    // 0x11e120: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11e120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11e124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11e124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11e128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11e128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11e12c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11e12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11e130: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x11e130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x11e134: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x11e134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x11e138: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x11e138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x11e13c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x11e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e140: 0xc042514  jal         func_109450
    ctx->pc = 0x11E140u;
    SET_GPR_U32(ctx, 31, 0x11E148u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x11E140u, 0x11E148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E148u;
label_11e148:
    // 0x11e148: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11e148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e14c: 0x8fb00040  lw          $s0, 0x40($sp)
    ctx->pc = 0x11e14cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11e150: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11E150u;
    {
        const bool branch_taken_0x11e150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e150) {
            ctx->pc = 0x11E184u;
            goto label_11e184;
        }
    }
    ctx->pc = 0x11E158u;
label_11e158:
    // 0x11e158: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x11e158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e15c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x11e15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11e160: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x11e160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x11e164: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11e164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e168: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11e168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11e16c: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x11e16cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11e170: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x11e170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e174: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x11e174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11e178: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x11e178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x11e17c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x11e17cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x11e180: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11e180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_11e184:
    // 0x11e184: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x11e184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11e188: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x11e188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x11e18c: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x11e18cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x11e190: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x11E190u;
    {
        const bool branch_taken_0x11e190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e190) {
            ctx->pc = 0x11E158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e158;
        }
    }
    ctx->pc = 0x11E198u;
    // 0x11e198: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x11e198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e19c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x11e19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11e1a0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x11e1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x11e1a4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x11e1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x11e1a8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x11e1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e1ac: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x11e1acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x11e1b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11e1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e1b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11e1b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e1b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11e1b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e1bc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x11e1bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11e1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x11E1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E1C8u;
    // 0x11e1c8: 0x0  nop
    ctx->pc = 0x11e1c8u;
    // NOP
    // 0x11e1cc: 0x0  nop
    ctx->pc = 0x11e1ccu;
    // NOP
    ctx->pc = 0x11e1d0u;
}
