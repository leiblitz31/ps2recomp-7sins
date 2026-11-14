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

// Function: sub_00165A60
// Address: 0x165a60 - 0x165b80
void sub_00165A60_0x165a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165A60_0x165a60");
#endif

    switch (ctx->pc) {
        case 0x165a9cu: goto label_165a9c;
        case 0x165aacu: goto label_165aac;
        case 0x165ad8u: goto label_165ad8;
        case 0x165b24u: goto label_165b24;
        case 0x165b4cu: goto label_165b4c;
        default: break;
    }

    ctx->pc = 0x165a60u;

    // 0x165a60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x165a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x165a64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x165a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x165a68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x165a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x165a6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x165a70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x165a74: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x165a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x165a78: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x165a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x165a7c: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x165a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x165a80: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x165a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x165a84: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x165a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165a88: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x165A88u;
    {
        const bool branch_taken_0x165a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x165a88) {
            ctx->pc = 0x165B5Cu;
            goto label_165b5c;
        }
    }
    ctx->pc = 0x165A90u;
    // 0x165a90: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x165a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165a94: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x165A94u;
    SET_GPR_U32(ctx, 31, 0x165A9Cu);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x165A94u, 0x165A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A9Cu;
label_165a9c:
    // 0x165a9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x165a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165aa0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x165aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x165aa4: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x165AA4u;
    SET_GPR_U32(ctx, 31, 0x165AACu);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x165AA4u, 0x165AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165AACu;
label_165aac:
    // 0x165aac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x165aacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ab0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x165ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x165ab4: 0x222082b  sltu        $at, $s1, $v0
    ctx->pc = 0x165ab4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x165ab8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x165AB8u;
    {
        const bool branch_taken_0x165ab8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x165ab8) {
            ctx->pc = 0x165AC4u;
            goto label_165ac4;
        }
    }
    ctx->pc = 0x165AC0u;
    // 0x165ac0: 0xafb10060  sw          $s1, 0x60($sp)
    ctx->pc = 0x165ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 17));
label_165ac4:
    // 0x165ac4: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x165ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x165ac8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x165ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x165acc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x165accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165ad0: 0xc11939c  jal         func_464E70
    ctx->pc = 0x165AD0u;
    SET_GPR_U32(ctx, 31, 0x165AD8u);
    ctx->pc = 0x464E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464E70u, 0x165AD0u, 0x165AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165AD8u;
label_165ad8:
    // 0x165ad8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x165ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x165adc: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x165adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x165ae0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x165ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x165ae4: 0x29040  sll         $s2, $v0, 1
    ctx->pc = 0x165ae4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x165ae8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x165ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165aec: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x165aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x165af0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x165af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x165af4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x165af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x165af8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x165af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x165afc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x165afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x165b00: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x165b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x165b04: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x165b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165b08: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x165b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x165b0c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x165b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x165b10: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x165b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x165b14: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x165b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x165b18: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x165b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b1c: 0xc0bb7a4  jal         func_2EDE90
    ctx->pc = 0x165B1Cu;
    SET_GPR_U32(ctx, 31, 0x165B24u);
    ctx->pc = 0x2EDE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDE90u, 0x165B1Cu, 0x165B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165B24u;
label_165b24:
    // 0x165b24: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x165b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165b28: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x165b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x165b2c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x165b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x165b30: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x165b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x165b34: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x165b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x165b38: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x165b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x165b3c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x165b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165b40: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x165b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b44: 0xc1192e4  jal         func_464B90
    ctx->pc = 0x165B44u;
    SET_GPR_U32(ctx, 31, 0x165B4Cu);
    ctx->pc = 0x464B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464B90u, 0x165B44u, 0x165B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165B4Cu;
label_165b4c:
    // 0x165b4c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x165b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165b50: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x165b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x165b54: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x165b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x165b58: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x165b58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_165b5c:
    // 0x165b5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x165b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165b60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x165b60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165b64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165b64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165b68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165b6c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x165b6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x165b70: 0x3e00008  jr          $ra
    ctx->pc = 0x165B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165B78u;
    // 0x165b78: 0x0  nop
    ctx->pc = 0x165b78u;
    // NOP
    // 0x165b7c: 0x0  nop
    ctx->pc = 0x165b7cu;
    // NOP
    ctx->pc = 0x165b80u;
}
