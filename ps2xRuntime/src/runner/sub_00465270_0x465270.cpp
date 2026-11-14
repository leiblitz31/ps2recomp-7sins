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

// Function: sub_00465270
// Address: 0x465270 - 0x465310
void sub_00465270_0x465270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465270_0x465270");
#endif

    switch (ctx->pc) {
        case 0x465294u: goto label_465294;
        case 0x4652a8u: goto label_4652a8;
        case 0x4652c4u: goto label_4652c4;
        default: break;
    }

    ctx->pc = 0x465270u;

    // 0x465270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x465270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x465274: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x465274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x465278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x465278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46527c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46527cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x465280: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x465280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x465284: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x465284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x465288: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x465288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46528c: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x46528Cu;
    SET_GPR_U32(ctx, 31, 0x465294u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x46528Cu, 0x465294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465294u;
label_465294:
    // 0x465294: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x465294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465298: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x465298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46529c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x46529cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4652a0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4652A0u;
    {
        const bool branch_taken_0x4652a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4652a0) {
            ctx->pc = 0x4652DCu;
            goto label_4652dc;
        }
    }
    ctx->pc = 0x4652A8u;
label_4652a8:
    // 0x4652a8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4652a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4652ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4652acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4652b0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x4652b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4652b4: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x4652b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x4652b8: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x4652b8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x4652bc: 0xc0bcda0  jal         func_2F3680
    ctx->pc = 0x4652BCu;
    SET_GPR_U32(ctx, 31, 0x4652C4u);
    ctx->pc = 0x2F3680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3680u, 0x4652BCu, 0x4652C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4652C4u;
label_4652c4:
    // 0x4652c4: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x4652c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x4652c8: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x4652c8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x4652cc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x4652ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4652d0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4652d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4652d4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x4652d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x4652d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4652d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4652dc:
    // 0x4652dc: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x4652dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4652e0: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x4652E0u;
    {
        const bool branch_taken_0x4652e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4652e0) {
            ctx->pc = 0x4652A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4652a8;
        }
    }
    ctx->pc = 0x4652E8u;
    // 0x4652e8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x4652e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4652ec: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4652ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4652f0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x4652f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x4652f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4652f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4652f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4652f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4652fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4652fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x465300: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x465300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x465304: 0x3e00008  jr          $ra
    ctx->pc = 0x465304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46530Cu;
    // 0x46530c: 0x0  nop
    ctx->pc = 0x46530cu;
    // NOP
    ctx->pc = 0x465310u;
}
