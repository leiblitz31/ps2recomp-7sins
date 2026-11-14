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

// Function: sub_001659A0
// Address: 0x1659a0 - 0x165a60
void sub_001659A0_0x1659a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001659A0_0x1659a0");
#endif

    switch (ctx->pc) {
        case 0x1659c8u: goto label_1659c8;
        case 0x1659d8u: goto label_1659d8;
        default: break;
    }

    ctx->pc = 0x1659a0u;

    // 0x1659a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1659a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1659a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1659a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1659a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1659a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1659ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1659acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1659b0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1659b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1659b4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1659b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1659b8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1659b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1659bc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1659bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1659c0: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x1659C0u;
    SET_GPR_U32(ctx, 31, 0x1659C8u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x1659C0u, 0x1659C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1659C8u;
label_1659c8:
    // 0x1659c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1659c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1659cc: 0x8fb00040  lw          $s0, 0x40($sp)
    ctx->pc = 0x1659ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1659d0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1659D0u;
    {
        const bool branch_taken_0x1659d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1659d0) {
            ctx->pc = 0x165A0Cu;
            goto label_165a0c;
        }
    }
    ctx->pc = 0x1659D8u;
label_1659d8:
    // 0x1659d8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1659d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1659dc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1659dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1659e0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1659e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1659e4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1659e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1659e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1659e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1659ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1659ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1659f0: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x1659f0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1659f4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1659f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1659f8: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x1659f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1659fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1659fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165a00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x165a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x165a04: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x165a04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x165a08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x165a08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_165a0c:
    // 0x165a0c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x165a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x165a10: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x165a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x165a14: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x165a14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x165a18: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x165A18u;
    {
        const bool branch_taken_0x165a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x165a18) {
            ctx->pc = 0x1659D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1659d8;
        }
    }
    ctx->pc = 0x165A20u;
    // 0x165a20: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x165a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165a24: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x165a24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x165a28: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x165a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165a2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x165a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x165a30: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x165a30u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x165a34: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x165a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165a38: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x165a38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x165a3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x165a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165a40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165a44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165a48: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x165a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x165a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x165A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165A54u;
    // 0x165a54: 0x0  nop
    ctx->pc = 0x165a54u;
    // NOP
    // 0x165a58: 0x0  nop
    ctx->pc = 0x165a58u;
    // NOP
    // 0x165a5c: 0x0  nop
    ctx->pc = 0x165a5cu;
    // NOP
    ctx->pc = 0x165a60u;
}
