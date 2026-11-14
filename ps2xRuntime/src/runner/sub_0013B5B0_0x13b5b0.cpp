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

// Function: sub_0013B5B0
// Address: 0x13b5b0 - 0x13b620
void sub_0013B5B0_0x13b5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B5B0_0x13b5b0");
#endif

    switch (ctx->pc) {
        case 0x13b5b0u: goto label_13b5b0;
        case 0x13b5b4u: goto label_13b5b4;
        case 0x13b5b8u: goto label_13b5b8;
        case 0x13b5bcu: goto label_13b5bc;
        case 0x13b5c0u: goto label_13b5c0;
        case 0x13b5c4u: goto label_13b5c4;
        case 0x13b5c8u: goto label_13b5c8;
        case 0x13b5ccu: goto label_13b5cc;
        case 0x13b5d0u: goto label_13b5d0;
        case 0x13b5d4u: goto label_13b5d4;
        case 0x13b5d8u: goto label_13b5d8;
        case 0x13b5dcu: goto label_13b5dc;
        case 0x13b5e0u: goto label_13b5e0;
        case 0x13b5e4u: goto label_13b5e4;
        case 0x13b5e8u: goto label_13b5e8;
        case 0x13b5ecu: goto label_13b5ec;
        case 0x13b5f0u: goto label_13b5f0;
        case 0x13b5f4u: goto label_13b5f4;
        case 0x13b5f8u: goto label_13b5f8;
        case 0x13b5fcu: goto label_13b5fc;
        case 0x13b600u: goto label_13b600;
        case 0x13b604u: goto label_13b604;
        case 0x13b608u: goto label_13b608;
        case 0x13b60cu: goto label_13b60c;
        case 0x13b610u: goto label_13b610;
        case 0x13b614u: goto label_13b614;
        case 0x13b618u: goto label_13b618;
        case 0x13b61cu: goto label_13b61c;
        default: break;
    }

    ctx->pc = 0x13b5b0u;

label_13b5b0:
    // 0x13b5b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13b5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_13b5b4:
    // 0x13b5b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13b5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13b5b8:
    // 0x13b5b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13b5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13b5bc:
    // 0x13b5bc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x13b5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_13b5c0:
    // 0x13b5c0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x13b5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_13b5c4:
    // 0x13b5c4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x13b5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13b5c8:
    // 0x13b5c8: 0xc041b38  jal         func_106CE0
label_13b5cc:
    if (ctx->pc == 0x13B5CCu) {
        ctx->pc = 0x13B5D0u;
        goto label_13b5d0;
    }
    ctx->pc = 0x13B5C8u;
    SET_GPR_U32(ctx, 31, 0x13B5D0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x13B5C8u, 0x13B5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B5D0u;
label_13b5d0:
    // 0x13b5d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13b5d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13b5d4:
    // 0x13b5d4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x13b5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_13b5d8:
    // 0x13b5d8: 0xc041b38  jal         func_106CE0
label_13b5dc:
    if (ctx->pc == 0x13B5DCu) {
        ctx->pc = 0x13B5E0u;
        goto label_13b5e0;
    }
    ctx->pc = 0x13B5D8u;
    SET_GPR_U32(ctx, 31, 0x13B5E0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x13B5D8u, 0x13B5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B5E0u;
label_13b5e0:
    // 0x13b5e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13b5e4:
    // 0x13b5e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13b5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13b5e8:
    // 0x13b5e8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x13b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_13b5ec:
    // 0x13b5ec: 0x8c42e968  lw          $v0, -0x1698($v0)
    ctx->pc = 0x13b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961512)));
label_13b5f0:
    // 0x13b5f0: 0x40f809  jalr        $v0
label_13b5f4:
    if (ctx->pc == 0x13B5F4u) {
        ctx->pc = 0x13B5F8u;
        goto label_13b5f8;
    }
    ctx->pc = 0x13B5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13B5F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B5F0u, 0x13B5F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13B5F8u;
label_13b5f8:
    // 0x13b5f8: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x13b5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_13b5fc:
    // 0x13b5fc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x13b5fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_13b600:
    // 0x13b600: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13b600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13b604:
    // 0x13b604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13b608:
    // 0x13b608: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x13b608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13b60c:
    // 0x13b60c: 0x3e00008  jr          $ra
label_13b610:
    if (ctx->pc == 0x13B610u) {
        ctx->pc = 0x13B614u;
        goto label_13b614;
    }
    ctx->pc = 0x13B60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B614u;
label_13b614:
    // 0x13b614: 0x0  nop
    ctx->pc = 0x13b614u;
    // NOP
label_13b618:
    // 0x13b618: 0x0  nop
    ctx->pc = 0x13b618u;
    // NOP
label_13b61c:
    // 0x13b61c: 0x0  nop
    ctx->pc = 0x13b61cu;
    // NOP
    ctx->pc = 0x13b620u;
}
