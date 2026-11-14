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

// Function: sub_00479B20
// Address: 0x479b20 - 0x479c40
void sub_00479B20_0x479b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479B20_0x479b20");
#endif

    switch (ctx->pc) {
        case 0x479b78u: goto label_479b78;
        case 0x479b94u: goto label_479b94;
        case 0x479ba4u: goto label_479ba4;
        case 0x479bbcu: goto label_479bbc;
        case 0x479bdcu: goto label_479bdc;
        case 0x479c08u: goto label_479c08;
        default: break;
    }

    ctx->pc = 0x479b20u;

    // 0x479b20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x479b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x479b24: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x479b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x479b28: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x479b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x479b2c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x479b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x479b30: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x479b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x479b34: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x479b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x479b38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x479b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x479b3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x479b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x479b40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x479b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x479b44: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x479b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x479b48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x479b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479b4c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x479b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x479b50: 0x8c56000c  lw          $s6, 0xC($v0)
    ctx->pc = 0x479b50u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x479b54: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x479b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x479b58: 0x8c550010  lw          $s5, 0x10($v0)
    ctx->pc = 0x479b58u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x479b5c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x479b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x479b60: 0x8c530014  lw          $s3, 0x14($v0)
    ctx->pc = 0x479b60u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x479b64: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x479b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479b68: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x479b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479b6c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x479b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479b70: 0xc107034  jal         func_41C0D0
    ctx->pc = 0x479B70u;
    SET_GPR_U32(ctx, 31, 0x479B78u);
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x479B70u, 0x479B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479B78u;
label_479b78:
    // 0x479b78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x479b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479b7c: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x479B7Cu;
    {
        const bool branch_taken_0x479b7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x479b7c) {
            ctx->pc = 0x479C08u;
            goto label_479c08;
        }
    }
    ctx->pc = 0x479B84u;
    // 0x479b84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x479b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x479b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479b8c: 0xc107078  jal         func_41C1E0
    ctx->pc = 0x479B8Cu;
    SET_GPR_U32(ctx, 31, 0x479B94u);
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x479B8Cu, 0x479B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479B94u;
label_479b94:
    // 0x479b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x479b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479b98: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x479b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x479b9c: 0xc1073a8  jal         func_41CEA0
    ctx->pc = 0x479B9Cu;
    SET_GPR_U32(ctx, 31, 0x479BA4u);
    ctx->pc = 0x41CEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEA0u, 0x479B9Cu, 0x479BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479BA4u;
label_479ba4:
    // 0x479ba4: 0x8e110018  lw          $s1, 0x18($s0)
    ctx->pc = 0x479ba4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x479ba8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x479ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x479bac: 0x262a004  sllv        $s4, $v0, $s3
    ctx->pc = 0x479bacu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x479bb0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x479bb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479bb4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x479BB4u;
    {
        const bool branch_taken_0x479bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x479bb4) {
            ctx->pc = 0x479BF0u;
            goto label_479bf0;
        }
    }
    ctx->pc = 0x479BBCu;
label_479bbc:
    // 0x479bbc: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x479bbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x479bc0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x479bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x479bc4: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x479bc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x479bc8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x479BC8u;
    {
        const bool branch_taken_0x479bc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x479bc8) {
            ctx->pc = 0x479BE8u;
            goto label_479be8;
        }
    }
    ctx->pc = 0x479BD0u;
    // 0x479bd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x479bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479bd4: 0xc10705c  jal         func_41C170
    ctx->pc = 0x479BD4u;
    SET_GPR_U32(ctx, 31, 0x479BDCu);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x479BD4u, 0x479BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479BDCu;
label_479bdc:
    // 0x479bdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x479bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x479be0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x479BE0u;
    {
        const bool branch_taken_0x479be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x479be0) {
            ctx->pc = 0x479C0Cu;
            goto label_479c0c;
        }
    }
    ctx->pc = 0x479BE8u;
label_479be8:
    // 0x479be8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x479be8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x479bec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x479becu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_479bf0:
    // 0x479bf0: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x479bf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x479bf4: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x479BF4u;
    {
        const bool branch_taken_0x479bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x479bf4) {
            ctx->pc = 0x479BBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_479bbc;
        }
    }
    ctx->pc = 0x479BFCu;
    // 0x479bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x479bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479c00: 0xc10705c  jal         func_41C170
    ctx->pc = 0x479C00u;
    SET_GPR_U32(ctx, 31, 0x479C08u);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x479C00u, 0x479C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479C08u;
label_479c08:
    // 0x479c08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x479c08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_479c0c:
    // 0x479c0c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x479c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x479c10: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x479c10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x479c14: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x479c14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x479c18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x479c18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x479c1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x479c1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x479c20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x479c20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x479c24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x479c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x479c28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x479c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x479c2c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x479c2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x479c30: 0x3e00008  jr          $ra
    ctx->pc = 0x479C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x479C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x479C38u;
    // 0x479c38: 0x0  nop
    ctx->pc = 0x479c38u;
    // NOP
    // 0x479c3c: 0x0  nop
    ctx->pc = 0x479c3cu;
    // NOP
    ctx->pc = 0x479c40u;
}
