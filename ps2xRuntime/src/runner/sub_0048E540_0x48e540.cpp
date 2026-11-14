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

// Function: sub_0048E540
// Address: 0x48e540 - 0x48e600
void sub_0048E540_0x48e540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E540_0x48e540");
#endif

    switch (ctx->pc) {
        case 0x48e560u: goto label_48e560;
        case 0x48e574u: goto label_48e574;
        case 0x48e594u: goto label_48e594;
        case 0x48e5a8u: goto label_48e5a8;
        case 0x48e5c4u: goto label_48e5c4;
        case 0x48e5e0u: goto label_48e5e0;
        default: break;
    }

    ctx->pc = 0x48e540u;

    // 0x48e540: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48e540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x48e544: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48e544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x48e548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48e548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48e54c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x48e54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x48e550: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x48e550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x48e554: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x48e554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e558: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x48E558u;
    {
        const bool branch_taken_0x48e558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e558) {
            ctx->pc = 0x48E5B4u;
            goto label_48e5b4;
        }
    }
    ctx->pc = 0x48E560u;
label_48e560:
    // 0x48e560: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x48e560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48e564: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x48e564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x48e568: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x48e568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e56c: 0xc04e51c  jal         func_139470
    ctx->pc = 0x48E56Cu;
    SET_GPR_U32(ctx, 31, 0x48E574u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x48E56Cu, 0x48E574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E574u;
label_48e574:
    // 0x48e574: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48e574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48e578: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x48E578u;
    {
        const bool branch_taken_0x48e578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e578) {
            ctx->pc = 0x48E5B0u;
            goto label_48e5b0;
        }
    }
    ctx->pc = 0x48E580u;
    // 0x48e580: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x48e580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48e584: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x48e584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x48e588: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x48e588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e58c: 0xc04e51c  jal         func_139470
    ctx->pc = 0x48E58Cu;
    SET_GPR_U32(ctx, 31, 0x48E594u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x48E58Cu, 0x48E594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E594u;
label_48e594:
    // 0x48e594: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x48e594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48e598: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x48e598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48e59c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x48e59cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48e5a0: 0xc123900  jal         func_48E400
    ctx->pc = 0x48E5A0u;
    SET_GPR_U32(ctx, 31, 0x48E5A8u);
    ctx->pc = 0x48E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E400u, 0x48E5A0u, 0x48E5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E5A8u;
label_48e5a8:
    // 0x48e5a8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x48E5A8u;
    {
        const bool branch_taken_0x48e5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e5a8) {
            ctx->pc = 0x48E5E4u;
            goto label_48e5e4;
        }
    }
    ctx->pc = 0x48E5B0u;
label_48e5b0:
    // 0x48e5b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x48e5b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_48e5b4:
    // 0x48e5b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x48e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48e5b8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x48e5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x48e5bc: 0xc04e50c  jal         func_139430
    ctx->pc = 0x48E5BCu;
    SET_GPR_U32(ctx, 31, 0x48E5C4u);
    ctx->pc = 0x139430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139430u, 0x48E5BCu, 0x48E5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E5C4u;
label_48e5c4:
    // 0x48e5c4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x48e5c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x48e5c8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x48E5C8u;
    {
        const bool branch_taken_0x48e5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48e5c8) {
            ctx->pc = 0x48E560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48e560;
        }
    }
    ctx->pc = 0x48E5D0u;
    // 0x48e5d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x48e5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48e5d4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x48e5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48e5d8: 0xc1238f0  jal         func_48E3C0
    ctx->pc = 0x48E5D8u;
    SET_GPR_U32(ctx, 31, 0x48E5E0u);
    ctx->pc = 0x48E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E3C0u, 0x48E5D8u, 0x48E5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E5E0u;
label_48e5e0:
    // 0x48e5e0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x48e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_48e5e4:
    // 0x48e5e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48e5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48e5e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48e5e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e5ec: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x48e5ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48e5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x48E5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E5F8u;
    // 0x48e5f8: 0x0  nop
    ctx->pc = 0x48e5f8u;
    // NOP
    // 0x48e5fc: 0x0  nop
    ctx->pc = 0x48e5fcu;
    // NOP
    ctx->pc = 0x48e600u;
}
