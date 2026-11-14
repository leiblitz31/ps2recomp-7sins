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

// Function: sub_00464A70
// Address: 0x464a70 - 0x464b50
void sub_00464A70_0x464a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464A70_0x464a70");
#endif

    switch (ctx->pc) {
        case 0x464aacu: goto label_464aac;
        case 0x464abcu: goto label_464abc;
        default: break;
    }

    ctx->pc = 0x464a70u;

    // 0x464a70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x464a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x464a74: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x464a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x464a78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x464a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x464a7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x464a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x464a80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x464a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x464a84: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x464a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x464a88: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x464a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x464a8c: 0x8fb10040  lw          $s1, 0x40($sp)
    ctx->pc = 0x464a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x464a90: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x464a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x464a94: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x464a94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x464a98: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x464A98u;
    {
        const bool branch_taken_0x464a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x464a98) {
            ctx->pc = 0x464B18u;
            goto label_464b18;
        }
    }
    ctx->pc = 0x464AA0u;
    // 0x464aa0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x464aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x464aa4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x464AA4u;
    {
        const bool branch_taken_0x464aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x464aa4) {
            ctx->pc = 0x464B28u;
            goto label_464b28;
        }
    }
    ctx->pc = 0x464AACu;
label_464aac:
    // 0x464aac: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x464aacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464ab0: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x464ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x464ab4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x464AB4u;
    {
        const bool branch_taken_0x464ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x464ab4) {
            ctx->pc = 0x464AC8u;
            goto label_464ac8;
        }
    }
    ctx->pc = 0x464ABCu;
label_464abc:
    // 0x464abc: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x464abcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x464ac0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x464ac0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464ac4: 0x26700002  addiu       $s0, $s3, 0x2
    ctx->pc = 0x464ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_464ac8:
    // 0x464ac8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x464ac8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x464acc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x464ACCu;
    {
        const bool branch_taken_0x464acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x464acc) {
            ctx->pc = 0x464AFCu;
            goto label_464afc;
        }
    }
    ctx->pc = 0x464AD4u;
    // 0x464ad4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x464ad4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x464ad8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x464AD8u;
    {
        const bool branch_taken_0x464ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x464ad8) {
            ctx->pc = 0x464AFCu;
            goto label_464afc;
        }
    }
    ctx->pc = 0x464AE0u;
    // 0x464ae0: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x464ae0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x464ae4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x464ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x464ae8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x464ae8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x464aec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x464aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x464af0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x464af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x464af4: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x464AF4u;
    {
        const bool branch_taken_0x464af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x464af4) {
            ctx->pc = 0x464ABCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_464abc;
        }
    }
    ctx->pc = 0x464AFCu;
label_464afc:
    // 0x464afc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x464afcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x464b00: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x464B00u;
    {
        const bool branch_taken_0x464b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x464b00) {
            ctx->pc = 0x464B14u;
            goto label_464b14;
        }
    }
    ctx->pc = 0x464B08u;
    // 0x464b08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x464b08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464b0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x464B0Cu;
    {
        const bool branch_taken_0x464b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x464b0c) {
            ctx->pc = 0x464B28u;
            goto label_464b28;
        }
    }
    ctx->pc = 0x464B14u;
label_464b14:
    // 0x464b14: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x464b14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_464b18:
    // 0x464b18: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x464b18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x464b1c: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x464B1Cu;
    {
        const bool branch_taken_0x464b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x464b1c) {
            ctx->pc = 0x464AACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_464aac;
        }
    }
    ctx->pc = 0x464B24u;
    // 0x464b24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x464b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_464b28:
    // 0x464b28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x464b28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464b2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x464b2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x464b30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x464b30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x464b34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x464b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x464b38: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x464b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x464b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x464B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x464B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x464B44u;
    // 0x464b44: 0x0  nop
    ctx->pc = 0x464b44u;
    // NOP
    // 0x464b48: 0x0  nop
    ctx->pc = 0x464b48u;
    // NOP
    // 0x464b4c: 0x0  nop
    ctx->pc = 0x464b4cu;
    // NOP
    ctx->pc = 0x464b50u;
}
