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

// Function: sub_0027F050
// Address: 0x27f050 - 0x27f0d0
void sub_0027F050_0x27f050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F050_0x27f050");
#endif

    switch (ctx->pc) {
        case 0x27f078u: goto label_27f078;
        case 0x27f084u: goto label_27f084;
        case 0x27f098u: goto label_27f098;
        default: break;
    }

    ctx->pc = 0x27f050u;

    // 0x27f050: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27f050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27f054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27f054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27f058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27f058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27f05c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x27f05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x27f060: 0xa3a50040  sb          $a1, 0x40($sp)
    ctx->pc = 0x27f060u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 5));
    // 0x27f064: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x27f064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27f068: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x27f068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x27f06c: 0x24a5d3b8  addiu       $a1, $a1, -0x2C48
    ctx->pc = 0x27f06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955960));
    // 0x27f070: 0xc040304  jal         func_100C10
    ctx->pc = 0x27F070u;
    SET_GPR_U32(ctx, 31, 0x27F078u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x27F070u, 0x27F078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F078u;
label_27f078:
    // 0x27f078: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x27f078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27f07c: 0xc1163b8  jal         func_458EE0
    ctx->pc = 0x27F07Cu;
    SET_GPR_U32(ctx, 31, 0x27F084u);
    ctx->pc = 0x458EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458EE0u, 0x27F07Cu, 0x27F084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F084u;
label_27f084:
    // 0x27f084: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27f084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f088: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x27f088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27f08c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27f08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27f090: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x27F090u;
    SET_GPR_U32(ctx, 31, 0x27F098u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x27F090u, 0x27F098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F098u;
label_27f098:
    // 0x27f098: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27F098u;
    {
        const bool branch_taken_0x27f098 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f098) {
            ctx->pc = 0x27F0B8u;
            goto label_27f0b8;
        }
    }
    ctx->pc = 0x27F0A0u;
    // 0x27f0a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27f0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f0a4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x27f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f0a8: 0xa0640064  sb          $a0, 0x64($v1)
    ctx->pc = 0x27f0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 100), (uint8_t)GPR_U32(ctx, 4));
    // 0x27f0ac: 0x93a40040  lbu         $a0, 0x40($sp)
    ctx->pc = 0x27f0acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27f0b0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x27f0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f0b4: 0xa0640065  sb          $a0, 0x65($v1)
    ctx->pc = 0x27f0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 101), (uint8_t)GPR_U32(ctx, 4));
label_27f0b8:
    // 0x27f0b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27f0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f0bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27f0bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f0c0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x27f0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27f0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x27F0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F0CCu;
    // 0x27f0cc: 0x0  nop
    ctx->pc = 0x27f0ccu;
    // NOP
    ctx->pc = 0x27f0d0u;
}
