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

// Function: sub_001D3660
// Address: 0x1d3660 - 0x1d36f0
void sub_001D3660_0x1d3660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3660_0x1d3660");
#endif

    switch (ctx->pc) {
        case 0x1d3688u: goto label_1d3688;
        case 0x1d3698u: goto label_1d3698;
        case 0x1d36a0u: goto label_1d36a0;
        case 0x1d36bcu: goto label_1d36bc;
        default: break;
    }

    ctx->pc = 0x1d3660u;

    // 0x1d3660: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d3660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d3664: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d3664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d3668: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d3668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d366c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d366cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d3670: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d3670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d3674: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1d3674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1d3678: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d3678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d367c: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x1d367cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1d3680: 0xc05611c  jal         func_158470
    ctx->pc = 0x1D3680u;
    SET_GPR_U32(ctx, 31, 0x1D3688u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1D3680u, 0x1D3688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3688u;
label_1d3688:
    // 0x1d3688: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d3688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d368c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d368cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3690: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D3690u;
    {
        const bool branch_taken_0x1d3690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3690) {
            ctx->pc = 0x1D36C4u;
            goto label_1d36c4;
        }
    }
    ctx->pc = 0x1D3698u;
label_1d3698:
    // 0x1d3698: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1D3698u;
    SET_GPR_U32(ctx, 31, 0x1D36A0u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1D3698u, 0x1D36A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D36A0u;
label_1d36a0:
    // 0x1d36a0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d36a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d36a4: 0x30520003  andi        $s2, $v0, 0x3
    ctx->pc = 0x1d36a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1d36a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d36a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d36ac: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x1d36acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1d36b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d36b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36b4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1D36B4u;
    SET_GPR_U32(ctx, 31, 0x1D36BCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1D36B4u, 0x1D36BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D36BCu;
label_1d36bc:
    // 0x1d36bc: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1d36bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1d36c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d36c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d36c4:
    // 0x1d36c4: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x1d36c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1d36c8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D36C8u;
    {
        const bool branch_taken_0x1d36c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d36c8) {
            ctx->pc = 0x1D3698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3698;
        }
    }
    ctx->pc = 0x1D36D0u;
    // 0x1d36d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d36d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d36d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d36d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d36d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d36d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d36dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d36dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d36e0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1d36e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d36e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D36E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D36E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D36ECu;
    // 0x1d36ec: 0x0  nop
    ctx->pc = 0x1d36ecu;
    // NOP
    ctx->pc = 0x1d36f0u;
}
