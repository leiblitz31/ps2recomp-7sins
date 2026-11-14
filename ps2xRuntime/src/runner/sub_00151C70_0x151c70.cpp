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

// Function: sub_00151C70
// Address: 0x151c70 - 0x151d40
void sub_00151C70_0x151c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151C70_0x151c70");
#endif

    switch (ctx->pc) {
        case 0x151c94u: goto label_151c94;
        case 0x151ca8u: goto label_151ca8;
        case 0x151cb8u: goto label_151cb8;
        case 0x151cd0u: goto label_151cd0;
        case 0x151cdcu: goto label_151cdc;
        case 0x151cfcu: goto label_151cfc;
        default: break;
    }

    ctx->pc = 0x151c70u;

    // 0x151c70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x151c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x151c74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x151c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x151c78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x151c7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151c80: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x151c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x151c84: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x151c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x151c88: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x151c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151c8c: 0xc04e240  jal         func_138900
    ctx->pc = 0x151C8Cu;
    SET_GPR_U32(ctx, 31, 0x151C94u);
    ctx->pc = 0x138900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138900u, 0x151C8Cu, 0x151C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151C94u;
label_151c94:
    // 0x151c94: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x151C94u;
    {
        const bool branch_taken_0x151c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151c94) {
            ctx->pc = 0x151D20u;
            goto label_151d20;
        }
    }
    ctx->pc = 0x151C9Cu;
    // 0x151c9c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x151c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151ca0: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x151CA0u;
    SET_GPR_U32(ctx, 31, 0x151CA8u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x151CA0u, 0x151CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151CA8u;
label_151ca8:
    // 0x151ca8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x151ca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151cac: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x151cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151cb0: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x151CB0u;
    SET_GPR_U32(ctx, 31, 0x151CB8u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x151CB0u, 0x151CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151CB8u;
label_151cb8:
    // 0x151cb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x151cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151cbc: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x151cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x151cc0: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x151cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x151cc4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x151cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151cc8: 0xc11939c  jal         func_464E70
    ctx->pc = 0x151CC8u;
    SET_GPR_U32(ctx, 31, 0x151CD0u);
    ctx->pc = 0x464E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464E70u, 0x151CC8u, 0x151CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151CD0u;
label_151cd0:
    // 0x151cd0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x151cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151cd4: 0xc04e240  jal         func_138900
    ctx->pc = 0x151CD4u;
    SET_GPR_U32(ctx, 31, 0x151CDCu);
    ctx->pc = 0x138900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138900u, 0x151CD4u, 0x151CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151CDCu;
label_151cdc:
    // 0x151cdc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x151cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151ce0: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x151ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x151ce4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x151ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151ce8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x151ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x151cec: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x151cecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x151cf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x151cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151cf4: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x151CF4u;
    SET_GPR_U32(ctx, 31, 0x151CFCu);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x151CF4u, 0x151CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151CFCu;
label_151cfc:
    // 0x151cfc: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x151cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x151d00: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x151d00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x151d04: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x151d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151d08: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x151d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151d0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x151d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x151d10: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x151d10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x151d14: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x151d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x151d18: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x151d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151d1c: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x151d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_151d20:
    // 0x151d20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x151d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151d24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151d24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151d28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151d2c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x151d2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x151d30: 0x3e00008  jr          $ra
    ctx->pc = 0x151D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151D38u;
    // 0x151d38: 0x0  nop
    ctx->pc = 0x151d38u;
    // NOP
    // 0x151d3c: 0x0  nop
    ctx->pc = 0x151d3cu;
    // NOP
    ctx->pc = 0x151d40u;
}
